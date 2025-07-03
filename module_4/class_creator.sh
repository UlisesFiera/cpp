#!/bin/bash

if [ -z "$1" ]; then
    echo "Usage: $0 ClassName"
    exit 1
fi

CLASS_NAME="$1"
HEADER_FILE="${CLASS_NAME}.hpp"
SOURCE_FILE="${CLASS_NAME}.cpp"
INCLUDE_GUARD="$(echo "${CLASS_NAME}_HPP" | tr '[:lower:]' '[:upper:]')"

HEADER_CONTENT="#ifndef ${INCLUDE_GUARD}
# define ${INCLUDE_GUARD}

# include <iostream>
# include <string>

class ${CLASS_NAME} 
{
	public:
		${CLASS_NAME}();
		${CLASS_NAME}(const ${CLASS_NAME}& copy${CLASS_NAME});
		${CLASS_NAME}& operator=(const ${CLASS_NAME}& copy${CLASS_NAME});
		~${CLASS_NAME}();
	private:
};

#endif
"

SOURCE_CONTENT="#include \"${HEADER_FILE}\"

${CLASS_NAME}::${CLASS_NAME}()
{

}

${CLASS_NAME}::~${CLASS_NAME}()
{

}
"

echo "$HEADER_CONTENT" > "$HEADER_FILE"
echo "$SOURCE_CONTENT" > "$SOURCE_FILE"

echo "Created $HEADER_FILE and $SOURCE_FILE"
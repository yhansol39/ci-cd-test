

#!/bin/bash
set -e

# 실행 파일이 존재하는지 확인
if [ ! -f ./app ]; then
  echo "❌ Build failed: app not found"
  exit 1
fi

# 프로그램 실행 결과 확인
OUTPUT=$(./app)
if [ "$OUTPUT" = "Hello CI/CD World!" ]; then
  echo "✅ Test passed!"
  exit 0
else
  echo "❌ Test failed: got '$OUTPUT'"
  exit 1
fi

FROM debian:bullseye-slim
WORKDIR /app

RUN apt-get update && apt-get install -y \
    git \
    gcc \
    gdb \
  && apt-get clean \
  && rm -rf /var/lib/apt/lists/*

CMD /bin/sh -c "echo '準備完了' && sleep infinity"

# docker build . -t c_image
# docker run --name myclang --interactive --tty --rm --volume $(pwd):/app myclang bash

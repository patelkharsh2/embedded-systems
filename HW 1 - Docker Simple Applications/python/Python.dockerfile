#repo: patelkharsh2/pythonapp
FROM python:3.8

RUN apt-get update

COPY hello.py app/

WORKDIR /app

CMD ["python", "hello.py"]



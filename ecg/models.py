from django.db import models

class Record(models.Model):
    recordname = models.CharField(max_length = 6)
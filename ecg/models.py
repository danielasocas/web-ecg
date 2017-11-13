from django.db import models
from django.core.urlresolvers import reverse

class Record(models.Model):
    recordname = models.CharField(max_length = 6)
    
    def __str__(self):
        return self.recordname
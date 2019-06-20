/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/cloudaudit/v20190319/model/UpdateAuditRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cloudaudit::V20190319::Model;
using namespace rapidjson;
using namespace std;

UpdateAuditRequest::UpdateAuditRequest() :
    m_auditNameHasBeenSet(false),
    m_cmqQueueNameHasBeenSet(false),
    m_cmqRegionHasBeenSet(false),
    m_cosBucketNameHasBeenSet(false),
    m_cosRegionHasBeenSet(false),
    m_isCreateNewBucketHasBeenSet(false),
    m_isCreateNewQueueHasBeenSet(false),
    m_isEnableCmqNotifyHasBeenSet(false),
    m_logFilePrefixHasBeenSet(false),
    m_readWriteAttributeHasBeenSet(false)
{
}

string UpdateAuditRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_auditNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AuditName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_auditName.c_str(), allocator).Move(), allocator);
    }

    if (m_cmqQueueNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CmqQueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cmqQueueName.c_str(), allocator).Move(), allocator);
    }

    if (m_cmqRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CmqRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cmqRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CosBucketName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cosBucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_cosRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CosRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cosRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_isCreateNewBucketHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsCreateNewBucket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isCreateNewBucket, allocator);
    }

    if (m_isCreateNewQueueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsCreateNewQueue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isCreateNewQueue, allocator);
    }

    if (m_isEnableCmqNotifyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsEnableCmqNotify";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEnableCmqNotify, allocator);
    }

    if (m_logFilePrefixHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogFilePrefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_logFilePrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_readWriteAttributeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReadWriteAttribute";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_readWriteAttribute, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateAuditRequest::GetAuditName() const
{
    return m_auditName;
}

void UpdateAuditRequest::SetAuditName(const string& _auditName)
{
    m_auditName = _auditName;
    m_auditNameHasBeenSet = true;
}

bool UpdateAuditRequest::AuditNameHasBeenSet() const
{
    return m_auditNameHasBeenSet;
}

string UpdateAuditRequest::GetCmqQueueName() const
{
    return m_cmqQueueName;
}

void UpdateAuditRequest::SetCmqQueueName(const string& _cmqQueueName)
{
    m_cmqQueueName = _cmqQueueName;
    m_cmqQueueNameHasBeenSet = true;
}

bool UpdateAuditRequest::CmqQueueNameHasBeenSet() const
{
    return m_cmqQueueNameHasBeenSet;
}

string UpdateAuditRequest::GetCmqRegion() const
{
    return m_cmqRegion;
}

void UpdateAuditRequest::SetCmqRegion(const string& _cmqRegion)
{
    m_cmqRegion = _cmqRegion;
    m_cmqRegionHasBeenSet = true;
}

bool UpdateAuditRequest::CmqRegionHasBeenSet() const
{
    return m_cmqRegionHasBeenSet;
}

string UpdateAuditRequest::GetCosBucketName() const
{
    return m_cosBucketName;
}

void UpdateAuditRequest::SetCosBucketName(const string& _cosBucketName)
{
    m_cosBucketName = _cosBucketName;
    m_cosBucketNameHasBeenSet = true;
}

bool UpdateAuditRequest::CosBucketNameHasBeenSet() const
{
    return m_cosBucketNameHasBeenSet;
}

string UpdateAuditRequest::GetCosRegion() const
{
    return m_cosRegion;
}

void UpdateAuditRequest::SetCosRegion(const string& _cosRegion)
{
    m_cosRegion = _cosRegion;
    m_cosRegionHasBeenSet = true;
}

bool UpdateAuditRequest::CosRegionHasBeenSet() const
{
    return m_cosRegionHasBeenSet;
}

int64_t UpdateAuditRequest::GetIsCreateNewBucket() const
{
    return m_isCreateNewBucket;
}

void UpdateAuditRequest::SetIsCreateNewBucket(const int64_t& _isCreateNewBucket)
{
    m_isCreateNewBucket = _isCreateNewBucket;
    m_isCreateNewBucketHasBeenSet = true;
}

bool UpdateAuditRequest::IsCreateNewBucketHasBeenSet() const
{
    return m_isCreateNewBucketHasBeenSet;
}

int64_t UpdateAuditRequest::GetIsCreateNewQueue() const
{
    return m_isCreateNewQueue;
}

void UpdateAuditRequest::SetIsCreateNewQueue(const int64_t& _isCreateNewQueue)
{
    m_isCreateNewQueue = _isCreateNewQueue;
    m_isCreateNewQueueHasBeenSet = true;
}

bool UpdateAuditRequest::IsCreateNewQueueHasBeenSet() const
{
    return m_isCreateNewQueueHasBeenSet;
}

int64_t UpdateAuditRequest::GetIsEnableCmqNotify() const
{
    return m_isEnableCmqNotify;
}

void UpdateAuditRequest::SetIsEnableCmqNotify(const int64_t& _isEnableCmqNotify)
{
    m_isEnableCmqNotify = _isEnableCmqNotify;
    m_isEnableCmqNotifyHasBeenSet = true;
}

bool UpdateAuditRequest::IsEnableCmqNotifyHasBeenSet() const
{
    return m_isEnableCmqNotifyHasBeenSet;
}

string UpdateAuditRequest::GetLogFilePrefix() const
{
    return m_logFilePrefix;
}

void UpdateAuditRequest::SetLogFilePrefix(const string& _logFilePrefix)
{
    m_logFilePrefix = _logFilePrefix;
    m_logFilePrefixHasBeenSet = true;
}

bool UpdateAuditRequest::LogFilePrefixHasBeenSet() const
{
    return m_logFilePrefixHasBeenSet;
}

int64_t UpdateAuditRequest::GetReadWriteAttribute() const
{
    return m_readWriteAttribute;
}

void UpdateAuditRequest::SetReadWriteAttribute(const int64_t& _readWriteAttribute)
{
    m_readWriteAttribute = _readWriteAttribute;
    m_readWriteAttributeHasBeenSet = true;
}

bool UpdateAuditRequest::ReadWriteAttributeHasBeenSet() const
{
    return m_readWriteAttributeHasBeenSet;
}



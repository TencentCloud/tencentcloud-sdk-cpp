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

#include <tencentcloud/cloudaudit/v20190319/model/CreateAuditRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cloudaudit::V20190319::Model;
using namespace std;

CreateAuditRequest::CreateAuditRequest() :
    m_isEnableCmqNotifyHasBeenSet(false),
    m_readWriteAttributeHasBeenSet(false),
    m_auditNameHasBeenSet(false),
    m_cosRegionHasBeenSet(false),
    m_isCreateNewBucketHasBeenSet(false),
    m_cosBucketNameHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_cmqQueueNameHasBeenSet(false),
    m_kmsRegionHasBeenSet(false),
    m_isEnableKmsEncryHasBeenSet(false),
    m_cmqRegionHasBeenSet(false),
    m_logFilePrefixHasBeenSet(false),
    m_isCreateNewQueueHasBeenSet(false)
{
}

string CreateAuditRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_isEnableCmqNotifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnableCmqNotify";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEnableCmqNotify, allocator);
    }

    if (m_readWriteAttributeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadWriteAttribute";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_readWriteAttribute, allocator);
    }

    if (m_auditNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_auditName.c_str(), allocator).Move(), allocator);
    }

    if (m_cosRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_isCreateNewBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCreateNewBucket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isCreateNewBucket, allocator);
    }

    if (m_cosBucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosBucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_cmqQueueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmqQueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cmqQueueName.c_str(), allocator).Move(), allocator);
    }

    if (m_kmsRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kmsRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_isEnableKmsEncryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnableKmsEncry";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEnableKmsEncry, allocator);
    }

    if (m_cmqRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmqRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cmqRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_logFilePrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogFilePrefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logFilePrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_isCreateNewQueueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCreateNewQueue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isCreateNewQueue, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateAuditRequest::GetIsEnableCmqNotify() const
{
    return m_isEnableCmqNotify;
}

void CreateAuditRequest::SetIsEnableCmqNotify(const int64_t& _isEnableCmqNotify)
{
    m_isEnableCmqNotify = _isEnableCmqNotify;
    m_isEnableCmqNotifyHasBeenSet = true;
}

bool CreateAuditRequest::IsEnableCmqNotifyHasBeenSet() const
{
    return m_isEnableCmqNotifyHasBeenSet;
}

int64_t CreateAuditRequest::GetReadWriteAttribute() const
{
    return m_readWriteAttribute;
}

void CreateAuditRequest::SetReadWriteAttribute(const int64_t& _readWriteAttribute)
{
    m_readWriteAttribute = _readWriteAttribute;
    m_readWriteAttributeHasBeenSet = true;
}

bool CreateAuditRequest::ReadWriteAttributeHasBeenSet() const
{
    return m_readWriteAttributeHasBeenSet;
}

string CreateAuditRequest::GetAuditName() const
{
    return m_auditName;
}

void CreateAuditRequest::SetAuditName(const string& _auditName)
{
    m_auditName = _auditName;
    m_auditNameHasBeenSet = true;
}

bool CreateAuditRequest::AuditNameHasBeenSet() const
{
    return m_auditNameHasBeenSet;
}

string CreateAuditRequest::GetCosRegion() const
{
    return m_cosRegion;
}

void CreateAuditRequest::SetCosRegion(const string& _cosRegion)
{
    m_cosRegion = _cosRegion;
    m_cosRegionHasBeenSet = true;
}

bool CreateAuditRequest::CosRegionHasBeenSet() const
{
    return m_cosRegionHasBeenSet;
}

int64_t CreateAuditRequest::GetIsCreateNewBucket() const
{
    return m_isCreateNewBucket;
}

void CreateAuditRequest::SetIsCreateNewBucket(const int64_t& _isCreateNewBucket)
{
    m_isCreateNewBucket = _isCreateNewBucket;
    m_isCreateNewBucketHasBeenSet = true;
}

bool CreateAuditRequest::IsCreateNewBucketHasBeenSet() const
{
    return m_isCreateNewBucketHasBeenSet;
}

string CreateAuditRequest::GetCosBucketName() const
{
    return m_cosBucketName;
}

void CreateAuditRequest::SetCosBucketName(const string& _cosBucketName)
{
    m_cosBucketName = _cosBucketName;
    m_cosBucketNameHasBeenSet = true;
}

bool CreateAuditRequest::CosBucketNameHasBeenSet() const
{
    return m_cosBucketNameHasBeenSet;
}

string CreateAuditRequest::GetKeyId() const
{
    return m_keyId;
}

void CreateAuditRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool CreateAuditRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string CreateAuditRequest::GetCmqQueueName() const
{
    return m_cmqQueueName;
}

void CreateAuditRequest::SetCmqQueueName(const string& _cmqQueueName)
{
    m_cmqQueueName = _cmqQueueName;
    m_cmqQueueNameHasBeenSet = true;
}

bool CreateAuditRequest::CmqQueueNameHasBeenSet() const
{
    return m_cmqQueueNameHasBeenSet;
}

string CreateAuditRequest::GetKmsRegion() const
{
    return m_kmsRegion;
}

void CreateAuditRequest::SetKmsRegion(const string& _kmsRegion)
{
    m_kmsRegion = _kmsRegion;
    m_kmsRegionHasBeenSet = true;
}

bool CreateAuditRequest::KmsRegionHasBeenSet() const
{
    return m_kmsRegionHasBeenSet;
}

int64_t CreateAuditRequest::GetIsEnableKmsEncry() const
{
    return m_isEnableKmsEncry;
}

void CreateAuditRequest::SetIsEnableKmsEncry(const int64_t& _isEnableKmsEncry)
{
    m_isEnableKmsEncry = _isEnableKmsEncry;
    m_isEnableKmsEncryHasBeenSet = true;
}

bool CreateAuditRequest::IsEnableKmsEncryHasBeenSet() const
{
    return m_isEnableKmsEncryHasBeenSet;
}

string CreateAuditRequest::GetCmqRegion() const
{
    return m_cmqRegion;
}

void CreateAuditRequest::SetCmqRegion(const string& _cmqRegion)
{
    m_cmqRegion = _cmqRegion;
    m_cmqRegionHasBeenSet = true;
}

bool CreateAuditRequest::CmqRegionHasBeenSet() const
{
    return m_cmqRegionHasBeenSet;
}

string CreateAuditRequest::GetLogFilePrefix() const
{
    return m_logFilePrefix;
}

void CreateAuditRequest::SetLogFilePrefix(const string& _logFilePrefix)
{
    m_logFilePrefix = _logFilePrefix;
    m_logFilePrefixHasBeenSet = true;
}

bool CreateAuditRequest::LogFilePrefixHasBeenSet() const
{
    return m_logFilePrefixHasBeenSet;
}

int64_t CreateAuditRequest::GetIsCreateNewQueue() const
{
    return m_isCreateNewQueue;
}

void CreateAuditRequest::SetIsCreateNewQueue(const int64_t& _isCreateNewQueue)
{
    m_isCreateNewQueue = _isCreateNewQueue;
    m_isCreateNewQueueHasBeenSet = true;
}

bool CreateAuditRequest::IsCreateNewQueueHasBeenSet() const
{
    return m_isCreateNewQueueHasBeenSet;
}



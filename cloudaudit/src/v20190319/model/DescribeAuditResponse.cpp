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

#include <tencentcloud/cloudaudit/v20190319/model/DescribeAuditResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudaudit::V20190319::Model;
using namespace std;

DescribeAuditResponse::DescribeAuditResponse() :
    m_isEnableCmqNotifyHasBeenSet(false),
    m_readWriteAttributeHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_auditStatusHasBeenSet(false),
    m_auditNameHasBeenSet(false),
    m_cosRegionHasBeenSet(false),
    m_cmqQueueNameHasBeenSet(false),
    m_kmsAliasHasBeenSet(false),
    m_kmsRegionHasBeenSet(false),
    m_isEnableKmsEncryHasBeenSet(false),
    m_cosBucketNameHasBeenSet(false),
    m_cmqRegionHasBeenSet(false),
    m_logFilePrefixHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAuditResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("IsEnableCmqNotify") && !rsp["IsEnableCmqNotify"].IsNull())
    {
        if (!rsp["IsEnableCmqNotify"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsEnableCmqNotify` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isEnableCmqNotify = rsp["IsEnableCmqNotify"].GetInt64();
        m_isEnableCmqNotifyHasBeenSet = true;
    }

    if (rsp.HasMember("ReadWriteAttribute") && !rsp["ReadWriteAttribute"].IsNull())
    {
        if (!rsp["ReadWriteAttribute"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadWriteAttribute` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readWriteAttribute = rsp["ReadWriteAttribute"].GetInt64();
        m_readWriteAttributeHasBeenSet = true;
    }

    if (rsp.HasMember("KeyId") && !rsp["KeyId"].IsNull())
    {
        if (!rsp["KeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyId = string(rsp["KeyId"].GetString());
        m_keyIdHasBeenSet = true;
    }

    if (rsp.HasMember("AuditStatus") && !rsp["AuditStatus"].IsNull())
    {
        if (!rsp["AuditStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_auditStatus = rsp["AuditStatus"].GetInt64();
        m_auditStatusHasBeenSet = true;
    }

    if (rsp.HasMember("AuditName") && !rsp["AuditName"].IsNull())
    {
        if (!rsp["AuditName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditName = string(rsp["AuditName"].GetString());
        m_auditNameHasBeenSet = true;
    }

    if (rsp.HasMember("CosRegion") && !rsp["CosRegion"].IsNull())
    {
        if (!rsp["CosRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosRegion = string(rsp["CosRegion"].GetString());
        m_cosRegionHasBeenSet = true;
    }

    if (rsp.HasMember("CmqQueueName") && !rsp["CmqQueueName"].IsNull())
    {
        if (!rsp["CmqQueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmqQueueName = string(rsp["CmqQueueName"].GetString());
        m_cmqQueueNameHasBeenSet = true;
    }

    if (rsp.HasMember("KmsAlias") && !rsp["KmsAlias"].IsNull())
    {
        if (!rsp["KmsAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KmsAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsAlias = string(rsp["KmsAlias"].GetString());
        m_kmsAliasHasBeenSet = true;
    }

    if (rsp.HasMember("KmsRegion") && !rsp["KmsRegion"].IsNull())
    {
        if (!rsp["KmsRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KmsRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsRegion = string(rsp["KmsRegion"].GetString());
        m_kmsRegionHasBeenSet = true;
    }

    if (rsp.HasMember("IsEnableKmsEncry") && !rsp["IsEnableKmsEncry"].IsNull())
    {
        if (!rsp["IsEnableKmsEncry"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsEnableKmsEncry` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isEnableKmsEncry = rsp["IsEnableKmsEncry"].GetInt64();
        m_isEnableKmsEncryHasBeenSet = true;
    }

    if (rsp.HasMember("CosBucketName") && !rsp["CosBucketName"].IsNull())
    {
        if (!rsp["CosBucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketName = string(rsp["CosBucketName"].GetString());
        m_cosBucketNameHasBeenSet = true;
    }

    if (rsp.HasMember("CmqRegion") && !rsp["CmqRegion"].IsNull())
    {
        if (!rsp["CmqRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CmqRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmqRegion = string(rsp["CmqRegion"].GetString());
        m_cmqRegionHasBeenSet = true;
    }

    if (rsp.HasMember("LogFilePrefix") && !rsp["LogFilePrefix"].IsNull())
    {
        if (!rsp["LogFilePrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogFilePrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logFilePrefix = string(rsp["LogFilePrefix"].GetString());
        m_logFilePrefixHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAuditResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_isEnableCmqNotifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnableCmqNotify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnableCmqNotify, allocator);
    }

    if (m_readWriteAttributeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadWriteAttribute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readWriteAttribute, allocator);
    }

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_auditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditStatus, allocator);
    }

    if (m_auditNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditName.c_str(), allocator).Move(), allocator);
    }

    if (m_cosRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_cmqQueueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmqQueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmqQueueName.c_str(), allocator).Move(), allocator);
    }

    if (m_kmsAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kmsAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_kmsRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kmsRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_isEnableKmsEncryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnableKmsEncry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnableKmsEncry, allocator);
    }

    if (m_cosBucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_cmqRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmqRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmqRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_logFilePrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogFilePrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logFilePrefix.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeAuditResponse::GetIsEnableCmqNotify() const
{
    return m_isEnableCmqNotify;
}

bool DescribeAuditResponse::IsEnableCmqNotifyHasBeenSet() const
{
    return m_isEnableCmqNotifyHasBeenSet;
}

int64_t DescribeAuditResponse::GetReadWriteAttribute() const
{
    return m_readWriteAttribute;
}

bool DescribeAuditResponse::ReadWriteAttributeHasBeenSet() const
{
    return m_readWriteAttributeHasBeenSet;
}

string DescribeAuditResponse::GetKeyId() const
{
    return m_keyId;
}

bool DescribeAuditResponse::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

int64_t DescribeAuditResponse::GetAuditStatus() const
{
    return m_auditStatus;
}

bool DescribeAuditResponse::AuditStatusHasBeenSet() const
{
    return m_auditStatusHasBeenSet;
}

string DescribeAuditResponse::GetAuditName() const
{
    return m_auditName;
}

bool DescribeAuditResponse::AuditNameHasBeenSet() const
{
    return m_auditNameHasBeenSet;
}

string DescribeAuditResponse::GetCosRegion() const
{
    return m_cosRegion;
}

bool DescribeAuditResponse::CosRegionHasBeenSet() const
{
    return m_cosRegionHasBeenSet;
}

string DescribeAuditResponse::GetCmqQueueName() const
{
    return m_cmqQueueName;
}

bool DescribeAuditResponse::CmqQueueNameHasBeenSet() const
{
    return m_cmqQueueNameHasBeenSet;
}

string DescribeAuditResponse::GetKmsAlias() const
{
    return m_kmsAlias;
}

bool DescribeAuditResponse::KmsAliasHasBeenSet() const
{
    return m_kmsAliasHasBeenSet;
}

string DescribeAuditResponse::GetKmsRegion() const
{
    return m_kmsRegion;
}

bool DescribeAuditResponse::KmsRegionHasBeenSet() const
{
    return m_kmsRegionHasBeenSet;
}

int64_t DescribeAuditResponse::GetIsEnableKmsEncry() const
{
    return m_isEnableKmsEncry;
}

bool DescribeAuditResponse::IsEnableKmsEncryHasBeenSet() const
{
    return m_isEnableKmsEncryHasBeenSet;
}

string DescribeAuditResponse::GetCosBucketName() const
{
    return m_cosBucketName;
}

bool DescribeAuditResponse::CosBucketNameHasBeenSet() const
{
    return m_cosBucketNameHasBeenSet;
}

string DescribeAuditResponse::GetCmqRegion() const
{
    return m_cmqRegion;
}

bool DescribeAuditResponse::CmqRegionHasBeenSet() const
{
    return m_cmqRegionHasBeenSet;
}

string DescribeAuditResponse::GetLogFilePrefix() const
{
    return m_logFilePrefix;
}

bool DescribeAuditResponse::LogFilePrefixHasBeenSet() const
{
    return m_logFilePrefixHasBeenSet;
}



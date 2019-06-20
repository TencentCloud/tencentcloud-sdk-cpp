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
using namespace rapidjson;
using namespace std;

DescribeAuditResponse::DescribeAuditResponse() :
    m_auditNameHasBeenSet(false),
    m_auditStatusHasBeenSet(false),
    m_cmqQueueNameHasBeenSet(false),
    m_cmqRegionHasBeenSet(false),
    m_cosBucketNameHasBeenSet(false),
    m_cosRegionHasBeenSet(false),
    m_isEnableCmqNotifyHasBeenSet(false),
    m_logFilePrefixHasBeenSet(false),
    m_readWriteAttributeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAuditResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("AuditName") && !rsp["AuditName"].IsNull())
    {
        if (!rsp["AuditName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AuditName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditName = string(rsp["AuditName"].GetString());
        m_auditNameHasBeenSet = true;
    }

    if (rsp.HasMember("AuditStatus") && !rsp["AuditStatus"].IsNull())
    {
        if (!rsp["AuditStatus"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AuditStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_auditStatus = rsp["AuditStatus"].GetInt64();
        m_auditStatusHasBeenSet = true;
    }

    if (rsp.HasMember("CmqQueueName") && !rsp["CmqQueueName"].IsNull())
    {
        if (!rsp["CmqQueueName"].IsString())
        {
            return CoreInternalOutcome(Error("response `CmqQueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmqQueueName = string(rsp["CmqQueueName"].GetString());
        m_cmqQueueNameHasBeenSet = true;
    }

    if (rsp.HasMember("CmqRegion") && !rsp["CmqRegion"].IsNull())
    {
        if (!rsp["CmqRegion"].IsString())
        {
            return CoreInternalOutcome(Error("response `CmqRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmqRegion = string(rsp["CmqRegion"].GetString());
        m_cmqRegionHasBeenSet = true;
    }

    if (rsp.HasMember("CosBucketName") && !rsp["CosBucketName"].IsNull())
    {
        if (!rsp["CosBucketName"].IsString())
        {
            return CoreInternalOutcome(Error("response `CosBucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketName = string(rsp["CosBucketName"].GetString());
        m_cosBucketNameHasBeenSet = true;
    }

    if (rsp.HasMember("CosRegion") && !rsp["CosRegion"].IsNull())
    {
        if (!rsp["CosRegion"].IsString())
        {
            return CoreInternalOutcome(Error("response `CosRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosRegion = string(rsp["CosRegion"].GetString());
        m_cosRegionHasBeenSet = true;
    }

    if (rsp.HasMember("IsEnableCmqNotify") && !rsp["IsEnableCmqNotify"].IsNull())
    {
        if (!rsp["IsEnableCmqNotify"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `IsEnableCmqNotify` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isEnableCmqNotify = rsp["IsEnableCmqNotify"].GetInt64();
        m_isEnableCmqNotifyHasBeenSet = true;
    }

    if (rsp.HasMember("LogFilePrefix") && !rsp["LogFilePrefix"].IsNull())
    {
        if (!rsp["LogFilePrefix"].IsString())
        {
            return CoreInternalOutcome(Error("response `LogFilePrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logFilePrefix = string(rsp["LogFilePrefix"].GetString());
        m_logFilePrefixHasBeenSet = true;
    }

    if (rsp.HasMember("ReadWriteAttribute") && !rsp["ReadWriteAttribute"].IsNull())
    {
        if (!rsp["ReadWriteAttribute"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ReadWriteAttribute` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readWriteAttribute = rsp["ReadWriteAttribute"].GetInt64();
        m_readWriteAttributeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeAuditResponse::GetAuditName() const
{
    return m_auditName;
}

bool DescribeAuditResponse::AuditNameHasBeenSet() const
{
    return m_auditNameHasBeenSet;
}

int64_t DescribeAuditResponse::GetAuditStatus() const
{
    return m_auditStatus;
}

bool DescribeAuditResponse::AuditStatusHasBeenSet() const
{
    return m_auditStatusHasBeenSet;
}

string DescribeAuditResponse::GetCmqQueueName() const
{
    return m_cmqQueueName;
}

bool DescribeAuditResponse::CmqQueueNameHasBeenSet() const
{
    return m_cmqQueueNameHasBeenSet;
}

string DescribeAuditResponse::GetCmqRegion() const
{
    return m_cmqRegion;
}

bool DescribeAuditResponse::CmqRegionHasBeenSet() const
{
    return m_cmqRegionHasBeenSet;
}

string DescribeAuditResponse::GetCosBucketName() const
{
    return m_cosBucketName;
}

bool DescribeAuditResponse::CosBucketNameHasBeenSet() const
{
    return m_cosBucketNameHasBeenSet;
}

string DescribeAuditResponse::GetCosRegion() const
{
    return m_cosRegion;
}

bool DescribeAuditResponse::CosRegionHasBeenSet() const
{
    return m_cosRegionHasBeenSet;
}

int64_t DescribeAuditResponse::GetIsEnableCmqNotify() const
{
    return m_isEnableCmqNotify;
}

bool DescribeAuditResponse::IsEnableCmqNotifyHasBeenSet() const
{
    return m_isEnableCmqNotifyHasBeenSet;
}

string DescribeAuditResponse::GetLogFilePrefix() const
{
    return m_logFilePrefix;
}

bool DescribeAuditResponse::LogFilePrefixHasBeenSet() const
{
    return m_logFilePrefixHasBeenSet;
}

int64_t DescribeAuditResponse::GetReadWriteAttribute() const
{
    return m_readWriteAttribute;
}

bool DescribeAuditResponse::ReadWriteAttributeHasBeenSet() const
{
    return m_readWriteAttributeHasBeenSet;
}



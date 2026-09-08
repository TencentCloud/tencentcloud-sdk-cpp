/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cls/v20201016/model/DescribeConsumerResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DescribeConsumerResponse::DescribeConsumerResponse() :
    m_effectiveHasBeenSet(false),
    m_needContentHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_ckafkaHasBeenSet(false),
    m_compressionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_advancedConfigHasBeenSet(false),
    m_dSLFilterHasBeenSet(false)
{
}

CoreInternalOutcome DescribeConsumerResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Effective") && !rsp["Effective"].IsNull())
    {
        if (!rsp["Effective"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Effective` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_effective = rsp["Effective"].GetBool();
        m_effectiveHasBeenSet = true;
    }

    if (rsp.HasMember("NeedContent") && !rsp["NeedContent"].IsNull())
    {
        if (!rsp["NeedContent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NeedContent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needContent = rsp["NeedContent"].GetBool();
        m_needContentHasBeenSet = true;
    }

    if (rsp.HasMember("Content") && !rsp["Content"].IsNull())
    {
        if (!rsp["Content"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Content` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_content.Deserialize(rsp["Content"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_contentHasBeenSet = true;
    }

    if (rsp.HasMember("Ckafka") && !rsp["Ckafka"].IsNull())
    {
        if (!rsp["Ckafka"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Ckafka` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ckafka.Deserialize(rsp["Ckafka"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ckafkaHasBeenSet = true;
    }

    if (rsp.HasMember("Compression") && !rsp["Compression"].IsNull())
    {
        if (!rsp["Compression"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Compression` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_compression = rsp["Compression"].GetInt64();
        m_compressionHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = rsp["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("RoleArn") && !rsp["RoleArn"].IsNull())
    {
        if (!rsp["RoleArn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleArn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleArn = string(rsp["RoleArn"].GetString());
        m_roleArnHasBeenSet = true;
    }

    if (rsp.HasMember("ExternalId") && !rsp["ExternalId"].IsNull())
    {
        if (!rsp["ExternalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalId = string(rsp["ExternalId"].GetString());
        m_externalIdHasBeenSet = true;
    }

    if (rsp.HasMember("TaskStatus") && !rsp["TaskStatus"].IsNull())
    {
        if (!rsp["TaskStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = rsp["TaskStatus"].GetUint64();
        m_taskStatusHasBeenSet = true;
    }

    if (rsp.HasMember("AdvancedConfig") && !rsp["AdvancedConfig"].IsNull())
    {
        if (!rsp["AdvancedConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_advancedConfig.Deserialize(rsp["AdvancedConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_advancedConfigHasBeenSet = true;
    }

    if (rsp.HasMember("DSLFilter") && !rsp["DSLFilter"].IsNull())
    {
        if (!rsp["DSLFilter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DSLFilter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dSLFilter = string(rsp["DSLFilter"].GetString());
        m_dSLFilterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeConsumerResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_effectiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Effective";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effective, allocator);
    }

    if (m_needContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needContent, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_content.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ckafkaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ckafka";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ckafka.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_compressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_compression, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_roleArnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleArn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleArn.c_str(), allocator).Move(), allocator);
    }

    if (m_externalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskStatus, allocator);
    }

    if (m_advancedConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_advancedConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dSLFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DSLFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dSLFilter.c_str(), allocator).Move(), allocator);
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


bool DescribeConsumerResponse::GetEffective() const
{
    return m_effective;
}

bool DescribeConsumerResponse::EffectiveHasBeenSet() const
{
    return m_effectiveHasBeenSet;
}

bool DescribeConsumerResponse::GetNeedContent() const
{
    return m_needContent;
}

bool DescribeConsumerResponse::NeedContentHasBeenSet() const
{
    return m_needContentHasBeenSet;
}

ConsumerContent DescribeConsumerResponse::GetContent() const
{
    return m_content;
}

bool DescribeConsumerResponse::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

Ckafka DescribeConsumerResponse::GetCkafka() const
{
    return m_ckafka;
}

bool DescribeConsumerResponse::CkafkaHasBeenSet() const
{
    return m_ckafkaHasBeenSet;
}

int64_t DescribeConsumerResponse::GetCompression() const
{
    return m_compression;
}

bool DescribeConsumerResponse::CompressionHasBeenSet() const
{
    return m_compressionHasBeenSet;
}

uint64_t DescribeConsumerResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeConsumerResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeConsumerResponse::GetRoleArn() const
{
    return m_roleArn;
}

bool DescribeConsumerResponse::RoleArnHasBeenSet() const
{
    return m_roleArnHasBeenSet;
}

string DescribeConsumerResponse::GetExternalId() const
{
    return m_externalId;
}

bool DescribeConsumerResponse::ExternalIdHasBeenSet() const
{
    return m_externalIdHasBeenSet;
}

uint64_t DescribeConsumerResponse::GetTaskStatus() const
{
    return m_taskStatus;
}

bool DescribeConsumerResponse::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

AdvancedConsumerConfiguration DescribeConsumerResponse::GetAdvancedConfig() const
{
    return m_advancedConfig;
}

bool DescribeConsumerResponse::AdvancedConfigHasBeenSet() const
{
    return m_advancedConfigHasBeenSet;
}

string DescribeConsumerResponse::GetDSLFilter() const
{
    return m_dSLFilter;
}

bool DescribeConsumerResponse::DSLFilterHasBeenSet() const
{
    return m_dSLFilterHasBeenSet;
}



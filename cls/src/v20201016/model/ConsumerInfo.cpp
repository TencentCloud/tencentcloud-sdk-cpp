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

#include <tencentcloud/cls/v20201016/model/ConsumerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ConsumerInfo::ConsumerInfo() :
    m_consumerIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_effectiveHasBeenSet(false),
    m_ckafkaHasBeenSet(false),
    m_needContentHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_compressionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_advancedConfigHasBeenSet(false)
{
}

CoreInternalOutcome ConsumerInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConsumerId") && !value["ConsumerId"].IsNull())
    {
        if (!value["ConsumerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerInfo.ConsumerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerId = string(value["ConsumerId"].GetString());
        m_consumerIdHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("Effective") && !value["Effective"].IsNull())
    {
        if (!value["Effective"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerInfo.Effective` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_effective = value["Effective"].GetBool();
        m_effectiveHasBeenSet = true;
    }

    if (value.HasMember("Ckafka") && !value["Ckafka"].IsNull())
    {
        if (!value["Ckafka"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerInfo.Ckafka` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ckafka.Deserialize(value["Ckafka"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ckafkaHasBeenSet = true;
    }

    if (value.HasMember("NeedContent") && !value["NeedContent"].IsNull())
    {
        if (!value["NeedContent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerInfo.NeedContent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needContent = value["NeedContent"].GetBool();
        m_needContentHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerInfo.Content` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_content.Deserialize(value["Content"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Compression") && !value["Compression"].IsNull())
    {
        if (!value["Compression"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerInfo.Compression` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_compression = value["Compression"].GetInt64();
        m_compressionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("RoleArn") && !value["RoleArn"].IsNull())
    {
        if (!value["RoleArn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerInfo.RoleArn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleArn = string(value["RoleArn"].GetString());
        m_roleArnHasBeenSet = true;
    }

    if (value.HasMember("ExternalId") && !value["ExternalId"].IsNull())
    {
        if (!value["ExternalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerInfo.ExternalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalId = string(value["ExternalId"].GetString());
        m_externalIdHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerInfo.TaskStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = value["TaskStatus"].GetUint64();
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("AdvancedConfig") && !value["AdvancedConfig"].IsNull())
    {
        if (!value["AdvancedConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerInfo.AdvancedConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_advancedConfig.Deserialize(value["AdvancedConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_advancedConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsumerInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_consumerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_effectiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Effective";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effective, allocator);
    }

    if (m_ckafkaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ckafka";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ckafka.ToJsonObject(value[key.c_str()], allocator);
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

}


string ConsumerInfo::GetConsumerId() const
{
    return m_consumerId;
}

void ConsumerInfo::SetConsumerId(const string& _consumerId)
{
    m_consumerId = _consumerId;
    m_consumerIdHasBeenSet = true;
}

bool ConsumerInfo::ConsumerIdHasBeenSet() const
{
    return m_consumerIdHasBeenSet;
}

string ConsumerInfo::GetTopicId() const
{
    return m_topicId;
}

void ConsumerInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ConsumerInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

bool ConsumerInfo::GetEffective() const
{
    return m_effective;
}

void ConsumerInfo::SetEffective(const bool& _effective)
{
    m_effective = _effective;
    m_effectiveHasBeenSet = true;
}

bool ConsumerInfo::EffectiveHasBeenSet() const
{
    return m_effectiveHasBeenSet;
}

Ckafka ConsumerInfo::GetCkafka() const
{
    return m_ckafka;
}

void ConsumerInfo::SetCkafka(const Ckafka& _ckafka)
{
    m_ckafka = _ckafka;
    m_ckafkaHasBeenSet = true;
}

bool ConsumerInfo::CkafkaHasBeenSet() const
{
    return m_ckafkaHasBeenSet;
}

bool ConsumerInfo::GetNeedContent() const
{
    return m_needContent;
}

void ConsumerInfo::SetNeedContent(const bool& _needContent)
{
    m_needContent = _needContent;
    m_needContentHasBeenSet = true;
}

bool ConsumerInfo::NeedContentHasBeenSet() const
{
    return m_needContentHasBeenSet;
}

ConsumerContent ConsumerInfo::GetContent() const
{
    return m_content;
}

void ConsumerInfo::SetContent(const ConsumerContent& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ConsumerInfo::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

int64_t ConsumerInfo::GetCompression() const
{
    return m_compression;
}

void ConsumerInfo::SetCompression(const int64_t& _compression)
{
    m_compression = _compression;
    m_compressionHasBeenSet = true;
}

bool ConsumerInfo::CompressionHasBeenSet() const
{
    return m_compressionHasBeenSet;
}

uint64_t ConsumerInfo::GetCreateTime() const
{
    return m_createTime;
}

void ConsumerInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ConsumerInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ConsumerInfo::GetRoleArn() const
{
    return m_roleArn;
}

void ConsumerInfo::SetRoleArn(const string& _roleArn)
{
    m_roleArn = _roleArn;
    m_roleArnHasBeenSet = true;
}

bool ConsumerInfo::RoleArnHasBeenSet() const
{
    return m_roleArnHasBeenSet;
}

string ConsumerInfo::GetExternalId() const
{
    return m_externalId;
}

void ConsumerInfo::SetExternalId(const string& _externalId)
{
    m_externalId = _externalId;
    m_externalIdHasBeenSet = true;
}

bool ConsumerInfo::ExternalIdHasBeenSet() const
{
    return m_externalIdHasBeenSet;
}

uint64_t ConsumerInfo::GetTaskStatus() const
{
    return m_taskStatus;
}

void ConsumerInfo::SetTaskStatus(const uint64_t& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool ConsumerInfo::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

AdvancedConsumerConfiguration ConsumerInfo::GetAdvancedConfig() const
{
    return m_advancedConfig;
}

void ConsumerInfo::SetAdvancedConfig(const AdvancedConsumerConfiguration& _advancedConfig)
{
    m_advancedConfig = _advancedConfig;
    m_advancedConfigHasBeenSet = true;
}

bool ConsumerInfo::AdvancedConfigHasBeenSet() const
{
    return m_advancedConfigHasBeenSet;
}


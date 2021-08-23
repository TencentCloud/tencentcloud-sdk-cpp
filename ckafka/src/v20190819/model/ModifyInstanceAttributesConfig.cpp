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

#include <tencentcloud/ckafka/v20190819/model/ModifyInstanceAttributesConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

ModifyInstanceAttributesConfig::ModifyInstanceAttributesConfig() :
    m_autoCreateTopicEnableHasBeenSet(false),
    m_defaultNumPartitionsHasBeenSet(false),
    m_defaultReplicationFactorHasBeenSet(false)
{
}

CoreInternalOutcome ModifyInstanceAttributesConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoCreateTopicEnable") && !value["AutoCreateTopicEnable"].IsNull())
    {
        if (!value["AutoCreateTopicEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInstanceAttributesConfig.AutoCreateTopicEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoCreateTopicEnable = value["AutoCreateTopicEnable"].GetBool();
        m_autoCreateTopicEnableHasBeenSet = true;
    }

    if (value.HasMember("DefaultNumPartitions") && !value["DefaultNumPartitions"].IsNull())
    {
        if (!value["DefaultNumPartitions"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInstanceAttributesConfig.DefaultNumPartitions` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultNumPartitions = value["DefaultNumPartitions"].GetInt64();
        m_defaultNumPartitionsHasBeenSet = true;
    }

    if (value.HasMember("DefaultReplicationFactor") && !value["DefaultReplicationFactor"].IsNull())
    {
        if (!value["DefaultReplicationFactor"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInstanceAttributesConfig.DefaultReplicationFactor` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultReplicationFactor = value["DefaultReplicationFactor"].GetInt64();
        m_defaultReplicationFactorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyInstanceAttributesConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoCreateTopicEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoCreateTopicEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoCreateTopicEnable, allocator);
    }

    if (m_defaultNumPartitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultNumPartitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultNumPartitions, allocator);
    }

    if (m_defaultReplicationFactorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultReplicationFactor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultReplicationFactor, allocator);
    }

}


bool ModifyInstanceAttributesConfig::GetAutoCreateTopicEnable() const
{
    return m_autoCreateTopicEnable;
}

void ModifyInstanceAttributesConfig::SetAutoCreateTopicEnable(const bool& _autoCreateTopicEnable)
{
    m_autoCreateTopicEnable = _autoCreateTopicEnable;
    m_autoCreateTopicEnableHasBeenSet = true;
}

bool ModifyInstanceAttributesConfig::AutoCreateTopicEnableHasBeenSet() const
{
    return m_autoCreateTopicEnableHasBeenSet;
}

int64_t ModifyInstanceAttributesConfig::GetDefaultNumPartitions() const
{
    return m_defaultNumPartitions;
}

void ModifyInstanceAttributesConfig::SetDefaultNumPartitions(const int64_t& _defaultNumPartitions)
{
    m_defaultNumPartitions = _defaultNumPartitions;
    m_defaultNumPartitionsHasBeenSet = true;
}

bool ModifyInstanceAttributesConfig::DefaultNumPartitionsHasBeenSet() const
{
    return m_defaultNumPartitionsHasBeenSet;
}

int64_t ModifyInstanceAttributesConfig::GetDefaultReplicationFactor() const
{
    return m_defaultReplicationFactor;
}

void ModifyInstanceAttributesConfig::SetDefaultReplicationFactor(const int64_t& _defaultReplicationFactor)
{
    m_defaultReplicationFactor = _defaultReplicationFactor;
    m_defaultReplicationFactorHasBeenSet = true;
}

bool ModifyInstanceAttributesConfig::DefaultReplicationFactorHasBeenSet() const
{
    return m_defaultReplicationFactorHasBeenSet;
}


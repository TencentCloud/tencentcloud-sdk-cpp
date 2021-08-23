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

#include <tencentcloud/ckafka/v20190819/model/InstanceConfigDO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

InstanceConfigDO::InstanceConfigDO() :
    m_autoCreateTopicsEnableHasBeenSet(false),
    m_defaultNumPartitionsHasBeenSet(false),
    m_defaultReplicationFactorHasBeenSet(false)
{
}

CoreInternalOutcome InstanceConfigDO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoCreateTopicsEnable") && !value["AutoCreateTopicsEnable"].IsNull())
    {
        if (!value["AutoCreateTopicsEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfigDO.AutoCreateTopicsEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoCreateTopicsEnable = value["AutoCreateTopicsEnable"].GetBool();
        m_autoCreateTopicsEnableHasBeenSet = true;
    }

    if (value.HasMember("DefaultNumPartitions") && !value["DefaultNumPartitions"].IsNull())
    {
        if (!value["DefaultNumPartitions"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfigDO.DefaultNumPartitions` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultNumPartitions = value["DefaultNumPartitions"].GetInt64();
        m_defaultNumPartitionsHasBeenSet = true;
    }

    if (value.HasMember("DefaultReplicationFactor") && !value["DefaultReplicationFactor"].IsNull())
    {
        if (!value["DefaultReplicationFactor"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfigDO.DefaultReplicationFactor` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultReplicationFactor = value["DefaultReplicationFactor"].GetInt64();
        m_defaultReplicationFactorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceConfigDO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoCreateTopicsEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoCreateTopicsEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoCreateTopicsEnable, allocator);
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


bool InstanceConfigDO::GetAutoCreateTopicsEnable() const
{
    return m_autoCreateTopicsEnable;
}

void InstanceConfigDO::SetAutoCreateTopicsEnable(const bool& _autoCreateTopicsEnable)
{
    m_autoCreateTopicsEnable = _autoCreateTopicsEnable;
    m_autoCreateTopicsEnableHasBeenSet = true;
}

bool InstanceConfigDO::AutoCreateTopicsEnableHasBeenSet() const
{
    return m_autoCreateTopicsEnableHasBeenSet;
}

int64_t InstanceConfigDO::GetDefaultNumPartitions() const
{
    return m_defaultNumPartitions;
}

void InstanceConfigDO::SetDefaultNumPartitions(const int64_t& _defaultNumPartitions)
{
    m_defaultNumPartitions = _defaultNumPartitions;
    m_defaultNumPartitionsHasBeenSet = true;
}

bool InstanceConfigDO::DefaultNumPartitionsHasBeenSet() const
{
    return m_defaultNumPartitionsHasBeenSet;
}

int64_t InstanceConfigDO::GetDefaultReplicationFactor() const
{
    return m_defaultReplicationFactor;
}

void InstanceConfigDO::SetDefaultReplicationFactor(const int64_t& _defaultReplicationFactor)
{
    m_defaultReplicationFactor = _defaultReplicationFactor;
    m_defaultReplicationFactorHasBeenSet = true;
}

bool InstanceConfigDO::DefaultReplicationFactorHasBeenSet() const
{
    return m_defaultReplicationFactorHasBeenSet;
}


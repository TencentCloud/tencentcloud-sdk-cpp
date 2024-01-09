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

#include <tencentcloud/dts/v20211206/model/SubscribeKafkaConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

SubscribeKafkaConfig::SubscribeKafkaConfig() :
    m_numberOfPartitionsHasBeenSet(false),
    m_distributeRulesHasBeenSet(false),
    m_defaultRuleTypeHasBeenSet(false)
{
}

CoreInternalOutcome SubscribeKafkaConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NumberOfPartitions") && !value["NumberOfPartitions"].IsNull())
    {
        if (!value["NumberOfPartitions"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubscribeKafkaConfig.NumberOfPartitions` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_numberOfPartitions = value["NumberOfPartitions"].GetUint64();
        m_numberOfPartitionsHasBeenSet = true;
    }

    if (value.HasMember("DistributeRules") && !value["DistributeRules"].IsNull())
    {
        if (!value["DistributeRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubscribeKafkaConfig.DistributeRules` is not array type"));

        const rapidjson::Value &tmpValue = value["DistributeRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DistributeRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_distributeRules.push_back(item);
        }
        m_distributeRulesHasBeenSet = true;
    }

    if (value.HasMember("DefaultRuleType") && !value["DefaultRuleType"].IsNull())
    {
        if (!value["DefaultRuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubscribeKafkaConfig.DefaultRuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultRuleType = string(value["DefaultRuleType"].GetString());
        m_defaultRuleTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubscribeKafkaConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_numberOfPartitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumberOfPartitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numberOfPartitions, allocator);
    }

    if (m_distributeRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DistributeRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_distributeRules.begin(); itr != m_distributeRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_defaultRuleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultRuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultRuleType.c_str(), allocator).Move(), allocator);
    }

}


uint64_t SubscribeKafkaConfig::GetNumberOfPartitions() const
{
    return m_numberOfPartitions;
}

void SubscribeKafkaConfig::SetNumberOfPartitions(const uint64_t& _numberOfPartitions)
{
    m_numberOfPartitions = _numberOfPartitions;
    m_numberOfPartitionsHasBeenSet = true;
}

bool SubscribeKafkaConfig::NumberOfPartitionsHasBeenSet() const
{
    return m_numberOfPartitionsHasBeenSet;
}

vector<DistributeRule> SubscribeKafkaConfig::GetDistributeRules() const
{
    return m_distributeRules;
}

void SubscribeKafkaConfig::SetDistributeRules(const vector<DistributeRule>& _distributeRules)
{
    m_distributeRules = _distributeRules;
    m_distributeRulesHasBeenSet = true;
}

bool SubscribeKafkaConfig::DistributeRulesHasBeenSet() const
{
    return m_distributeRulesHasBeenSet;
}

string SubscribeKafkaConfig::GetDefaultRuleType() const
{
    return m_defaultRuleType;
}

void SubscribeKafkaConfig::SetDefaultRuleType(const string& _defaultRuleType)
{
    m_defaultRuleType = _defaultRuleType;
    m_defaultRuleTypeHasBeenSet = true;
}

bool SubscribeKafkaConfig::DefaultRuleTypeHasBeenSet() const
{
    return m_defaultRuleTypeHasBeenSet;
}


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

#include <tencentcloud/cls/v20201016/model/BaseMetricCollectConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

BaseMetricCollectConfig::BaseMetricCollectConfig() :
    m_groupIdHasBeenSet(false),
    m_configsHasBeenSet(false)
{
}

CoreInternalOutcome BaseMetricCollectConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseMetricCollectConfig.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("Configs") && !value["Configs"].IsNull())
    {
        if (!value["Configs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaseMetricCollectConfig.Configs` is not array type"));

        const rapidjson::Value &tmpValue = value["Configs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MetricCollectConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_configs.push_back(item);
        }
        m_configsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaseMetricCollectConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_configsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Configs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configs.begin(); itr != m_configs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string BaseMetricCollectConfig::GetGroupId() const
{
    return m_groupId;
}

void BaseMetricCollectConfig::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool BaseMetricCollectConfig::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

vector<MetricCollectConfig> BaseMetricCollectConfig::GetConfigs() const
{
    return m_configs;
}

void BaseMetricCollectConfig::SetConfigs(const vector<MetricCollectConfig>& _configs)
{
    m_configs = _configs;
    m_configsHasBeenSet = true;
}

bool BaseMetricCollectConfig::ConfigsHasBeenSet() const
{
    return m_configsHasBeenSet;
}


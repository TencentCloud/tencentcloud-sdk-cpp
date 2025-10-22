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

#include <tencentcloud/cdn/v20180606/model/DownstreamCapping.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

DownstreamCapping::DownstreamCapping() :
    m_switchHasBeenSet(false),
    m_cappingRulesHasBeenSet(false)
{
}

CoreInternalOutcome DownstreamCapping::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DownstreamCapping.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("CappingRules") && !value["CappingRules"].IsNull())
    {
        if (!value["CappingRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DownstreamCapping.CappingRules` is not array type"));

        const rapidjson::Value &tmpValue = value["CappingRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CappingRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cappingRules.push_back(item);
        }
        m_cappingRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DownstreamCapping::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_cappingRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CappingRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cappingRules.begin(); itr != m_cappingRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DownstreamCapping::GetSwitch() const
{
    return m_switch;
}

void DownstreamCapping::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool DownstreamCapping::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<CappingRule> DownstreamCapping::GetCappingRules() const
{
    return m_cappingRules;
}

void DownstreamCapping::SetCappingRules(const vector<CappingRule>& _cappingRules)
{
    m_cappingRules = _cappingRules;
    m_cappingRulesHasBeenSet = true;
}

bool DownstreamCapping::CappingRulesHasBeenSet() const
{
    return m_cappingRulesHasBeenSet;
}


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

#include <tencentcloud/teo/v20220901/model/IpTableConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

IpTableConfig::IpTableConfig() :
    m_switchHasBeenSet(false),
    m_ipTableRulesHasBeenSet(false)
{
}

CoreInternalOutcome IpTableConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpTableConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("IpTableRules") && !value["IpTableRules"].IsNull())
    {
        if (!value["IpTableRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IpTableConfig.IpTableRules` is not array type"));

        const rapidjson::Value &tmpValue = value["IpTableRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IpTableRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ipTableRules.push_back(item);
        }
        m_ipTableRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpTableConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_ipTableRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpTableRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ipTableRules.begin(); itr != m_ipTableRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string IpTableConfig::GetSwitch() const
{
    return m_switch;
}

void IpTableConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool IpTableConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<IpTableRule> IpTableConfig::GetIpTableRules() const
{
    return m_ipTableRules;
}

void IpTableConfig::SetIpTableRules(const vector<IpTableRule>& _ipTableRules)
{
    m_ipTableRules = _ipTableRules;
    m_ipTableRulesHasBeenSet = true;
}

bool IpTableConfig::IpTableRulesHasBeenSet() const
{
    return m_ipTableRulesHasBeenSet;
}


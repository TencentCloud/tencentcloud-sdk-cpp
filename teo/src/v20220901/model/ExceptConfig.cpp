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

#include <tencentcloud/teo/v20220901/model/ExceptConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ExceptConfig::ExceptConfig() :
    m_switchHasBeenSet(false),
    m_exceptUserRulesHasBeenSet(false)
{
}

CoreInternalOutcome ExceptConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExceptConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("ExceptUserRules") && !value["ExceptUserRules"].IsNull())
    {
        if (!value["ExceptUserRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExceptConfig.ExceptUserRules` is not array type"));

        const rapidjson::Value &tmpValue = value["ExceptUserRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExceptUserRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_exceptUserRules.push_back(item);
        }
        m_exceptUserRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExceptConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_exceptUserRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptUserRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_exceptUserRules.begin(); itr != m_exceptUserRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ExceptConfig::GetSwitch() const
{
    return m_switch;
}

void ExceptConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool ExceptConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<ExceptUserRule> ExceptConfig::GetExceptUserRules() const
{
    return m_exceptUserRules;
}

void ExceptConfig::SetExceptUserRules(const vector<ExceptUserRule>& _exceptUserRules)
{
    m_exceptUserRules = _exceptUserRules;
    m_exceptUserRulesHasBeenSet = true;
}

bool ExceptConfig::ExceptUserRulesHasBeenSet() const
{
    return m_exceptUserRulesHasBeenSet;
}


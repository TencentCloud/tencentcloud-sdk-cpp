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

#include <tencentcloud/teo/v20220901/model/DDoSAllowBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DDoSAllowBlock::DDoSAllowBlock() :
    m_dDoSAllowBlockRulesHasBeenSet(false),
    m_switchHasBeenSet(false)
{
}

CoreInternalOutcome DDoSAllowBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DDoSAllowBlockRules") && !value["DDoSAllowBlockRules"].IsNull())
    {
        if (!value["DDoSAllowBlockRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DDoSAllowBlock.DDoSAllowBlockRules` is not array type"));

        const rapidjson::Value &tmpValue = value["DDoSAllowBlockRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DDoSAllowBlockRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dDoSAllowBlockRules.push_back(item);
        }
        m_dDoSAllowBlockRulesHasBeenSet = true;
    }

    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAllowBlock.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSAllowBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dDoSAllowBlockRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DDoSAllowBlockRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dDoSAllowBlockRules.begin(); itr != m_dDoSAllowBlockRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

}


vector<DDoSAllowBlockRule> DDoSAllowBlock::GetDDoSAllowBlockRules() const
{
    return m_dDoSAllowBlockRules;
}

void DDoSAllowBlock::SetDDoSAllowBlockRules(const vector<DDoSAllowBlockRule>& _dDoSAllowBlockRules)
{
    m_dDoSAllowBlockRules = _dDoSAllowBlockRules;
    m_dDoSAllowBlockRulesHasBeenSet = true;
}

bool DDoSAllowBlock::DDoSAllowBlockRulesHasBeenSet() const
{
    return m_dDoSAllowBlockRulesHasBeenSet;
}

string DDoSAllowBlock::GetSwitch() const
{
    return m_switch;
}

void DDoSAllowBlock::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool DDoSAllowBlock::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}


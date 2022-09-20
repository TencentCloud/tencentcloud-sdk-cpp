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

#include <tencentcloud/teo/v20220901/model/DDoSAcl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DDoSAcl::DDoSAcl() :
    m_dDoSAclRulesHasBeenSet(false),
    m_switchHasBeenSet(false)
{
}

CoreInternalOutcome DDoSAcl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DDoSAclRules") && !value["DDoSAclRules"].IsNull())
    {
        if (!value["DDoSAclRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DDoSAcl.DDoSAclRules` is not array type"));

        const rapidjson::Value &tmpValue = value["DDoSAclRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DDoSAclRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dDoSAclRules.push_back(item);
        }
        m_dDoSAclRulesHasBeenSet = true;
    }

    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAcl.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSAcl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dDoSAclRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DDoSAclRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dDoSAclRules.begin(); itr != m_dDoSAclRules.end(); ++itr, ++i)
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


vector<DDoSAclRule> DDoSAcl::GetDDoSAclRules() const
{
    return m_dDoSAclRules;
}

void DDoSAcl::SetDDoSAclRules(const vector<DDoSAclRule>& _dDoSAclRules)
{
    m_dDoSAclRules = _dDoSAclRules;
    m_dDoSAclRulesHasBeenSet = true;
}

bool DDoSAcl::DDoSAclRulesHasBeenSet() const
{
    return m_dDoSAclRulesHasBeenSet;
}

string DDoSAcl::GetSwitch() const
{
    return m_switch;
}

void DDoSAcl::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool DDoSAcl::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}


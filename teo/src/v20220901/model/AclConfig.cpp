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

#include <tencentcloud/teo/v20220901/model/AclConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

AclConfig::AclConfig() :
    m_switchHasBeenSet(false),
    m_aclUserRulesHasBeenSet(false),
    m_customizesHasBeenSet(false)
{
}

CoreInternalOutcome AclConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("AclUserRules") && !value["AclUserRules"].IsNull())
    {
        if (!value["AclUserRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AclConfig.AclUserRules` is not array type"));

        const rapidjson::Value &tmpValue = value["AclUserRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AclUserRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aclUserRules.push_back(item);
        }
        m_aclUserRulesHasBeenSet = true;
    }

    if (value.HasMember("Customizes") && !value["Customizes"].IsNull())
    {
        if (!value["Customizes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AclConfig.Customizes` is not array type"));

        const rapidjson::Value &tmpValue = value["Customizes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AclUserRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customizes.push_back(item);
        }
        m_customizesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AclConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_aclUserRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclUserRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aclUserRules.begin(); itr != m_aclUserRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_customizesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Customizes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customizes.begin(); itr != m_customizes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AclConfig::GetSwitch() const
{
    return m_switch;
}

void AclConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool AclConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<AclUserRule> AclConfig::GetAclUserRules() const
{
    return m_aclUserRules;
}

void AclConfig::SetAclUserRules(const vector<AclUserRule>& _aclUserRules)
{
    m_aclUserRules = _aclUserRules;
    m_aclUserRulesHasBeenSet = true;
}

bool AclConfig::AclUserRulesHasBeenSet() const
{
    return m_aclUserRulesHasBeenSet;
}

vector<AclUserRule> AclConfig::GetCustomizes() const
{
    return m_customizes;
}

void AclConfig::SetCustomizes(const vector<AclUserRule>& _customizes)
{
    m_customizes = _customizes;
    m_customizesHasBeenSet = true;
}

bool AclConfig::CustomizesHasBeenSet() const
{
    return m_customizesHasBeenSet;
}


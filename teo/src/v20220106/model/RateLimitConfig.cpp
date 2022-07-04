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

#include <tencentcloud/teo/v20220106/model/RateLimitConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

RateLimitConfig::RateLimitConfig() :
    m_switchHasBeenSet(false),
    m_userRulesHasBeenSet(false),
    m_templateHasBeenSet(false),
    m_intelligenceHasBeenSet(false)
{
}

CoreInternalOutcome RateLimitConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("UserRules") && !value["UserRules"].IsNull())
    {
        if (!value["UserRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RateLimitConfig.UserRules` is not array type"));

        const rapidjson::Value &tmpValue = value["UserRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RateLimitUserRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_userRules.push_back(item);
        }
        m_userRulesHasBeenSet = true;
    }

    if (value.HasMember("Template") && !value["Template"].IsNull())
    {
        if (!value["Template"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitConfig.Template` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_template.Deserialize(value["Template"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_templateHasBeenSet = true;
    }

    if (value.HasMember("Intelligence") && !value["Intelligence"].IsNull())
    {
        if (!value["Intelligence"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitConfig.Intelligence` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_intelligence.Deserialize(value["Intelligence"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_intelligenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RateLimitConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_userRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userRules.begin(); itr != m_userRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_templateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Template";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_template.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_intelligenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Intelligence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_intelligence.ToJsonObject(value[key.c_str()], allocator);
    }

}


string RateLimitConfig::GetSwitch() const
{
    return m_switch;
}

void RateLimitConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool RateLimitConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<RateLimitUserRule> RateLimitConfig::GetUserRules() const
{
    return m_userRules;
}

void RateLimitConfig::SetUserRules(const vector<RateLimitUserRule>& _userRules)
{
    m_userRules = _userRules;
    m_userRulesHasBeenSet = true;
}

bool RateLimitConfig::UserRulesHasBeenSet() const
{
    return m_userRulesHasBeenSet;
}

RateLimitTemplate RateLimitConfig::GetTemplate() const
{
    return m_template;
}

void RateLimitConfig::SetTemplate(const RateLimitTemplate& _template)
{
    m_template = _template;
    m_templateHasBeenSet = true;
}

bool RateLimitConfig::TemplateHasBeenSet() const
{
    return m_templateHasBeenSet;
}

RateLimitIntelligence RateLimitConfig::GetIntelligence() const
{
    return m_intelligence;
}

void RateLimitConfig::SetIntelligence(const RateLimitIntelligence& _intelligence)
{
    m_intelligence = _intelligence;
    m_intelligenceHasBeenSet = true;
}

bool RateLimitConfig::IntelligenceHasBeenSet() const
{
    return m_intelligenceHasBeenSet;
}


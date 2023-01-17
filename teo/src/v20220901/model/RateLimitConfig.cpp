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

#include <tencentcloud/teo/v20220901/model/RateLimitConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

RateLimitConfig::RateLimitConfig() :
    m_switchHasBeenSet(false),
    m_rateLimitUserRulesHasBeenSet(false),
    m_rateLimitTemplateHasBeenSet(false),
    m_rateLimitIntelligenceHasBeenSet(false),
    m_rateLimitCustomizesHasBeenSet(false)
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

    if (value.HasMember("RateLimitUserRules") && !value["RateLimitUserRules"].IsNull())
    {
        if (!value["RateLimitUserRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RateLimitConfig.RateLimitUserRules` is not array type"));

        const rapidjson::Value &tmpValue = value["RateLimitUserRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RateLimitUserRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rateLimitUserRules.push_back(item);
        }
        m_rateLimitUserRulesHasBeenSet = true;
    }

    if (value.HasMember("RateLimitTemplate") && !value["RateLimitTemplate"].IsNull())
    {
        if (!value["RateLimitTemplate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitConfig.RateLimitTemplate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rateLimitTemplate.Deserialize(value["RateLimitTemplate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rateLimitTemplateHasBeenSet = true;
    }

    if (value.HasMember("RateLimitIntelligence") && !value["RateLimitIntelligence"].IsNull())
    {
        if (!value["RateLimitIntelligence"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitConfig.RateLimitIntelligence` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rateLimitIntelligence.Deserialize(value["RateLimitIntelligence"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rateLimitIntelligenceHasBeenSet = true;
    }

    if (value.HasMember("RateLimitCustomizes") && !value["RateLimitCustomizes"].IsNull())
    {
        if (!value["RateLimitCustomizes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RateLimitConfig.RateLimitCustomizes` is not array type"));

        const rapidjson::Value &tmpValue = value["RateLimitCustomizes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RateLimitUserRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rateLimitCustomizes.push_back(item);
        }
        m_rateLimitCustomizesHasBeenSet = true;
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

    if (m_rateLimitUserRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateLimitUserRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rateLimitUserRules.begin(); itr != m_rateLimitUserRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rateLimitTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateLimitTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rateLimitTemplate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rateLimitIntelligenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateLimitIntelligence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rateLimitIntelligence.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rateLimitCustomizesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateLimitCustomizes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rateLimitCustomizes.begin(); itr != m_rateLimitCustomizes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

vector<RateLimitUserRule> RateLimitConfig::GetRateLimitUserRules() const
{
    return m_rateLimitUserRules;
}

void RateLimitConfig::SetRateLimitUserRules(const vector<RateLimitUserRule>& _rateLimitUserRules)
{
    m_rateLimitUserRules = _rateLimitUserRules;
    m_rateLimitUserRulesHasBeenSet = true;
}

bool RateLimitConfig::RateLimitUserRulesHasBeenSet() const
{
    return m_rateLimitUserRulesHasBeenSet;
}

RateLimitTemplate RateLimitConfig::GetRateLimitTemplate() const
{
    return m_rateLimitTemplate;
}

void RateLimitConfig::SetRateLimitTemplate(const RateLimitTemplate& _rateLimitTemplate)
{
    m_rateLimitTemplate = _rateLimitTemplate;
    m_rateLimitTemplateHasBeenSet = true;
}

bool RateLimitConfig::RateLimitTemplateHasBeenSet() const
{
    return m_rateLimitTemplateHasBeenSet;
}

RateLimitIntelligence RateLimitConfig::GetRateLimitIntelligence() const
{
    return m_rateLimitIntelligence;
}

void RateLimitConfig::SetRateLimitIntelligence(const RateLimitIntelligence& _rateLimitIntelligence)
{
    m_rateLimitIntelligence = _rateLimitIntelligence;
    m_rateLimitIntelligenceHasBeenSet = true;
}

bool RateLimitConfig::RateLimitIntelligenceHasBeenSet() const
{
    return m_rateLimitIntelligenceHasBeenSet;
}

vector<RateLimitUserRule> RateLimitConfig::GetRateLimitCustomizes() const
{
    return m_rateLimitCustomizes;
}

void RateLimitConfig::SetRateLimitCustomizes(const vector<RateLimitUserRule>& _rateLimitCustomizes)
{
    m_rateLimitCustomizes = _rateLimitCustomizes;
    m_rateLimitCustomizesHasBeenSet = true;
}

bool RateLimitConfig::RateLimitCustomizesHasBeenSet() const
{
    return m_rateLimitCustomizesHasBeenSet;
}


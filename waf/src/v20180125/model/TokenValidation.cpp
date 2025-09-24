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

#include <tencentcloud/waf/v20180125/model/TokenValidation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

TokenValidation::TokenValidation() :
    m_enableHasBeenSet(false),
    m_verifyTypeHasBeenSet(false),
    m_verifyRuleHasBeenSet(false),
    m_displaySettingHasBeenSet(false)
{
}

CoreInternalOutcome TokenValidation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TokenValidation.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("VerifyType") && !value["VerifyType"].IsNull())
    {
        if (!value["VerifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenValidation.VerifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyType = string(value["VerifyType"].GetString());
        m_verifyTypeHasBeenSet = true;
    }

    if (value.HasMember("VerifyRule") && !value["VerifyRule"].IsNull())
    {
        if (!value["VerifyRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TokenValidation.VerifyRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_verifyRule.Deserialize(value["VerifyRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_verifyRuleHasBeenSet = true;
    }

    if (value.HasMember("DisplaySetting") && !value["DisplaySetting"].IsNull())
    {
        if (!value["DisplaySetting"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TokenValidation.DisplaySetting` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_displaySetting.Deserialize(value["DisplaySetting"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_displaySettingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TokenValidation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_verifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_verifyRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_displaySettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplaySetting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_displaySetting.ToJsonObject(value[key.c_str()], allocator);
    }

}


bool TokenValidation::GetEnable() const
{
    return m_enable;
}

void TokenValidation::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool TokenValidation::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string TokenValidation::GetVerifyType() const
{
    return m_verifyType;
}

void TokenValidation::SetVerifyType(const string& _verifyType)
{
    m_verifyType = _verifyType;
    m_verifyTypeHasBeenSet = true;
}

bool TokenValidation::VerifyTypeHasBeenSet() const
{
    return m_verifyTypeHasBeenSet;
}

TokenVerifyRule TokenValidation::GetVerifyRule() const
{
    return m_verifyRule;
}

void TokenValidation::SetVerifyRule(const TokenVerifyRule& _verifyRule)
{
    m_verifyRule = _verifyRule;
    m_verifyRuleHasBeenSet = true;
}

bool TokenValidation::VerifyRuleHasBeenSet() const
{
    return m_verifyRuleHasBeenSet;
}

TokenDisplaySetting TokenValidation::GetDisplaySetting() const
{
    return m_displaySetting;
}

void TokenValidation::SetDisplaySetting(const TokenDisplaySetting& _displaySetting)
{
    m_displaySetting = _displaySetting;
    m_displaySettingHasBeenSet = true;
}

bool TokenValidation::DisplaySettingHasBeenSet() const
{
    return m_displaySettingHasBeenSet;
}


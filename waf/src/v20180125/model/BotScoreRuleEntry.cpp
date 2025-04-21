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

#include <tencentcloud/waf/v20180125/model/BotScoreRuleEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

BotScoreRuleEntry::BotScoreRuleEntry() :
    m_upperHasBeenSet(false),
    m_lowerHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_redirectHasBeenSet(false)
{
}

CoreInternalOutcome BotScoreRuleEntry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Upper") && !value["Upper"].IsNull())
    {
        if (!value["Upper"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotScoreRuleEntry.Upper` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upper = string(value["Upper"].GetString());
        m_upperHasBeenSet = true;
    }

    if (value.HasMember("Lower") && !value["Lower"].IsNull())
    {
        if (!value["Lower"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotScoreRuleEntry.Lower` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lower = string(value["Lower"].GetString());
        m_lowerHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotScoreRuleEntry.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotScoreRuleEntry.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Redirect") && !value["Redirect"].IsNull())
    {
        if (!value["Redirect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotScoreRuleEntry.Redirect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redirect = string(value["Redirect"].GetString());
        m_redirectHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotScoreRuleEntry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_upperHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Upper";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upper.c_str(), allocator).Move(), allocator);
    }

    if (m_lowerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lower";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lower.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_redirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Redirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_redirect.c_str(), allocator).Move(), allocator);
    }

}


string BotScoreRuleEntry::GetUpper() const
{
    return m_upper;
}

void BotScoreRuleEntry::SetUpper(const string& _upper)
{
    m_upper = _upper;
    m_upperHasBeenSet = true;
}

bool BotScoreRuleEntry::UpperHasBeenSet() const
{
    return m_upperHasBeenSet;
}

string BotScoreRuleEntry::GetLower() const
{
    return m_lower;
}

void BotScoreRuleEntry::SetLower(const string& _lower)
{
    m_lower = _lower;
    m_lowerHasBeenSet = true;
}

bool BotScoreRuleEntry::LowerHasBeenSet() const
{
    return m_lowerHasBeenSet;
}

string BotScoreRuleEntry::GetAction() const
{
    return m_action;
}

void BotScoreRuleEntry::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool BotScoreRuleEntry::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string BotScoreRuleEntry::GetLabel() const
{
    return m_label;
}

void BotScoreRuleEntry::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool BotScoreRuleEntry::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string BotScoreRuleEntry::GetRedirect() const
{
    return m_redirect;
}

void BotScoreRuleEntry::SetRedirect(const string& _redirect)
{
    m_redirect = _redirect;
    m_redirectHasBeenSet = true;
}

bool BotScoreRuleEntry::RedirectHasBeenSet() const
{
    return m_redirectHasBeenSet;
}


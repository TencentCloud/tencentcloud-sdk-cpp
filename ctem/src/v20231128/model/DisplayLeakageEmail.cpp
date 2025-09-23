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

#include <tencentcloud/ctem/v20231128/model/DisplayLeakageEmail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplayLeakageEmail::DisplayLeakageEmail() :
    m_idHasBeenSet(false),
    m_displayToolCommonHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_handlingStatusHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome DisplayLeakageEmail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayLeakageEmail.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DisplayToolCommon") && !value["DisplayToolCommon"].IsNull())
    {
        if (!value["DisplayToolCommon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayLeakageEmail.DisplayToolCommon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_displayToolCommon.Deserialize(value["DisplayToolCommon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_displayToolCommonHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayLeakageEmail.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayLeakageEmail.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayLeakageEmail.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayLeakageEmail.RiskLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = value["RiskLevel"].GetInt64();
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayLeakageEmail.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Keyword") && !value["Keyword"].IsNull())
    {
        if (!value["Keyword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayLeakageEmail.Keyword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyword = string(value["Keyword"].GetString());
        m_keywordHasBeenSet = true;
    }

    if (value.HasMember("HandlingStatus") && !value["HandlingStatus"].IsNull())
    {
        if (!value["HandlingStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayLeakageEmail.HandlingStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_handlingStatus = value["HandlingStatus"].GetInt64();
        m_handlingStatusHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayLeakageEmail.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplayLeakageEmail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_displayToolCommonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayToolCommon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_displayToolCommon.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskLevel, allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_handlingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandlingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_handlingStatus, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


int64_t DisplayLeakageEmail::GetId() const
{
    return m_id;
}

void DisplayLeakageEmail::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisplayLeakageEmail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

DisplayToolCommon DisplayLeakageEmail::GetDisplayToolCommon() const
{
    return m_displayToolCommon;
}

void DisplayLeakageEmail::SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon)
{
    m_displayToolCommon = _displayToolCommon;
    m_displayToolCommonHasBeenSet = true;
}

bool DisplayLeakageEmail::DisplayToolCommonHasBeenSet() const
{
    return m_displayToolCommonHasBeenSet;
}

string DisplayLeakageEmail::GetEmail() const
{
    return m_email;
}

void DisplayLeakageEmail::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool DisplayLeakageEmail::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string DisplayLeakageEmail::GetUsername() const
{
    return m_username;
}

void DisplayLeakageEmail::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool DisplayLeakageEmail::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string DisplayLeakageEmail::GetSource() const
{
    return m_source;
}

void DisplayLeakageEmail::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DisplayLeakageEmail::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

int64_t DisplayLeakageEmail::GetRiskLevel() const
{
    return m_riskLevel;
}

void DisplayLeakageEmail::SetRiskLevel(const int64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool DisplayLeakageEmail::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string DisplayLeakageEmail::GetSuggestion() const
{
    return m_suggestion;
}

void DisplayLeakageEmail::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool DisplayLeakageEmail::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string DisplayLeakageEmail::GetKeyword() const
{
    return m_keyword;
}

void DisplayLeakageEmail::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DisplayLeakageEmail::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

int64_t DisplayLeakageEmail::GetHandlingStatus() const
{
    return m_handlingStatus;
}

void DisplayLeakageEmail::SetHandlingStatus(const int64_t& _handlingStatus)
{
    m_handlingStatus = _handlingStatus;
    m_handlingStatusHasBeenSet = true;
}

bool DisplayLeakageEmail::HandlingStatusHasBeenSet() const
{
    return m_handlingStatusHasBeenSet;
}

string DisplayLeakageEmail::GetRemark() const
{
    return m_remark;
}

void DisplayLeakageEmail::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DisplayLeakageEmail::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


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

#include <tencentcloud/ctem/v20231128/model/DisplayLeakageCode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplayLeakageCode::DisplayLeakageCode() :
    m_idHasBeenSet(false),
    m_displayToolCommonHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_hubNameHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_screenshotHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_handlingStatusHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome DisplayLeakageCode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayLeakageCode.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DisplayToolCommon") && !value["DisplayToolCommon"].IsNull())
    {
        if (!value["DisplayToolCommon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayLeakageCode.DisplayToolCommon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_displayToolCommon.Deserialize(value["DisplayToolCommon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_displayToolCommonHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayLeakageCode.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayLeakageCode.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayLeakageCode.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayLeakageCode.RiskLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = value["RiskLevel"].GetInt64();
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("HubName") && !value["HubName"].IsNull())
    {
        if (!value["HubName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayLeakageCode.HubName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hubName = string(value["HubName"].GetString());
        m_hubNameHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayLeakageCode.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Screenshot") && !value["Screenshot"].IsNull())
    {
        if (!value["Screenshot"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayLeakageCode.Screenshot` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_screenshot = string(value["Screenshot"].GetString());
        m_screenshotHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayLeakageCode.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Keyword") && !value["Keyword"].IsNull())
    {
        if (!value["Keyword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayLeakageCode.Keyword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyword = string(value["Keyword"].GetString());
        m_keywordHasBeenSet = true;
    }

    if (value.HasMember("HandlingStatus") && !value["HandlingStatus"].IsNull())
    {
        if (!value["HandlingStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayLeakageCode.HandlingStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_handlingStatus = value["HandlingStatus"].GetInt64();
        m_handlingStatusHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayLeakageCode.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplayLeakageCode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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

    if (m_hubNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HubName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hubName.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_screenshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Screenshot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_screenshot.c_str(), allocator).Move(), allocator);
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


int64_t DisplayLeakageCode::GetId() const
{
    return m_id;
}

void DisplayLeakageCode::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisplayLeakageCode::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

DisplayToolCommon DisplayLeakageCode::GetDisplayToolCommon() const
{
    return m_displayToolCommon;
}

void DisplayLeakageCode::SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon)
{
    m_displayToolCommon = _displayToolCommon;
    m_displayToolCommonHasBeenSet = true;
}

bool DisplayLeakageCode::DisplayToolCommonHasBeenSet() const
{
    return m_displayToolCommonHasBeenSet;
}

string DisplayLeakageCode::GetName() const
{
    return m_name;
}

void DisplayLeakageCode::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DisplayLeakageCode::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DisplayLeakageCode::GetDescription() const
{
    return m_description;
}

void DisplayLeakageCode::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DisplayLeakageCode::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DisplayLeakageCode::GetSource() const
{
    return m_source;
}

void DisplayLeakageCode::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DisplayLeakageCode::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

int64_t DisplayLeakageCode::GetRiskLevel() const
{
    return m_riskLevel;
}

void DisplayLeakageCode::SetRiskLevel(const int64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool DisplayLeakageCode::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string DisplayLeakageCode::GetHubName() const
{
    return m_hubName;
}

void DisplayLeakageCode::SetHubName(const string& _hubName)
{
    m_hubName = _hubName;
    m_hubNameHasBeenSet = true;
}

bool DisplayLeakageCode::HubNameHasBeenSet() const
{
    return m_hubNameHasBeenSet;
}

string DisplayLeakageCode::GetUrl() const
{
    return m_url;
}

void DisplayLeakageCode::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool DisplayLeakageCode::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string DisplayLeakageCode::GetScreenshot() const
{
    return m_screenshot;
}

void DisplayLeakageCode::SetScreenshot(const string& _screenshot)
{
    m_screenshot = _screenshot;
    m_screenshotHasBeenSet = true;
}

bool DisplayLeakageCode::ScreenshotHasBeenSet() const
{
    return m_screenshotHasBeenSet;
}

string DisplayLeakageCode::GetSuggestion() const
{
    return m_suggestion;
}

void DisplayLeakageCode::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool DisplayLeakageCode::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string DisplayLeakageCode::GetKeyword() const
{
    return m_keyword;
}

void DisplayLeakageCode::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DisplayLeakageCode::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

int64_t DisplayLeakageCode::GetHandlingStatus() const
{
    return m_handlingStatus;
}

void DisplayLeakageCode::SetHandlingStatus(const int64_t& _handlingStatus)
{
    m_handlingStatus = _handlingStatus;
    m_handlingStatusHasBeenSet = true;
}

bool DisplayLeakageCode::HandlingStatusHasBeenSet() const
{
    return m_handlingStatusHasBeenSet;
}

string DisplayLeakageCode::GetRemark() const
{
    return m_remark;
}

void DisplayLeakageCode::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DisplayLeakageCode::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


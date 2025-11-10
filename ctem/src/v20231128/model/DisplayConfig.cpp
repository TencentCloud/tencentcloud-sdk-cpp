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

#include <tencentcloud/ctem/v20231128/model/DisplayConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplayConfig::DisplayConfig() :
    m_idHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_contentLengthHasBeenSet(false),
    m_displayToolCommonHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_aIRatingHasBeenSet(false),
    m_aIAnalysisHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_isCloudAssetHasBeenSet(false),
    m_cloudAssetStatusHasBeenSet(false)
{
}

CoreInternalOutcome DisplayConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayConfig.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayConfig.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayConfig.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayConfig.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("ContentLength") && !value["ContentLength"].IsNull())
    {
        if (!value["ContentLength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayConfig.ContentLength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_contentLength = value["ContentLength"].GetInt64();
        m_contentLengthHasBeenSet = true;
    }

    if (value.HasMember("DisplayToolCommon") && !value["DisplayToolCommon"].IsNull())
    {
        if (!value["DisplayToolCommon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayConfig.DisplayToolCommon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_displayToolCommon.Deserialize(value["DisplayToolCommon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_displayToolCommonHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayConfig.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("AIRating") && !value["AIRating"].IsNull())
    {
        if (!value["AIRating"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayConfig.AIRating` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aIRating = value["AIRating"].GetInt64();
        m_aIRatingHasBeenSet = true;
    }

    if (value.HasMember("AIAnalysis") && !value["AIAnalysis"].IsNull())
    {
        if (!value["AIAnalysis"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayConfig.AIAnalysis` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aIAnalysis = string(value["AIAnalysis"].GetString());
        m_aIAnalysisHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayConfig.RiskLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = value["RiskLevel"].GetInt64();
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayConfig.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("IsCloudAsset") && !value["IsCloudAsset"].IsNull())
    {
        if (!value["IsCloudAsset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayConfig.IsCloudAsset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isCloudAsset = value["IsCloudAsset"].GetInt64();
        m_isCloudAssetHasBeenSet = true;
    }

    if (value.HasMember("CloudAssetStatus") && !value["CloudAssetStatus"].IsNull())
    {
        if (!value["CloudAssetStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayConfig.CloudAssetStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudAssetStatus = value["CloudAssetStatus"].GetInt64();
        m_cloudAssetStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplayConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_contentLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contentLength, allocator);
    }

    if (m_displayToolCommonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayToolCommon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_displayToolCommon.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_aIRatingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AIRating";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aIRating, allocator);
    }

    if (m_aIAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AIAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aIAnalysis.c_str(), allocator).Move(), allocator);
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

    if (m_isCloudAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCloudAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCloudAsset, allocator);
    }

    if (m_cloudAssetStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudAssetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudAssetStatus, allocator);
    }

}


int64_t DisplayConfig::GetId() const
{
    return m_id;
}

void DisplayConfig::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisplayConfig::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DisplayConfig::GetUrl() const
{
    return m_url;
}

void DisplayConfig::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool DisplayConfig::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string DisplayConfig::GetTitle() const
{
    return m_title;
}

void DisplayConfig::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool DisplayConfig::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

int64_t DisplayConfig::GetCode() const
{
    return m_code;
}

void DisplayConfig::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool DisplayConfig::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

int64_t DisplayConfig::GetContentLength() const
{
    return m_contentLength;
}

void DisplayConfig::SetContentLength(const int64_t& _contentLength)
{
    m_contentLength = _contentLength;
    m_contentLengthHasBeenSet = true;
}

bool DisplayConfig::ContentLengthHasBeenSet() const
{
    return m_contentLengthHasBeenSet;
}

DisplayToolCommon DisplayConfig::GetDisplayToolCommon() const
{
    return m_displayToolCommon;
}

void DisplayConfig::SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon)
{
    m_displayToolCommon = _displayToolCommon;
    m_displayToolCommonHasBeenSet = true;
}

bool DisplayConfig::DisplayToolCommonHasBeenSet() const
{
    return m_displayToolCommonHasBeenSet;
}

string DisplayConfig::GetIp() const
{
    return m_ip;
}

void DisplayConfig::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DisplayConfig::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t DisplayConfig::GetAIRating() const
{
    return m_aIRating;
}

void DisplayConfig::SetAIRating(const int64_t& _aIRating)
{
    m_aIRating = _aIRating;
    m_aIRatingHasBeenSet = true;
}

bool DisplayConfig::AIRatingHasBeenSet() const
{
    return m_aIRatingHasBeenSet;
}

string DisplayConfig::GetAIAnalysis() const
{
    return m_aIAnalysis;
}

void DisplayConfig::SetAIAnalysis(const string& _aIAnalysis)
{
    m_aIAnalysis = _aIAnalysis;
    m_aIAnalysisHasBeenSet = true;
}

bool DisplayConfig::AIAnalysisHasBeenSet() const
{
    return m_aIAnalysisHasBeenSet;
}

int64_t DisplayConfig::GetRiskLevel() const
{
    return m_riskLevel;
}

void DisplayConfig::SetRiskLevel(const int64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool DisplayConfig::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string DisplayConfig::GetSuggestion() const
{
    return m_suggestion;
}

void DisplayConfig::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool DisplayConfig::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

int64_t DisplayConfig::GetIsCloudAsset() const
{
    return m_isCloudAsset;
}

void DisplayConfig::SetIsCloudAsset(const int64_t& _isCloudAsset)
{
    m_isCloudAsset = _isCloudAsset;
    m_isCloudAssetHasBeenSet = true;
}

bool DisplayConfig::IsCloudAssetHasBeenSet() const
{
    return m_isCloudAssetHasBeenSet;
}

int64_t DisplayConfig::GetCloudAssetStatus() const
{
    return m_cloudAssetStatus;
}

void DisplayConfig::SetCloudAssetStatus(const int64_t& _cloudAssetStatus)
{
    m_cloudAssetStatus = _cloudAssetStatus;
    m_cloudAssetStatusHasBeenSet = true;
}

bool DisplayConfig::CloudAssetStatusHasBeenSet() const
{
    return m_cloudAssetStatusHasBeenSet;
}


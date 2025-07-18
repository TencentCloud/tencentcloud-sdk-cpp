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

#include <tencentcloud/ctem/v20231128/model/DisplayGithub.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplayGithub::DisplayGithub() :
    m_idHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_matchedKeywordsHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_displayToolCommonHasBeenSet(false)
{
}

CoreInternalOutcome DisplayGithub::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayGithub.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayGithub.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("MatchedKeywords") && !value["MatchedKeywords"].IsNull())
    {
        if (!value["MatchedKeywords"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayGithub.MatchedKeywords` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchedKeywords = string(value["MatchedKeywords"].GetString());
        m_matchedKeywordsHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayGithub.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayGithub.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DisplayToolCommon") && !value["DisplayToolCommon"].IsNull())
    {
        if (!value["DisplayToolCommon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayGithub.DisplayToolCommon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_displayToolCommon.Deserialize(value["DisplayToolCommon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_displayToolCommonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplayGithub::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_matchedKeywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchedKeywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchedKeywords.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_displayToolCommonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayToolCommon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_displayToolCommon.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t DisplayGithub::GetId() const
{
    return m_id;
}

void DisplayGithub::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisplayGithub::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DisplayGithub::GetContent() const
{
    return m_content;
}

void DisplayGithub::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool DisplayGithub::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string DisplayGithub::GetMatchedKeywords() const
{
    return m_matchedKeywords;
}

void DisplayGithub::SetMatchedKeywords(const string& _matchedKeywords)
{
    m_matchedKeywords = _matchedKeywords;
    m_matchedKeywordsHasBeenSet = true;
}

bool DisplayGithub::MatchedKeywordsHasBeenSet() const
{
    return m_matchedKeywordsHasBeenSet;
}

string DisplayGithub::GetUrl() const
{
    return m_url;
}

void DisplayGithub::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool DisplayGithub::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string DisplayGithub::GetStatus() const
{
    return m_status;
}

void DisplayGithub::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DisplayGithub::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

DisplayToolCommon DisplayGithub::GetDisplayToolCommon() const
{
    return m_displayToolCommon;
}

void DisplayGithub::SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon)
{
    m_displayToolCommon = _displayToolCommon;
    m_displayToolCommonHasBeenSet = true;
}

bool DisplayGithub::DisplayToolCommonHasBeenSet() const
{
    return m_displayToolCommonHasBeenSet;
}


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

#include <tencentcloud/ivld/v20210903/model/TextData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

TextData::TextData() :
    m_contentHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_textTagSetHasBeenSet(false),
    m_webMediaURLHasBeenSet(false)
{
}

CoreInternalOutcome TextData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextData.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Summary") && !value["Summary"].IsNull())
    {
        if (!value["Summary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextData.Summary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_summary = string(value["Summary"].GetString());
        m_summaryHasBeenSet = true;
    }

    if (value.HasMember("TextTagSet") && !value["TextTagSet"].IsNull())
    {
        if (!value["TextTagSet"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TextData.TextTagSet` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_textTagSet.Deserialize(value["TextTagSet"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textTagSetHasBeenSet = true;
    }

    if (value.HasMember("WebMediaURL") && !value["WebMediaURL"].IsNull())
    {
        if (!value["WebMediaURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextData.WebMediaURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webMediaURL = string(value["WebMediaURL"].GetString());
        m_webMediaURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_summaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Summary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_summary.c_str(), allocator).Move(), allocator);
    }

    if (m_textTagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextTagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_textTagSet.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_webMediaURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebMediaURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webMediaURL.c_str(), allocator).Move(), allocator);
    }

}


string TextData::GetContent() const
{
    return m_content;
}

void TextData::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool TextData::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string TextData::GetSummary() const
{
    return m_summary;
}

void TextData::SetSummary(const string& _summary)
{
    m_summary = _summary;
    m_summaryHasBeenSet = true;
}

bool TextData::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}

MultiLevelTag TextData::GetTextTagSet() const
{
    return m_textTagSet;
}

void TextData::SetTextTagSet(const MultiLevelTag& _textTagSet)
{
    m_textTagSet = _textTagSet;
    m_textTagSetHasBeenSet = true;
}

bool TextData::TextTagSetHasBeenSet() const
{
    return m_textTagSetHasBeenSet;
}

string TextData::GetWebMediaURL() const
{
    return m_webMediaURL;
}

void TextData::SetWebMediaURL(const string& _webMediaURL)
{
    m_webMediaURL = _webMediaURL;
    m_webMediaURLHasBeenSet = true;
}

bool TextData::WebMediaURLHasBeenSet() const
{
    return m_webMediaURLHasBeenSet;
}


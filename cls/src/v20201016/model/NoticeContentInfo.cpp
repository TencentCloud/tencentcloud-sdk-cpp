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

#include <tencentcloud/cls/v20201016/model/NoticeContentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

NoticeContentInfo::NoticeContentInfo() :
    m_titleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_headersHasBeenSet(false)
{
}

CoreInternalOutcome NoticeContentInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContentInfo.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContentInfo.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Headers") && !value["Headers"].IsNull())
    {
        if (!value["Headers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NoticeContentInfo.Headers` is not array type"));

        const rapidjson::Value &tmpValue = value["Headers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_headers.push_back((*itr).GetString());
        }
        m_headersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NoticeContentInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_headersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Headers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_headers.begin(); itr != m_headers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string NoticeContentInfo::GetTitle() const
{
    return m_title;
}

void NoticeContentInfo::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool NoticeContentInfo::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string NoticeContentInfo::GetContent() const
{
    return m_content;
}

void NoticeContentInfo::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool NoticeContentInfo::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

vector<string> NoticeContentInfo::GetHeaders() const
{
    return m_headers;
}

void NoticeContentInfo::SetHeaders(const vector<string>& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool NoticeContentInfo::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}


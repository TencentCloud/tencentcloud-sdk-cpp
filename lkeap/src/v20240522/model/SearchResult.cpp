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

#include <tencentcloud/lkeap/v20240522/model/SearchResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

SearchResult::SearchResult() :
    m_indexHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_snippetHasBeenSet(false),
    m_iconHasBeenSet(false),
    m_siteHasBeenSet(false),
    m_publishedTimeHasBeenSet(false)
{
}

CoreInternalOutcome SearchResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.Index` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetInt64();
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Snippet") && !value["Snippet"].IsNull())
    {
        if (!value["Snippet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.Snippet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snippet = string(value["Snippet"].GetString());
        m_snippetHasBeenSet = true;
    }

    if (value.HasMember("Icon") && !value["Icon"].IsNull())
    {
        if (!value["Icon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.Icon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_icon = string(value["Icon"].GetString());
        m_iconHasBeenSet = true;
    }

    if (value.HasMember("Site") && !value["Site"].IsNull())
    {
        if (!value["Site"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.Site` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_site = string(value["Site"].GetString());
        m_siteHasBeenSet = true;
    }

    if (value.HasMember("PublishedTime") && !value["PublishedTime"].IsNull())
    {
        if (!value["PublishedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.PublishedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_publishedTime = value["PublishedTime"].GetInt64();
        m_publishedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_snippetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Snippet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snippet.c_str(), allocator).Move(), allocator);
    }

    if (m_iconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Icon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_icon.c_str(), allocator).Move(), allocator);
    }

    if (m_siteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Site";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_site.c_str(), allocator).Move(), allocator);
    }

    if (m_publishedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publishedTime, allocator);
    }

}


int64_t SearchResult::GetIndex() const
{
    return m_index;
}

void SearchResult::SetIndex(const int64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool SearchResult::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string SearchResult::GetUrl() const
{
    return m_url;
}

void SearchResult::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool SearchResult::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string SearchResult::GetName() const
{
    return m_name;
}

void SearchResult::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SearchResult::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SearchResult::GetSnippet() const
{
    return m_snippet;
}

void SearchResult::SetSnippet(const string& _snippet)
{
    m_snippet = _snippet;
    m_snippetHasBeenSet = true;
}

bool SearchResult::SnippetHasBeenSet() const
{
    return m_snippetHasBeenSet;
}

string SearchResult::GetIcon() const
{
    return m_icon;
}

void SearchResult::SetIcon(const string& _icon)
{
    m_icon = _icon;
    m_iconHasBeenSet = true;
}

bool SearchResult::IconHasBeenSet() const
{
    return m_iconHasBeenSet;
}

string SearchResult::GetSite() const
{
    return m_site;
}

void SearchResult::SetSite(const string& _site)
{
    m_site = _site;
    m_siteHasBeenSet = true;
}

bool SearchResult::SiteHasBeenSet() const
{
    return m_siteHasBeenSet;
}

int64_t SearchResult::GetPublishedTime() const
{
    return m_publishedTime;
}

void SearchResult::SetPublishedTime(const int64_t& _publishedTime)
{
    m_publishedTime = _publishedTime;
    m_publishedTimeHasBeenSet = true;
}

bool SearchResult::PublishedTimeHasBeenSet() const
{
    return m_publishedTimeHasBeenSet;
}


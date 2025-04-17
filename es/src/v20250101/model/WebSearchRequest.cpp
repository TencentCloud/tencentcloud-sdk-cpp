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

#include <tencentcloud/es/v20250101/model/WebSearchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20250101::Model;
using namespace std;

WebSearchRequest::WebSearchRequest() :
    m_queryHasBeenSet(false),
    m_countHasBeenSet(false),
    m_siteHasBeenSet(false),
    m_fetchContentHasBeenSet(false),
    m_whiteSitesHasBeenSet(false),
    m_blackSitesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_searchEngineHasBeenSet(false)
{
}

string WebSearchRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
    }

    if (m_siteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Site";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_site.c_str(), allocator).Move(), allocator);
    }

    if (m_fetchContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FetchContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fetchContent, allocator);
    }

    if (m_whiteSitesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteSites";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_whiteSites.begin(); itr != m_whiteSites.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_blackSitesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlackSites";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_blackSites.begin(); itr != m_blackSites.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_searchEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchEngine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchEngine.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string WebSearchRequest::GetQuery() const
{
    return m_query;
}

void WebSearchRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool WebSearchRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

uint64_t WebSearchRequest::GetCount() const
{
    return m_count;
}

void WebSearchRequest::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool WebSearchRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string WebSearchRequest::GetSite() const
{
    return m_site;
}

void WebSearchRequest::SetSite(const string& _site)
{
    m_site = _site;
    m_siteHasBeenSet = true;
}

bool WebSearchRequest::SiteHasBeenSet() const
{
    return m_siteHasBeenSet;
}

bool WebSearchRequest::GetFetchContent() const
{
    return m_fetchContent;
}

void WebSearchRequest::SetFetchContent(const bool& _fetchContent)
{
    m_fetchContent = _fetchContent;
    m_fetchContentHasBeenSet = true;
}

bool WebSearchRequest::FetchContentHasBeenSet() const
{
    return m_fetchContentHasBeenSet;
}

vector<string> WebSearchRequest::GetWhiteSites() const
{
    return m_whiteSites;
}

void WebSearchRequest::SetWhiteSites(const vector<string>& _whiteSites)
{
    m_whiteSites = _whiteSites;
    m_whiteSitesHasBeenSet = true;
}

bool WebSearchRequest::WhiteSitesHasBeenSet() const
{
    return m_whiteSitesHasBeenSet;
}

vector<string> WebSearchRequest::GetBlackSites() const
{
    return m_blackSites;
}

void WebSearchRequest::SetBlackSites(const vector<string>& _blackSites)
{
    m_blackSites = _blackSites;
    m_blackSitesHasBeenSet = true;
}

bool WebSearchRequest::BlackSitesHasBeenSet() const
{
    return m_blackSitesHasBeenSet;
}

uint64_t WebSearchRequest::GetStartTime() const
{
    return m_startTime;
}

void WebSearchRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool WebSearchRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t WebSearchRequest::GetEndTime() const
{
    return m_endTime;
}

void WebSearchRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool WebSearchRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string WebSearchRequest::GetSearchEngine() const
{
    return m_searchEngine;
}

void WebSearchRequest::SetSearchEngine(const string& _searchEngine)
{
    m_searchEngine = _searchEngine;
    m_searchEngineHasBeenSet = true;
}

bool WebSearchRequest::SearchEngineHasBeenSet() const
{
    return m_searchEngineHasBeenSet;
}



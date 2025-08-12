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

#include <tencentcloud/wsa/v20250508/model/SearchProRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wsa::V20250508::Model;
using namespace std;

SearchProRequest::SearchProRequest() :
    m_queryHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_siteHasBeenSet(false),
    m_fromTimeHasBeenSet(false),
    m_toTimeHasBeenSet(false),
    m_cntHasBeenSet(false),
    m_industryHasBeenSet(false)
{
}

string SearchProRequest::ToJsonString() const
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

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mode, allocator);
    }

    if (m_siteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Site";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_site.c_str(), allocator).Move(), allocator);
    }

    if (m_fromTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fromTime, allocator);
    }

    if (m_toTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_toTime, allocator);
    }

    if (m_cntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cnt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cnt, allocator);
    }

    if (m_industryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Industry";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_industry.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SearchProRequest::GetQuery() const
{
    return m_query;
}

void SearchProRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool SearchProRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

int64_t SearchProRequest::GetMode() const
{
    return m_mode;
}

void SearchProRequest::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool SearchProRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string SearchProRequest::GetSite() const
{
    return m_site;
}

void SearchProRequest::SetSite(const string& _site)
{
    m_site = _site;
    m_siteHasBeenSet = true;
}

bool SearchProRequest::SiteHasBeenSet() const
{
    return m_siteHasBeenSet;
}

int64_t SearchProRequest::GetFromTime() const
{
    return m_fromTime;
}

void SearchProRequest::SetFromTime(const int64_t& _fromTime)
{
    m_fromTime = _fromTime;
    m_fromTimeHasBeenSet = true;
}

bool SearchProRequest::FromTimeHasBeenSet() const
{
    return m_fromTimeHasBeenSet;
}

int64_t SearchProRequest::GetToTime() const
{
    return m_toTime;
}

void SearchProRequest::SetToTime(const int64_t& _toTime)
{
    m_toTime = _toTime;
    m_toTimeHasBeenSet = true;
}

bool SearchProRequest::ToTimeHasBeenSet() const
{
    return m_toTimeHasBeenSet;
}

uint64_t SearchProRequest::GetCnt() const
{
    return m_cnt;
}

void SearchProRequest::SetCnt(const uint64_t& _cnt)
{
    m_cnt = _cnt;
    m_cntHasBeenSet = true;
}

bool SearchProRequest::CntHasBeenSet() const
{
    return m_cntHasBeenSet;
}

string SearchProRequest::GetIndustry() const
{
    return m_industry;
}

void SearchProRequest::SetIndustry(const string& _industry)
{
    m_industry = _industry;
    m_industryHasBeenSet = true;
}

bool SearchProRequest::IndustryHasBeenSet() const
{
    return m_industryHasBeenSet;
}



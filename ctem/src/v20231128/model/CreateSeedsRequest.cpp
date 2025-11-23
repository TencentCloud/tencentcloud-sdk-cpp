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

#include <tencentcloud/ctem/v20231128/model/CreateSeedsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

CreateSeedsRequest::CreateSeedsRequest() :
    m_customerIdHasBeenSet(false),
    m_ipsHasBeenSet(false),
    m_iconsHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_titlesHasBeenSet(false),
    m_subDomainsHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_parentCompaniesHasBeenSet(false)
{
}

string CreateSeedsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_customerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_customerId, allocator);
    }

    if (m_ipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ips";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ips.begin(); itr != m_ips.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_iconsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Icons";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_icons.begin(); itr != m_icons.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_domainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domains.begin(); itr != m_domains.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_titlesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Titles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_titles.begin(); itr != m_titles.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_subDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubDomains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subDomains.begin(); itr != m_subDomains.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_keywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keywords.begin(); itr != m_keywords.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_parentCompaniesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentCompanies";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_parentCompanies.begin(); itr != m_parentCompanies.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateSeedsRequest::GetCustomerId() const
{
    return m_customerId;
}

void CreateSeedsRequest::SetCustomerId(const int64_t& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool CreateSeedsRequest::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

vector<string> CreateSeedsRequest::GetIps() const
{
    return m_ips;
}

void CreateSeedsRequest::SetIps(const vector<string>& _ips)
{
    m_ips = _ips;
    m_ipsHasBeenSet = true;
}

bool CreateSeedsRequest::IpsHasBeenSet() const
{
    return m_ipsHasBeenSet;
}

vector<string> CreateSeedsRequest::GetIcons() const
{
    return m_icons;
}

void CreateSeedsRequest::SetIcons(const vector<string>& _icons)
{
    m_icons = _icons;
    m_iconsHasBeenSet = true;
}

bool CreateSeedsRequest::IconsHasBeenSet() const
{
    return m_iconsHasBeenSet;
}

vector<string> CreateSeedsRequest::GetDomains() const
{
    return m_domains;
}

void CreateSeedsRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool CreateSeedsRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

vector<string> CreateSeedsRequest::GetTitles() const
{
    return m_titles;
}

void CreateSeedsRequest::SetTitles(const vector<string>& _titles)
{
    m_titles = _titles;
    m_titlesHasBeenSet = true;
}

bool CreateSeedsRequest::TitlesHasBeenSet() const
{
    return m_titlesHasBeenSet;
}

vector<string> CreateSeedsRequest::GetSubDomains() const
{
    return m_subDomains;
}

void CreateSeedsRequest::SetSubDomains(const vector<string>& _subDomains)
{
    m_subDomains = _subDomains;
    m_subDomainsHasBeenSet = true;
}

bool CreateSeedsRequest::SubDomainsHasBeenSet() const
{
    return m_subDomainsHasBeenSet;
}

vector<string> CreateSeedsRequest::GetKeywords() const
{
    return m_keywords;
}

void CreateSeedsRequest::SetKeywords(const vector<string>& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool CreateSeedsRequest::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

vector<string> CreateSeedsRequest::GetParentCompanies() const
{
    return m_parentCompanies;
}

void CreateSeedsRequest::SetParentCompanies(const vector<string>& _parentCompanies)
{
    m_parentCompanies = _parentCompanies;
    m_parentCompaniesHasBeenSet = true;
}

bool CreateSeedsRequest::ParentCompaniesHasBeenSet() const
{
    return m_parentCompaniesHasBeenSet;
}



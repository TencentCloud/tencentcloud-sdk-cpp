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

#include <tencentcloud/cdn/v20180606/model/DescribeScdnBotRecordsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

DescribeScdnBotRecordsRequest::DescribeScdnBotRecordsRequest() :
    m_botTypeHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_sortByHasBeenSet(false),
    m_filterNameHasBeenSet(false),
    m_filterActionHasBeenSet(false),
    m_filterIpHasBeenSet(false),
    m_domainsHasBeenSet(false)
{
}

string DescribeScdnBotRecordsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_botTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_botType.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_sortByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sortBy.begin(); itr != m_sortBy.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_filterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterName.c_str(), allocator).Move(), allocator);
    }

    if (m_filterActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterAction.c_str(), allocator).Move(), allocator);
    }

    if (m_filterIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterIp.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeScdnBotRecordsRequest::GetBotType() const
{
    return m_botType;
}

void DescribeScdnBotRecordsRequest::SetBotType(const string& _botType)
{
    m_botType = _botType;
    m_botTypeHasBeenSet = true;
}

bool DescribeScdnBotRecordsRequest::BotTypeHasBeenSet() const
{
    return m_botTypeHasBeenSet;
}

string DescribeScdnBotRecordsRequest::GetDomain() const
{
    return m_domain;
}

void DescribeScdnBotRecordsRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeScdnBotRecordsRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeScdnBotRecordsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeScdnBotRecordsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeScdnBotRecordsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeScdnBotRecordsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeScdnBotRecordsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeScdnBotRecordsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DescribeScdnBotRecordsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeScdnBotRecordsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeScdnBotRecordsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeScdnBotRecordsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeScdnBotRecordsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeScdnBotRecordsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeScdnBotRecordsRequest::GetArea() const
{
    return m_area;
}

void DescribeScdnBotRecordsRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool DescribeScdnBotRecordsRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

vector<BotSortBy> DescribeScdnBotRecordsRequest::GetSortBy() const
{
    return m_sortBy;
}

void DescribeScdnBotRecordsRequest::SetSortBy(const vector<BotSortBy>& _sortBy)
{
    m_sortBy = _sortBy;
    m_sortByHasBeenSet = true;
}

bool DescribeScdnBotRecordsRequest::SortByHasBeenSet() const
{
    return m_sortByHasBeenSet;
}

string DescribeScdnBotRecordsRequest::GetFilterName() const
{
    return m_filterName;
}

void DescribeScdnBotRecordsRequest::SetFilterName(const string& _filterName)
{
    m_filterName = _filterName;
    m_filterNameHasBeenSet = true;
}

bool DescribeScdnBotRecordsRequest::FilterNameHasBeenSet() const
{
    return m_filterNameHasBeenSet;
}

string DescribeScdnBotRecordsRequest::GetFilterAction() const
{
    return m_filterAction;
}

void DescribeScdnBotRecordsRequest::SetFilterAction(const string& _filterAction)
{
    m_filterAction = _filterAction;
    m_filterActionHasBeenSet = true;
}

bool DescribeScdnBotRecordsRequest::FilterActionHasBeenSet() const
{
    return m_filterActionHasBeenSet;
}

string DescribeScdnBotRecordsRequest::GetFilterIp() const
{
    return m_filterIp;
}

void DescribeScdnBotRecordsRequest::SetFilterIp(const string& _filterIp)
{
    m_filterIp = _filterIp;
    m_filterIpHasBeenSet = true;
}

bool DescribeScdnBotRecordsRequest::FilterIpHasBeenSet() const
{
    return m_filterIpHasBeenSet;
}

vector<string> DescribeScdnBotRecordsRequest::GetDomains() const
{
    return m_domains;
}

void DescribeScdnBotRecordsRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool DescribeScdnBotRecordsRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}



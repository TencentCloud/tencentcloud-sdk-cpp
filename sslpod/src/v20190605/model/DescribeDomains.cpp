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

#include <tencentcloud/sslpod/v20190605/model/DescribeDomains.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sslpod::V20190605::Model;
using namespace std;

DescribeDomains::DescribeDomains() :
    m_resultHasBeenSet(false),
    m_searchTotalHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_allowMonitoringCountHasBeenSet(false),
    m_currentMonitoringCountHasBeenSet(false),
    m_allowMaxAddDomainHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDomains::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeDomains.Result` is not array type"));

        const rapidjson::Value &tmpValue = value["Result"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DomainSiteInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_result.push_back(item);
        }
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("SearchTotal") && !value["SearchTotal"].IsNull())
    {
        if (!value["SearchTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDomains.SearchTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_searchTotal = value["SearchTotal"].GetInt64();
        m_searchTotalHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDomains.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("AllowMonitoringCount") && !value["AllowMonitoringCount"].IsNull())
    {
        if (!value["AllowMonitoringCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDomains.AllowMonitoringCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allowMonitoringCount = value["AllowMonitoringCount"].GetInt64();
        m_allowMonitoringCountHasBeenSet = true;
    }

    if (value.HasMember("CurrentMonitoringCount") && !value["CurrentMonitoringCount"].IsNull())
    {
        if (!value["CurrentMonitoringCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDomains.CurrentMonitoringCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentMonitoringCount = value["CurrentMonitoringCount"].GetInt64();
        m_currentMonitoringCountHasBeenSet = true;
    }

    if (value.HasMember("AllowMaxAddDomain") && !value["AllowMaxAddDomain"].IsNull())
    {
        if (!value["AllowMaxAddDomain"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDomains.AllowMaxAddDomain` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allowMaxAddDomain = value["AllowMaxAddDomain"].GetInt64();
        m_allowMaxAddDomainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDomains::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_result.begin(); itr != m_result.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_searchTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_searchTotal, allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_allowMonitoringCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowMonitoringCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowMonitoringCount, allocator);
    }

    if (m_currentMonitoringCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentMonitoringCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentMonitoringCount, allocator);
    }

    if (m_allowMaxAddDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowMaxAddDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowMaxAddDomain, allocator);
    }

}


vector<DomainSiteInfo> DescribeDomains::GetResult() const
{
    return m_result;
}

void DescribeDomains::SetResult(const vector<DomainSiteInfo>& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool DescribeDomains::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

int64_t DescribeDomains::GetSearchTotal() const
{
    return m_searchTotal;
}

void DescribeDomains::SetSearchTotal(const int64_t& _searchTotal)
{
    m_searchTotal = _searchTotal;
    m_searchTotalHasBeenSet = true;
}

bool DescribeDomains::SearchTotalHasBeenSet() const
{
    return m_searchTotalHasBeenSet;
}

int64_t DescribeDomains::GetTotal() const
{
    return m_total;
}

void DescribeDomains::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool DescribeDomains::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t DescribeDomains::GetAllowMonitoringCount() const
{
    return m_allowMonitoringCount;
}

void DescribeDomains::SetAllowMonitoringCount(const int64_t& _allowMonitoringCount)
{
    m_allowMonitoringCount = _allowMonitoringCount;
    m_allowMonitoringCountHasBeenSet = true;
}

bool DescribeDomains::AllowMonitoringCountHasBeenSet() const
{
    return m_allowMonitoringCountHasBeenSet;
}

int64_t DescribeDomains::GetCurrentMonitoringCount() const
{
    return m_currentMonitoringCount;
}

void DescribeDomains::SetCurrentMonitoringCount(const int64_t& _currentMonitoringCount)
{
    m_currentMonitoringCount = _currentMonitoringCount;
    m_currentMonitoringCountHasBeenSet = true;
}

bool DescribeDomains::CurrentMonitoringCountHasBeenSet() const
{
    return m_currentMonitoringCountHasBeenSet;
}

int64_t DescribeDomains::GetAllowMaxAddDomain() const
{
    return m_allowMaxAddDomain;
}

void DescribeDomains::SetAllowMaxAddDomain(const int64_t& _allowMaxAddDomain)
{
    m_allowMaxAddDomain = _allowMaxAddDomain;
    m_allowMaxAddDomainHasBeenSet = true;
}

bool DescribeDomains::AllowMaxAddDomainHasBeenSet() const
{
    return m_allowMaxAddDomainHasBeenSet;
}


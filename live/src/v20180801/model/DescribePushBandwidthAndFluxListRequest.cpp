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

#include <tencentcloud/live/v20180801/model/DescribePushBandwidthAndFluxListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribePushBandwidthAndFluxListRequest::DescribePushBandwidthAndFluxListRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_pushDomainsHasBeenSet(false),
    m_mainlandOrOverseaHasBeenSet(false),
    m_granularityHasBeenSet(false),
    m_regionNamesHasBeenSet(false),
    m_countryNamesHasBeenSet(false)
{
}

string DescribePushBandwidthAndFluxListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_pushDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushDomains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_pushDomains.begin(); itr != m_pushDomains.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_mainlandOrOverseaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainlandOrOversea";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mainlandOrOversea.c_str(), allocator).Move(), allocator);
    }

    if (m_granularityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Granularity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_granularity, allocator);
    }

    if (m_regionNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_regionNames.begin(); itr != m_regionNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_countryNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_countryNames.begin(); itr != m_countryNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePushBandwidthAndFluxListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribePushBandwidthAndFluxListRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribePushBandwidthAndFluxListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribePushBandwidthAndFluxListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribePushBandwidthAndFluxListRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribePushBandwidthAndFluxListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> DescribePushBandwidthAndFluxListRequest::GetPushDomains() const
{
    return m_pushDomains;
}

void DescribePushBandwidthAndFluxListRequest::SetPushDomains(const vector<string>& _pushDomains)
{
    m_pushDomains = _pushDomains;
    m_pushDomainsHasBeenSet = true;
}

bool DescribePushBandwidthAndFluxListRequest::PushDomainsHasBeenSet() const
{
    return m_pushDomainsHasBeenSet;
}

string DescribePushBandwidthAndFluxListRequest::GetMainlandOrOversea() const
{
    return m_mainlandOrOversea;
}

void DescribePushBandwidthAndFluxListRequest::SetMainlandOrOversea(const string& _mainlandOrOversea)
{
    m_mainlandOrOversea = _mainlandOrOversea;
    m_mainlandOrOverseaHasBeenSet = true;
}

bool DescribePushBandwidthAndFluxListRequest::MainlandOrOverseaHasBeenSet() const
{
    return m_mainlandOrOverseaHasBeenSet;
}

uint64_t DescribePushBandwidthAndFluxListRequest::GetGranularity() const
{
    return m_granularity;
}

void DescribePushBandwidthAndFluxListRequest::SetGranularity(const uint64_t& _granularity)
{
    m_granularity = _granularity;
    m_granularityHasBeenSet = true;
}

bool DescribePushBandwidthAndFluxListRequest::GranularityHasBeenSet() const
{
    return m_granularityHasBeenSet;
}

vector<string> DescribePushBandwidthAndFluxListRequest::GetRegionNames() const
{
    return m_regionNames;
}

void DescribePushBandwidthAndFluxListRequest::SetRegionNames(const vector<string>& _regionNames)
{
    m_regionNames = _regionNames;
    m_regionNamesHasBeenSet = true;
}

bool DescribePushBandwidthAndFluxListRequest::RegionNamesHasBeenSet() const
{
    return m_regionNamesHasBeenSet;
}

vector<string> DescribePushBandwidthAndFluxListRequest::GetCountryNames() const
{
    return m_countryNames;
}

void DescribePushBandwidthAndFluxListRequest::SetCountryNames(const vector<string>& _countryNames)
{
    m_countryNames = _countryNames;
    m_countryNamesHasBeenSet = true;
}

bool DescribePushBandwidthAndFluxListRequest::CountryNamesHasBeenSet() const
{
    return m_countryNamesHasBeenSet;
}



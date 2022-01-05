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

#include <tencentcloud/live/v20180801/model/DescribeBillBandwidthAndFluxListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeBillBandwidthAndFluxListRequest::DescribeBillBandwidthAndFluxListRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_playDomainsHasBeenSet(false),
    m_mainlandOrOverseaHasBeenSet(false),
    m_granularityHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_regionNamesHasBeenSet(false)
{
}

string DescribeBillBandwidthAndFluxListRequest::ToJsonString() const
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

    if (m_playDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayDomains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_playDomains.begin(); itr != m_playDomains.end(); ++itr)
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

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBillBandwidthAndFluxListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeBillBandwidthAndFluxListRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeBillBandwidthAndFluxListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeBillBandwidthAndFluxListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeBillBandwidthAndFluxListRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeBillBandwidthAndFluxListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> DescribeBillBandwidthAndFluxListRequest::GetPlayDomains() const
{
    return m_playDomains;
}

void DescribeBillBandwidthAndFluxListRequest::SetPlayDomains(const vector<string>& _playDomains)
{
    m_playDomains = _playDomains;
    m_playDomainsHasBeenSet = true;
}

bool DescribeBillBandwidthAndFluxListRequest::PlayDomainsHasBeenSet() const
{
    return m_playDomainsHasBeenSet;
}

string DescribeBillBandwidthAndFluxListRequest::GetMainlandOrOversea() const
{
    return m_mainlandOrOversea;
}

void DescribeBillBandwidthAndFluxListRequest::SetMainlandOrOversea(const string& _mainlandOrOversea)
{
    m_mainlandOrOversea = _mainlandOrOversea;
    m_mainlandOrOverseaHasBeenSet = true;
}

bool DescribeBillBandwidthAndFluxListRequest::MainlandOrOverseaHasBeenSet() const
{
    return m_mainlandOrOverseaHasBeenSet;
}

uint64_t DescribeBillBandwidthAndFluxListRequest::GetGranularity() const
{
    return m_granularity;
}

void DescribeBillBandwidthAndFluxListRequest::SetGranularity(const uint64_t& _granularity)
{
    m_granularity = _granularity;
    m_granularityHasBeenSet = true;
}

bool DescribeBillBandwidthAndFluxListRequest::GranularityHasBeenSet() const
{
    return m_granularityHasBeenSet;
}

string DescribeBillBandwidthAndFluxListRequest::GetServiceName() const
{
    return m_serviceName;
}

void DescribeBillBandwidthAndFluxListRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool DescribeBillBandwidthAndFluxListRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

vector<string> DescribeBillBandwidthAndFluxListRequest::GetRegionNames() const
{
    return m_regionNames;
}

void DescribeBillBandwidthAndFluxListRequest::SetRegionNames(const vector<string>& _regionNames)
{
    m_regionNames = _regionNames;
    m_regionNamesHasBeenSet = true;
}

bool DescribeBillBandwidthAndFluxListRequest::RegionNamesHasBeenSet() const
{
    return m_regionNamesHasBeenSet;
}



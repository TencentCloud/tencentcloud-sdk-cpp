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

#include <tencentcloud/vod/v20180717/model/DescribeCDNStatDetailsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

DescribeCDNStatDetailsRequest::DescribeCDNStatDetailsRequest() :
    m_metricHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_domainNamesHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_districtsHasBeenSet(false),
    m_ispsHasBeenSet(false),
    m_dataIntervalHasBeenSet(false),
    m_subAppIdHasBeenSet(false)
{
}

string DescribeCDNStatDetailsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_metricHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNamesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_domainNames.begin(); itr != m_domainNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_areaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_districtsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Districts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_districts.begin(); itr != m_districts.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ispsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Isps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_isps.begin(); itr != m_isps.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dataIntervalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DataInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataInterval, allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCDNStatDetailsRequest::GetMetric() const
{
    return m_metric;
}

void DescribeCDNStatDetailsRequest::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool DescribeCDNStatDetailsRequest::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

string DescribeCDNStatDetailsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeCDNStatDetailsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeCDNStatDetailsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeCDNStatDetailsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeCDNStatDetailsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeCDNStatDetailsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> DescribeCDNStatDetailsRequest::GetDomainNames() const
{
    return m_domainNames;
}

void DescribeCDNStatDetailsRequest::SetDomainNames(const vector<string>& _domainNames)
{
    m_domainNames = _domainNames;
    m_domainNamesHasBeenSet = true;
}

bool DescribeCDNStatDetailsRequest::DomainNamesHasBeenSet() const
{
    return m_domainNamesHasBeenSet;
}

string DescribeCDNStatDetailsRequest::GetArea() const
{
    return m_area;
}

void DescribeCDNStatDetailsRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool DescribeCDNStatDetailsRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

vector<string> DescribeCDNStatDetailsRequest::GetDistricts() const
{
    return m_districts;
}

void DescribeCDNStatDetailsRequest::SetDistricts(const vector<string>& _districts)
{
    m_districts = _districts;
    m_districtsHasBeenSet = true;
}

bool DescribeCDNStatDetailsRequest::DistrictsHasBeenSet() const
{
    return m_districtsHasBeenSet;
}

vector<string> DescribeCDNStatDetailsRequest::GetIsps() const
{
    return m_isps;
}

void DescribeCDNStatDetailsRequest::SetIsps(const vector<string>& _isps)
{
    m_isps = _isps;
    m_ispsHasBeenSet = true;
}

bool DescribeCDNStatDetailsRequest::IspsHasBeenSet() const
{
    return m_ispsHasBeenSet;
}

uint64_t DescribeCDNStatDetailsRequest::GetDataInterval() const
{
    return m_dataInterval;
}

void DescribeCDNStatDetailsRequest::SetDataInterval(const uint64_t& _dataInterval)
{
    m_dataInterval = _dataInterval;
    m_dataIntervalHasBeenSet = true;
}

bool DescribeCDNStatDetailsRequest::DataIntervalHasBeenSet() const
{
    return m_dataIntervalHasBeenSet;
}

uint64_t DescribeCDNStatDetailsRequest::GetSubAppId() const
{
    return m_subAppId;
}

void DescribeCDNStatDetailsRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool DescribeCDNStatDetailsRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}



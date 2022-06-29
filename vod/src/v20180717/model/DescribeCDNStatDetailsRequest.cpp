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
using namespace std;

DescribeCDNStatDetailsRequest::DescribeCDNStatDetailsRequest() :
    m_metricHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_domainNamesHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_districtsHasBeenSet(false),
    m_ispsHasBeenSet(false),
    m_dataIntervalHasBeenSet(false)
{
}

string DescribeCDNStatDetailsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
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

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_domainNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domainNames.begin(); itr != m_domainNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_districtsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Districts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_districts.begin(); itr != m_districts.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ispsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_isps.begin(); itr != m_isps.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dataIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataInterval, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
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



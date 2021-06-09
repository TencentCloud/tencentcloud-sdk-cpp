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

#include <tencentcloud/cdn/v20180606/model/DescribeDistrictIspDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

DescribeDistrictIspDataRequest::DescribeDistrictIspDataRequest() :
    m_domainsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_districtsHasBeenSet(false),
    m_ispsHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_ipProtocolHasBeenSet(false),
    m_intervalHasBeenSet(false)
{
}

string DescribeDistrictIspDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_districtsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Districts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_districts.begin(); itr != m_districts.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
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
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_ipProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ipProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_interval.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeDistrictIspDataRequest::GetDomains() const
{
    return m_domains;
}

void DescribeDistrictIspDataRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool DescribeDistrictIspDataRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

string DescribeDistrictIspDataRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeDistrictIspDataRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeDistrictIspDataRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeDistrictIspDataRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeDistrictIspDataRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeDistrictIspDataRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeDistrictIspDataRequest::GetMetric() const
{
    return m_metric;
}

void DescribeDistrictIspDataRequest::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool DescribeDistrictIspDataRequest::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

vector<int64_t> DescribeDistrictIspDataRequest::GetDistricts() const
{
    return m_districts;
}

void DescribeDistrictIspDataRequest::SetDistricts(const vector<int64_t>& _districts)
{
    m_districts = _districts;
    m_districtsHasBeenSet = true;
}

bool DescribeDistrictIspDataRequest::DistrictsHasBeenSet() const
{
    return m_districtsHasBeenSet;
}

vector<int64_t> DescribeDistrictIspDataRequest::GetIsps() const
{
    return m_isps;
}

void DescribeDistrictIspDataRequest::SetIsps(const vector<int64_t>& _isps)
{
    m_isps = _isps;
    m_ispsHasBeenSet = true;
}

bool DescribeDistrictIspDataRequest::IspsHasBeenSet() const
{
    return m_ispsHasBeenSet;
}

string DescribeDistrictIspDataRequest::GetProtocol() const
{
    return m_protocol;
}

void DescribeDistrictIspDataRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DescribeDistrictIspDataRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string DescribeDistrictIspDataRequest::GetIpProtocol() const
{
    return m_ipProtocol;
}

void DescribeDistrictIspDataRequest::SetIpProtocol(const string& _ipProtocol)
{
    m_ipProtocol = _ipProtocol;
    m_ipProtocolHasBeenSet = true;
}

bool DescribeDistrictIspDataRequest::IpProtocolHasBeenSet() const
{
    return m_ipProtocolHasBeenSet;
}

string DescribeDistrictIspDataRequest::GetInterval() const
{
    return m_interval;
}

void DescribeDistrictIspDataRequest::SetInterval(const string& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool DescribeDistrictIspDataRequest::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}



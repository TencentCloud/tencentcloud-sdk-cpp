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

#include <tencentcloud/cdn/v20180606/model/DescribeCdnDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

DescribeCdnDataRequest::DescribeCdnDataRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_districtHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_ipProtocolHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_areaTypeHasBeenSet(false),
    m_productHasBeenSet(false),
    m_timeZoneHasBeenSet(false)
{
}

string DescribeCdnDataRequest::ToJsonString() const
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

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
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

    if (m_projectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Project";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_project, allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_interval.c_str(), allocator).Move(), allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_detail, allocator);
    }

    if (m_ispHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isp, allocator);
    }

    if (m_districtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "District";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_district, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataSource.c_str(), allocator).Move(), allocator);
    }

    if (m_ipProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ipProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_areaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_areaType.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeZone.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCdnDataRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeCdnDataRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeCdnDataRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeCdnDataRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeCdnDataRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeCdnDataRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeCdnDataRequest::GetMetric() const
{
    return m_metric;
}

void DescribeCdnDataRequest::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool DescribeCdnDataRequest::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

vector<string> DescribeCdnDataRequest::GetDomains() const
{
    return m_domains;
}

void DescribeCdnDataRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool DescribeCdnDataRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

int64_t DescribeCdnDataRequest::GetProject() const
{
    return m_project;
}

void DescribeCdnDataRequest::SetProject(const int64_t& _project)
{
    m_project = _project;
    m_projectHasBeenSet = true;
}

bool DescribeCdnDataRequest::ProjectHasBeenSet() const
{
    return m_projectHasBeenSet;
}

string DescribeCdnDataRequest::GetInterval() const
{
    return m_interval;
}

void DescribeCdnDataRequest::SetInterval(const string& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool DescribeCdnDataRequest::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

bool DescribeCdnDataRequest::GetDetail() const
{
    return m_detail;
}

void DescribeCdnDataRequest::SetDetail(const bool& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool DescribeCdnDataRequest::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

int64_t DescribeCdnDataRequest::GetIsp() const
{
    return m_isp;
}

void DescribeCdnDataRequest::SetIsp(const int64_t& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool DescribeCdnDataRequest::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

int64_t DescribeCdnDataRequest::GetDistrict() const
{
    return m_district;
}

void DescribeCdnDataRequest::SetDistrict(const int64_t& _district)
{
    m_district = _district;
    m_districtHasBeenSet = true;
}

bool DescribeCdnDataRequest::DistrictHasBeenSet() const
{
    return m_districtHasBeenSet;
}

string DescribeCdnDataRequest::GetProtocol() const
{
    return m_protocol;
}

void DescribeCdnDataRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DescribeCdnDataRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string DescribeCdnDataRequest::GetDataSource() const
{
    return m_dataSource;
}

void DescribeCdnDataRequest::SetDataSource(const string& _dataSource)
{
    m_dataSource = _dataSource;
    m_dataSourceHasBeenSet = true;
}

bool DescribeCdnDataRequest::DataSourceHasBeenSet() const
{
    return m_dataSourceHasBeenSet;
}

string DescribeCdnDataRequest::GetIpProtocol() const
{
    return m_ipProtocol;
}

void DescribeCdnDataRequest::SetIpProtocol(const string& _ipProtocol)
{
    m_ipProtocol = _ipProtocol;
    m_ipProtocolHasBeenSet = true;
}

bool DescribeCdnDataRequest::IpProtocolHasBeenSet() const
{
    return m_ipProtocolHasBeenSet;
}

string DescribeCdnDataRequest::GetArea() const
{
    return m_area;
}

void DescribeCdnDataRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool DescribeCdnDataRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string DescribeCdnDataRequest::GetAreaType() const
{
    return m_areaType;
}

void DescribeCdnDataRequest::SetAreaType(const string& _areaType)
{
    m_areaType = _areaType;
    m_areaTypeHasBeenSet = true;
}

bool DescribeCdnDataRequest::AreaTypeHasBeenSet() const
{
    return m_areaTypeHasBeenSet;
}

string DescribeCdnDataRequest::GetProduct() const
{
    return m_product;
}

void DescribeCdnDataRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeCdnDataRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string DescribeCdnDataRequest::GetTimeZone() const
{
    return m_timeZone;
}

void DescribeCdnDataRequest::SetTimeZone(const string& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool DescribeCdnDataRequest::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}



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

#include <tencentcloud/cdn/v20180606/model/DescribeBillingDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

DescribeBillingDataRequest::DescribeBillingDataRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_districtHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_productHasBeenSet(false),
    m_timeZoneHasBeenSet(false)
{
}

string DescribeBillingDataRequest::ToJsonString() const
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

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_interval.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_projectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Project";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_project, allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_districtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "District";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_district, allocator);
    }

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
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


string DescribeBillingDataRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeBillingDataRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeBillingDataRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeBillingDataRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeBillingDataRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeBillingDataRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeBillingDataRequest::GetInterval() const
{
    return m_interval;
}

void DescribeBillingDataRequest::SetInterval(const string& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool DescribeBillingDataRequest::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

string DescribeBillingDataRequest::GetDomain() const
{
    return m_domain;
}

void DescribeBillingDataRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeBillingDataRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

int64_t DescribeBillingDataRequest::GetProject() const
{
    return m_project;
}

void DescribeBillingDataRequest::SetProject(const int64_t& _project)
{
    m_project = _project;
    m_projectHasBeenSet = true;
}

bool DescribeBillingDataRequest::ProjectHasBeenSet() const
{
    return m_projectHasBeenSet;
}

string DescribeBillingDataRequest::GetArea() const
{
    return m_area;
}

void DescribeBillingDataRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool DescribeBillingDataRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

int64_t DescribeBillingDataRequest::GetDistrict() const
{
    return m_district;
}

void DescribeBillingDataRequest::SetDistrict(const int64_t& _district)
{
    m_district = _district;
    m_districtHasBeenSet = true;
}

bool DescribeBillingDataRequest::DistrictHasBeenSet() const
{
    return m_districtHasBeenSet;
}

string DescribeBillingDataRequest::GetMetric() const
{
    return m_metric;
}

void DescribeBillingDataRequest::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool DescribeBillingDataRequest::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

string DescribeBillingDataRequest::GetProduct() const
{
    return m_product;
}

void DescribeBillingDataRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeBillingDataRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string DescribeBillingDataRequest::GetTimeZone() const
{
    return m_timeZone;
}

void DescribeBillingDataRequest::SetTimeZone(const string& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool DescribeBillingDataRequest::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}



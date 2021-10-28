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

#include <tencentcloud/cdn/v20180606/model/DescribeTopDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

DescribeTopDataRequest::DescribeTopDataRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_productHasBeenSet(false)
{
}

string DescribeTopDataRequest::ToJsonString() const
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

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filter.c_str(), allocator).Move(), allocator);
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

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_detail, allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTopDataRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTopDataRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTopDataRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeTopDataRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTopDataRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTopDataRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeTopDataRequest::GetMetric() const
{
    return m_metric;
}

void DescribeTopDataRequest::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool DescribeTopDataRequest::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

string DescribeTopDataRequest::GetFilter() const
{
    return m_filter;
}

void DescribeTopDataRequest::SetFilter(const string& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeTopDataRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

vector<string> DescribeTopDataRequest::GetDomains() const
{
    return m_domains;
}

void DescribeTopDataRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool DescribeTopDataRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

int64_t DescribeTopDataRequest::GetProject() const
{
    return m_project;
}

void DescribeTopDataRequest::SetProject(const int64_t& _project)
{
    m_project = _project;
    m_projectHasBeenSet = true;
}

bool DescribeTopDataRequest::ProjectHasBeenSet() const
{
    return m_projectHasBeenSet;
}

bool DescribeTopDataRequest::GetDetail() const
{
    return m_detail;
}

void DescribeTopDataRequest::SetDetail(const bool& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool DescribeTopDataRequest::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

string DescribeTopDataRequest::GetArea() const
{
    return m_area;
}

void DescribeTopDataRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool DescribeTopDataRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string DescribeTopDataRequest::GetProduct() const
{
    return m_product;
}

void DescribeTopDataRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeTopDataRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}



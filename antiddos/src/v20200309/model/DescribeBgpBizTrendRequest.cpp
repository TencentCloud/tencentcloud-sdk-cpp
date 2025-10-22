/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/antiddos/v20200309/model/DescribeBgpBizTrendRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DescribeBgpBizTrendRequest::DescribeBgpBizTrendRequest() :
    m_businessHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_flagHasBeenSet(false)
{
}

string DescribeBgpBizTrendRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
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

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_flagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_flag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBgpBizTrendRequest::GetBusiness() const
{
    return m_business;
}

void DescribeBgpBizTrendRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool DescribeBgpBizTrendRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string DescribeBgpBizTrendRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeBgpBizTrendRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeBgpBizTrendRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeBgpBizTrendRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeBgpBizTrendRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeBgpBizTrendRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeBgpBizTrendRequest::GetMetricName() const
{
    return m_metricName;
}

void DescribeBgpBizTrendRequest::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool DescribeBgpBizTrendRequest::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

string DescribeBgpBizTrendRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeBgpBizTrendRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeBgpBizTrendRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t DescribeBgpBizTrendRequest::GetFlag() const
{
    return m_flag;
}

void DescribeBgpBizTrendRequest::SetFlag(const uint64_t& _flag)
{
    m_flag = _flag;
    m_flagHasBeenSet = true;
}

bool DescribeBgpBizTrendRequest::FlagHasBeenSet() const
{
    return m_flagHasBeenSet;
}



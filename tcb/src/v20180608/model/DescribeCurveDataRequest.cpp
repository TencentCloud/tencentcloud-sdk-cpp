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

#include <tencentcloud/tcb/v20180608/model/DescribeCurveDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeCurveDataRequest::DescribeCurveDataRequest() :
    m_envIdHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_resourceIDHasBeenSet(false),
    m_wxAppIdHasBeenSet(false),
    m_subresourceIDHasBeenSet(false),
    m_thirdResourceHasBeenSet(false),
    m_periodHasBeenSet(false)
{
}

string DescribeCurveDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
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

    if (m_resourceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceID.c_str(), allocator).Move(), allocator);
    }

    if (m_wxAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wxAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_subresourceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubresourceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subresourceID.c_str(), allocator).Move(), allocator);
    }

    if (m_thirdResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirdResource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_thirdResource.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCurveDataRequest::GetEnvId() const
{
    return m_envId;
}

void DescribeCurveDataRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DescribeCurveDataRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DescribeCurveDataRequest::GetMetricName() const
{
    return m_metricName;
}

void DescribeCurveDataRequest::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool DescribeCurveDataRequest::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

string DescribeCurveDataRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeCurveDataRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeCurveDataRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeCurveDataRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeCurveDataRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeCurveDataRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeCurveDataRequest::GetResourceID() const
{
    return m_resourceID;
}

void DescribeCurveDataRequest::SetResourceID(const string& _resourceID)
{
    m_resourceID = _resourceID;
    m_resourceIDHasBeenSet = true;
}

bool DescribeCurveDataRequest::ResourceIDHasBeenSet() const
{
    return m_resourceIDHasBeenSet;
}

string DescribeCurveDataRequest::GetWxAppId() const
{
    return m_wxAppId;
}

void DescribeCurveDataRequest::SetWxAppId(const string& _wxAppId)
{
    m_wxAppId = _wxAppId;
    m_wxAppIdHasBeenSet = true;
}

bool DescribeCurveDataRequest::WxAppIdHasBeenSet() const
{
    return m_wxAppIdHasBeenSet;
}

string DescribeCurveDataRequest::GetSubresourceID() const
{
    return m_subresourceID;
}

void DescribeCurveDataRequest::SetSubresourceID(const string& _subresourceID)
{
    m_subresourceID = _subresourceID;
    m_subresourceIDHasBeenSet = true;
}

bool DescribeCurveDataRequest::SubresourceIDHasBeenSet() const
{
    return m_subresourceIDHasBeenSet;
}

string DescribeCurveDataRequest::GetThirdResource() const
{
    return m_thirdResource;
}

void DescribeCurveDataRequest::SetThirdResource(const string& _thirdResource)
{
    m_thirdResource = _thirdResource;
    m_thirdResourceHasBeenSet = true;
}

bool DescribeCurveDataRequest::ThirdResourceHasBeenSet() const
{
    return m_thirdResourceHasBeenSet;
}

uint64_t DescribeCurveDataRequest::GetPeriod() const
{
    return m_period;
}

void DescribeCurveDataRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool DescribeCurveDataRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}



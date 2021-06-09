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

#include <tencentcloud/cds/v20180420/model/InquiryPriceDbauditInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cds::V20180420::Model;
using namespace std;

InquiryPriceDbauditInstanceRequest::InquiryPriceDbauditInstanceRequest() :
    m_instanceVersionHasBeenSet(false),
    m_inquiryTypeHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_serviceRegionHasBeenSet(false)
{
}

string InquiryPriceDbauditInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_inquiryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InquiryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inquiryType.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceRegion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InquiryPriceDbauditInstanceRequest::GetInstanceVersion() const
{
    return m_instanceVersion;
}

void InquiryPriceDbauditInstanceRequest::SetInstanceVersion(const string& _instanceVersion)
{
    m_instanceVersion = _instanceVersion;
    m_instanceVersionHasBeenSet = true;
}

bool InquiryPriceDbauditInstanceRequest::InstanceVersionHasBeenSet() const
{
    return m_instanceVersionHasBeenSet;
}

string InquiryPriceDbauditInstanceRequest::GetInquiryType() const
{
    return m_inquiryType;
}

void InquiryPriceDbauditInstanceRequest::SetInquiryType(const string& _inquiryType)
{
    m_inquiryType = _inquiryType;
    m_inquiryTypeHasBeenSet = true;
}

bool InquiryPriceDbauditInstanceRequest::InquiryTypeHasBeenSet() const
{
    return m_inquiryTypeHasBeenSet;
}

uint64_t InquiryPriceDbauditInstanceRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void InquiryPriceDbauditInstanceRequest::SetTimeSpan(const uint64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool InquiryPriceDbauditInstanceRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string InquiryPriceDbauditInstanceRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void InquiryPriceDbauditInstanceRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool InquiryPriceDbauditInstanceRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string InquiryPriceDbauditInstanceRequest::GetServiceRegion() const
{
    return m_serviceRegion;
}

void InquiryPriceDbauditInstanceRequest::SetServiceRegion(const string& _serviceRegion)
{
    m_serviceRegion = _serviceRegion;
    m_serviceRegionHasBeenSet = true;
}

bool InquiryPriceDbauditInstanceRequest::ServiceRegionHasBeenSet() const
{
    return m_serviceRegionHasBeenSet;
}



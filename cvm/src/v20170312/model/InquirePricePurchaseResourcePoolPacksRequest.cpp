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

#include <tencentcloud/cvm/v20170312/model/InquirePricePurchaseResourcePoolPacksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

InquirePricePurchaseResourcePoolPacksRequest::InquirePricePurchaseResourcePoolPacksRequest() :
    m_zoneHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_periodHasBeenSet(false)
{
}

string InquirePricePurchaseResourcePoolPacksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceCount, allocator);
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


string InquirePricePurchaseResourcePoolPacksRequest::GetZone() const
{
    return m_zone;
}

void InquirePricePurchaseResourcePoolPacksRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InquirePricePurchaseResourcePoolPacksRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string InquirePricePurchaseResourcePoolPacksRequest::GetInstanceType() const
{
    return m_instanceType;
}

void InquirePricePurchaseResourcePoolPacksRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InquirePricePurchaseResourcePoolPacksRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t InquirePricePurchaseResourcePoolPacksRequest::GetInstanceCount() const
{
    return m_instanceCount;
}

void InquirePricePurchaseResourcePoolPacksRequest::SetInstanceCount(const int64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool InquirePricePurchaseResourcePoolPacksRequest::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

int64_t InquirePricePurchaseResourcePoolPacksRequest::GetPeriod() const
{
    return m_period;
}

void InquirePricePurchaseResourcePoolPacksRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool InquirePricePurchaseResourcePoolPacksRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}



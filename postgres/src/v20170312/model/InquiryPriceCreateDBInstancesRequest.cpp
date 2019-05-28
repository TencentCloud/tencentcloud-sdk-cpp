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

#include <tencentcloud/postgres/v20170312/model/InquiryPriceCreateDBInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace rapidjson;
using namespace std;

InquiryPriceCreateDBInstancesRequest::InquiryPriceCreateDBInstancesRequest() :
    m_zoneHasBeenSet(false),
    m_specCodeHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false)
{
}

string InquiryPriceCreateDBInstancesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_specCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SpecCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_specCode.c_str(), allocator).Move(), allocator);
    }

    if (m_storageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storage, allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_periodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_pidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pid, allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InquiryPriceCreateDBInstancesRequest::GetZone() const
{
    return m_zone;
}

void InquiryPriceCreateDBInstancesRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string InquiryPriceCreateDBInstancesRequest::GetSpecCode() const
{
    return m_specCode;
}

void InquiryPriceCreateDBInstancesRequest::SetSpecCode(const string& _specCode)
{
    m_specCode = _specCode;
    m_specCodeHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::SpecCodeHasBeenSet() const
{
    return m_specCodeHasBeenSet;
}

uint64_t InquiryPriceCreateDBInstancesRequest::GetStorage() const
{
    return m_storage;
}

void InquiryPriceCreateDBInstancesRequest::SetStorage(const uint64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

uint64_t InquiryPriceCreateDBInstancesRequest::GetInstanceCount() const
{
    return m_instanceCount;
}

void InquiryPriceCreateDBInstancesRequest::SetInstanceCount(const uint64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

uint64_t InquiryPriceCreateDBInstancesRequest::GetPeriod() const
{
    return m_period;
}

void InquiryPriceCreateDBInstancesRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

uint64_t InquiryPriceCreateDBInstancesRequest::GetPid() const
{
    return m_pid;
}

void InquiryPriceCreateDBInstancesRequest::SetPid(const uint64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string InquiryPriceCreateDBInstancesRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void InquiryPriceCreateDBInstancesRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}



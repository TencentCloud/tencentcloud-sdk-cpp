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

#include <tencentcloud/dayu/v20180709/model/ModifyDDoSDefendStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace rapidjson;
using namespace std;

ModifyDDoSDefendStatusRequest::ModifyDDoSDefendStatusRequest() :
    m_businessHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_hourHasBeenSet(false),
    m_idHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_bizTypeHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_iPRegionHasBeenSet(false)
{
}

string ModifyDDoSDefendStatusRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_hourHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Hour";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hour, allocator);
    }

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_bizTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_bizType.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_iPRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IPRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_iPRegion.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDDoSDefendStatusRequest::GetBusiness() const
{
    return m_business;
}

void ModifyDDoSDefendStatusRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool ModifyDDoSDefendStatusRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

uint64_t ModifyDDoSDefendStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifyDDoSDefendStatusRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyDDoSDefendStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ModifyDDoSDefendStatusRequest::GetHour() const
{
    return m_hour;
}

void ModifyDDoSDefendStatusRequest::SetHour(const int64_t& _hour)
{
    m_hour = _hour;
    m_hourHasBeenSet = true;
}

bool ModifyDDoSDefendStatusRequest::HourHasBeenSet() const
{
    return m_hourHasBeenSet;
}

string ModifyDDoSDefendStatusRequest::GetId() const
{
    return m_id;
}

void ModifyDDoSDefendStatusRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyDDoSDefendStatusRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyDDoSDefendStatusRequest::GetIp() const
{
    return m_ip;
}

void ModifyDDoSDefendStatusRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool ModifyDDoSDefendStatusRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string ModifyDDoSDefendStatusRequest::GetBizType() const
{
    return m_bizType;
}

void ModifyDDoSDefendStatusRequest::SetBizType(const string& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool ModifyDDoSDefendStatusRequest::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string ModifyDDoSDefendStatusRequest::GetDeviceType() const
{
    return m_deviceType;
}

void ModifyDDoSDefendStatusRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool ModifyDDoSDefendStatusRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string ModifyDDoSDefendStatusRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyDDoSDefendStatusRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyDDoSDefendStatusRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyDDoSDefendStatusRequest::GetIPRegion() const
{
    return m_iPRegion;
}

void ModifyDDoSDefendStatusRequest::SetIPRegion(const string& _iPRegion)
{
    m_iPRegion = _iPRegion;
    m_iPRegionHasBeenSet = true;
}

bool ModifyDDoSDefendStatusRequest::IPRegionHasBeenSet() const
{
    return m_iPRegionHasBeenSet;
}



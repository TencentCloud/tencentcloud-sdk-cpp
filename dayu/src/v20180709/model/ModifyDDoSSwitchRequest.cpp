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

#include <tencentcloud/dayu/v20180709/model/ModifyDDoSSwitchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace rapidjson;
using namespace std;

ModifyDDoSSwitchRequest::ModifyDDoSSwitchRequest() :
    m_businessHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_bizTypeHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_iPRegionHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string ModifyDDoSSwitchRequest::ToJsonString() const
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

    if (m_methodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_method.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDDoSSwitchRequest::GetBusiness() const
{
    return m_business;
}

void ModifyDDoSSwitchRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool ModifyDDoSSwitchRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string ModifyDDoSSwitchRequest::GetMethod() const
{
    return m_method;
}

void ModifyDDoSSwitchRequest::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool ModifyDDoSSwitchRequest::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string ModifyDDoSSwitchRequest::GetIp() const
{
    return m_ip;
}

void ModifyDDoSSwitchRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool ModifyDDoSSwitchRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string ModifyDDoSSwitchRequest::GetBizType() const
{
    return m_bizType;
}

void ModifyDDoSSwitchRequest::SetBizType(const string& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool ModifyDDoSSwitchRequest::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string ModifyDDoSSwitchRequest::GetDeviceType() const
{
    return m_deviceType;
}

void ModifyDDoSSwitchRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool ModifyDDoSSwitchRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string ModifyDDoSSwitchRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyDDoSSwitchRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyDDoSSwitchRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyDDoSSwitchRequest::GetIPRegion() const
{
    return m_iPRegion;
}

void ModifyDDoSSwitchRequest::SetIPRegion(const string& _iPRegion)
{
    m_iPRegion = _iPRegion;
    m_iPRegionHasBeenSet = true;
}

bool ModifyDDoSSwitchRequest::IPRegionHasBeenSet() const
{
    return m_iPRegionHasBeenSet;
}

uint64_t ModifyDDoSSwitchRequest::GetStatus() const
{
    return m_status;
}

void ModifyDDoSSwitchRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyDDoSSwitchRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}



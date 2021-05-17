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

#include <tencentcloud/mna/v20210119/model/CreateQosRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mna::V20210119::Model;
using namespace rapidjson;
using namespace std;

CreateQosRequest::CreateQosRequest() :
    m_srcAddressInfoHasBeenSet(false),
    m_destAddressInfoHasBeenSet(false),
    m_qosMenuHasBeenSet(false),
    m_deviceInfoHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_capacityHasBeenSet(false)
{
}

string CreateQosRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_srcAddressInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SrcAddressInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_srcAddressInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_destAddressInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DestAddressInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_destAddressInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_qosMenuHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "QosMenu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_qosMenu.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_deviceInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_durationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_duration, allocator);
    }

    if (m_capacityHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Capacity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_capacity.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


SrcAddressInfo CreateQosRequest::GetSrcAddressInfo() const
{
    return m_srcAddressInfo;
}

void CreateQosRequest::SetSrcAddressInfo(const SrcAddressInfo& _srcAddressInfo)
{
    m_srcAddressInfo = _srcAddressInfo;
    m_srcAddressInfoHasBeenSet = true;
}

bool CreateQosRequest::SrcAddressInfoHasBeenSet() const
{
    return m_srcAddressInfoHasBeenSet;
}

DestAddressInfo CreateQosRequest::GetDestAddressInfo() const
{
    return m_destAddressInfo;
}

void CreateQosRequest::SetDestAddressInfo(const DestAddressInfo& _destAddressInfo)
{
    m_destAddressInfo = _destAddressInfo;
    m_destAddressInfoHasBeenSet = true;
}

bool CreateQosRequest::DestAddressInfoHasBeenSet() const
{
    return m_destAddressInfoHasBeenSet;
}

string CreateQosRequest::GetQosMenu() const
{
    return m_qosMenu;
}

void CreateQosRequest::SetQosMenu(const string& _qosMenu)
{
    m_qosMenu = _qosMenu;
    m_qosMenuHasBeenSet = true;
}

bool CreateQosRequest::QosMenuHasBeenSet() const
{
    return m_qosMenuHasBeenSet;
}

DeviceInfo CreateQosRequest::GetDeviceInfo() const
{
    return m_deviceInfo;
}

void CreateQosRequest::SetDeviceInfo(const DeviceInfo& _deviceInfo)
{
    m_deviceInfo = _deviceInfo;
    m_deviceInfoHasBeenSet = true;
}

bool CreateQosRequest::DeviceInfoHasBeenSet() const
{
    return m_deviceInfoHasBeenSet;
}

uint64_t CreateQosRequest::GetDuration() const
{
    return m_duration;
}

void CreateQosRequest::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool CreateQosRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

Capacity CreateQosRequest::GetCapacity() const
{
    return m_capacity;
}

void CreateQosRequest::SetCapacity(const Capacity& _capacity)
{
    m_capacity = _capacity;
    m_capacityHasBeenSet = true;
}

bool CreateQosRequest::CapacityHasBeenSet() const
{
    return m_capacityHasBeenSet;
}



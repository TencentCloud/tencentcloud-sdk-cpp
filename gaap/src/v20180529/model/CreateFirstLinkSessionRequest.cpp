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

#include <tencentcloud/gaap/v20180529/model/CreateFirstLinkSessionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

CreateFirstLinkSessionRequest::CreateFirstLinkSessionRequest() :
    m_templateIdHasBeenSet(false),
    m_srcAddressInfoHasBeenSet(false),
    m_destAddressInfoHasBeenSet(false),
    m_deviceInfoHasBeenSet(false),
    m_capacityHasBeenSet(false)
{
}

string CreateFirstLinkSessionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_srcAddressInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcAddressInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_srcAddressInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_destAddressInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestAddressInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_destAddressInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_deviceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deviceInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_capacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Capacity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_capacity.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFirstLinkSessionRequest::GetTemplateId() const
{
    return m_templateId;
}

void CreateFirstLinkSessionRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool CreateFirstLinkSessionRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

SrcAddressInfo CreateFirstLinkSessionRequest::GetSrcAddressInfo() const
{
    return m_srcAddressInfo;
}

void CreateFirstLinkSessionRequest::SetSrcAddressInfo(const SrcAddressInfo& _srcAddressInfo)
{
    m_srcAddressInfo = _srcAddressInfo;
    m_srcAddressInfoHasBeenSet = true;
}

bool CreateFirstLinkSessionRequest::SrcAddressInfoHasBeenSet() const
{
    return m_srcAddressInfoHasBeenSet;
}

DestAddressInfo CreateFirstLinkSessionRequest::GetDestAddressInfo() const
{
    return m_destAddressInfo;
}

void CreateFirstLinkSessionRequest::SetDestAddressInfo(const DestAddressInfo& _destAddressInfo)
{
    m_destAddressInfo = _destAddressInfo;
    m_destAddressInfoHasBeenSet = true;
}

bool CreateFirstLinkSessionRequest::DestAddressInfoHasBeenSet() const
{
    return m_destAddressInfoHasBeenSet;
}

DeviceInfo CreateFirstLinkSessionRequest::GetDeviceInfo() const
{
    return m_deviceInfo;
}

void CreateFirstLinkSessionRequest::SetDeviceInfo(const DeviceInfo& _deviceInfo)
{
    m_deviceInfo = _deviceInfo;
    m_deviceInfoHasBeenSet = true;
}

bool CreateFirstLinkSessionRequest::DeviceInfoHasBeenSet() const
{
    return m_deviceInfoHasBeenSet;
}

Capacity CreateFirstLinkSessionRequest::GetCapacity() const
{
    return m_capacity;
}

void CreateFirstLinkSessionRequest::SetCapacity(const Capacity& _capacity)
{
    m_capacity = _capacity;
    m_capacityHasBeenSet = true;
}

bool CreateFirstLinkSessionRequest::CapacityHasBeenSet() const
{
    return m_capacityHasBeenSet;
}



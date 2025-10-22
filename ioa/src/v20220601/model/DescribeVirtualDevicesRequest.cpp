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

#include <tencentcloud/ioa/v20220601/model/DescribeVirtualDevicesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeVirtualDevicesRequest::DescribeVirtualDevicesRequest() :
    m_domainInstanceIdHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_deviceVirtualGroupIdHasBeenSet(false),
    m_osTypeHasBeenSet(false),
    m_onlineStatusHasBeenSet(false)
{
}

string DescribeVirtualDevicesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_condition.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_deviceVirtualGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceVirtualGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deviceVirtualGroupId, allocator);
    }

    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_osType, allocator);
    }

    if (m_onlineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_onlineStatus, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeVirtualDevicesRequest::GetDomainInstanceId() const
{
    return m_domainInstanceId;
}

void DescribeVirtualDevicesRequest::SetDomainInstanceId(const string& _domainInstanceId)
{
    m_domainInstanceId = _domainInstanceId;
    m_domainInstanceIdHasBeenSet = true;
}

bool DescribeVirtualDevicesRequest::DomainInstanceIdHasBeenSet() const
{
    return m_domainInstanceIdHasBeenSet;
}

Condition DescribeVirtualDevicesRequest::GetCondition() const
{
    return m_condition;
}

void DescribeVirtualDevicesRequest::SetCondition(const Condition& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool DescribeVirtualDevicesRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

int64_t DescribeVirtualDevicesRequest::GetDeviceVirtualGroupId() const
{
    return m_deviceVirtualGroupId;
}

void DescribeVirtualDevicesRequest::SetDeviceVirtualGroupId(const int64_t& _deviceVirtualGroupId)
{
    m_deviceVirtualGroupId = _deviceVirtualGroupId;
    m_deviceVirtualGroupIdHasBeenSet = true;
}

bool DescribeVirtualDevicesRequest::DeviceVirtualGroupIdHasBeenSet() const
{
    return m_deviceVirtualGroupIdHasBeenSet;
}

int64_t DescribeVirtualDevicesRequest::GetOsType() const
{
    return m_osType;
}

void DescribeVirtualDevicesRequest::SetOsType(const int64_t& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool DescribeVirtualDevicesRequest::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

int64_t DescribeVirtualDevicesRequest::GetOnlineStatus() const
{
    return m_onlineStatus;
}

void DescribeVirtualDevicesRequest::SetOnlineStatus(const int64_t& _onlineStatus)
{
    m_onlineStatus = _onlineStatus;
    m_onlineStatusHasBeenSet = true;
}

bool DescribeVirtualDevicesRequest::OnlineStatusHasBeenSet() const
{
    return m_onlineStatusHasBeenSet;
}



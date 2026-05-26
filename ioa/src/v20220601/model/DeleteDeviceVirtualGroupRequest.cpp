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

#include <tencentcloud/ioa/v20220601/model/DeleteDeviceVirtualGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DeleteDeviceVirtualGroupRequest::DeleteDeviceVirtualGroupRequest() :
    m_domainInstanceIdHasBeenSet(false),
    m_deviceVirtualGroupIdHasBeenSet(false),
    m_osTypeHasBeenSet(false)
{
}

string DeleteDeviceVirtualGroupRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteDeviceVirtualGroupRequest::GetDomainInstanceId() const
{
    return m_domainInstanceId;
}

void DeleteDeviceVirtualGroupRequest::SetDomainInstanceId(const string& _domainInstanceId)
{
    m_domainInstanceId = _domainInstanceId;
    m_domainInstanceIdHasBeenSet = true;
}

bool DeleteDeviceVirtualGroupRequest::DomainInstanceIdHasBeenSet() const
{
    return m_domainInstanceIdHasBeenSet;
}

int64_t DeleteDeviceVirtualGroupRequest::GetDeviceVirtualGroupId() const
{
    return m_deviceVirtualGroupId;
}

void DeleteDeviceVirtualGroupRequest::SetDeviceVirtualGroupId(const int64_t& _deviceVirtualGroupId)
{
    m_deviceVirtualGroupId = _deviceVirtualGroupId;
    m_deviceVirtualGroupIdHasBeenSet = true;
}

bool DeleteDeviceVirtualGroupRequest::DeviceVirtualGroupIdHasBeenSet() const
{
    return m_deviceVirtualGroupIdHasBeenSet;
}

int64_t DeleteDeviceVirtualGroupRequest::GetOsType() const
{
    return m_osType;
}

void DeleteDeviceVirtualGroupRequest::SetOsType(const int64_t& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool DeleteDeviceVirtualGroupRequest::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}



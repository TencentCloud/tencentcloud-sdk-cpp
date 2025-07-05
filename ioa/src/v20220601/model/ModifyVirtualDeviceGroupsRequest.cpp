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

#include <tencentcloud/ioa/v20220601/model/ModifyVirtualDeviceGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

ModifyVirtualDeviceGroupsRequest::ModifyVirtualDeviceGroupsRequest() :
    m_domainInstanceIdHasBeenSet(false),
    m_deviceVirtualGroupIdHasBeenSet(false),
    m_deviceListHasBeenSet(false),
    m_deviceVirtualGroupIdsHasBeenSet(false),
    m_osTypeHasBeenSet(false)
{
}

string ModifyVirtualDeviceGroupsRequest::ToJsonString() const
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

    if (m_deviceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deviceList.begin(); itr != m_deviceList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_deviceVirtualGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceVirtualGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deviceVirtualGroupIds.begin(); itr != m_deviceVirtualGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
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


string ModifyVirtualDeviceGroupsRequest::GetDomainInstanceId() const
{
    return m_domainInstanceId;
}

void ModifyVirtualDeviceGroupsRequest::SetDomainInstanceId(const string& _domainInstanceId)
{
    m_domainInstanceId = _domainInstanceId;
    m_domainInstanceIdHasBeenSet = true;
}

bool ModifyVirtualDeviceGroupsRequest::DomainInstanceIdHasBeenSet() const
{
    return m_domainInstanceIdHasBeenSet;
}

int64_t ModifyVirtualDeviceGroupsRequest::GetDeviceVirtualGroupId() const
{
    return m_deviceVirtualGroupId;
}

void ModifyVirtualDeviceGroupsRequest::SetDeviceVirtualGroupId(const int64_t& _deviceVirtualGroupId)
{
    m_deviceVirtualGroupId = _deviceVirtualGroupId;
    m_deviceVirtualGroupIdHasBeenSet = true;
}

bool ModifyVirtualDeviceGroupsRequest::DeviceVirtualGroupIdHasBeenSet() const
{
    return m_deviceVirtualGroupIdHasBeenSet;
}

vector<ModifyVirtualDeviceGroupsReqItem> ModifyVirtualDeviceGroupsRequest::GetDeviceList() const
{
    return m_deviceList;
}

void ModifyVirtualDeviceGroupsRequest::SetDeviceList(const vector<ModifyVirtualDeviceGroupsReqItem>& _deviceList)
{
    m_deviceList = _deviceList;
    m_deviceListHasBeenSet = true;
}

bool ModifyVirtualDeviceGroupsRequest::DeviceListHasBeenSet() const
{
    return m_deviceListHasBeenSet;
}

vector<int64_t> ModifyVirtualDeviceGroupsRequest::GetDeviceVirtualGroupIds() const
{
    return m_deviceVirtualGroupIds;
}

void ModifyVirtualDeviceGroupsRequest::SetDeviceVirtualGroupIds(const vector<int64_t>& _deviceVirtualGroupIds)
{
    m_deviceVirtualGroupIds = _deviceVirtualGroupIds;
    m_deviceVirtualGroupIdsHasBeenSet = true;
}

bool ModifyVirtualDeviceGroupsRequest::DeviceVirtualGroupIdsHasBeenSet() const
{
    return m_deviceVirtualGroupIdsHasBeenSet;
}

int64_t ModifyVirtualDeviceGroupsRequest::GetOsType() const
{
    return m_osType;
}

void ModifyVirtualDeviceGroupsRequest::SetOsType(const int64_t& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool ModifyVirtualDeviceGroupsRequest::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}



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

#include <tencentcloud/bh/v20230418/model/ModifyDeviceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

ModifyDeviceRequest::ModifyDeviceRequest() :
    m_idHasBeenSet(false),
    m_portHasBeenSet(false),
    m_groupIdSetHasBeenSet(false),
    m_departmentIdHasBeenSet(false),
    m_domainIdHasBeenSet(false)
{
}

string ModifyDeviceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_port, allocator);
    }

    if (m_groupIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIdSet.begin(); itr != m_groupIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_departmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_departmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyDeviceRequest::GetId() const
{
    return m_id;
}

void ModifyDeviceRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyDeviceRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t ModifyDeviceRequest::GetPort() const
{
    return m_port;
}

void ModifyDeviceRequest::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool ModifyDeviceRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

vector<uint64_t> ModifyDeviceRequest::GetGroupIdSet() const
{
    return m_groupIdSet;
}

void ModifyDeviceRequest::SetGroupIdSet(const vector<uint64_t>& _groupIdSet)
{
    m_groupIdSet = _groupIdSet;
    m_groupIdSetHasBeenSet = true;
}

bool ModifyDeviceRequest::GroupIdSetHasBeenSet() const
{
    return m_groupIdSetHasBeenSet;
}

string ModifyDeviceRequest::GetDepartmentId() const
{
    return m_departmentId;
}

void ModifyDeviceRequest::SetDepartmentId(const string& _departmentId)
{
    m_departmentId = _departmentId;
    m_departmentIdHasBeenSet = true;
}

bool ModifyDeviceRequest::DepartmentIdHasBeenSet() const
{
    return m_departmentIdHasBeenSet;
}

string ModifyDeviceRequest::GetDomainId() const
{
    return m_domainId;
}

void ModifyDeviceRequest::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool ModifyDeviceRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}



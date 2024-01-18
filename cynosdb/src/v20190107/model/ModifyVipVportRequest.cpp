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

#include <tencentcloud/cynosdb/v20190107/model/ModifyVipVportRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyVipVportRequest::ModifyVipVportRequest() :
    m_clusterIdHasBeenSet(false),
    m_instanceGrpIdHasBeenSet(false),
    m_instanceGroupIdHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_oldIpReserveHoursHasBeenSet(false)
{
}

string ModifyVipVportRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceGrpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceGrpId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceGrpId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vport, allocator);
    }

    if (m_dbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbType.c_str(), allocator).Move(), allocator);
    }

    if (m_oldIpReserveHoursHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldIpReserveHours";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_oldIpReserveHours, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyVipVportRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyVipVportRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyVipVportRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ModifyVipVportRequest::GetInstanceGrpId() const
{
    return m_instanceGrpId;
}

void ModifyVipVportRequest::SetInstanceGrpId(const string& _instanceGrpId)
{
    m_instanceGrpId = _instanceGrpId;
    m_instanceGrpIdHasBeenSet = true;
}

bool ModifyVipVportRequest::InstanceGrpIdHasBeenSet() const
{
    return m_instanceGrpIdHasBeenSet;
}

string ModifyVipVportRequest::GetInstanceGroupId() const
{
    return m_instanceGroupId;
}

void ModifyVipVportRequest::SetInstanceGroupId(const string& _instanceGroupId)
{
    m_instanceGroupId = _instanceGroupId;
    m_instanceGroupIdHasBeenSet = true;
}

bool ModifyVipVportRequest::InstanceGroupIdHasBeenSet() const
{
    return m_instanceGroupIdHasBeenSet;
}

string ModifyVipVportRequest::GetVip() const
{
    return m_vip;
}

void ModifyVipVportRequest::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool ModifyVipVportRequest::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t ModifyVipVportRequest::GetVport() const
{
    return m_vport;
}

void ModifyVipVportRequest::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool ModifyVipVportRequest::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string ModifyVipVportRequest::GetDbType() const
{
    return m_dbType;
}

void ModifyVipVportRequest::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool ModifyVipVportRequest::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

int64_t ModifyVipVportRequest::GetOldIpReserveHours() const
{
    return m_oldIpReserveHours;
}

void ModifyVipVportRequest::SetOldIpReserveHours(const int64_t& _oldIpReserveHours)
{
    m_oldIpReserveHours = _oldIpReserveHours;
    m_oldIpReserveHoursHasBeenSet = true;
}

bool ModifyVipVportRequest::OldIpReserveHoursHasBeenSet() const
{
    return m_oldIpReserveHoursHasBeenSet;
}



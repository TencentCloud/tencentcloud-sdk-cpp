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

#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceNetworkRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

ModifyDBInstanceNetworkRequest::ModifyDBInstanceNetworkRequest() :
    m_instanceIdHasBeenSet(false),
    m_newVpcIdHasBeenSet(false),
    m_newSubnetIdHasBeenSet(false),
    m_oldIpRetainTimeHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_dRNetworkHasBeenSet(false),
    m_drInstanceIdHasBeenSet(false)
{
}

string ModifyDBInstanceNetworkRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_newVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_newSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewSubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_oldIpRetainTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldIpRetainTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_oldIpRetainTime, allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_dRNetworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DRNetwork";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dRNetwork, allocator);
    }

    if (m_drInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_drInstanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDBInstanceNetworkRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyDBInstanceNetworkRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyDBInstanceNetworkRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyDBInstanceNetworkRequest::GetNewVpcId() const
{
    return m_newVpcId;
}

void ModifyDBInstanceNetworkRequest::SetNewVpcId(const string& _newVpcId)
{
    m_newVpcId = _newVpcId;
    m_newVpcIdHasBeenSet = true;
}

bool ModifyDBInstanceNetworkRequest::NewVpcIdHasBeenSet() const
{
    return m_newVpcIdHasBeenSet;
}

string ModifyDBInstanceNetworkRequest::GetNewSubnetId() const
{
    return m_newSubnetId;
}

void ModifyDBInstanceNetworkRequest::SetNewSubnetId(const string& _newSubnetId)
{
    m_newSubnetId = _newSubnetId;
    m_newSubnetIdHasBeenSet = true;
}

bool ModifyDBInstanceNetworkRequest::NewSubnetIdHasBeenSet() const
{
    return m_newSubnetIdHasBeenSet;
}

int64_t ModifyDBInstanceNetworkRequest::GetOldIpRetainTime() const
{
    return m_oldIpRetainTime;
}

void ModifyDBInstanceNetworkRequest::SetOldIpRetainTime(const int64_t& _oldIpRetainTime)
{
    m_oldIpRetainTime = _oldIpRetainTime;
    m_oldIpRetainTimeHasBeenSet = true;
}

bool ModifyDBInstanceNetworkRequest::OldIpRetainTimeHasBeenSet() const
{
    return m_oldIpRetainTimeHasBeenSet;
}

string ModifyDBInstanceNetworkRequest::GetVip() const
{
    return m_vip;
}

void ModifyDBInstanceNetworkRequest::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool ModifyDBInstanceNetworkRequest::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

uint64_t ModifyDBInstanceNetworkRequest::GetDRNetwork() const
{
    return m_dRNetwork;
}

void ModifyDBInstanceNetworkRequest::SetDRNetwork(const uint64_t& _dRNetwork)
{
    m_dRNetwork = _dRNetwork;
    m_dRNetworkHasBeenSet = true;
}

bool ModifyDBInstanceNetworkRequest::DRNetworkHasBeenSet() const
{
    return m_dRNetworkHasBeenSet;
}

string ModifyDBInstanceNetworkRequest::GetDrInstanceId() const
{
    return m_drInstanceId;
}

void ModifyDBInstanceNetworkRequest::SetDrInstanceId(const string& _drInstanceId)
{
    m_drInstanceId = _drInstanceId;
    m_drInstanceIdHasBeenSet = true;
}

bool ModifyDBInstanceNetworkRequest::DrInstanceIdHasBeenSet() const
{
    return m_drInstanceIdHasBeenSet;
}



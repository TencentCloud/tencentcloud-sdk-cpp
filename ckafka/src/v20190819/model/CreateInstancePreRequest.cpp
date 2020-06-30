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

#include <tencentcloud/ckafka/v20190819/model/CreateInstancePreRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace rapidjson;
using namespace std;

CreateInstancePreRequest::CreateInstancePreRequest() :
    m_instanceNameHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_msgRetentionTimeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_renewFlagHasBeenSet(false)
{
}

string CreateInstancePreRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_periodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_period.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceType, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_msgRetentionTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MsgRetentionTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_msgRetentionTime, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clusterId, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_renewFlag, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateInstancePreRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateInstancePreRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateInstancePreRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t CreateInstancePreRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateInstancePreRequest::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateInstancePreRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateInstancePreRequest::GetPeriod() const
{
    return m_period;
}

void CreateInstancePreRequest::SetPeriod(const string& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateInstancePreRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

int64_t CreateInstancePreRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateInstancePreRequest::SetInstanceType(const int64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateInstancePreRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string CreateInstancePreRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateInstancePreRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateInstancePreRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateInstancePreRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateInstancePreRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateInstancePreRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t CreateInstancePreRequest::GetMsgRetentionTime() const
{
    return m_msgRetentionTime;
}

void CreateInstancePreRequest::SetMsgRetentionTime(const int64_t& _msgRetentionTime)
{
    m_msgRetentionTime = _msgRetentionTime;
    m_msgRetentionTimeHasBeenSet = true;
}

bool CreateInstancePreRequest::MsgRetentionTimeHasBeenSet() const
{
    return m_msgRetentionTimeHasBeenSet;
}

int64_t CreateInstancePreRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateInstancePreRequest::SetClusterId(const int64_t& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateInstancePreRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t CreateInstancePreRequest::GetRenewFlag() const
{
    return m_renewFlag;
}

void CreateInstancePreRequest::SetRenewFlag(const int64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool CreateInstancePreRequest::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}



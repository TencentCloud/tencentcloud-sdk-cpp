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

#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceVipVportRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ModifyDBInstanceVipVportRequest::ModifyDBInstanceVipVportRequest() :
    m_instanceIdHasBeenSet(false),
    m_dstIpHasBeenSet(false),
    m_dstPortHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_releaseDurationHasBeenSet(false),
    m_opResourceIdHasBeenSet(false)
{
}

string ModifyDBInstanceVipVportRequest::ToJsonString() const
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

    if (m_dstIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstIp.c_str(), allocator).Move(), allocator);
    }

    if (m_dstPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dstPort, allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqSubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniqSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_releaseDuration, allocator);
    }

    if (m_opResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_opResourceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDBInstanceVipVportRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyDBInstanceVipVportRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyDBInstanceVipVportRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyDBInstanceVipVportRequest::GetDstIp() const
{
    return m_dstIp;
}

void ModifyDBInstanceVipVportRequest::SetDstIp(const string& _dstIp)
{
    m_dstIp = _dstIp;
    m_dstIpHasBeenSet = true;
}

bool ModifyDBInstanceVipVportRequest::DstIpHasBeenSet() const
{
    return m_dstIpHasBeenSet;
}

int64_t ModifyDBInstanceVipVportRequest::GetDstPort() const
{
    return m_dstPort;
}

void ModifyDBInstanceVipVportRequest::SetDstPort(const int64_t& _dstPort)
{
    m_dstPort = _dstPort;
    m_dstPortHasBeenSet = true;
}

bool ModifyDBInstanceVipVportRequest::DstPortHasBeenSet() const
{
    return m_dstPortHasBeenSet;
}

string ModifyDBInstanceVipVportRequest::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void ModifyDBInstanceVipVportRequest::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool ModifyDBInstanceVipVportRequest::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string ModifyDBInstanceVipVportRequest::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void ModifyDBInstanceVipVportRequest::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool ModifyDBInstanceVipVportRequest::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

int64_t ModifyDBInstanceVipVportRequest::GetReleaseDuration() const
{
    return m_releaseDuration;
}

void ModifyDBInstanceVipVportRequest::SetReleaseDuration(const int64_t& _releaseDuration)
{
    m_releaseDuration = _releaseDuration;
    m_releaseDurationHasBeenSet = true;
}

bool ModifyDBInstanceVipVportRequest::ReleaseDurationHasBeenSet() const
{
    return m_releaseDurationHasBeenSet;
}

string ModifyDBInstanceVipVportRequest::GetOpResourceId() const
{
    return m_opResourceId;
}

void ModifyDBInstanceVipVportRequest::SetOpResourceId(const string& _opResourceId)
{
    m_opResourceId = _opResourceId;
    m_opResourceIdHasBeenSet = true;
}

bool ModifyDBInstanceVipVportRequest::OpResourceIdHasBeenSet() const
{
    return m_opResourceIdHasBeenSet;
}



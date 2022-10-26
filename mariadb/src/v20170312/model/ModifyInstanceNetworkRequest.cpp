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

#include <tencentcloud/mariadb/v20170312/model/ModifyInstanceNetworkRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

ModifyInstanceNetworkRequest::ModifyInstanceNetworkRequest() :
    m_instanceIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vipv6HasBeenSet(false),
    m_vipReleaseDelayHasBeenSet(false)
{
}

string ModifyInstanceNetworkRequest::ToJsonString() const
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

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vipv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vipv6";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vipv6.c_str(), allocator).Move(), allocator);
    }

    if (m_vipReleaseDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipReleaseDelay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vipReleaseDelay, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyInstanceNetworkRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyInstanceNetworkRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyInstanceNetworkRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyInstanceNetworkRequest::GetVpcId() const
{
    return m_vpcId;
}

void ModifyInstanceNetworkRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ModifyInstanceNetworkRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ModifyInstanceNetworkRequest::GetSubnetId() const
{
    return m_subnetId;
}

void ModifyInstanceNetworkRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ModifyInstanceNetworkRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ModifyInstanceNetworkRequest::GetVip() const
{
    return m_vip;
}

void ModifyInstanceNetworkRequest::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool ModifyInstanceNetworkRequest::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string ModifyInstanceNetworkRequest::GetVipv6() const
{
    return m_vipv6;
}

void ModifyInstanceNetworkRequest::SetVipv6(const string& _vipv6)
{
    m_vipv6 = _vipv6;
    m_vipv6HasBeenSet = true;
}

bool ModifyInstanceNetworkRequest::Vipv6HasBeenSet() const
{
    return m_vipv6HasBeenSet;
}

uint64_t ModifyInstanceNetworkRequest::GetVipReleaseDelay() const
{
    return m_vipReleaseDelay;
}

void ModifyInstanceNetworkRequest::SetVipReleaseDelay(const uint64_t& _vipReleaseDelay)
{
    m_vipReleaseDelay = _vipReleaseDelay;
    m_vipReleaseDelayHasBeenSet = true;
}

bool ModifyInstanceNetworkRequest::VipReleaseDelayHasBeenSet() const
{
    return m_vipReleaseDelayHasBeenSet;
}



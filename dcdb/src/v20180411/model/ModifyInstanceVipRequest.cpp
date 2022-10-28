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

#include <tencentcloud/dcdb/v20180411/model/ModifyInstanceVipRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

ModifyInstanceVipRequest::ModifyInstanceVipRequest() :
    m_instanceIdHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_ipv6FlagHasBeenSet(false),
    m_vipReleaseDelayHasBeenSet(false)
{
}

string ModifyInstanceVipRequest::ToJsonString() const
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

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_ipv6FlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6Flag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ipv6Flag, allocator);
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


string ModifyInstanceVipRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyInstanceVipRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyInstanceVipRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyInstanceVipRequest::GetVip() const
{
    return m_vip;
}

void ModifyInstanceVipRequest::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool ModifyInstanceVipRequest::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

uint64_t ModifyInstanceVipRequest::GetIpv6Flag() const
{
    return m_ipv6Flag;
}

void ModifyInstanceVipRequest::SetIpv6Flag(const uint64_t& _ipv6Flag)
{
    m_ipv6Flag = _ipv6Flag;
    m_ipv6FlagHasBeenSet = true;
}

bool ModifyInstanceVipRequest::Ipv6FlagHasBeenSet() const
{
    return m_ipv6FlagHasBeenSet;
}

uint64_t ModifyInstanceVipRequest::GetVipReleaseDelay() const
{
    return m_vipReleaseDelay;
}

void ModifyInstanceVipRequest::SetVipReleaseDelay(const uint64_t& _vipReleaseDelay)
{
    m_vipReleaseDelay = _vipReleaseDelay;
    m_vipReleaseDelayHasBeenSet = true;
}

bool ModifyInstanceVipRequest::VipReleaseDelayHasBeenSet() const
{
    return m_vipReleaseDelayHasBeenSet;
}



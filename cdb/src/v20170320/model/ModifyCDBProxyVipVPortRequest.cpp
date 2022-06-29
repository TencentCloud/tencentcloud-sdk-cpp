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

#include <tencentcloud/cdb/v20170320/model/ModifyCDBProxyVipVPortRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ModifyCDBProxyVipVPortRequest::ModifyCDBProxyVipVPortRequest() :
    m_proxyGroupIdHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_dstIpHasBeenSet(false),
    m_dstPortHasBeenSet(false),
    m_releaseDurationHasBeenSet(false)
{
}

string ModifyCDBProxyVipVPortRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_proxyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyGroupId.c_str(), allocator).Move(), allocator);
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

    if (m_releaseDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_releaseDuration, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCDBProxyVipVPortRequest::GetProxyGroupId() const
{
    return m_proxyGroupId;
}

void ModifyCDBProxyVipVPortRequest::SetProxyGroupId(const string& _proxyGroupId)
{
    m_proxyGroupId = _proxyGroupId;
    m_proxyGroupIdHasBeenSet = true;
}

bool ModifyCDBProxyVipVPortRequest::ProxyGroupIdHasBeenSet() const
{
    return m_proxyGroupIdHasBeenSet;
}

string ModifyCDBProxyVipVPortRequest::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void ModifyCDBProxyVipVPortRequest::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool ModifyCDBProxyVipVPortRequest::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string ModifyCDBProxyVipVPortRequest::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void ModifyCDBProxyVipVPortRequest::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool ModifyCDBProxyVipVPortRequest::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

string ModifyCDBProxyVipVPortRequest::GetDstIp() const
{
    return m_dstIp;
}

void ModifyCDBProxyVipVPortRequest::SetDstIp(const string& _dstIp)
{
    m_dstIp = _dstIp;
    m_dstIpHasBeenSet = true;
}

bool ModifyCDBProxyVipVPortRequest::DstIpHasBeenSet() const
{
    return m_dstIpHasBeenSet;
}

uint64_t ModifyCDBProxyVipVPortRequest::GetDstPort() const
{
    return m_dstPort;
}

void ModifyCDBProxyVipVPortRequest::SetDstPort(const uint64_t& _dstPort)
{
    m_dstPort = _dstPort;
    m_dstPortHasBeenSet = true;
}

bool ModifyCDBProxyVipVPortRequest::DstPortHasBeenSet() const
{
    return m_dstPortHasBeenSet;
}

uint64_t ModifyCDBProxyVipVPortRequest::GetReleaseDuration() const
{
    return m_releaseDuration;
}

void ModifyCDBProxyVipVPortRequest::SetReleaseDuration(const uint64_t& _releaseDuration)
{
    m_releaseDuration = _releaseDuration;
    m_releaseDurationHasBeenSet = true;
}

bool ModifyCDBProxyVipVPortRequest::ReleaseDurationHasBeenSet() const
{
    return m_releaseDurationHasBeenSet;
}



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

#include <tencentcloud/cdb/v20170320/model/ModifyCdbProxyAddressVipAndVPortRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ModifyCdbProxyAddressVipAndVPortRequest::ModifyCdbProxyAddressVipAndVPortRequest() :
    m_proxyGroupIdHasBeenSet(false),
    m_proxyAddressIdHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vPortHasBeenSet(false),
    m_releaseDurationHasBeenSet(false)
{
}

string ModifyCdbProxyAddressVipAndVPortRequest::ToJsonString() const
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

    if (m_proxyAddressIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyAddressId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyAddressId.c_str(), allocator).Move(), allocator);
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

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vPort, allocator);
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


string ModifyCdbProxyAddressVipAndVPortRequest::GetProxyGroupId() const
{
    return m_proxyGroupId;
}

void ModifyCdbProxyAddressVipAndVPortRequest::SetProxyGroupId(const string& _proxyGroupId)
{
    m_proxyGroupId = _proxyGroupId;
    m_proxyGroupIdHasBeenSet = true;
}

bool ModifyCdbProxyAddressVipAndVPortRequest::ProxyGroupIdHasBeenSet() const
{
    return m_proxyGroupIdHasBeenSet;
}

string ModifyCdbProxyAddressVipAndVPortRequest::GetProxyAddressId() const
{
    return m_proxyAddressId;
}

void ModifyCdbProxyAddressVipAndVPortRequest::SetProxyAddressId(const string& _proxyAddressId)
{
    m_proxyAddressId = _proxyAddressId;
    m_proxyAddressIdHasBeenSet = true;
}

bool ModifyCdbProxyAddressVipAndVPortRequest::ProxyAddressIdHasBeenSet() const
{
    return m_proxyAddressIdHasBeenSet;
}

string ModifyCdbProxyAddressVipAndVPortRequest::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void ModifyCdbProxyAddressVipAndVPortRequest::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool ModifyCdbProxyAddressVipAndVPortRequest::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string ModifyCdbProxyAddressVipAndVPortRequest::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void ModifyCdbProxyAddressVipAndVPortRequest::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool ModifyCdbProxyAddressVipAndVPortRequest::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

string ModifyCdbProxyAddressVipAndVPortRequest::GetVip() const
{
    return m_vip;
}

void ModifyCdbProxyAddressVipAndVPortRequest::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool ModifyCdbProxyAddressVipAndVPortRequest::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

uint64_t ModifyCdbProxyAddressVipAndVPortRequest::GetVPort() const
{
    return m_vPort;
}

void ModifyCdbProxyAddressVipAndVPortRequest::SetVPort(const uint64_t& _vPort)
{
    m_vPort = _vPort;
    m_vPortHasBeenSet = true;
}

bool ModifyCdbProxyAddressVipAndVPortRequest::VPortHasBeenSet() const
{
    return m_vPortHasBeenSet;
}

uint64_t ModifyCdbProxyAddressVipAndVPortRequest::GetReleaseDuration() const
{
    return m_releaseDuration;
}

void ModifyCdbProxyAddressVipAndVPortRequest::SetReleaseDuration(const uint64_t& _releaseDuration)
{
    m_releaseDuration = _releaseDuration;
    m_releaseDurationHasBeenSet = true;
}

bool ModifyCdbProxyAddressVipAndVPortRequest::ReleaseDurationHasBeenSet() const
{
    return m_releaseDurationHasBeenSet;
}



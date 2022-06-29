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

#include <tencentcloud/teo/v20220106/model/ModifyDDoSPolicyHostRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

ModifyDDoSPolicyHostRequest::ModifyDDoSPolicyHostRequest() :
    m_zoneIdHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_accelerateTypeHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_securityTypeHasBeenSet(false)
{
}

string ModifyDDoSPolicyHostRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_accelerateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccelerateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accelerateType.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policyId, allocator);
    }

    if (m_securityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_securityType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDDoSPolicyHostRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyDDoSPolicyHostRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyDDoSPolicyHostRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifyDDoSPolicyHostRequest::GetHost() const
{
    return m_host;
}

void ModifyDDoSPolicyHostRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool ModifyDDoSPolicyHostRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string ModifyDDoSPolicyHostRequest::GetAccelerateType() const
{
    return m_accelerateType;
}

void ModifyDDoSPolicyHostRequest::SetAccelerateType(const string& _accelerateType)
{
    m_accelerateType = _accelerateType;
    m_accelerateTypeHasBeenSet = true;
}

bool ModifyDDoSPolicyHostRequest::AccelerateTypeHasBeenSet() const
{
    return m_accelerateTypeHasBeenSet;
}

int64_t ModifyDDoSPolicyHostRequest::GetPolicyId() const
{
    return m_policyId;
}

void ModifyDDoSPolicyHostRequest::SetPolicyId(const int64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool ModifyDDoSPolicyHostRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string ModifyDDoSPolicyHostRequest::GetSecurityType() const
{
    return m_securityType;
}

void ModifyDDoSPolicyHostRequest::SetSecurityType(const string& _securityType)
{
    m_securityType = _securityType;
    m_securityTypeHasBeenSet = true;
}

bool ModifyDDoSPolicyHostRequest::SecurityTypeHasBeenSet() const
{
    return m_securityTypeHasBeenSet;
}



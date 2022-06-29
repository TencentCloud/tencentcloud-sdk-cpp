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

#include <tencentcloud/cdb/v20170320/model/ApplyCDBProxyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ApplyCDBProxyRequest::ApplyCDBProxyRequest() :
    m_instanceIdHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_proxyCountHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_securityGroupHasBeenSet(false),
    m_descHasBeenSet(false)
{
}

string ApplyCDBProxyRequest::ToJsonString() const
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

    if (m_proxyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_proxyCount, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mem, allocator);
    }

    if (m_securityGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroup.begin(); itr != m_securityGroup.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApplyCDBProxyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ApplyCDBProxyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ApplyCDBProxyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ApplyCDBProxyRequest::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void ApplyCDBProxyRequest::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool ApplyCDBProxyRequest::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string ApplyCDBProxyRequest::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void ApplyCDBProxyRequest::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool ApplyCDBProxyRequest::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

uint64_t ApplyCDBProxyRequest::GetProxyCount() const
{
    return m_proxyCount;
}

void ApplyCDBProxyRequest::SetProxyCount(const uint64_t& _proxyCount)
{
    m_proxyCount = _proxyCount;
    m_proxyCountHasBeenSet = true;
}

bool ApplyCDBProxyRequest::ProxyCountHasBeenSet() const
{
    return m_proxyCountHasBeenSet;
}

uint64_t ApplyCDBProxyRequest::GetCpu() const
{
    return m_cpu;
}

void ApplyCDBProxyRequest::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ApplyCDBProxyRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t ApplyCDBProxyRequest::GetMem() const
{
    return m_mem;
}

void ApplyCDBProxyRequest::SetMem(const uint64_t& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool ApplyCDBProxyRequest::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

vector<string> ApplyCDBProxyRequest::GetSecurityGroup() const
{
    return m_securityGroup;
}

void ApplyCDBProxyRequest::SetSecurityGroup(const vector<string>& _securityGroup)
{
    m_securityGroup = _securityGroup;
    m_securityGroupHasBeenSet = true;
}

bool ApplyCDBProxyRequest::SecurityGroupHasBeenSet() const
{
    return m_securityGroupHasBeenSet;
}

string ApplyCDBProxyRequest::GetDesc() const
{
    return m_desc;
}

void ApplyCDBProxyRequest::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool ApplyCDBProxyRequest::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}



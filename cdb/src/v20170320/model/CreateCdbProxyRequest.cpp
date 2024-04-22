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

#include <tencentcloud/cdb/v20170320/model/CreateCdbProxyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

CreateCdbProxyRequest::CreateCdbProxyRequest() :
    m_instanceIdHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_proxyNodeCustomHasBeenSet(false),
    m_securityGroupHasBeenSet(false),
    m_descHasBeenSet(false),
    m_connectionPoolLimitHasBeenSet(false),
    m_proxyVersionHasBeenSet(false)
{
}

string CreateCdbProxyRequest::ToJsonString() const
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

    if (m_proxyNodeCustomHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyNodeCustom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proxyNodeCustom.begin(); itr != m_proxyNodeCustom.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

    if (m_connectionPoolLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPoolLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_connectionPoolLimit, allocator);
    }

    if (m_proxyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyVersion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCdbProxyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateCdbProxyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateCdbProxyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateCdbProxyRequest::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void CreateCdbProxyRequest::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool CreateCdbProxyRequest::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string CreateCdbProxyRequest::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void CreateCdbProxyRequest::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool CreateCdbProxyRequest::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

vector<ProxyNodeCustom> CreateCdbProxyRequest::GetProxyNodeCustom() const
{
    return m_proxyNodeCustom;
}

void CreateCdbProxyRequest::SetProxyNodeCustom(const vector<ProxyNodeCustom>& _proxyNodeCustom)
{
    m_proxyNodeCustom = _proxyNodeCustom;
    m_proxyNodeCustomHasBeenSet = true;
}

bool CreateCdbProxyRequest::ProxyNodeCustomHasBeenSet() const
{
    return m_proxyNodeCustomHasBeenSet;
}

vector<string> CreateCdbProxyRequest::GetSecurityGroup() const
{
    return m_securityGroup;
}

void CreateCdbProxyRequest::SetSecurityGroup(const vector<string>& _securityGroup)
{
    m_securityGroup = _securityGroup;
    m_securityGroupHasBeenSet = true;
}

bool CreateCdbProxyRequest::SecurityGroupHasBeenSet() const
{
    return m_securityGroupHasBeenSet;
}

string CreateCdbProxyRequest::GetDesc() const
{
    return m_desc;
}

void CreateCdbProxyRequest::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool CreateCdbProxyRequest::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

uint64_t CreateCdbProxyRequest::GetConnectionPoolLimit() const
{
    return m_connectionPoolLimit;
}

void CreateCdbProxyRequest::SetConnectionPoolLimit(const uint64_t& _connectionPoolLimit)
{
    m_connectionPoolLimit = _connectionPoolLimit;
    m_connectionPoolLimitHasBeenSet = true;
}

bool CreateCdbProxyRequest::ConnectionPoolLimitHasBeenSet() const
{
    return m_connectionPoolLimitHasBeenSet;
}

string CreateCdbProxyRequest::GetProxyVersion() const
{
    return m_proxyVersion;
}

void CreateCdbProxyRequest::SetProxyVersion(const string& _proxyVersion)
{
    m_proxyVersion = _proxyVersion;
    m_proxyVersionHasBeenSet = true;
}

bool CreateCdbProxyRequest::ProxyVersionHasBeenSet() const
{
    return m_proxyVersionHasBeenSet;
}



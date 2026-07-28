/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/postgres/v20170312/model/CreateDBProxyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

CreateDBProxyRequest::CreateDBProxyRequest() :
    m_dBInstanceIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_proxyNodeCustomHasBeenSet(false),
    m_securityGroupHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_connectionPoolLimitHasBeenSet(false)
{
}

string CreateDBProxyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionPoolLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPoolLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_connectionPoolLimit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDBProxyRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void CreateDBProxyRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool CreateDBProxyRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

string CreateDBProxyRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateDBProxyRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateDBProxyRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateDBProxyRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateDBProxyRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateDBProxyRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

vector<ProxyNodeCustom> CreateDBProxyRequest::GetProxyNodeCustom() const
{
    return m_proxyNodeCustom;
}

void CreateDBProxyRequest::SetProxyNodeCustom(const vector<ProxyNodeCustom>& _proxyNodeCustom)
{
    m_proxyNodeCustom = _proxyNodeCustom;
    m_proxyNodeCustomHasBeenSet = true;
}

bool CreateDBProxyRequest::ProxyNodeCustomHasBeenSet() const
{
    return m_proxyNodeCustomHasBeenSet;
}

vector<string> CreateDBProxyRequest::GetSecurityGroup() const
{
    return m_securityGroup;
}

void CreateDBProxyRequest::SetSecurityGroup(const vector<string>& _securityGroup)
{
    m_securityGroup = _securityGroup;
    m_securityGroupHasBeenSet = true;
}

bool CreateDBProxyRequest::SecurityGroupHasBeenSet() const
{
    return m_securityGroupHasBeenSet;
}

string CreateDBProxyRequest::GetDescription() const
{
    return m_description;
}

void CreateDBProxyRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateDBProxyRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t CreateDBProxyRequest::GetConnectionPoolLimit() const
{
    return m_connectionPoolLimit;
}

void CreateDBProxyRequest::SetConnectionPoolLimit(const int64_t& _connectionPoolLimit)
{
    m_connectionPoolLimit = _connectionPoolLimit;
    m_connectionPoolLimitHasBeenSet = true;
}

bool CreateDBProxyRequest::ConnectionPoolLimitHasBeenSet() const
{
    return m_connectionPoolLimitHasBeenSet;
}



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

#include <tencentcloud/vpc/v20170312/model/CreateVpnConnectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

CreateVpnConnectionRequest::CreateVpnConnectionRequest() :
    m_vpcIdHasBeenSet(false),
    m_vpnGatewayIdHasBeenSet(false),
    m_customerGatewayIdHasBeenSet(false),
    m_vpnConnectionNameHasBeenSet(false),
    m_preShareKeyHasBeenSet(false),
    m_securityPolicyDatabasesHasBeenSet(false),
    m_iKEOptionsSpecificationHasBeenSet(false),
    m_iPSECOptionsSpecificationHasBeenSet(false)
{
}

string CreateVpnConnectionRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpnGatewayIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpnGatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpnGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_customerGatewayIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CustomerGatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_customerGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpnConnectionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpnConnectionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpnConnectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_preShareKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PreShareKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_preShareKey.c_str(), allocator).Move(), allocator);
    }

    if (m_securityPolicyDatabasesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityPolicyDatabases";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_securityPolicyDatabases.begin(); itr != m_securityPolicyDatabases.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_iKEOptionsSpecificationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IKEOptionsSpecification";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_iKEOptionsSpecification.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_iPSECOptionsSpecificationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IPSECOptionsSpecification";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_iPSECOptionsSpecification.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVpnConnectionRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateVpnConnectionRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateVpnConnectionRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateVpnConnectionRequest::GetVpnGatewayId() const
{
    return m_vpnGatewayId;
}

void CreateVpnConnectionRequest::SetVpnGatewayId(const string& _vpnGatewayId)
{
    m_vpnGatewayId = _vpnGatewayId;
    m_vpnGatewayIdHasBeenSet = true;
}

bool CreateVpnConnectionRequest::VpnGatewayIdHasBeenSet() const
{
    return m_vpnGatewayIdHasBeenSet;
}

string CreateVpnConnectionRequest::GetCustomerGatewayId() const
{
    return m_customerGatewayId;
}

void CreateVpnConnectionRequest::SetCustomerGatewayId(const string& _customerGatewayId)
{
    m_customerGatewayId = _customerGatewayId;
    m_customerGatewayIdHasBeenSet = true;
}

bool CreateVpnConnectionRequest::CustomerGatewayIdHasBeenSet() const
{
    return m_customerGatewayIdHasBeenSet;
}

string CreateVpnConnectionRequest::GetVpnConnectionName() const
{
    return m_vpnConnectionName;
}

void CreateVpnConnectionRequest::SetVpnConnectionName(const string& _vpnConnectionName)
{
    m_vpnConnectionName = _vpnConnectionName;
    m_vpnConnectionNameHasBeenSet = true;
}

bool CreateVpnConnectionRequest::VpnConnectionNameHasBeenSet() const
{
    return m_vpnConnectionNameHasBeenSet;
}

string CreateVpnConnectionRequest::GetPreShareKey() const
{
    return m_preShareKey;
}

void CreateVpnConnectionRequest::SetPreShareKey(const string& _preShareKey)
{
    m_preShareKey = _preShareKey;
    m_preShareKeyHasBeenSet = true;
}

bool CreateVpnConnectionRequest::PreShareKeyHasBeenSet() const
{
    return m_preShareKeyHasBeenSet;
}

vector<SecurityPolicyDatabase> CreateVpnConnectionRequest::GetSecurityPolicyDatabases() const
{
    return m_securityPolicyDatabases;
}

void CreateVpnConnectionRequest::SetSecurityPolicyDatabases(const vector<SecurityPolicyDatabase>& _securityPolicyDatabases)
{
    m_securityPolicyDatabases = _securityPolicyDatabases;
    m_securityPolicyDatabasesHasBeenSet = true;
}

bool CreateVpnConnectionRequest::SecurityPolicyDatabasesHasBeenSet() const
{
    return m_securityPolicyDatabasesHasBeenSet;
}

IKEOptionsSpecification CreateVpnConnectionRequest::GetIKEOptionsSpecification() const
{
    return m_iKEOptionsSpecification;
}

void CreateVpnConnectionRequest::SetIKEOptionsSpecification(const IKEOptionsSpecification& _iKEOptionsSpecification)
{
    m_iKEOptionsSpecification = _iKEOptionsSpecification;
    m_iKEOptionsSpecificationHasBeenSet = true;
}

bool CreateVpnConnectionRequest::IKEOptionsSpecificationHasBeenSet() const
{
    return m_iKEOptionsSpecificationHasBeenSet;
}

IPSECOptionsSpecification CreateVpnConnectionRequest::GetIPSECOptionsSpecification() const
{
    return m_iPSECOptionsSpecification;
}

void CreateVpnConnectionRequest::SetIPSECOptionsSpecification(const IPSECOptionsSpecification& _iPSECOptionsSpecification)
{
    m_iPSECOptionsSpecification = _iPSECOptionsSpecification;
    m_iPSECOptionsSpecificationHasBeenSet = true;
}

bool CreateVpnConnectionRequest::IPSECOptionsSpecificationHasBeenSet() const
{
    return m_iPSECOptionsSpecificationHasBeenSet;
}



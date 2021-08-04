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

#include <tencentcloud/tcb/v20180608/model/CreateStandaloneGatewayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CreateStandaloneGatewayRequest::CreateStandaloneGatewayRequest() :
    m_envIdHasBeenSet(false),
    m_gatewayAliasHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_gatewayDescHasBeenSet(false),
    m_packageVersionHasBeenSet(false)
{
}

string CreateStandaloneGatewayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayAlias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_gatewayDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_packageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageVersion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateStandaloneGatewayRequest::GetEnvId() const
{
    return m_envId;
}

void CreateStandaloneGatewayRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool CreateStandaloneGatewayRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string CreateStandaloneGatewayRequest::GetGatewayAlias() const
{
    return m_gatewayAlias;
}

void CreateStandaloneGatewayRequest::SetGatewayAlias(const string& _gatewayAlias)
{
    m_gatewayAlias = _gatewayAlias;
    m_gatewayAliasHasBeenSet = true;
}

bool CreateStandaloneGatewayRequest::GatewayAliasHasBeenSet() const
{
    return m_gatewayAliasHasBeenSet;
}

string CreateStandaloneGatewayRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateStandaloneGatewayRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateStandaloneGatewayRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> CreateStandaloneGatewayRequest::GetSubnetIds() const
{
    return m_subnetIds;
}

void CreateStandaloneGatewayRequest::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool CreateStandaloneGatewayRequest::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

string CreateStandaloneGatewayRequest::GetGatewayDesc() const
{
    return m_gatewayDesc;
}

void CreateStandaloneGatewayRequest::SetGatewayDesc(const string& _gatewayDesc)
{
    m_gatewayDesc = _gatewayDesc;
    m_gatewayDescHasBeenSet = true;
}

bool CreateStandaloneGatewayRequest::GatewayDescHasBeenSet() const
{
    return m_gatewayDescHasBeenSet;
}

string CreateStandaloneGatewayRequest::GetPackageVersion() const
{
    return m_packageVersion;
}

void CreateStandaloneGatewayRequest::SetPackageVersion(const string& _packageVersion)
{
    m_packageVersion = _packageVersion;
    m_packageVersionHasBeenSet = true;
}

bool CreateStandaloneGatewayRequest::PackageVersionHasBeenSet() const
{
    return m_packageVersionHasBeenSet;
}



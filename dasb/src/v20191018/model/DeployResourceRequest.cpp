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

#include <tencentcloud/dasb/v20191018/model/DeployResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

DeployResourceRequest::DeployResourceRequest() :
    m_resourceIdHasBeenSet(false),
    m_apCodeHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_vpcCidrBlockHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_cdcClusterIdHasBeenSet(false)
{
}

string DeployResourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_apCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apCode.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
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

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetName.c_str(), allocator).Move(), allocator);
    }

    if (m_cdcClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cdcClusterId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeployResourceRequest::GetResourceId() const
{
    return m_resourceId;
}

void DeployResourceRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DeployResourceRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DeployResourceRequest::GetApCode() const
{
    return m_apCode;
}

void DeployResourceRequest::SetApCode(const string& _apCode)
{
    m_apCode = _apCode;
    m_apCodeHasBeenSet = true;
}

bool DeployResourceRequest::ApCodeHasBeenSet() const
{
    return m_apCodeHasBeenSet;
}

string DeployResourceRequest::GetZone() const
{
    return m_zone;
}

void DeployResourceRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DeployResourceRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DeployResourceRequest::GetVpcId() const
{
    return m_vpcId;
}

void DeployResourceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DeployResourceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DeployResourceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void DeployResourceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool DeployResourceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string DeployResourceRequest::GetCidrBlock() const
{
    return m_cidrBlock;
}

void DeployResourceRequest::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool DeployResourceRequest::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

string DeployResourceRequest::GetVpcName() const
{
    return m_vpcName;
}

void DeployResourceRequest::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool DeployResourceRequest::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string DeployResourceRequest::GetVpcCidrBlock() const
{
    return m_vpcCidrBlock;
}

void DeployResourceRequest::SetVpcCidrBlock(const string& _vpcCidrBlock)
{
    m_vpcCidrBlock = _vpcCidrBlock;
    m_vpcCidrBlockHasBeenSet = true;
}

bool DeployResourceRequest::VpcCidrBlockHasBeenSet() const
{
    return m_vpcCidrBlockHasBeenSet;
}

string DeployResourceRequest::GetSubnetName() const
{
    return m_subnetName;
}

void DeployResourceRequest::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool DeployResourceRequest::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string DeployResourceRequest::GetCdcClusterId() const
{
    return m_cdcClusterId;
}

void DeployResourceRequest::SetCdcClusterId(const string& _cdcClusterId)
{
    m_cdcClusterId = _cdcClusterId;
    m_cdcClusterIdHasBeenSet = true;
}

bool DeployResourceRequest::CdcClusterIdHasBeenSet() const
{
    return m_cdcClusterIdHasBeenSet;
}



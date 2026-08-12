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

#include <tencentcloud/bh/v20230418/model/DeployResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
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
    m_cdcClusterIdHasBeenSet(false),
    m_shareClbIdHasBeenSet(false),
    m_webAccessHasBeenSet(false),
    m_clientAccessHasBeenSet(false),
    m_intranetAccessHasBeenSet(false),
    m_externalAccessHasBeenSet(false),
    m_deploySubnetsHasBeenSet(false),
    m_intranetVpcIdHasBeenSet(false),
    m_intranetVpcCidrBlockHasBeenSet(false),
    m_intranetVpcNameHasBeenSet(false),
    m_intranetSubnetsHasBeenSet(false)
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

    if (m_shareClbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareClbId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_shareClbId.c_str(), allocator).Move(), allocator);
    }

    if (m_webAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_webAccess, allocator);
    }

    if (m_clientAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clientAccess, allocator);
    }

    if (m_intranetAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_intranetAccess, allocator);
    }

    if (m_externalAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_externalAccess, allocator);
    }

    if (m_deploySubnetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploySubnets";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deploySubnets.begin(); itr != m_deploySubnets.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_intranetVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_intranetVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_intranetVpcCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetVpcCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_intranetVpcCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_intranetVpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetVpcName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_intranetVpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_intranetSubnetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetSubnets";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_intranetSubnets.begin(); itr != m_intranetSubnets.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

string DeployResourceRequest::GetShareClbId() const
{
    return m_shareClbId;
}

void DeployResourceRequest::SetShareClbId(const string& _shareClbId)
{
    m_shareClbId = _shareClbId;
    m_shareClbIdHasBeenSet = true;
}

bool DeployResourceRequest::ShareClbIdHasBeenSet() const
{
    return m_shareClbIdHasBeenSet;
}

uint64_t DeployResourceRequest::GetWebAccess() const
{
    return m_webAccess;
}

void DeployResourceRequest::SetWebAccess(const uint64_t& _webAccess)
{
    m_webAccess = _webAccess;
    m_webAccessHasBeenSet = true;
}

bool DeployResourceRequest::WebAccessHasBeenSet() const
{
    return m_webAccessHasBeenSet;
}

uint64_t DeployResourceRequest::GetClientAccess() const
{
    return m_clientAccess;
}

void DeployResourceRequest::SetClientAccess(const uint64_t& _clientAccess)
{
    m_clientAccess = _clientAccess;
    m_clientAccessHasBeenSet = true;
}

bool DeployResourceRequest::ClientAccessHasBeenSet() const
{
    return m_clientAccessHasBeenSet;
}

uint64_t DeployResourceRequest::GetIntranetAccess() const
{
    return m_intranetAccess;
}

void DeployResourceRequest::SetIntranetAccess(const uint64_t& _intranetAccess)
{
    m_intranetAccess = _intranetAccess;
    m_intranetAccessHasBeenSet = true;
}

bool DeployResourceRequest::IntranetAccessHasBeenSet() const
{
    return m_intranetAccessHasBeenSet;
}

uint64_t DeployResourceRequest::GetExternalAccess() const
{
    return m_externalAccess;
}

void DeployResourceRequest::SetExternalAccess(const uint64_t& _externalAccess)
{
    m_externalAccess = _externalAccess;
    m_externalAccessHasBeenSet = true;
}

bool DeployResourceRequest::ExternalAccessHasBeenSet() const
{
    return m_externalAccessHasBeenSet;
}

vector<ParamInitResourceSubnet> DeployResourceRequest::GetDeploySubnets() const
{
    return m_deploySubnets;
}

void DeployResourceRequest::SetDeploySubnets(const vector<ParamInitResourceSubnet>& _deploySubnets)
{
    m_deploySubnets = _deploySubnets;
    m_deploySubnetsHasBeenSet = true;
}

bool DeployResourceRequest::DeploySubnetsHasBeenSet() const
{
    return m_deploySubnetsHasBeenSet;
}

string DeployResourceRequest::GetIntranetVpcId() const
{
    return m_intranetVpcId;
}

void DeployResourceRequest::SetIntranetVpcId(const string& _intranetVpcId)
{
    m_intranetVpcId = _intranetVpcId;
    m_intranetVpcIdHasBeenSet = true;
}

bool DeployResourceRequest::IntranetVpcIdHasBeenSet() const
{
    return m_intranetVpcIdHasBeenSet;
}

string DeployResourceRequest::GetIntranetVpcCidrBlock() const
{
    return m_intranetVpcCidrBlock;
}

void DeployResourceRequest::SetIntranetVpcCidrBlock(const string& _intranetVpcCidrBlock)
{
    m_intranetVpcCidrBlock = _intranetVpcCidrBlock;
    m_intranetVpcCidrBlockHasBeenSet = true;
}

bool DeployResourceRequest::IntranetVpcCidrBlockHasBeenSet() const
{
    return m_intranetVpcCidrBlockHasBeenSet;
}

string DeployResourceRequest::GetIntranetVpcName() const
{
    return m_intranetVpcName;
}

void DeployResourceRequest::SetIntranetVpcName(const string& _intranetVpcName)
{
    m_intranetVpcName = _intranetVpcName;
    m_intranetVpcNameHasBeenSet = true;
}

bool DeployResourceRequest::IntranetVpcNameHasBeenSet() const
{
    return m_intranetVpcNameHasBeenSet;
}

vector<ParamInitResourceSubnet> DeployResourceRequest::GetIntranetSubnets() const
{
    return m_intranetSubnets;
}

void DeployResourceRequest::SetIntranetSubnets(const vector<ParamInitResourceSubnet>& _intranetSubnets)
{
    m_intranetSubnets = _intranetSubnets;
    m_intranetSubnetsHasBeenSet = true;
}

bool DeployResourceRequest::IntranetSubnetsHasBeenSet() const
{
    return m_intranetSubnetsHasBeenSet;
}



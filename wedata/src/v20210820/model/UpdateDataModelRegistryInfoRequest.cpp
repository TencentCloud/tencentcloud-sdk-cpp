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

#include <tencentcloud/wedata/v20210820/model/UpdateDataModelRegistryInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

UpdateDataModelRegistryInfoRequest::UpdateDataModelRegistryInfoRequest() :
    m_cloudappIdHasBeenSet(false),
    m_appCamRoleHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_appCamRoleIdHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_ownIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcRegionHasBeenSet(false),
    m_pipHasBeenSet(false),
    m_pportHasBeenSet(false),
    m_isPublicHasBeenSet(false)
{
}

string UpdateDataModelRegistryInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cloudappIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudappId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cloudappId.c_str(), allocator).Move(), allocator);
    }

    if (m_appCamRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppCamRole";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appCamRole.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_port, allocator);
    }

    if (m_appCamRoleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppCamRoleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appCamRoleId.c_str(), allocator).Move(), allocator);
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tenantId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_pipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pip.c_str(), allocator).Move(), allocator);
    }

    if (m_pportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pport";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pport, allocator);
    }

    if (m_isPublicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPublic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPublic, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateDataModelRegistryInfoRequest::GetCloudappId() const
{
    return m_cloudappId;
}

void UpdateDataModelRegistryInfoRequest::SetCloudappId(const string& _cloudappId)
{
    m_cloudappId = _cloudappId;
    m_cloudappIdHasBeenSet = true;
}

bool UpdateDataModelRegistryInfoRequest::CloudappIdHasBeenSet() const
{
    return m_cloudappIdHasBeenSet;
}

string UpdateDataModelRegistryInfoRequest::GetAppCamRole() const
{
    return m_appCamRole;
}

void UpdateDataModelRegistryInfoRequest::SetAppCamRole(const string& _appCamRole)
{
    m_appCamRole = _appCamRole;
    m_appCamRoleHasBeenSet = true;
}

bool UpdateDataModelRegistryInfoRequest::AppCamRoleHasBeenSet() const
{
    return m_appCamRoleHasBeenSet;
}

string UpdateDataModelRegistryInfoRequest::GetIp() const
{
    return m_ip;
}

void UpdateDataModelRegistryInfoRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool UpdateDataModelRegistryInfoRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

uint64_t UpdateDataModelRegistryInfoRequest::GetPort() const
{
    return m_port;
}

void UpdateDataModelRegistryInfoRequest::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool UpdateDataModelRegistryInfoRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string UpdateDataModelRegistryInfoRequest::GetAppCamRoleId() const
{
    return m_appCamRoleId;
}

void UpdateDataModelRegistryInfoRequest::SetAppCamRoleId(const string& _appCamRoleId)
{
    m_appCamRoleId = _appCamRoleId;
    m_appCamRoleIdHasBeenSet = true;
}

bool UpdateDataModelRegistryInfoRequest::AppCamRoleIdHasBeenSet() const
{
    return m_appCamRoleIdHasBeenSet;
}

string UpdateDataModelRegistryInfoRequest::GetProvider() const
{
    return m_provider;
}

void UpdateDataModelRegistryInfoRequest::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool UpdateDataModelRegistryInfoRequest::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string UpdateDataModelRegistryInfoRequest::GetTenantId() const
{
    return m_tenantId;
}

void UpdateDataModelRegistryInfoRequest::SetTenantId(const string& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool UpdateDataModelRegistryInfoRequest::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

string UpdateDataModelRegistryInfoRequest::GetOwnId() const
{
    return m_ownId;
}

void UpdateDataModelRegistryInfoRequest::SetOwnId(const string& _ownId)
{
    m_ownId = _ownId;
    m_ownIdHasBeenSet = true;
}

bool UpdateDataModelRegistryInfoRequest::OwnIdHasBeenSet() const
{
    return m_ownIdHasBeenSet;
}

string UpdateDataModelRegistryInfoRequest::GetVpcId() const
{
    return m_vpcId;
}

void UpdateDataModelRegistryInfoRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool UpdateDataModelRegistryInfoRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string UpdateDataModelRegistryInfoRequest::GetVpcRegion() const
{
    return m_vpcRegion;
}

void UpdateDataModelRegistryInfoRequest::SetVpcRegion(const string& _vpcRegion)
{
    m_vpcRegion = _vpcRegion;
    m_vpcRegionHasBeenSet = true;
}

bool UpdateDataModelRegistryInfoRequest::VpcRegionHasBeenSet() const
{
    return m_vpcRegionHasBeenSet;
}

string UpdateDataModelRegistryInfoRequest::GetPip() const
{
    return m_pip;
}

void UpdateDataModelRegistryInfoRequest::SetPip(const string& _pip)
{
    m_pip = _pip;
    m_pipHasBeenSet = true;
}

bool UpdateDataModelRegistryInfoRequest::PipHasBeenSet() const
{
    return m_pipHasBeenSet;
}

uint64_t UpdateDataModelRegistryInfoRequest::GetPport() const
{
    return m_pport;
}

void UpdateDataModelRegistryInfoRequest::SetPport(const uint64_t& _pport)
{
    m_pport = _pport;
    m_pportHasBeenSet = true;
}

bool UpdateDataModelRegistryInfoRequest::PportHasBeenSet() const
{
    return m_pportHasBeenSet;
}

uint64_t UpdateDataModelRegistryInfoRequest::GetIsPublic() const
{
    return m_isPublic;
}

void UpdateDataModelRegistryInfoRequest::SetIsPublic(const uint64_t& _isPublic)
{
    m_isPublic = _isPublic;
    m_isPublicHasBeenSet = true;
}

bool UpdateDataModelRegistryInfoRequest::IsPublicHasBeenSet() const
{
    return m_isPublicHasBeenSet;
}



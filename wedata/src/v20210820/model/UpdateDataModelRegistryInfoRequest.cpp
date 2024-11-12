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
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_appCamRoleIdHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_ownIdHasBeenSet(false)
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

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vport, allocator);
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

string UpdateDataModelRegistryInfoRequest::GetVip() const
{
    return m_vip;
}

void UpdateDataModelRegistryInfoRequest::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool UpdateDataModelRegistryInfoRequest::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

uint64_t UpdateDataModelRegistryInfoRequest::GetVport() const
{
    return m_vport;
}

void UpdateDataModelRegistryInfoRequest::SetVport(const uint64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool UpdateDataModelRegistryInfoRequest::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
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



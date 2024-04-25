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

#include <tencentcloud/cloudstudio/v20230508/model/CreateWorkspaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cloudstudio::V20230508::Model;
using namespace std;

CreateWorkspaceRequest::CreateWorkspaceRequest() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_specsHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_repositoryHasBeenSet(false),
    m_envsHasBeenSet(false),
    m_extensionsHasBeenSet(false),
    m_lifecycleHasBeenSet(false),
    m_tenantAppIdHasBeenSet(false),
    m_tenantUinHasBeenSet(false),
    m_tenantUniqVpcIdHasBeenSet(false),
    m_tenantSubnetIdHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

string CreateWorkspaceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_specsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Specs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_specs.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Repository";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_repository.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_envsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Envs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envs.begin(); itr != m_envs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_extensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extensions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_extensions.begin(); itr != m_extensions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_lifecycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lifecycle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lifecycle.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tenantAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tenantAppId, allocator);
    }

    if (m_tenantUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tenantUin.c_str(), allocator).Move(), allocator);
    }

    if (m_tenantUniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantUniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tenantUniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_tenantSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantSubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tenantSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateWorkspaceRequest::GetName() const
{
    return m_name;
}

void CreateWorkspaceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateWorkspaceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateWorkspaceRequest::GetDescription() const
{
    return m_description;
}

void CreateWorkspaceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateWorkspaceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateWorkspaceRequest::GetSpecs() const
{
    return m_specs;
}

void CreateWorkspaceRequest::SetSpecs(const string& _specs)
{
    m_specs = _specs;
    m_specsHasBeenSet = true;
}

bool CreateWorkspaceRequest::SpecsHasBeenSet() const
{
    return m_specsHasBeenSet;
}

string CreateWorkspaceRequest::GetImage() const
{
    return m_image;
}

void CreateWorkspaceRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool CreateWorkspaceRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

GitRepository CreateWorkspaceRequest::GetRepository() const
{
    return m_repository;
}

void CreateWorkspaceRequest::SetRepository(const GitRepository& _repository)
{
    m_repository = _repository;
    m_repositoryHasBeenSet = true;
}

bool CreateWorkspaceRequest::RepositoryHasBeenSet() const
{
    return m_repositoryHasBeenSet;
}

vector<Env> CreateWorkspaceRequest::GetEnvs() const
{
    return m_envs;
}

void CreateWorkspaceRequest::SetEnvs(const vector<Env>& _envs)
{
    m_envs = _envs;
    m_envsHasBeenSet = true;
}

bool CreateWorkspaceRequest::EnvsHasBeenSet() const
{
    return m_envsHasBeenSet;
}

vector<string> CreateWorkspaceRequest::GetExtensions() const
{
    return m_extensions;
}

void CreateWorkspaceRequest::SetExtensions(const vector<string>& _extensions)
{
    m_extensions = _extensions;
    m_extensionsHasBeenSet = true;
}

bool CreateWorkspaceRequest::ExtensionsHasBeenSet() const
{
    return m_extensionsHasBeenSet;
}

LifeCycle CreateWorkspaceRequest::GetLifecycle() const
{
    return m_lifecycle;
}

void CreateWorkspaceRequest::SetLifecycle(const LifeCycle& _lifecycle)
{
    m_lifecycle = _lifecycle;
    m_lifecycleHasBeenSet = true;
}

bool CreateWorkspaceRequest::LifecycleHasBeenSet() const
{
    return m_lifecycleHasBeenSet;
}

int64_t CreateWorkspaceRequest::GetTenantAppId() const
{
    return m_tenantAppId;
}

void CreateWorkspaceRequest::SetTenantAppId(const int64_t& _tenantAppId)
{
    m_tenantAppId = _tenantAppId;
    m_tenantAppIdHasBeenSet = true;
}

bool CreateWorkspaceRequest::TenantAppIdHasBeenSet() const
{
    return m_tenantAppIdHasBeenSet;
}

string CreateWorkspaceRequest::GetTenantUin() const
{
    return m_tenantUin;
}

void CreateWorkspaceRequest::SetTenantUin(const string& _tenantUin)
{
    m_tenantUin = _tenantUin;
    m_tenantUinHasBeenSet = true;
}

bool CreateWorkspaceRequest::TenantUinHasBeenSet() const
{
    return m_tenantUinHasBeenSet;
}

string CreateWorkspaceRequest::GetTenantUniqVpcId() const
{
    return m_tenantUniqVpcId;
}

void CreateWorkspaceRequest::SetTenantUniqVpcId(const string& _tenantUniqVpcId)
{
    m_tenantUniqVpcId = _tenantUniqVpcId;
    m_tenantUniqVpcIdHasBeenSet = true;
}

bool CreateWorkspaceRequest::TenantUniqVpcIdHasBeenSet() const
{
    return m_tenantUniqVpcIdHasBeenSet;
}

string CreateWorkspaceRequest::GetTenantSubnetId() const
{
    return m_tenantSubnetId;
}

void CreateWorkspaceRequest::SetTenantSubnetId(const string& _tenantSubnetId)
{
    m_tenantSubnetId = _tenantSubnetId;
    m_tenantSubnetIdHasBeenSet = true;
}

bool CreateWorkspaceRequest::TenantSubnetIdHasBeenSet() const
{
    return m_tenantSubnetIdHasBeenSet;
}

string CreateWorkspaceRequest::GetRegion() const
{
    return m_region;
}

void CreateWorkspaceRequest::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CreateWorkspaceRequest::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}



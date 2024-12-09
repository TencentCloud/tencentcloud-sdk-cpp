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

#include <tencentcloud/emr/v20190103/model/CreateCloudInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

CreateCloudInstanceRequest::CreateCloudInstanceRequest() :
    m_instanceNameHasBeenSet(false),
    m_clusterClassHasBeenSet(false),
    m_softwareHasBeenSet(false),
    m_platFormTypeHasBeenSet(false),
    m_cosBucketHasBeenSet(false),
    m_eksClusterIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_vPCSettingsHasBeenSet(false),
    m_cloudResourcesHasBeenSet(false),
    m_sgIdHasBeenSet(false),
    m_metaDBInfoHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_loginSettingsHasBeenSet(false),
    m_externalServiceHasBeenSet(false),
    m_zoneIdHasBeenSet(false)
{
}

string CreateCloudInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterClass";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterClass.c_str(), allocator).Move(), allocator);
    }

    if (m_softwareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Software";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_software.begin(); itr != m_software.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_platFormTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatFormType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platFormType.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_eksClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EksClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eksClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_productId, allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_vPCSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPCSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vPCSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cloudResourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudResources";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cloudResources.begin(); itr != m_cloudResources.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_sgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sgId.c_str(), allocator).Move(), allocator);
    }

    if (m_metaDBInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaDBInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaDBInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_loginSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loginSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_externalServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalService";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_externalService.begin(); itr != m_externalService.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_zoneId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCloudInstanceRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateCloudInstanceRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateCloudInstanceRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CreateCloudInstanceRequest::GetClusterClass() const
{
    return m_clusterClass;
}

void CreateCloudInstanceRequest::SetClusterClass(const string& _clusterClass)
{
    m_clusterClass = _clusterClass;
    m_clusterClassHasBeenSet = true;
}

bool CreateCloudInstanceRequest::ClusterClassHasBeenSet() const
{
    return m_clusterClassHasBeenSet;
}

vector<string> CreateCloudInstanceRequest::GetSoftware() const
{
    return m_software;
}

void CreateCloudInstanceRequest::SetSoftware(const vector<string>& _software)
{
    m_software = _software;
    m_softwareHasBeenSet = true;
}

bool CreateCloudInstanceRequest::SoftwareHasBeenSet() const
{
    return m_softwareHasBeenSet;
}

string CreateCloudInstanceRequest::GetPlatFormType() const
{
    return m_platFormType;
}

void CreateCloudInstanceRequest::SetPlatFormType(const string& _platFormType)
{
    m_platFormType = _platFormType;
    m_platFormTypeHasBeenSet = true;
}

bool CreateCloudInstanceRequest::PlatFormTypeHasBeenSet() const
{
    return m_platFormTypeHasBeenSet;
}

string CreateCloudInstanceRequest::GetCosBucket() const
{
    return m_cosBucket;
}

void CreateCloudInstanceRequest::SetCosBucket(const string& _cosBucket)
{
    m_cosBucket = _cosBucket;
    m_cosBucketHasBeenSet = true;
}

bool CreateCloudInstanceRequest::CosBucketHasBeenSet() const
{
    return m_cosBucketHasBeenSet;
}

string CreateCloudInstanceRequest::GetEksClusterId() const
{
    return m_eksClusterId;
}

void CreateCloudInstanceRequest::SetEksClusterId(const string& _eksClusterId)
{
    m_eksClusterId = _eksClusterId;
    m_eksClusterIdHasBeenSet = true;
}

bool CreateCloudInstanceRequest::EksClusterIdHasBeenSet() const
{
    return m_eksClusterIdHasBeenSet;
}

int64_t CreateCloudInstanceRequest::GetProductId() const
{
    return m_productId;
}

void CreateCloudInstanceRequest::SetProductId(const int64_t& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CreateCloudInstanceRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string CreateCloudInstanceRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateCloudInstanceRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateCloudInstanceRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

VPCSettings CreateCloudInstanceRequest::GetVPCSettings() const
{
    return m_vPCSettings;
}

void CreateCloudInstanceRequest::SetVPCSettings(const VPCSettings& _vPCSettings)
{
    m_vPCSettings = _vPCSettings;
    m_vPCSettingsHasBeenSet = true;
}

bool CreateCloudInstanceRequest::VPCSettingsHasBeenSet() const
{
    return m_vPCSettingsHasBeenSet;
}

vector<CloudResource> CreateCloudInstanceRequest::GetCloudResources() const
{
    return m_cloudResources;
}

void CreateCloudInstanceRequest::SetCloudResources(const vector<CloudResource>& _cloudResources)
{
    m_cloudResources = _cloudResources;
    m_cloudResourcesHasBeenSet = true;
}

bool CreateCloudInstanceRequest::CloudResourcesHasBeenSet() const
{
    return m_cloudResourcesHasBeenSet;
}

string CreateCloudInstanceRequest::GetSgId() const
{
    return m_sgId;
}

void CreateCloudInstanceRequest::SetSgId(const string& _sgId)
{
    m_sgId = _sgId;
    m_sgIdHasBeenSet = true;
}

bool CreateCloudInstanceRequest::SgIdHasBeenSet() const
{
    return m_sgIdHasBeenSet;
}

CustomMetaDBInfo CreateCloudInstanceRequest::GetMetaDBInfo() const
{
    return m_metaDBInfo;
}

void CreateCloudInstanceRequest::SetMetaDBInfo(const CustomMetaDBInfo& _metaDBInfo)
{
    m_metaDBInfo = _metaDBInfo;
    m_metaDBInfoHasBeenSet = true;
}

bool CreateCloudInstanceRequest::MetaDBInfoHasBeenSet() const
{
    return m_metaDBInfoHasBeenSet;
}

vector<Tag> CreateCloudInstanceRequest::GetTags() const
{
    return m_tags;
}

void CreateCloudInstanceRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateCloudInstanceRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

LoginSettings CreateCloudInstanceRequest::GetLoginSettings() const
{
    return m_loginSettings;
}

void CreateCloudInstanceRequest::SetLoginSettings(const LoginSettings& _loginSettings)
{
    m_loginSettings = _loginSettings;
    m_loginSettingsHasBeenSet = true;
}

bool CreateCloudInstanceRequest::LoginSettingsHasBeenSet() const
{
    return m_loginSettingsHasBeenSet;
}

vector<ExternalService> CreateCloudInstanceRequest::GetExternalService() const
{
    return m_externalService;
}

void CreateCloudInstanceRequest::SetExternalService(const vector<ExternalService>& _externalService)
{
    m_externalService = _externalService;
    m_externalServiceHasBeenSet = true;
}

bool CreateCloudInstanceRequest::ExternalServiceHasBeenSet() const
{
    return m_externalServiceHasBeenSet;
}

int64_t CreateCloudInstanceRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateCloudInstanceRequest::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateCloudInstanceRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}



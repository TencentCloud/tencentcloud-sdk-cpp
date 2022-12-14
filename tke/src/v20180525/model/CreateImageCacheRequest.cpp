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

#include <tencentcloud/tke/v20180525/model/CreateImageCacheRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

CreateImageCacheRequest::CreateImageCacheRequest() :
    m_imagesHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_imageCacheNameHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_imageRegistryCredentialsHasBeenSet(false),
    m_existedEipIdHasBeenSet(false),
    m_autoCreateEipHasBeenSet(false),
    m_autoCreateEipAttributeHasBeenSet(false),
    m_imageCacheSizeHasBeenSet(false),
    m_retentionDaysHasBeenSet(false),
    m_registrySkipVerifyListHasBeenSet(false),
    m_registryHttpEndPointListHasBeenSet(false),
    m_resolveConfigHasBeenSet(false)
{
}

string CreateImageCacheRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Images";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_images.begin(); itr != m_images.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageCacheNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCacheName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageCacheName.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_imageRegistryCredentialsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRegistryCredentials";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imageRegistryCredentials.begin(); itr != m_imageRegistryCredentials.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_existedEipIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExistedEipId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_existedEipId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoCreateEipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoCreateEip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoCreateEip, allocator);
    }

    if (m_autoCreateEipAttributeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoCreateEipAttribute";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoCreateEipAttribute.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_imageCacheSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCacheSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_imageCacheSize, allocator);
    }

    if (m_retentionDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retentionDays, allocator);
    }

    if (m_registrySkipVerifyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrySkipVerifyList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_registrySkipVerifyList.begin(); itr != m_registrySkipVerifyList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_registryHttpEndPointListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryHttpEndPointList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_registryHttpEndPointList.begin(); itr != m_registryHttpEndPointList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resolveConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResolveConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resolveConfig.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> CreateImageCacheRequest::GetImages() const
{
    return m_images;
}

void CreateImageCacheRequest::SetImages(const vector<string>& _images)
{
    m_images = _images;
    m_imagesHasBeenSet = true;
}

bool CreateImageCacheRequest::ImagesHasBeenSet() const
{
    return m_imagesHasBeenSet;
}

string CreateImageCacheRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateImageCacheRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateImageCacheRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateImageCacheRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateImageCacheRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateImageCacheRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateImageCacheRequest::GetImageCacheName() const
{
    return m_imageCacheName;
}

void CreateImageCacheRequest::SetImageCacheName(const string& _imageCacheName)
{
    m_imageCacheName = _imageCacheName;
    m_imageCacheNameHasBeenSet = true;
}

bool CreateImageCacheRequest::ImageCacheNameHasBeenSet() const
{
    return m_imageCacheNameHasBeenSet;
}

vector<string> CreateImageCacheRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateImageCacheRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateImageCacheRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

vector<ImageRegistryCredential> CreateImageCacheRequest::GetImageRegistryCredentials() const
{
    return m_imageRegistryCredentials;
}

void CreateImageCacheRequest::SetImageRegistryCredentials(const vector<ImageRegistryCredential>& _imageRegistryCredentials)
{
    m_imageRegistryCredentials = _imageRegistryCredentials;
    m_imageRegistryCredentialsHasBeenSet = true;
}

bool CreateImageCacheRequest::ImageRegistryCredentialsHasBeenSet() const
{
    return m_imageRegistryCredentialsHasBeenSet;
}

string CreateImageCacheRequest::GetExistedEipId() const
{
    return m_existedEipId;
}

void CreateImageCacheRequest::SetExistedEipId(const string& _existedEipId)
{
    m_existedEipId = _existedEipId;
    m_existedEipIdHasBeenSet = true;
}

bool CreateImageCacheRequest::ExistedEipIdHasBeenSet() const
{
    return m_existedEipIdHasBeenSet;
}

bool CreateImageCacheRequest::GetAutoCreateEip() const
{
    return m_autoCreateEip;
}

void CreateImageCacheRequest::SetAutoCreateEip(const bool& _autoCreateEip)
{
    m_autoCreateEip = _autoCreateEip;
    m_autoCreateEipHasBeenSet = true;
}

bool CreateImageCacheRequest::AutoCreateEipHasBeenSet() const
{
    return m_autoCreateEipHasBeenSet;
}

EipAttribute CreateImageCacheRequest::GetAutoCreateEipAttribute() const
{
    return m_autoCreateEipAttribute;
}

void CreateImageCacheRequest::SetAutoCreateEipAttribute(const EipAttribute& _autoCreateEipAttribute)
{
    m_autoCreateEipAttribute = _autoCreateEipAttribute;
    m_autoCreateEipAttributeHasBeenSet = true;
}

bool CreateImageCacheRequest::AutoCreateEipAttributeHasBeenSet() const
{
    return m_autoCreateEipAttributeHasBeenSet;
}

uint64_t CreateImageCacheRequest::GetImageCacheSize() const
{
    return m_imageCacheSize;
}

void CreateImageCacheRequest::SetImageCacheSize(const uint64_t& _imageCacheSize)
{
    m_imageCacheSize = _imageCacheSize;
    m_imageCacheSizeHasBeenSet = true;
}

bool CreateImageCacheRequest::ImageCacheSizeHasBeenSet() const
{
    return m_imageCacheSizeHasBeenSet;
}

uint64_t CreateImageCacheRequest::GetRetentionDays() const
{
    return m_retentionDays;
}

void CreateImageCacheRequest::SetRetentionDays(const uint64_t& _retentionDays)
{
    m_retentionDays = _retentionDays;
    m_retentionDaysHasBeenSet = true;
}

bool CreateImageCacheRequest::RetentionDaysHasBeenSet() const
{
    return m_retentionDaysHasBeenSet;
}

vector<string> CreateImageCacheRequest::GetRegistrySkipVerifyList() const
{
    return m_registrySkipVerifyList;
}

void CreateImageCacheRequest::SetRegistrySkipVerifyList(const vector<string>& _registrySkipVerifyList)
{
    m_registrySkipVerifyList = _registrySkipVerifyList;
    m_registrySkipVerifyListHasBeenSet = true;
}

bool CreateImageCacheRequest::RegistrySkipVerifyListHasBeenSet() const
{
    return m_registrySkipVerifyListHasBeenSet;
}

vector<string> CreateImageCacheRequest::GetRegistryHttpEndPointList() const
{
    return m_registryHttpEndPointList;
}

void CreateImageCacheRequest::SetRegistryHttpEndPointList(const vector<string>& _registryHttpEndPointList)
{
    m_registryHttpEndPointList = _registryHttpEndPointList;
    m_registryHttpEndPointListHasBeenSet = true;
}

bool CreateImageCacheRequest::RegistryHttpEndPointListHasBeenSet() const
{
    return m_registryHttpEndPointListHasBeenSet;
}

string CreateImageCacheRequest::GetResolveConfig() const
{
    return m_resolveConfig;
}

void CreateImageCacheRequest::SetResolveConfig(const string& _resolveConfig)
{
    m_resolveConfig = _resolveConfig;
    m_resolveConfigHasBeenSet = true;
}

bool CreateImageCacheRequest::ResolveConfigHasBeenSet() const
{
    return m_resolveConfigHasBeenSet;
}



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

#include <tencentcloud/tke/v20180525/model/UpdateImageCacheRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

UpdateImageCacheRequest::UpdateImageCacheRequest() :
    m_imageCacheIdHasBeenSet(false),
    m_imageCacheNameHasBeenSet(false),
    m_imageRegistryCredentialsHasBeenSet(false),
    m_imagesHasBeenSet(false),
    m_imageCacheSizeHasBeenSet(false),
    m_retentionDaysHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false)
{
}

string UpdateImageCacheRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageCacheIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCacheId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageCacheId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageCacheNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCacheName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageCacheName.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateImageCacheRequest::GetImageCacheId() const
{
    return m_imageCacheId;
}

void UpdateImageCacheRequest::SetImageCacheId(const string& _imageCacheId)
{
    m_imageCacheId = _imageCacheId;
    m_imageCacheIdHasBeenSet = true;
}

bool UpdateImageCacheRequest::ImageCacheIdHasBeenSet() const
{
    return m_imageCacheIdHasBeenSet;
}

string UpdateImageCacheRequest::GetImageCacheName() const
{
    return m_imageCacheName;
}

void UpdateImageCacheRequest::SetImageCacheName(const string& _imageCacheName)
{
    m_imageCacheName = _imageCacheName;
    m_imageCacheNameHasBeenSet = true;
}

bool UpdateImageCacheRequest::ImageCacheNameHasBeenSet() const
{
    return m_imageCacheNameHasBeenSet;
}

vector<ImageRegistryCredential> UpdateImageCacheRequest::GetImageRegistryCredentials() const
{
    return m_imageRegistryCredentials;
}

void UpdateImageCacheRequest::SetImageRegistryCredentials(const vector<ImageRegistryCredential>& _imageRegistryCredentials)
{
    m_imageRegistryCredentials = _imageRegistryCredentials;
    m_imageRegistryCredentialsHasBeenSet = true;
}

bool UpdateImageCacheRequest::ImageRegistryCredentialsHasBeenSet() const
{
    return m_imageRegistryCredentialsHasBeenSet;
}

vector<string> UpdateImageCacheRequest::GetImages() const
{
    return m_images;
}

void UpdateImageCacheRequest::SetImages(const vector<string>& _images)
{
    m_images = _images;
    m_imagesHasBeenSet = true;
}

bool UpdateImageCacheRequest::ImagesHasBeenSet() const
{
    return m_imagesHasBeenSet;
}

uint64_t UpdateImageCacheRequest::GetImageCacheSize() const
{
    return m_imageCacheSize;
}

void UpdateImageCacheRequest::SetImageCacheSize(const uint64_t& _imageCacheSize)
{
    m_imageCacheSize = _imageCacheSize;
    m_imageCacheSizeHasBeenSet = true;
}

bool UpdateImageCacheRequest::ImageCacheSizeHasBeenSet() const
{
    return m_imageCacheSizeHasBeenSet;
}

uint64_t UpdateImageCacheRequest::GetRetentionDays() const
{
    return m_retentionDays;
}

void UpdateImageCacheRequest::SetRetentionDays(const uint64_t& _retentionDays)
{
    m_retentionDays = _retentionDays;
    m_retentionDaysHasBeenSet = true;
}

bool UpdateImageCacheRequest::RetentionDaysHasBeenSet() const
{
    return m_retentionDaysHasBeenSet;
}

vector<string> UpdateImageCacheRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void UpdateImageCacheRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool UpdateImageCacheRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}



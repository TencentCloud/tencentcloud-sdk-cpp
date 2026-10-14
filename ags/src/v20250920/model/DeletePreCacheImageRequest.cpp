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

#include <tencentcloud/ags/v20250920/model/DeletePreCacheImageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

DeletePreCacheImageRequest::DeletePreCacheImageRequest() :
    m_imageHasBeenSet(false),
    m_imageDigestHasBeenSet(false),
    m_imageRegistryTypeHasBeenSet(false),
    m_preCacheImageIdHasBeenSet(false)
{
}

string DeletePreCacheImageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_imageDigestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageDigest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageDigest.c_str(), allocator).Move(), allocator);
    }

    if (m_imageRegistryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRegistryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageRegistryType.c_str(), allocator).Move(), allocator);
    }

    if (m_preCacheImageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreCacheImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_preCacheImageId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeletePreCacheImageRequest::GetImage() const
{
    return m_image;
}

void DeletePreCacheImageRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool DeletePreCacheImageRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string DeletePreCacheImageRequest::GetImageDigest() const
{
    return m_imageDigest;
}

void DeletePreCacheImageRequest::SetImageDigest(const string& _imageDigest)
{
    m_imageDigest = _imageDigest;
    m_imageDigestHasBeenSet = true;
}

bool DeletePreCacheImageRequest::ImageDigestHasBeenSet() const
{
    return m_imageDigestHasBeenSet;
}

string DeletePreCacheImageRequest::GetImageRegistryType() const
{
    return m_imageRegistryType;
}

void DeletePreCacheImageRequest::SetImageRegistryType(const string& _imageRegistryType)
{
    m_imageRegistryType = _imageRegistryType;
    m_imageRegistryTypeHasBeenSet = true;
}

bool DeletePreCacheImageRequest::ImageRegistryTypeHasBeenSet() const
{
    return m_imageRegistryTypeHasBeenSet;
}

string DeletePreCacheImageRequest::GetPreCacheImageId() const
{
    return m_preCacheImageId;
}

void DeletePreCacheImageRequest::SetPreCacheImageId(const string& _preCacheImageId)
{
    m_preCacheImageId = _preCacheImageId;
    m_preCacheImageIdHasBeenSet = true;
}

bool DeletePreCacheImageRequest::PreCacheImageIdHasBeenSet() const
{
    return m_preCacheImageIdHasBeenSet;
}



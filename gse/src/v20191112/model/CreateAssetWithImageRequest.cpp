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

#include <tencentcloud/gse/v20191112/model/CreateAssetWithImageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

CreateAssetWithImageRequest::CreateAssetWithImageRequest() :
    m_assetNameHasBeenSet(false),
    m_assetVersionHasBeenSet(false),
    m_assetRegionHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_imageSizeHasBeenSet(false),
    m_imageOsHasBeenSet(false),
    m_osTypeHasBeenSet(false),
    m_imageTypeHasBeenSet(false),
    m_osBitHasBeenSet(false)
{
}

string CreateAssetWithImageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_assetRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageSize.c_str(), allocator).Move(), allocator);
    }

    if (m_imageOsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageOs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageOs.c_str(), allocator).Move(), allocator);
    }

    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_osType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageType.c_str(), allocator).Move(), allocator);
    }

    if (m_osBitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsBit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_osBit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAssetWithImageRequest::GetAssetName() const
{
    return m_assetName;
}

void CreateAssetWithImageRequest::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool CreateAssetWithImageRequest::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string CreateAssetWithImageRequest::GetAssetVersion() const
{
    return m_assetVersion;
}

void CreateAssetWithImageRequest::SetAssetVersion(const string& _assetVersion)
{
    m_assetVersion = _assetVersion;
    m_assetVersionHasBeenSet = true;
}

bool CreateAssetWithImageRequest::AssetVersionHasBeenSet() const
{
    return m_assetVersionHasBeenSet;
}

string CreateAssetWithImageRequest::GetAssetRegion() const
{
    return m_assetRegion;
}

void CreateAssetWithImageRequest::SetAssetRegion(const string& _assetRegion)
{
    m_assetRegion = _assetRegion;
    m_assetRegionHasBeenSet = true;
}

bool CreateAssetWithImageRequest::AssetRegionHasBeenSet() const
{
    return m_assetRegionHasBeenSet;
}

string CreateAssetWithImageRequest::GetImageId() const
{
    return m_imageId;
}

void CreateAssetWithImageRequest::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool CreateAssetWithImageRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string CreateAssetWithImageRequest::GetImageSize() const
{
    return m_imageSize;
}

void CreateAssetWithImageRequest::SetImageSize(const string& _imageSize)
{
    m_imageSize = _imageSize;
    m_imageSizeHasBeenSet = true;
}

bool CreateAssetWithImageRequest::ImageSizeHasBeenSet() const
{
    return m_imageSizeHasBeenSet;
}

string CreateAssetWithImageRequest::GetImageOs() const
{
    return m_imageOs;
}

void CreateAssetWithImageRequest::SetImageOs(const string& _imageOs)
{
    m_imageOs = _imageOs;
    m_imageOsHasBeenSet = true;
}

bool CreateAssetWithImageRequest::ImageOsHasBeenSet() const
{
    return m_imageOsHasBeenSet;
}

string CreateAssetWithImageRequest::GetOsType() const
{
    return m_osType;
}

void CreateAssetWithImageRequest::SetOsType(const string& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool CreateAssetWithImageRequest::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

string CreateAssetWithImageRequest::GetImageType() const
{
    return m_imageType;
}

void CreateAssetWithImageRequest::SetImageType(const string& _imageType)
{
    m_imageType = _imageType;
    m_imageTypeHasBeenSet = true;
}

bool CreateAssetWithImageRequest::ImageTypeHasBeenSet() const
{
    return m_imageTypeHasBeenSet;
}

uint64_t CreateAssetWithImageRequest::GetOsBit() const
{
    return m_osBit;
}

void CreateAssetWithImageRequest::SetOsBit(const uint64_t& _osBit)
{
    m_osBit = _osBit;
    m_osBitHasBeenSet = true;
}

bool CreateAssetWithImageRequest::OsBitHasBeenSet() const
{
    return m_osBitHasBeenSet;
}



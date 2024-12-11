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

#include <tencentcloud/tione/v20211111/model/ImageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ImageInfo::ImageInfo() :
    m_imageTypeHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_registryRegionHasBeenSet(false),
    m_registryIdHasBeenSet(false),
    m_allowSaveAllContentHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_supportDataPipelineHasBeenSet(false)
{
}

CoreInternalOutcome ImageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageType") && !value["ImageType"].IsNull())
    {
        if (!value["ImageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.ImageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageType = string(value["ImageType"].GetString());
        m_imageTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageUrl") && !value["ImageUrl"].IsNull())
    {
        if (!value["ImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.ImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrl = string(value["ImageUrl"].GetString());
        m_imageUrlHasBeenSet = true;
    }

    if (value.HasMember("RegistryRegion") && !value["RegistryRegion"].IsNull())
    {
        if (!value["RegistryRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.RegistryRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryRegion = string(value["RegistryRegion"].GetString());
        m_registryRegionHasBeenSet = true;
    }

    if (value.HasMember("RegistryId") && !value["RegistryId"].IsNull())
    {
        if (!value["RegistryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.RegistryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryId = string(value["RegistryId"].GetString());
        m_registryIdHasBeenSet = true;
    }

    if (value.HasMember("AllowSaveAllContent") && !value["AllowSaveAllContent"].IsNull())
    {
        if (!value["AllowSaveAllContent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.AllowSaveAllContent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowSaveAllContent = value["AllowSaveAllContent"].GetBool();
        m_allowSaveAllContentHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("SupportDataPipeline") && !value["SupportDataPipeline"].IsNull())
    {
        if (!value["SupportDataPipeline"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.SupportDataPipeline` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportDataPipeline = value["SupportDataPipeline"].GetBool();
        m_supportDataPipelineHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_registryRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_allowSaveAllContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowSaveAllContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowSaveAllContent, allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_supportDataPipelineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportDataPipeline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportDataPipeline, allocator);
    }

}


string ImageInfo::GetImageType() const
{
    return m_imageType;
}

void ImageInfo::SetImageType(const string& _imageType)
{
    m_imageType = _imageType;
    m_imageTypeHasBeenSet = true;
}

bool ImageInfo::ImageTypeHasBeenSet() const
{
    return m_imageTypeHasBeenSet;
}

string ImageInfo::GetImageUrl() const
{
    return m_imageUrl;
}

void ImageInfo::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool ImageInfo::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string ImageInfo::GetRegistryRegion() const
{
    return m_registryRegion;
}

void ImageInfo::SetRegistryRegion(const string& _registryRegion)
{
    m_registryRegion = _registryRegion;
    m_registryRegionHasBeenSet = true;
}

bool ImageInfo::RegistryRegionHasBeenSet() const
{
    return m_registryRegionHasBeenSet;
}

string ImageInfo::GetRegistryId() const
{
    return m_registryId;
}

void ImageInfo::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool ImageInfo::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

bool ImageInfo::GetAllowSaveAllContent() const
{
    return m_allowSaveAllContent;
}

void ImageInfo::SetAllowSaveAllContent(const bool& _allowSaveAllContent)
{
    m_allowSaveAllContent = _allowSaveAllContent;
    m_allowSaveAllContentHasBeenSet = true;
}

bool ImageInfo::AllowSaveAllContentHasBeenSet() const
{
    return m_allowSaveAllContentHasBeenSet;
}

string ImageInfo::GetImageName() const
{
    return m_imageName;
}

void ImageInfo::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool ImageInfo::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

bool ImageInfo::GetSupportDataPipeline() const
{
    return m_supportDataPipeline;
}

void ImageInfo::SetSupportDataPipeline(const bool& _supportDataPipeline)
{
    m_supportDataPipeline = _supportDataPipeline;
    m_supportDataPipelineHasBeenSet = true;
}

bool ImageInfo::SupportDataPipelineHasBeenSet() const
{
    return m_supportDataPipelineHasBeenSet;
}


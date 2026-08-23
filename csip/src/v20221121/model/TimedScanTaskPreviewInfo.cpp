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

#include <tencentcloud/csip/v20221121/model/TimedScanTaskPreviewInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TimedScanTaskPreviewInfo::TimedScanTaskPreviewInfo() :
    m_idHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageTagHasBeenSet(false),
    m_registryTypeHasBeenSet(false),
    m_ownerAccountNameHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_ownerAppIdHasBeenSet(false),
    m_isLatestImageHasBeenSet(false),
    m_imageRepoAddressHasBeenSet(false)
{
}

CoreInternalOutcome TimedScanTaskPreviewInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimedScanTaskPreviewInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimedScanTaskPreviewInfo.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimedScanTaskPreviewInfo.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("ImageTag") && !value["ImageTag"].IsNull())
    {
        if (!value["ImageTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimedScanTaskPreviewInfo.ImageTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageTag = string(value["ImageTag"].GetString());
        m_imageTagHasBeenSet = true;
    }

    if (value.HasMember("RegistryType") && !value["RegistryType"].IsNull())
    {
        if (!value["RegistryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimedScanTaskPreviewInfo.RegistryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryType = string(value["RegistryType"].GetString());
        m_registryTypeHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccountName") && !value["OwnerAccountName"].IsNull())
    {
        if (!value["OwnerAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimedScanTaskPreviewInfo.OwnerAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccountName = string(value["OwnerAccountName"].GetString());
        m_ownerAccountNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimedScanTaskPreviewInfo.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerAppId") && !value["OwnerAppId"].IsNull())
    {
        if (!value["OwnerAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimedScanTaskPreviewInfo.OwnerAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAppId = value["OwnerAppId"].GetUint64();
        m_ownerAppIdHasBeenSet = true;
    }

    if (value.HasMember("IsLatestImage") && !value["IsLatestImage"].IsNull())
    {
        if (!value["IsLatestImage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TimedScanTaskPreviewInfo.IsLatestImage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLatestImage = value["IsLatestImage"].GetBool();
        m_isLatestImageHasBeenSet = true;
    }

    if (value.HasMember("ImageRepoAddress") && !value["ImageRepoAddress"].IsNull())
    {
        if (!value["ImageRepoAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimedScanTaskPreviewInfo.ImageRepoAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageRepoAddress = string(value["ImageRepoAddress"].GetString());
        m_imageRepoAddressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimedScanTaskPreviewInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageTag.c_str(), allocator).Move(), allocator);
    }

    if (m_registryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryType.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerAppId, allocator);
    }

    if (m_isLatestImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLatestImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLatestImage, allocator);
    }

    if (m_imageRepoAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRepoAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageRepoAddress.c_str(), allocator).Move(), allocator);
    }

}


uint64_t TimedScanTaskPreviewInfo::GetId() const
{
    return m_id;
}

void TimedScanTaskPreviewInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool TimedScanTaskPreviewInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string TimedScanTaskPreviewInfo::GetImageId() const
{
    return m_imageId;
}

void TimedScanTaskPreviewInfo::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool TimedScanTaskPreviewInfo::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string TimedScanTaskPreviewInfo::GetImageName() const
{
    return m_imageName;
}

void TimedScanTaskPreviewInfo::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool TimedScanTaskPreviewInfo::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string TimedScanTaskPreviewInfo::GetImageTag() const
{
    return m_imageTag;
}

void TimedScanTaskPreviewInfo::SetImageTag(const string& _imageTag)
{
    m_imageTag = _imageTag;
    m_imageTagHasBeenSet = true;
}

bool TimedScanTaskPreviewInfo::ImageTagHasBeenSet() const
{
    return m_imageTagHasBeenSet;
}

string TimedScanTaskPreviewInfo::GetRegistryType() const
{
    return m_registryType;
}

void TimedScanTaskPreviewInfo::SetRegistryType(const string& _registryType)
{
    m_registryType = _registryType;
    m_registryTypeHasBeenSet = true;
}

bool TimedScanTaskPreviewInfo::RegistryTypeHasBeenSet() const
{
    return m_registryTypeHasBeenSet;
}

string TimedScanTaskPreviewInfo::GetOwnerAccountName() const
{
    return m_ownerAccountName;
}

void TimedScanTaskPreviewInfo::SetOwnerAccountName(const string& _ownerAccountName)
{
    m_ownerAccountName = _ownerAccountName;
    m_ownerAccountNameHasBeenSet = true;
}

bool TimedScanTaskPreviewInfo::OwnerAccountNameHasBeenSet() const
{
    return m_ownerAccountNameHasBeenSet;
}

string TimedScanTaskPreviewInfo::GetOwnerUin() const
{
    return m_ownerUin;
}

void TimedScanTaskPreviewInfo::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool TimedScanTaskPreviewInfo::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

uint64_t TimedScanTaskPreviewInfo::GetOwnerAppId() const
{
    return m_ownerAppId;
}

void TimedScanTaskPreviewInfo::SetOwnerAppId(const uint64_t& _ownerAppId)
{
    m_ownerAppId = _ownerAppId;
    m_ownerAppIdHasBeenSet = true;
}

bool TimedScanTaskPreviewInfo::OwnerAppIdHasBeenSet() const
{
    return m_ownerAppIdHasBeenSet;
}

bool TimedScanTaskPreviewInfo::GetIsLatestImage() const
{
    return m_isLatestImage;
}

void TimedScanTaskPreviewInfo::SetIsLatestImage(const bool& _isLatestImage)
{
    m_isLatestImage = _isLatestImage;
    m_isLatestImageHasBeenSet = true;
}

bool TimedScanTaskPreviewInfo::IsLatestImageHasBeenSet() const
{
    return m_isLatestImageHasBeenSet;
}

string TimedScanTaskPreviewInfo::GetImageRepoAddress() const
{
    return m_imageRepoAddress;
}

void TimedScanTaskPreviewInfo::SetImageRepoAddress(const string& _imageRepoAddress)
{
    m_imageRepoAddress = _imageRepoAddress;
    m_imageRepoAddressHasBeenSet = true;
}

bool TimedScanTaskPreviewInfo::ImageRepoAddressHasBeenSet() const
{
    return m_imageRepoAddressHasBeenSet;
}


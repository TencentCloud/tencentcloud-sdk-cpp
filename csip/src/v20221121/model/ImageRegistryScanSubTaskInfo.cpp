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

#include <tencentcloud/csip/v20221121/model/ImageRegistryScanSubTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ImageRegistryScanSubTaskInfo::ImageRegistryScanSubTaskInfo() :
    m_subTaskIdHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageTagHasBeenSet(false),
    m_scanStatusHasBeenSet(false),
    m_failedReasonHasBeenSet(false),
    m_solutionHasBeenSet(false),
    m_ownerAccountNameHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_ownerAppIdHasBeenSet(false),
    m_isLatestImageHasBeenSet(false),
    m_imageRepoAddressHasBeenSet(false),
    m_registryTypeHasBeenSet(false)
{
}

CoreInternalOutcome ImageRegistryScanSubTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubTaskId") && !value["SubTaskId"].IsNull())
    {
        if (!value["SubTaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanSubTaskInfo.SubTaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subTaskId = value["SubTaskId"].GetUint64();
        m_subTaskIdHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanSubTaskInfo.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanSubTaskInfo.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("ImageTag") && !value["ImageTag"].IsNull())
    {
        if (!value["ImageTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanSubTaskInfo.ImageTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageTag = string(value["ImageTag"].GetString());
        m_imageTagHasBeenSet = true;
    }

    if (value.HasMember("ScanStatus") && !value["ScanStatus"].IsNull())
    {
        if (!value["ScanStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanSubTaskInfo.ScanStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanStatus = string(value["ScanStatus"].GetString());
        m_scanStatusHasBeenSet = true;
    }

    if (value.HasMember("FailedReason") && !value["FailedReason"].IsNull())
    {
        if (!value["FailedReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanSubTaskInfo.FailedReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failedReason = string(value["FailedReason"].GetString());
        m_failedReasonHasBeenSet = true;
    }

    if (value.HasMember("Solution") && !value["Solution"].IsNull())
    {
        if (!value["Solution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanSubTaskInfo.Solution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_solution = string(value["Solution"].GetString());
        m_solutionHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccountName") && !value["OwnerAccountName"].IsNull())
    {
        if (!value["OwnerAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanSubTaskInfo.OwnerAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccountName = string(value["OwnerAccountName"].GetString());
        m_ownerAccountNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanSubTaskInfo.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerAppId") && !value["OwnerAppId"].IsNull())
    {
        if (!value["OwnerAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanSubTaskInfo.OwnerAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAppId = value["OwnerAppId"].GetUint64();
        m_ownerAppIdHasBeenSet = true;
    }

    if (value.HasMember("IsLatestImage") && !value["IsLatestImage"].IsNull())
    {
        if (!value["IsLatestImage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanSubTaskInfo.IsLatestImage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLatestImage = value["IsLatestImage"].GetBool();
        m_isLatestImageHasBeenSet = true;
    }

    if (value.HasMember("ImageRepoAddress") && !value["ImageRepoAddress"].IsNull())
    {
        if (!value["ImageRepoAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanSubTaskInfo.ImageRepoAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageRepoAddress = string(value["ImageRepoAddress"].GetString());
        m_imageRepoAddressHasBeenSet = true;
    }

    if (value.HasMember("RegistryType") && !value["RegistryType"].IsNull())
    {
        if (!value["RegistryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanSubTaskInfo.RegistryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryType = string(value["RegistryType"].GetString());
        m_registryTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageRegistryScanSubTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subTaskId, allocator);
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

    if (m_scanStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_failedReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failedReason.c_str(), allocator).Move(), allocator);
    }

    if (m_solutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Solution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_solution.c_str(), allocator).Move(), allocator);
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

    if (m_registryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryType.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ImageRegistryScanSubTaskInfo::GetSubTaskId() const
{
    return m_subTaskId;
}

void ImageRegistryScanSubTaskInfo::SetSubTaskId(const uint64_t& _subTaskId)
{
    m_subTaskId = _subTaskId;
    m_subTaskIdHasBeenSet = true;
}

bool ImageRegistryScanSubTaskInfo::SubTaskIdHasBeenSet() const
{
    return m_subTaskIdHasBeenSet;
}

string ImageRegistryScanSubTaskInfo::GetImageId() const
{
    return m_imageId;
}

void ImageRegistryScanSubTaskInfo::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool ImageRegistryScanSubTaskInfo::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string ImageRegistryScanSubTaskInfo::GetImageName() const
{
    return m_imageName;
}

void ImageRegistryScanSubTaskInfo::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool ImageRegistryScanSubTaskInfo::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string ImageRegistryScanSubTaskInfo::GetImageTag() const
{
    return m_imageTag;
}

void ImageRegistryScanSubTaskInfo::SetImageTag(const string& _imageTag)
{
    m_imageTag = _imageTag;
    m_imageTagHasBeenSet = true;
}

bool ImageRegistryScanSubTaskInfo::ImageTagHasBeenSet() const
{
    return m_imageTagHasBeenSet;
}

string ImageRegistryScanSubTaskInfo::GetScanStatus() const
{
    return m_scanStatus;
}

void ImageRegistryScanSubTaskInfo::SetScanStatus(const string& _scanStatus)
{
    m_scanStatus = _scanStatus;
    m_scanStatusHasBeenSet = true;
}

bool ImageRegistryScanSubTaskInfo::ScanStatusHasBeenSet() const
{
    return m_scanStatusHasBeenSet;
}

string ImageRegistryScanSubTaskInfo::GetFailedReason() const
{
    return m_failedReason;
}

void ImageRegistryScanSubTaskInfo::SetFailedReason(const string& _failedReason)
{
    m_failedReason = _failedReason;
    m_failedReasonHasBeenSet = true;
}

bool ImageRegistryScanSubTaskInfo::FailedReasonHasBeenSet() const
{
    return m_failedReasonHasBeenSet;
}

string ImageRegistryScanSubTaskInfo::GetSolution() const
{
    return m_solution;
}

void ImageRegistryScanSubTaskInfo::SetSolution(const string& _solution)
{
    m_solution = _solution;
    m_solutionHasBeenSet = true;
}

bool ImageRegistryScanSubTaskInfo::SolutionHasBeenSet() const
{
    return m_solutionHasBeenSet;
}

string ImageRegistryScanSubTaskInfo::GetOwnerAccountName() const
{
    return m_ownerAccountName;
}

void ImageRegistryScanSubTaskInfo::SetOwnerAccountName(const string& _ownerAccountName)
{
    m_ownerAccountName = _ownerAccountName;
    m_ownerAccountNameHasBeenSet = true;
}

bool ImageRegistryScanSubTaskInfo::OwnerAccountNameHasBeenSet() const
{
    return m_ownerAccountNameHasBeenSet;
}

string ImageRegistryScanSubTaskInfo::GetOwnerUin() const
{
    return m_ownerUin;
}

void ImageRegistryScanSubTaskInfo::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ImageRegistryScanSubTaskInfo::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

uint64_t ImageRegistryScanSubTaskInfo::GetOwnerAppId() const
{
    return m_ownerAppId;
}

void ImageRegistryScanSubTaskInfo::SetOwnerAppId(const uint64_t& _ownerAppId)
{
    m_ownerAppId = _ownerAppId;
    m_ownerAppIdHasBeenSet = true;
}

bool ImageRegistryScanSubTaskInfo::OwnerAppIdHasBeenSet() const
{
    return m_ownerAppIdHasBeenSet;
}

bool ImageRegistryScanSubTaskInfo::GetIsLatestImage() const
{
    return m_isLatestImage;
}

void ImageRegistryScanSubTaskInfo::SetIsLatestImage(const bool& _isLatestImage)
{
    m_isLatestImage = _isLatestImage;
    m_isLatestImageHasBeenSet = true;
}

bool ImageRegistryScanSubTaskInfo::IsLatestImageHasBeenSet() const
{
    return m_isLatestImageHasBeenSet;
}

string ImageRegistryScanSubTaskInfo::GetImageRepoAddress() const
{
    return m_imageRepoAddress;
}

void ImageRegistryScanSubTaskInfo::SetImageRepoAddress(const string& _imageRepoAddress)
{
    m_imageRepoAddress = _imageRepoAddress;
    m_imageRepoAddressHasBeenSet = true;
}

bool ImageRegistryScanSubTaskInfo::ImageRepoAddressHasBeenSet() const
{
    return m_imageRepoAddressHasBeenSet;
}

string ImageRegistryScanSubTaskInfo::GetRegistryType() const
{
    return m_registryType;
}

void ImageRegistryScanSubTaskInfo::SetRegistryType(const string& _registryType)
{
    m_registryType = _registryType;
    m_registryTypeHasBeenSet = true;
}

bool ImageRegistryScanSubTaskInfo::RegistryTypeHasBeenSet() const
{
    return m_registryTypeHasBeenSet;
}


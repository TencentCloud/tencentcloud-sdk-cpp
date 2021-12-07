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

#include <tencentcloud/tcss/v20201101/model/ImageProgress.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ImageProgress::ImageProgress() :
    m_imageIdHasBeenSet(false),
    m_registryTypeHasBeenSet(false),
    m_imageRepoAddressHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageTagHasBeenSet(false),
    m_scanStatusHasBeenSet(false),
    m_cveProgressHasBeenSet(false),
    m_riskProgressHasBeenSet(false),
    m_virusProgressHasBeenSet(false)
{
}

CoreInternalOutcome ImageProgress::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageProgress.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("RegistryType") && !value["RegistryType"].IsNull())
    {
        if (!value["RegistryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageProgress.RegistryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryType = string(value["RegistryType"].GetString());
        m_registryTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageRepoAddress") && !value["ImageRepoAddress"].IsNull())
    {
        if (!value["ImageRepoAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageProgress.ImageRepoAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageRepoAddress = string(value["ImageRepoAddress"].GetString());
        m_imageRepoAddressHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageProgress.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageProgress.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageProgress.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageProgress.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("ImageTag") && !value["ImageTag"].IsNull())
    {
        if (!value["ImageTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageProgress.ImageTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageTag = string(value["ImageTag"].GetString());
        m_imageTagHasBeenSet = true;
    }

    if (value.HasMember("ScanStatus") && !value["ScanStatus"].IsNull())
    {
        if (!value["ScanStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageProgress.ScanStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanStatus = string(value["ScanStatus"].GetString());
        m_scanStatusHasBeenSet = true;
    }

    if (value.HasMember("CveProgress") && !value["CveProgress"].IsNull())
    {
        if (!value["CveProgress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageProgress.CveProgress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cveProgress = value["CveProgress"].GetUint64();
        m_cveProgressHasBeenSet = true;
    }

    if (value.HasMember("RiskProgress") && !value["RiskProgress"].IsNull())
    {
        if (!value["RiskProgress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageProgress.RiskProgress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskProgress = value["RiskProgress"].GetUint64();
        m_riskProgressHasBeenSet = true;
    }

    if (value.HasMember("VirusProgress") && !value["VirusProgress"].IsNull())
    {
        if (!value["VirusProgress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageProgress.VirusProgress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_virusProgress = value["VirusProgress"].GetUint64();
        m_virusProgressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageProgress::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_registryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageRepoAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRepoAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageRepoAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
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

    if (m_cveProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CveProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cveProgress, allocator);
    }

    if (m_riskProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskProgress, allocator);
    }

    if (m_virusProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_virusProgress, allocator);
    }

}


string ImageProgress::GetImageId() const
{
    return m_imageId;
}

void ImageProgress::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool ImageProgress::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string ImageProgress::GetRegistryType() const
{
    return m_registryType;
}

void ImageProgress::SetRegistryType(const string& _registryType)
{
    m_registryType = _registryType;
    m_registryTypeHasBeenSet = true;
}

bool ImageProgress::RegistryTypeHasBeenSet() const
{
    return m_registryTypeHasBeenSet;
}

string ImageProgress::GetImageRepoAddress() const
{
    return m_imageRepoAddress;
}

void ImageProgress::SetImageRepoAddress(const string& _imageRepoAddress)
{
    m_imageRepoAddress = _imageRepoAddress;
    m_imageRepoAddressHasBeenSet = true;
}

bool ImageProgress::ImageRepoAddressHasBeenSet() const
{
    return m_imageRepoAddressHasBeenSet;
}

string ImageProgress::GetInstanceId() const
{
    return m_instanceId;
}

void ImageProgress::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ImageProgress::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ImageProgress::GetInstanceName() const
{
    return m_instanceName;
}

void ImageProgress::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ImageProgress::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string ImageProgress::GetNamespace() const
{
    return m_namespace;
}

void ImageProgress::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ImageProgress::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string ImageProgress::GetImageName() const
{
    return m_imageName;
}

void ImageProgress::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool ImageProgress::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string ImageProgress::GetImageTag() const
{
    return m_imageTag;
}

void ImageProgress::SetImageTag(const string& _imageTag)
{
    m_imageTag = _imageTag;
    m_imageTagHasBeenSet = true;
}

bool ImageProgress::ImageTagHasBeenSet() const
{
    return m_imageTagHasBeenSet;
}

string ImageProgress::GetScanStatus() const
{
    return m_scanStatus;
}

void ImageProgress::SetScanStatus(const string& _scanStatus)
{
    m_scanStatus = _scanStatus;
    m_scanStatusHasBeenSet = true;
}

bool ImageProgress::ScanStatusHasBeenSet() const
{
    return m_scanStatusHasBeenSet;
}

uint64_t ImageProgress::GetCveProgress() const
{
    return m_cveProgress;
}

void ImageProgress::SetCveProgress(const uint64_t& _cveProgress)
{
    m_cveProgress = _cveProgress;
    m_cveProgressHasBeenSet = true;
}

bool ImageProgress::CveProgressHasBeenSet() const
{
    return m_cveProgressHasBeenSet;
}

uint64_t ImageProgress::GetRiskProgress() const
{
    return m_riskProgress;
}

void ImageProgress::SetRiskProgress(const uint64_t& _riskProgress)
{
    m_riskProgress = _riskProgress;
    m_riskProgressHasBeenSet = true;
}

bool ImageProgress::RiskProgressHasBeenSet() const
{
    return m_riskProgressHasBeenSet;
}

uint64_t ImageProgress::GetVirusProgress() const
{
    return m_virusProgress;
}

void ImageProgress::SetVirusProgress(const uint64_t& _virusProgress)
{
    m_virusProgress = _virusProgress;
    m_virusProgressHasBeenSet = true;
}

bool ImageProgress::VirusProgressHasBeenSet() const
{
    return m_virusProgressHasBeenSet;
}


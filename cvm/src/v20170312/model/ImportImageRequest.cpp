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

#include <tencentcloud/cvm/v20170312/model/ImportImageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ImportImageRequest::ImportImageRequest() :
    m_architectureHasBeenSet(false),
    m_osTypeHasBeenSet(false),
    m_osVersionHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageDescriptionHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_forceHasBeenSet(false),
    m_tagSpecificationHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_bootModeHasBeenSet(false),
    m_imageFamilyHasBeenSet(false),
    m_importImageDataDiskListHasBeenSet(false)
{
}

string ImportImageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_architectureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Architecture";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_architecture.c_str(), allocator).Move(), allocator);
    }

    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_osType.c_str(), allocator).Move(), allocator);
    }

    if (m_osVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_osVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }

    if (m_forceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Force";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_force, allocator);
    }

    if (m_tagSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSpecification";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSpecification.begin(); itr != m_tagSpecification.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_licenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_licenseType.c_str(), allocator).Move(), allocator);
    }

    if (m_bootModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BootMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bootMode.c_str(), allocator).Move(), allocator);
    }

    if (m_imageFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageFamily";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageFamily.c_str(), allocator).Move(), allocator);
    }

    if (m_importImageDataDiskListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportImageDataDiskList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_importImageDataDiskList.begin(); itr != m_importImageDataDiskList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ImportImageRequest::GetArchitecture() const
{
    return m_architecture;
}

void ImportImageRequest::SetArchitecture(const string& _architecture)
{
    m_architecture = _architecture;
    m_architectureHasBeenSet = true;
}

bool ImportImageRequest::ArchitectureHasBeenSet() const
{
    return m_architectureHasBeenSet;
}

string ImportImageRequest::GetOsType() const
{
    return m_osType;
}

void ImportImageRequest::SetOsType(const string& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool ImportImageRequest::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

string ImportImageRequest::GetOsVersion() const
{
    return m_osVersion;
}

void ImportImageRequest::SetOsVersion(const string& _osVersion)
{
    m_osVersion = _osVersion;
    m_osVersionHasBeenSet = true;
}

bool ImportImageRequest::OsVersionHasBeenSet() const
{
    return m_osVersionHasBeenSet;
}

string ImportImageRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void ImportImageRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool ImportImageRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string ImportImageRequest::GetImageName() const
{
    return m_imageName;
}

void ImportImageRequest::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool ImportImageRequest::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string ImportImageRequest::GetImageDescription() const
{
    return m_imageDescription;
}

void ImportImageRequest::SetImageDescription(const string& _imageDescription)
{
    m_imageDescription = _imageDescription;
    m_imageDescriptionHasBeenSet = true;
}

bool ImportImageRequest::ImageDescriptionHasBeenSet() const
{
    return m_imageDescriptionHasBeenSet;
}

bool ImportImageRequest::GetDryRun() const
{
    return m_dryRun;
}

void ImportImageRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool ImportImageRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

bool ImportImageRequest::GetForce() const
{
    return m_force;
}

void ImportImageRequest::SetForce(const bool& _force)
{
    m_force = _force;
    m_forceHasBeenSet = true;
}

bool ImportImageRequest::ForceHasBeenSet() const
{
    return m_forceHasBeenSet;
}

vector<TagSpecification> ImportImageRequest::GetTagSpecification() const
{
    return m_tagSpecification;
}

void ImportImageRequest::SetTagSpecification(const vector<TagSpecification>& _tagSpecification)
{
    m_tagSpecification = _tagSpecification;
    m_tagSpecificationHasBeenSet = true;
}

bool ImportImageRequest::TagSpecificationHasBeenSet() const
{
    return m_tagSpecificationHasBeenSet;
}

string ImportImageRequest::GetLicenseType() const
{
    return m_licenseType;
}

void ImportImageRequest::SetLicenseType(const string& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool ImportImageRequest::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

string ImportImageRequest::GetBootMode() const
{
    return m_bootMode;
}

void ImportImageRequest::SetBootMode(const string& _bootMode)
{
    m_bootMode = _bootMode;
    m_bootModeHasBeenSet = true;
}

bool ImportImageRequest::BootModeHasBeenSet() const
{
    return m_bootModeHasBeenSet;
}

string ImportImageRequest::GetImageFamily() const
{
    return m_imageFamily;
}

void ImportImageRequest::SetImageFamily(const string& _imageFamily)
{
    m_imageFamily = _imageFamily;
    m_imageFamilyHasBeenSet = true;
}

bool ImportImageRequest::ImageFamilyHasBeenSet() const
{
    return m_imageFamilyHasBeenSet;
}

vector<ImportImageDataDisk> ImportImageRequest::GetImportImageDataDiskList() const
{
    return m_importImageDataDiskList;
}

void ImportImageRequest::SetImportImageDataDiskList(const vector<ImportImageDataDisk>& _importImageDataDiskList)
{
    m_importImageDataDiskList = _importImageDataDiskList;
    m_importImageDataDiskListHasBeenSet = true;
}

bool ImportImageRequest::ImportImageDataDiskListHasBeenSet() const
{
    return m_importImageDataDiskListHasBeenSet;
}



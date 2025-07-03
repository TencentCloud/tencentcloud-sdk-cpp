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

#include <tencentcloud/tione/v20211111/model/PlatformImageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

PlatformImageInfo::PlatformImageInfo() :
    m_frameworkHasBeenSet(false),
    m_imageTypeHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_registryRegionHasBeenSet(false),
    m_registryIdHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_frameworkVersionHasBeenSet(false),
    m_supportGpuListHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_extraAttributesHasBeenSet(false),
    m_imageRangeHasBeenSet(false),
    m_supportDistributedDeployHasBeenSet(false),
    m_regionScopeHasBeenSet(false)
{
}

CoreInternalOutcome PlatformImageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Framework") && !value["Framework"].IsNull())
    {
        if (!value["Framework"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformImageInfo.Framework` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_framework = string(value["Framework"].GetString());
        m_frameworkHasBeenSet = true;
    }

    if (value.HasMember("ImageType") && !value["ImageType"].IsNull())
    {
        if (!value["ImageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformImageInfo.ImageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageType = string(value["ImageType"].GetString());
        m_imageTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageUrl") && !value["ImageUrl"].IsNull())
    {
        if (!value["ImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformImageInfo.ImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrl = string(value["ImageUrl"].GetString());
        m_imageUrlHasBeenSet = true;
    }

    if (value.HasMember("RegistryRegion") && !value["RegistryRegion"].IsNull())
    {
        if (!value["RegistryRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformImageInfo.RegistryRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryRegion = string(value["RegistryRegion"].GetString());
        m_registryRegionHasBeenSet = true;
    }

    if (value.HasMember("RegistryId") && !value["RegistryId"].IsNull())
    {
        if (!value["RegistryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformImageInfo.RegistryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryId = string(value["RegistryId"].GetString());
        m_registryIdHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformImageInfo.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformImageInfo.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("FrameworkVersion") && !value["FrameworkVersion"].IsNull())
    {
        if (!value["FrameworkVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformImageInfo.FrameworkVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frameworkVersion = string(value["FrameworkVersion"].GetString());
        m_frameworkVersionHasBeenSet = true;
    }

    if (value.HasMember("SupportGpuList") && !value["SupportGpuList"].IsNull())
    {
        if (!value["SupportGpuList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PlatformImageInfo.SupportGpuList` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportGpuList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportGpuList.push_back((*itr).GetString());
        }
        m_supportGpuListHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformImageInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ExtraAttributes") && !value["ExtraAttributes"].IsNull())
    {
        if (!value["ExtraAttributes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PlatformImageInfo.ExtraAttributes` is not array type"));

        const rapidjson::Value &tmpValue = value["ExtraAttributes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Attribute item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_extraAttributes.push_back(item);
        }
        m_extraAttributesHasBeenSet = true;
    }

    if (value.HasMember("ImageRange") && !value["ImageRange"].IsNull())
    {
        if (!value["ImageRange"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PlatformImageInfo.ImageRange` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageRange"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageRange.push_back((*itr).GetString());
        }
        m_imageRangeHasBeenSet = true;
    }

    if (value.HasMember("SupportDistributedDeploy") && !value["SupportDistributedDeploy"].IsNull())
    {
        if (!value["SupportDistributedDeploy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformImageInfo.SupportDistributedDeploy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportDistributedDeploy = value["SupportDistributedDeploy"].GetBool();
        m_supportDistributedDeployHasBeenSet = true;
    }

    if (value.HasMember("RegionScope") && !value["RegionScope"].IsNull())
    {
        if (!value["RegionScope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformImageInfo.RegionScope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionScope = string(value["RegionScope"].GetString());
        m_regionScopeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlatformImageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_frameworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Framework";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_framework.c_str(), allocator).Move(), allocator);
    }

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

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_frameworkVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameworkVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frameworkVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_supportGpuListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportGpuList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportGpuList.begin(); itr != m_supportGpuList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_extraAttributesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraAttributes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extraAttributes.begin(); itr != m_extraAttributes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_imageRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageRange.begin(); itr != m_imageRange.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_supportDistributedDeployHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportDistributedDeploy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportDistributedDeploy, allocator);
    }

    if (m_regionScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionScope.c_str(), allocator).Move(), allocator);
    }

}


string PlatformImageInfo::GetFramework() const
{
    return m_framework;
}

void PlatformImageInfo::SetFramework(const string& _framework)
{
    m_framework = _framework;
    m_frameworkHasBeenSet = true;
}

bool PlatformImageInfo::FrameworkHasBeenSet() const
{
    return m_frameworkHasBeenSet;
}

string PlatformImageInfo::GetImageType() const
{
    return m_imageType;
}

void PlatformImageInfo::SetImageType(const string& _imageType)
{
    m_imageType = _imageType;
    m_imageTypeHasBeenSet = true;
}

bool PlatformImageInfo::ImageTypeHasBeenSet() const
{
    return m_imageTypeHasBeenSet;
}

string PlatformImageInfo::GetImageUrl() const
{
    return m_imageUrl;
}

void PlatformImageInfo::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool PlatformImageInfo::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string PlatformImageInfo::GetRegistryRegion() const
{
    return m_registryRegion;
}

void PlatformImageInfo::SetRegistryRegion(const string& _registryRegion)
{
    m_registryRegion = _registryRegion;
    m_registryRegionHasBeenSet = true;
}

bool PlatformImageInfo::RegistryRegionHasBeenSet() const
{
    return m_registryRegionHasBeenSet;
}

string PlatformImageInfo::GetRegistryId() const
{
    return m_registryId;
}

void PlatformImageInfo::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool PlatformImageInfo::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string PlatformImageInfo::GetImageName() const
{
    return m_imageName;
}

void PlatformImageInfo::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool PlatformImageInfo::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string PlatformImageInfo::GetImageId() const
{
    return m_imageId;
}

void PlatformImageInfo::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool PlatformImageInfo::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string PlatformImageInfo::GetFrameworkVersion() const
{
    return m_frameworkVersion;
}

void PlatformImageInfo::SetFrameworkVersion(const string& _frameworkVersion)
{
    m_frameworkVersion = _frameworkVersion;
    m_frameworkVersionHasBeenSet = true;
}

bool PlatformImageInfo::FrameworkVersionHasBeenSet() const
{
    return m_frameworkVersionHasBeenSet;
}

vector<string> PlatformImageInfo::GetSupportGpuList() const
{
    return m_supportGpuList;
}

void PlatformImageInfo::SetSupportGpuList(const vector<string>& _supportGpuList)
{
    m_supportGpuList = _supportGpuList;
    m_supportGpuListHasBeenSet = true;
}

bool PlatformImageInfo::SupportGpuListHasBeenSet() const
{
    return m_supportGpuListHasBeenSet;
}

string PlatformImageInfo::GetDescription() const
{
    return m_description;
}

void PlatformImageInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool PlatformImageInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<Attribute> PlatformImageInfo::GetExtraAttributes() const
{
    return m_extraAttributes;
}

void PlatformImageInfo::SetExtraAttributes(const vector<Attribute>& _extraAttributes)
{
    m_extraAttributes = _extraAttributes;
    m_extraAttributesHasBeenSet = true;
}

bool PlatformImageInfo::ExtraAttributesHasBeenSet() const
{
    return m_extraAttributesHasBeenSet;
}

vector<string> PlatformImageInfo::GetImageRange() const
{
    return m_imageRange;
}

void PlatformImageInfo::SetImageRange(const vector<string>& _imageRange)
{
    m_imageRange = _imageRange;
    m_imageRangeHasBeenSet = true;
}

bool PlatformImageInfo::ImageRangeHasBeenSet() const
{
    return m_imageRangeHasBeenSet;
}

bool PlatformImageInfo::GetSupportDistributedDeploy() const
{
    return m_supportDistributedDeploy;
}

void PlatformImageInfo::SetSupportDistributedDeploy(const bool& _supportDistributedDeploy)
{
    m_supportDistributedDeploy = _supportDistributedDeploy;
    m_supportDistributedDeployHasBeenSet = true;
}

bool PlatformImageInfo::SupportDistributedDeployHasBeenSet() const
{
    return m_supportDistributedDeployHasBeenSet;
}

string PlatformImageInfo::GetRegionScope() const
{
    return m_regionScope;
}

void PlatformImageInfo::SetRegionScope(const string& _regionScope)
{
    m_regionScope = _regionScope;
    m_regionScopeHasBeenSet = true;
}

bool PlatformImageInfo::RegionScopeHasBeenSet() const
{
    return m_regionScopeHasBeenSet;
}


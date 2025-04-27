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

#include <tencentcloud/cvm/v20170312/model/Image.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

Image::Image() :
    m_imageIdHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_imageTypeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageDescriptionHasBeenSet(false),
    m_imageSizeHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_imageStateHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_imageCreatorHasBeenSet(false),
    m_imageSourceHasBeenSet(false),
    m_syncPercentHasBeenSet(false),
    m_isSupportCloudinitHasBeenSet(false),
    m_snapshotSetHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_imageFamilyHasBeenSet(false),
    m_imageDeprecatedHasBeenSet(false),
    m_cdcCacheStatusHasBeenSet(false)
{
}

CoreInternalOutcome Image::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("OsName") && !value["OsName"].IsNull())
    {
        if (!value["OsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(value["OsName"].GetString());
        m_osNameHasBeenSet = true;
    }

    if (value.HasMember("ImageType") && !value["ImageType"].IsNull())
    {
        if (!value["ImageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.ImageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageType = string(value["ImageType"].GetString());
        m_imageTypeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("ImageDescription") && !value["ImageDescription"].IsNull())
    {
        if (!value["ImageDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.ImageDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageDescription = string(value["ImageDescription"].GetString());
        m_imageDescriptionHasBeenSet = true;
    }

    if (value.HasMember("ImageSize") && !value["ImageSize"].IsNull())
    {
        if (!value["ImageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Image.ImageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageSize = value["ImageSize"].GetInt64();
        m_imageSizeHasBeenSet = true;
    }

    if (value.HasMember("Architecture") && !value["Architecture"].IsNull())
    {
        if (!value["Architecture"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.Architecture` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_architecture = string(value["Architecture"].GetString());
        m_architectureHasBeenSet = true;
    }

    if (value.HasMember("ImageState") && !value["ImageState"].IsNull())
    {
        if (!value["ImageState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.ImageState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageState = string(value["ImageState"].GetString());
        m_imageStateHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(value["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("ImageCreator") && !value["ImageCreator"].IsNull())
    {
        if (!value["ImageCreator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.ImageCreator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageCreator = string(value["ImageCreator"].GetString());
        m_imageCreatorHasBeenSet = true;
    }

    if (value.HasMember("ImageSource") && !value["ImageSource"].IsNull())
    {
        if (!value["ImageSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.ImageSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageSource = string(value["ImageSource"].GetString());
        m_imageSourceHasBeenSet = true;
    }

    if (value.HasMember("SyncPercent") && !value["SyncPercent"].IsNull())
    {
        if (!value["SyncPercent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Image.SyncPercent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_syncPercent = value["SyncPercent"].GetInt64();
        m_syncPercentHasBeenSet = true;
    }

    if (value.HasMember("IsSupportCloudinit") && !value["IsSupportCloudinit"].IsNull())
    {
        if (!value["IsSupportCloudinit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Image.IsSupportCloudinit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportCloudinit = value["IsSupportCloudinit"].GetBool();
        m_isSupportCloudinitHasBeenSet = true;
    }

    if (value.HasMember("SnapshotSet") && !value["SnapshotSet"].IsNull())
    {
        if (!value["SnapshotSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Image.SnapshotSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SnapshotSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Snapshot item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_snapshotSet.push_back(item);
        }
        m_snapshotSetHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Image.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("LicenseType") && !value["LicenseType"].IsNull())
    {
        if (!value["LicenseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.LicenseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseType = string(value["LicenseType"].GetString());
        m_licenseTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageFamily") && !value["ImageFamily"].IsNull())
    {
        if (!value["ImageFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.ImageFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageFamily = string(value["ImageFamily"].GetString());
        m_imageFamilyHasBeenSet = true;
    }

    if (value.HasMember("ImageDeprecated") && !value["ImageDeprecated"].IsNull())
    {
        if (!value["ImageDeprecated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Image.ImageDeprecated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_imageDeprecated = value["ImageDeprecated"].GetBool();
        m_imageDeprecatedHasBeenSet = true;
    }

    if (value.HasMember("CdcCacheStatus") && !value["CdcCacheStatus"].IsNull())
    {
        if (!value["CdcCacheStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.CdcCacheStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdcCacheStatus = string(value["CdcCacheStatus"].GetString());
        m_cdcCacheStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Image::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_osNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageType.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_imageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageSize, allocator);
    }

    if (m_architectureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Architecture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_architecture.c_str(), allocator).Move(), allocator);
    }

    if (m_imageStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageState.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_imageCreatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCreator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageCreator.c_str(), allocator).Move(), allocator);
    }

    if (m_imageSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageSource.c_str(), allocator).Move(), allocator);
    }

    if (m_syncPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncPercent, allocator);
    }

    if (m_isSupportCloudinitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportCloudinit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportCloudinit, allocator);
    }

    if (m_snapshotSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_snapshotSet.begin(); itr != m_snapshotSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_licenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageFamily.c_str(), allocator).Move(), allocator);
    }

    if (m_imageDeprecatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageDeprecated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageDeprecated, allocator);
    }

    if (m_cdcCacheStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcCacheStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdcCacheStatus.c_str(), allocator).Move(), allocator);
    }

}


string Image::GetImageId() const
{
    return m_imageId;
}

void Image::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool Image::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string Image::GetOsName() const
{
    return m_osName;
}

void Image::SetOsName(const string& _osName)
{
    m_osName = _osName;
    m_osNameHasBeenSet = true;
}

bool Image::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

string Image::GetImageType() const
{
    return m_imageType;
}

void Image::SetImageType(const string& _imageType)
{
    m_imageType = _imageType;
    m_imageTypeHasBeenSet = true;
}

bool Image::ImageTypeHasBeenSet() const
{
    return m_imageTypeHasBeenSet;
}

string Image::GetCreatedTime() const
{
    return m_createdTime;
}

void Image::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool Image::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string Image::GetImageName() const
{
    return m_imageName;
}

void Image::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool Image::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string Image::GetImageDescription() const
{
    return m_imageDescription;
}

void Image::SetImageDescription(const string& _imageDescription)
{
    m_imageDescription = _imageDescription;
    m_imageDescriptionHasBeenSet = true;
}

bool Image::ImageDescriptionHasBeenSet() const
{
    return m_imageDescriptionHasBeenSet;
}

int64_t Image::GetImageSize() const
{
    return m_imageSize;
}

void Image::SetImageSize(const int64_t& _imageSize)
{
    m_imageSize = _imageSize;
    m_imageSizeHasBeenSet = true;
}

bool Image::ImageSizeHasBeenSet() const
{
    return m_imageSizeHasBeenSet;
}

string Image::GetArchitecture() const
{
    return m_architecture;
}

void Image::SetArchitecture(const string& _architecture)
{
    m_architecture = _architecture;
    m_architectureHasBeenSet = true;
}

bool Image::ArchitectureHasBeenSet() const
{
    return m_architectureHasBeenSet;
}

string Image::GetImageState() const
{
    return m_imageState;
}

void Image::SetImageState(const string& _imageState)
{
    m_imageState = _imageState;
    m_imageStateHasBeenSet = true;
}

bool Image::ImageStateHasBeenSet() const
{
    return m_imageStateHasBeenSet;
}

string Image::GetPlatform() const
{
    return m_platform;
}

void Image::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool Image::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string Image::GetImageCreator() const
{
    return m_imageCreator;
}

void Image::SetImageCreator(const string& _imageCreator)
{
    m_imageCreator = _imageCreator;
    m_imageCreatorHasBeenSet = true;
}

bool Image::ImageCreatorHasBeenSet() const
{
    return m_imageCreatorHasBeenSet;
}

string Image::GetImageSource() const
{
    return m_imageSource;
}

void Image::SetImageSource(const string& _imageSource)
{
    m_imageSource = _imageSource;
    m_imageSourceHasBeenSet = true;
}

bool Image::ImageSourceHasBeenSet() const
{
    return m_imageSourceHasBeenSet;
}

int64_t Image::GetSyncPercent() const
{
    return m_syncPercent;
}

void Image::SetSyncPercent(const int64_t& _syncPercent)
{
    m_syncPercent = _syncPercent;
    m_syncPercentHasBeenSet = true;
}

bool Image::SyncPercentHasBeenSet() const
{
    return m_syncPercentHasBeenSet;
}

bool Image::GetIsSupportCloudinit() const
{
    return m_isSupportCloudinit;
}

void Image::SetIsSupportCloudinit(const bool& _isSupportCloudinit)
{
    m_isSupportCloudinit = _isSupportCloudinit;
    m_isSupportCloudinitHasBeenSet = true;
}

bool Image::IsSupportCloudinitHasBeenSet() const
{
    return m_isSupportCloudinitHasBeenSet;
}

vector<Snapshot> Image::GetSnapshotSet() const
{
    return m_snapshotSet;
}

void Image::SetSnapshotSet(const vector<Snapshot>& _snapshotSet)
{
    m_snapshotSet = _snapshotSet;
    m_snapshotSetHasBeenSet = true;
}

bool Image::SnapshotSetHasBeenSet() const
{
    return m_snapshotSetHasBeenSet;
}

vector<Tag> Image::GetTags() const
{
    return m_tags;
}

void Image::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Image::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string Image::GetLicenseType() const
{
    return m_licenseType;
}

void Image::SetLicenseType(const string& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool Image::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

string Image::GetImageFamily() const
{
    return m_imageFamily;
}

void Image::SetImageFamily(const string& _imageFamily)
{
    m_imageFamily = _imageFamily;
    m_imageFamilyHasBeenSet = true;
}

bool Image::ImageFamilyHasBeenSet() const
{
    return m_imageFamilyHasBeenSet;
}

bool Image::GetImageDeprecated() const
{
    return m_imageDeprecated;
}

void Image::SetImageDeprecated(const bool& _imageDeprecated)
{
    m_imageDeprecated = _imageDeprecated;
    m_imageDeprecatedHasBeenSet = true;
}

bool Image::ImageDeprecatedHasBeenSet() const
{
    return m_imageDeprecatedHasBeenSet;
}

string Image::GetCdcCacheStatus() const
{
    return m_cdcCacheStatus;
}

void Image::SetCdcCacheStatus(const string& _cdcCacheStatus)
{
    m_cdcCacheStatus = _cdcCacheStatus;
    m_cdcCacheStatusHasBeenSet = true;
}

bool Image::CdcCacheStatusHasBeenSet() const
{
    return m_cdcCacheStatusHasBeenSet;
}


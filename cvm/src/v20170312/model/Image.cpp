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
using namespace rapidjson;
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
    m_snapshotSetHasBeenSet(false)
{
}

CoreInternalOutcome Image::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Image.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("OsName") && !value["OsName"].IsNull())
    {
        if (!value["OsName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Image.OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(value["OsName"].GetString());
        m_osNameHasBeenSet = true;
    }

    if (value.HasMember("ImageType") && !value["ImageType"].IsNull())
    {
        if (!value["ImageType"].IsString())
        {
            return CoreInternalOutcome(Error("response `Image.ImageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageType = string(value["ImageType"].GetString());
        m_imageTypeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Image.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Image.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("ImageDescription") && !value["ImageDescription"].IsNull())
    {
        if (!value["ImageDescription"].IsString())
        {
            return CoreInternalOutcome(Error("response `Image.ImageDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageDescription = string(value["ImageDescription"].GetString());
        m_imageDescriptionHasBeenSet = true;
    }

    if (value.HasMember("ImageSize") && !value["ImageSize"].IsNull())
    {
        if (!value["ImageSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Image.ImageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageSize = value["ImageSize"].GetInt64();
        m_imageSizeHasBeenSet = true;
    }

    if (value.HasMember("Architecture") && !value["Architecture"].IsNull())
    {
        if (!value["Architecture"].IsString())
        {
            return CoreInternalOutcome(Error("response `Image.Architecture` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_architecture = string(value["Architecture"].GetString());
        m_architectureHasBeenSet = true;
    }

    if (value.HasMember("ImageState") && !value["ImageState"].IsNull())
    {
        if (!value["ImageState"].IsString())
        {
            return CoreInternalOutcome(Error("response `Image.ImageState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageState = string(value["ImageState"].GetString());
        m_imageStateHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsString())
        {
            return CoreInternalOutcome(Error("response `Image.Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(value["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("ImageCreator") && !value["ImageCreator"].IsNull())
    {
        if (!value["ImageCreator"].IsString())
        {
            return CoreInternalOutcome(Error("response `Image.ImageCreator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageCreator = string(value["ImageCreator"].GetString());
        m_imageCreatorHasBeenSet = true;
    }

    if (value.HasMember("ImageSource") && !value["ImageSource"].IsNull())
    {
        if (!value["ImageSource"].IsString())
        {
            return CoreInternalOutcome(Error("response `Image.ImageSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageSource = string(value["ImageSource"].GetString());
        m_imageSourceHasBeenSet = true;
    }

    if (value.HasMember("SyncPercent") && !value["SyncPercent"].IsNull())
    {
        if (!value["SyncPercent"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Image.SyncPercent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_syncPercent = value["SyncPercent"].GetInt64();
        m_syncPercentHasBeenSet = true;
    }

    if (value.HasMember("IsSupportCloudinit") && !value["IsSupportCloudinit"].IsNull())
    {
        if (!value["IsSupportCloudinit"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Image.IsSupportCloudinit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportCloudinit = value["IsSupportCloudinit"].GetBool();
        m_isSupportCloudinitHasBeenSet = true;
    }

    if (value.HasMember("SnapshotSet") && !value["SnapshotSet"].IsNull())
    {
        if (!value["SnapshotSet"].IsArray())
            return CoreInternalOutcome(Error("response `Image.SnapshotSet` is not array type"));

        const Value &tmpValue = value["SnapshotSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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


    return CoreInternalOutcome(true);
}

void Image::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_imageIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_osNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_osName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_imageType.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_imageDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_imageSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageSize, allocator);
    }

    if (m_architectureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Architecture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_architecture.c_str(), allocator).Move(), allocator);
    }

    if (m_imageStateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_imageState.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_imageCreatorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageCreator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_imageCreator.c_str(), allocator).Move(), allocator);
    }

    if (m_imageSourceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_imageSource.c_str(), allocator).Move(), allocator);
    }

    if (m_syncPercentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SyncPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncPercent, allocator);
    }

    if (m_isSupportCloudinitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsSupportCloudinit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportCloudinit, allocator);
    }

    if (m_snapshotSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SnapshotSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_snapshotSet.begin(); itr != m_snapshotSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


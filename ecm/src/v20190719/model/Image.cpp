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

#include <tencentcloud/ecm/v20190719/model/Image.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

Image::Image() :
    m_imageIdHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageStateHasBeenSet(false),
    m_imageTypeHasBeenSet(false),
    m_imageOsNameHasBeenSet(false),
    m_imageDescriptionHasBeenSet(false),
    m_imageCreateTimeHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_osTypeHasBeenSet(false),
    m_osVersionHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_imageOwnerHasBeenSet(false),
    m_imageSizeHasBeenSet(false),
    m_srcImageHasBeenSet(false),
    m_imageSourceHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_isSupportCloudInitHasBeenSet(false)
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

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
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

    if (value.HasMember("ImageType") && !value["ImageType"].IsNull())
    {
        if (!value["ImageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.ImageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageType = string(value["ImageType"].GetString());
        m_imageTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageOsName") && !value["ImageOsName"].IsNull())
    {
        if (!value["ImageOsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.ImageOsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageOsName = string(value["ImageOsName"].GetString());
        m_imageOsNameHasBeenSet = true;
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

    if (value.HasMember("ImageCreateTime") && !value["ImageCreateTime"].IsNull())
    {
        if (!value["ImageCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.ImageCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageCreateTime = string(value["ImageCreateTime"].GetString());
        m_imageCreateTimeHasBeenSet = true;
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

    if (value.HasMember("OsType") && !value["OsType"].IsNull())
    {
        if (!value["OsType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.OsType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osType = string(value["OsType"].GetString());
        m_osTypeHasBeenSet = true;
    }

    if (value.HasMember("OsVersion") && !value["OsVersion"].IsNull())
    {
        if (!value["OsVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.OsVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osVersion = string(value["OsVersion"].GetString());
        m_osVersionHasBeenSet = true;
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

    if (value.HasMember("ImageOwner") && !value["ImageOwner"].IsNull())
    {
        if (!value["ImageOwner"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Image.ImageOwner` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageOwner = value["ImageOwner"].GetInt64();
        m_imageOwnerHasBeenSet = true;
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

    if (value.HasMember("SrcImage") && !value["SrcImage"].IsNull())
    {
        if (!value["SrcImage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Image.SrcImage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_srcImage.Deserialize(value["SrcImage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_srcImageHasBeenSet = true;
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

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("IsSupportCloudInit") && !value["IsSupportCloudInit"].IsNull())
    {
        if (!value["IsSupportCloudInit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Image.IsSupportCloudInit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportCloudInit = value["IsSupportCloudInit"].GetBool();
        m_isSupportCloudInitHasBeenSet = true;
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

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageState.c_str(), allocator).Move(), allocator);
    }

    if (m_imageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageOsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageOsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageOsName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_imageCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_architectureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Architecture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_architecture.c_str(), allocator).Move(), allocator);
    }

    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osType.c_str(), allocator).Move(), allocator);
    }

    if (m_osVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_imageOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageOwner, allocator);
    }

    if (m_imageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageSize, allocator);
    }

    if (m_srcImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_srcImage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageSource.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_isSupportCloudInitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportCloudInit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportCloudInit, allocator);
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

string Image::GetImageOsName() const
{
    return m_imageOsName;
}

void Image::SetImageOsName(const string& _imageOsName)
{
    m_imageOsName = _imageOsName;
    m_imageOsNameHasBeenSet = true;
}

bool Image::ImageOsNameHasBeenSet() const
{
    return m_imageOsNameHasBeenSet;
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

string Image::GetImageCreateTime() const
{
    return m_imageCreateTime;
}

void Image::SetImageCreateTime(const string& _imageCreateTime)
{
    m_imageCreateTime = _imageCreateTime;
    m_imageCreateTimeHasBeenSet = true;
}

bool Image::ImageCreateTimeHasBeenSet() const
{
    return m_imageCreateTimeHasBeenSet;
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

string Image::GetOsType() const
{
    return m_osType;
}

void Image::SetOsType(const string& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool Image::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

string Image::GetOsVersion() const
{
    return m_osVersion;
}

void Image::SetOsVersion(const string& _osVersion)
{
    m_osVersion = _osVersion;
    m_osVersionHasBeenSet = true;
}

bool Image::OsVersionHasBeenSet() const
{
    return m_osVersionHasBeenSet;
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

int64_t Image::GetImageOwner() const
{
    return m_imageOwner;
}

void Image::SetImageOwner(const int64_t& _imageOwner)
{
    m_imageOwner = _imageOwner;
    m_imageOwnerHasBeenSet = true;
}

bool Image::ImageOwnerHasBeenSet() const
{
    return m_imageOwnerHasBeenSet;
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

SrcImage Image::GetSrcImage() const
{
    return m_srcImage;
}

void Image::SetSrcImage(const SrcImage& _srcImage)
{
    m_srcImage = _srcImage;
    m_srcImageHasBeenSet = true;
}

bool Image::SrcImageHasBeenSet() const
{
    return m_srcImageHasBeenSet;
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

string Image::GetTaskId() const
{
    return m_taskId;
}

void Image::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool Image::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

bool Image::GetIsSupportCloudInit() const
{
    return m_isSupportCloudInit;
}

void Image::SetIsSupportCloudInit(const bool& _isSupportCloudInit)
{
    m_isSupportCloudInit = _isSupportCloudInit;
    m_isSupportCloudInitHasBeenSet = true;
}

bool Image::IsSupportCloudInitHasBeenSet() const
{
    return m_isSupportCloudInitHasBeenSet;
}


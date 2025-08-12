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

#include <tencentcloud/lighthouse/v20200324/model/Image.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

Image::Image() :
    m_imageIdHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageDescriptionHasBeenSet(false),
    m_imageSizeHasBeenSet(false),
    m_imageSourceHasBeenSet(false),
    m_imageClassHasBeenSet(false),
    m_imageStateHasBeenSet(false),
    m_isSupportCloudinitHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_isShareableHasBeenSet(false),
    m_unshareableReasonHasBeenSet(false)
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

    if (value.HasMember("ImageSource") && !value["ImageSource"].IsNull())
    {
        if (!value["ImageSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.ImageSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageSource = string(value["ImageSource"].GetString());
        m_imageSourceHasBeenSet = true;
    }

    if (value.HasMember("ImageClass") && !value["ImageClass"].IsNull())
    {
        if (!value["ImageClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.ImageClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageClass = string(value["ImageClass"].GetString());
        m_imageClassHasBeenSet = true;
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

    if (value.HasMember("IsSupportCloudinit") && !value["IsSupportCloudinit"].IsNull())
    {
        if (!value["IsSupportCloudinit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Image.IsSupportCloudinit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportCloudinit = value["IsSupportCloudinit"].GetBool();
        m_isSupportCloudinitHasBeenSet = true;
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

    if (value.HasMember("OsName") && !value["OsName"].IsNull())
    {
        if (!value["OsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(value["OsName"].GetString());
        m_osNameHasBeenSet = true;
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

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("IsShareable") && !value["IsShareable"].IsNull())
    {
        if (!value["IsShareable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Image.IsShareable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isShareable = value["IsShareable"].GetBool();
        m_isShareableHasBeenSet = true;
    }

    if (value.HasMember("UnshareableReason") && !value["UnshareableReason"].IsNull())
    {
        if (!value["UnshareableReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image.UnshareableReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unshareableReason = string(value["UnshareableReason"].GetString());
        m_unshareableReasonHasBeenSet = true;
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

    if (m_imageSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageSource.c_str(), allocator).Move(), allocator);
    }

    if (m_imageClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageClass.c_str(), allocator).Move(), allocator);
    }

    if (m_imageStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageState.c_str(), allocator).Move(), allocator);
    }

    if (m_isSupportCloudinitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportCloudinit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportCloudinit, allocator);
    }

    if (m_architectureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Architecture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_architecture.c_str(), allocator).Move(), allocator);
    }

    if (m_osNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osName.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isShareableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsShareable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isShareable, allocator);
    }

    if (m_unshareableReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnshareableReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unshareableReason.c_str(), allocator).Move(), allocator);
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

string Image::GetImageClass() const
{
    return m_imageClass;
}

void Image::SetImageClass(const string& _imageClass)
{
    m_imageClass = _imageClass;
    m_imageClassHasBeenSet = true;
}

bool Image::ImageClassHasBeenSet() const
{
    return m_imageClassHasBeenSet;
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

bool Image::GetIsShareable() const
{
    return m_isShareable;
}

void Image::SetIsShareable(const bool& _isShareable)
{
    m_isShareable = _isShareable;
    m_isShareableHasBeenSet = true;
}

bool Image::IsShareableHasBeenSet() const
{
    return m_isShareableHasBeenSet;
}

string Image::GetUnshareableReason() const
{
    return m_unshareableReason;
}

void Image::SetUnshareableReason(const string& _unshareableReason)
{
    m_unshareableReason = _unshareableReason;
    m_unshareableReasonHasBeenSet = true;
}

bool Image::UnshareableReasonHasBeenSet() const
{
    return m_unshareableReasonHasBeenSet;
}


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

#include <tencentcloud/cvd/v20201104/model/ImageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

ImageInfo::ImageInfo() :
    m_imageIDHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageTypeHasBeenSet(false),
    m_imageStateHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_imageSizeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_coreTypeHasBeenSet(false),
    m_cvmImageIdHasBeenSet(false),
    m_isWholeHasBeenSet(false),
    m_dataDiskSizeHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome ImageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageID") && !value["ImageID"].IsNull())
    {
        if (!value["ImageID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.ImageID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageID = string(value["ImageID"].GetString());
        m_imageIDHasBeenSet = true;
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

    if (value.HasMember("ImageType") && !value["ImageType"].IsNull())
    {
        if (!value["ImageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.ImageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageType = string(value["ImageType"].GetString());
        m_imageTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageState") && !value["ImageState"].IsNull())
    {
        if (!value["ImageState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.ImageState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageState = string(value["ImageState"].GetString());
        m_imageStateHasBeenSet = true;
    }

    if (value.HasMember("OsName") && !value["OsName"].IsNull())
    {
        if (!value["OsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(value["OsName"].GetString());
        m_osNameHasBeenSet = true;
    }

    if (value.HasMember("ImageSize") && !value["ImageSize"].IsNull())
    {
        if (!value["ImageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.ImageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageSize = value["ImageSize"].GetInt64();
        m_imageSizeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("CoreType") && !value["CoreType"].IsNull())
    {
        if (!value["CoreType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.CoreType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coreType = string(value["CoreType"].GetString());
        m_coreTypeHasBeenSet = true;
    }

    if (value.HasMember("CvmImageId") && !value["CvmImageId"].IsNull())
    {
        if (!value["CvmImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.CvmImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cvmImageId = string(value["CvmImageId"].GetString());
        m_cvmImageIdHasBeenSet = true;
    }

    if (value.HasMember("IsWhole") && !value["IsWhole"].IsNull())
    {
        if (!value["IsWhole"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.IsWhole` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isWhole = value["IsWhole"].GetBool();
        m_isWholeHasBeenSet = true;
    }

    if (value.HasMember("DataDiskSize") && !value["DataDiskSize"].IsNull())
    {
        if (!value["DataDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.DataDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataDiskSize = value["DataDiskSize"].GetInt64();
        m_dataDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageID.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageState.c_str(), allocator).Move(), allocator);
    }

    if (m_osNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageSize, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_coreTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoreType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coreType.c_str(), allocator).Move(), allocator);
    }

    if (m_cvmImageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cvmImageId.c_str(), allocator).Move(), allocator);
    }

    if (m_isWholeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWhole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isWhole, allocator);
    }

    if (m_dataDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataDiskSize, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string ImageInfo::GetImageID() const
{
    return m_imageID;
}

void ImageInfo::SetImageID(const string& _imageID)
{
    m_imageID = _imageID;
    m_imageIDHasBeenSet = true;
}

bool ImageInfo::ImageIDHasBeenSet() const
{
    return m_imageIDHasBeenSet;
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

string ImageInfo::GetImageState() const
{
    return m_imageState;
}

void ImageInfo::SetImageState(const string& _imageState)
{
    m_imageState = _imageState;
    m_imageStateHasBeenSet = true;
}

bool ImageInfo::ImageStateHasBeenSet() const
{
    return m_imageStateHasBeenSet;
}

string ImageInfo::GetOsName() const
{
    return m_osName;
}

void ImageInfo::SetOsName(const string& _osName)
{
    m_osName = _osName;
    m_osNameHasBeenSet = true;
}

bool ImageInfo::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

int64_t ImageInfo::GetImageSize() const
{
    return m_imageSize;
}

void ImageInfo::SetImageSize(const int64_t& _imageSize)
{
    m_imageSize = _imageSize;
    m_imageSizeHasBeenSet = true;
}

bool ImageInfo::ImageSizeHasBeenSet() const
{
    return m_imageSizeHasBeenSet;
}

string ImageInfo::GetDescription() const
{
    return m_description;
}

void ImageInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ImageInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ImageInfo::GetRegion() const
{
    return m_region;
}

void ImageInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ImageInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ImageInfo::GetCoreType() const
{
    return m_coreType;
}

void ImageInfo::SetCoreType(const string& _coreType)
{
    m_coreType = _coreType;
    m_coreTypeHasBeenSet = true;
}

bool ImageInfo::CoreTypeHasBeenSet() const
{
    return m_coreTypeHasBeenSet;
}

string ImageInfo::GetCvmImageId() const
{
    return m_cvmImageId;
}

void ImageInfo::SetCvmImageId(const string& _cvmImageId)
{
    m_cvmImageId = _cvmImageId;
    m_cvmImageIdHasBeenSet = true;
}

bool ImageInfo::CvmImageIdHasBeenSet() const
{
    return m_cvmImageIdHasBeenSet;
}

bool ImageInfo::GetIsWhole() const
{
    return m_isWhole;
}

void ImageInfo::SetIsWhole(const bool& _isWhole)
{
    m_isWhole = _isWhole;
    m_isWholeHasBeenSet = true;
}

bool ImageInfo::IsWholeHasBeenSet() const
{
    return m_isWholeHasBeenSet;
}

int64_t ImageInfo::GetDataDiskSize() const
{
    return m_dataDiskSize;
}

void ImageInfo::SetDataDiskSize(const int64_t& _dataDiskSize)
{
    m_dataDiskSize = _dataDiskSize;
    m_dataDiskSizeHasBeenSet = true;
}

bool ImageInfo::DataDiskSizeHasBeenSet() const
{
    return m_dataDiskSizeHasBeenSet;
}

string ImageInfo::GetCreateTime() const
{
    return m_createTime;
}

void ImageInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ImageInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}


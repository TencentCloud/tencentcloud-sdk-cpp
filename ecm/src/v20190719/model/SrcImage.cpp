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

#include <tencentcloud/ecm/v20190719/model/SrcImage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

SrcImage::SrcImage() :
    m_imageIdHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageOsNameHasBeenSet(false),
    m_imageDescriptionHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_regionIDHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_imageTypeHasBeenSet(false)
{
}

CoreInternalOutcome SrcImage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcImage.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcImage.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("ImageOsName") && !value["ImageOsName"].IsNull())
    {
        if (!value["ImageOsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcImage.ImageOsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageOsName = string(value["ImageOsName"].GetString());
        m_imageOsNameHasBeenSet = true;
    }

    if (value.HasMember("ImageDescription") && !value["ImageDescription"].IsNull())
    {
        if (!value["ImageDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcImage.ImageDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageDescription = string(value["ImageDescription"].GetString());
        m_imageDescriptionHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcImage.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RegionID") && !value["RegionID"].IsNull())
    {
        if (!value["RegionID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SrcImage.RegionID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionID = value["RegionID"].GetInt64();
        m_regionIDHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcImage.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcImage.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcImage.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ImageType") && !value["ImageType"].IsNull())
    {
        if (!value["ImageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcImage.ImageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageType = string(value["ImageType"].GetString());
        m_imageTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SrcImage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionID, allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageType.c_str(), allocator).Move(), allocator);
    }

}


string SrcImage::GetImageId() const
{
    return m_imageId;
}

void SrcImage::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool SrcImage::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string SrcImage::GetImageName() const
{
    return m_imageName;
}

void SrcImage::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool SrcImage::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string SrcImage::GetImageOsName() const
{
    return m_imageOsName;
}

void SrcImage::SetImageOsName(const string& _imageOsName)
{
    m_imageOsName = _imageOsName;
    m_imageOsNameHasBeenSet = true;
}

bool SrcImage::ImageOsNameHasBeenSet() const
{
    return m_imageOsNameHasBeenSet;
}

string SrcImage::GetImageDescription() const
{
    return m_imageDescription;
}

void SrcImage::SetImageDescription(const string& _imageDescription)
{
    m_imageDescription = _imageDescription;
    m_imageDescriptionHasBeenSet = true;
}

bool SrcImage::ImageDescriptionHasBeenSet() const
{
    return m_imageDescriptionHasBeenSet;
}

string SrcImage::GetRegion() const
{
    return m_region;
}

void SrcImage::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SrcImage::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t SrcImage::GetRegionID() const
{
    return m_regionID;
}

void SrcImage::SetRegionID(const int64_t& _regionID)
{
    m_regionID = _regionID;
    m_regionIDHasBeenSet = true;
}

bool SrcImage::RegionIDHasBeenSet() const
{
    return m_regionIDHasBeenSet;
}

string SrcImage::GetRegionName() const
{
    return m_regionName;
}

void SrcImage::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool SrcImage::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string SrcImage::GetInstanceName() const
{
    return m_instanceName;
}

void SrcImage::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool SrcImage::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string SrcImage::GetInstanceId() const
{
    return m_instanceId;
}

void SrcImage::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SrcImage::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SrcImage::GetImageType() const
{
    return m_imageType;
}

void SrcImage::SetImageType(const string& _imageType)
{
    m_imageType = _imageType;
    m_imageTypeHasBeenSet = true;
}

bool SrcImage::ImageTypeHasBeenSet() const
{
    return m_imageTypeHasBeenSet;
}


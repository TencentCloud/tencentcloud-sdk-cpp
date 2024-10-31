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

#include <tencentcloud/tcss/v20201101/model/ImageSimpleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ImageSimpleInfo::ImageSimpleInfo() :
    m_imageIDHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_imageTypeHasBeenSet(false),
    m_containerCntHasBeenSet(false),
    m_hostCntHasBeenSet(false)
{
}

CoreInternalOutcome ImageSimpleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageID") && !value["ImageID"].IsNull())
    {
        if (!value["ImageID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSimpleInfo.ImageID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageID = string(value["ImageID"].GetString());
        m_imageIDHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSimpleInfo.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSimpleInfo.Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("ImageType") && !value["ImageType"].IsNull())
    {
        if (!value["ImageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSimpleInfo.ImageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageType = string(value["ImageType"].GetString());
        m_imageTypeHasBeenSet = true;
    }

    if (value.HasMember("ContainerCnt") && !value["ContainerCnt"].IsNull())
    {
        if (!value["ContainerCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSimpleInfo.ContainerCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_containerCnt = value["ContainerCnt"].GetInt64();
        m_containerCntHasBeenSet = true;
    }

    if (value.HasMember("HostCnt") && !value["HostCnt"].IsNull())
    {
        if (!value["HostCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSimpleInfo.HostCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCnt = value["HostCnt"].GetUint64();
        m_hostCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageSimpleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_imageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageType.c_str(), allocator).Move(), allocator);
    }

    if (m_containerCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerCnt, allocator);
    }

    if (m_hostCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCnt, allocator);
    }

}


string ImageSimpleInfo::GetImageID() const
{
    return m_imageID;
}

void ImageSimpleInfo::SetImageID(const string& _imageID)
{
    m_imageID = _imageID;
    m_imageIDHasBeenSet = true;
}

bool ImageSimpleInfo::ImageIDHasBeenSet() const
{
    return m_imageIDHasBeenSet;
}

string ImageSimpleInfo::GetImageName() const
{
    return m_imageName;
}

void ImageSimpleInfo::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool ImageSimpleInfo::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

uint64_t ImageSimpleInfo::GetSize() const
{
    return m_size;
}

void ImageSimpleInfo::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool ImageSimpleInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string ImageSimpleInfo::GetImageType() const
{
    return m_imageType;
}

void ImageSimpleInfo::SetImageType(const string& _imageType)
{
    m_imageType = _imageType;
    m_imageTypeHasBeenSet = true;
}

bool ImageSimpleInfo::ImageTypeHasBeenSet() const
{
    return m_imageTypeHasBeenSet;
}

int64_t ImageSimpleInfo::GetContainerCnt() const
{
    return m_containerCnt;
}

void ImageSimpleInfo::SetContainerCnt(const int64_t& _containerCnt)
{
    m_containerCnt = _containerCnt;
    m_containerCntHasBeenSet = true;
}

bool ImageSimpleInfo::ContainerCntHasBeenSet() const
{
    return m_containerCntHasBeenSet;
}

uint64_t ImageSimpleInfo::GetHostCnt() const
{
    return m_hostCnt;
}

void ImageSimpleInfo::SetHostCnt(const uint64_t& _hostCnt)
{
    m_hostCnt = _hostCnt;
    m_hostCntHasBeenSet = true;
}

bool ImageSimpleInfo::HostCntHasBeenSet() const
{
    return m_hostCntHasBeenSet;
}


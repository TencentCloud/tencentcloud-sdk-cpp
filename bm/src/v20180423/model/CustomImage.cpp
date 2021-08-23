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

#include <tencentcloud/bm/v20180423/model/CustomImage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

CustomImage::CustomImage() :
    m_imageIdHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageStatusHasBeenSet(false),
    m_osClassHasBeenSet(false),
    m_osVersionHasBeenSet(false),
    m_osBitHasBeenSet(false),
    m_imageSizeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_partitionInfoSetHasBeenSet(false),
    m_deviceClassCodeHasBeenSet(false),
    m_imageDescriptionHasBeenSet(false),
    m_osTypeIdHasBeenSet(false)
{
}

CoreInternalOutcome CustomImage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomImage.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomImage.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("ImageStatus") && !value["ImageStatus"].IsNull())
    {
        if (!value["ImageStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomImage.ImageStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageStatus = value["ImageStatus"].GetUint64();
        m_imageStatusHasBeenSet = true;
    }

    if (value.HasMember("OsClass") && !value["OsClass"].IsNull())
    {
        if (!value["OsClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomImage.OsClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osClass = string(value["OsClass"].GetString());
        m_osClassHasBeenSet = true;
    }

    if (value.HasMember("OsVersion") && !value["OsVersion"].IsNull())
    {
        if (!value["OsVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomImage.OsVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osVersion = string(value["OsVersion"].GetString());
        m_osVersionHasBeenSet = true;
    }

    if (value.HasMember("OsBit") && !value["OsBit"].IsNull())
    {
        if (!value["OsBit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomImage.OsBit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_osBit = value["OsBit"].GetUint64();
        m_osBitHasBeenSet = true;
    }

    if (value.HasMember("ImageSize") && !value["ImageSize"].IsNull())
    {
        if (!value["ImageSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomImage.ImageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageSize = value["ImageSize"].GetUint64();
        m_imageSizeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomImage.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("PartitionInfoSet") && !value["PartitionInfoSet"].IsNull())
    {
        if (!value["PartitionInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomImage.PartitionInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PartitionInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PartitionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_partitionInfoSet.push_back(item);
        }
        m_partitionInfoSetHasBeenSet = true;
    }

    if (value.HasMember("DeviceClassCode") && !value["DeviceClassCode"].IsNull())
    {
        if (!value["DeviceClassCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomImage.DeviceClassCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceClassCode = string(value["DeviceClassCode"].GetString());
        m_deviceClassCodeHasBeenSet = true;
    }

    if (value.HasMember("ImageDescription") && !value["ImageDescription"].IsNull())
    {
        if (!value["ImageDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomImage.ImageDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageDescription = string(value["ImageDescription"].GetString());
        m_imageDescriptionHasBeenSet = true;
    }

    if (value.HasMember("OsTypeId") && !value["OsTypeId"].IsNull())
    {
        if (!value["OsTypeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomImage.OsTypeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_osTypeId = value["OsTypeId"].GetUint64();
        m_osTypeIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomImage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_imageStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageStatus, allocator);
    }

    if (m_osClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osClass.c_str(), allocator).Move(), allocator);
    }

    if (m_osVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_osBitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsBit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_osBit, allocator);
    }

    if (m_imageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageSize, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partitionInfoSet.begin(); itr != m_partitionInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deviceClassCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceClassCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceClassCode.c_str(), allocator).Move(), allocator);
    }

    if (m_imageDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_osTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_osTypeId, allocator);
    }

}


string CustomImage::GetImageId() const
{
    return m_imageId;
}

void CustomImage::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool CustomImage::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string CustomImage::GetImageName() const
{
    return m_imageName;
}

void CustomImage::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool CustomImage::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

uint64_t CustomImage::GetImageStatus() const
{
    return m_imageStatus;
}

void CustomImage::SetImageStatus(const uint64_t& _imageStatus)
{
    m_imageStatus = _imageStatus;
    m_imageStatusHasBeenSet = true;
}

bool CustomImage::ImageStatusHasBeenSet() const
{
    return m_imageStatusHasBeenSet;
}

string CustomImage::GetOsClass() const
{
    return m_osClass;
}

void CustomImage::SetOsClass(const string& _osClass)
{
    m_osClass = _osClass;
    m_osClassHasBeenSet = true;
}

bool CustomImage::OsClassHasBeenSet() const
{
    return m_osClassHasBeenSet;
}

string CustomImage::GetOsVersion() const
{
    return m_osVersion;
}

void CustomImage::SetOsVersion(const string& _osVersion)
{
    m_osVersion = _osVersion;
    m_osVersionHasBeenSet = true;
}

bool CustomImage::OsVersionHasBeenSet() const
{
    return m_osVersionHasBeenSet;
}

uint64_t CustomImage::GetOsBit() const
{
    return m_osBit;
}

void CustomImage::SetOsBit(const uint64_t& _osBit)
{
    m_osBit = _osBit;
    m_osBitHasBeenSet = true;
}

bool CustomImage::OsBitHasBeenSet() const
{
    return m_osBitHasBeenSet;
}

uint64_t CustomImage::GetImageSize() const
{
    return m_imageSize;
}

void CustomImage::SetImageSize(const uint64_t& _imageSize)
{
    m_imageSize = _imageSize;
    m_imageSizeHasBeenSet = true;
}

bool CustomImage::ImageSizeHasBeenSet() const
{
    return m_imageSizeHasBeenSet;
}

string CustomImage::GetCreateTime() const
{
    return m_createTime;
}

void CustomImage::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CustomImage::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<PartitionInfo> CustomImage::GetPartitionInfoSet() const
{
    return m_partitionInfoSet;
}

void CustomImage::SetPartitionInfoSet(const vector<PartitionInfo>& _partitionInfoSet)
{
    m_partitionInfoSet = _partitionInfoSet;
    m_partitionInfoSetHasBeenSet = true;
}

bool CustomImage::PartitionInfoSetHasBeenSet() const
{
    return m_partitionInfoSetHasBeenSet;
}

string CustomImage::GetDeviceClassCode() const
{
    return m_deviceClassCode;
}

void CustomImage::SetDeviceClassCode(const string& _deviceClassCode)
{
    m_deviceClassCode = _deviceClassCode;
    m_deviceClassCodeHasBeenSet = true;
}

bool CustomImage::DeviceClassCodeHasBeenSet() const
{
    return m_deviceClassCodeHasBeenSet;
}

string CustomImage::GetImageDescription() const
{
    return m_imageDescription;
}

void CustomImage::SetImageDescription(const string& _imageDescription)
{
    m_imageDescription = _imageDescription;
    m_imageDescriptionHasBeenSet = true;
}

bool CustomImage::ImageDescriptionHasBeenSet() const
{
    return m_imageDescriptionHasBeenSet;
}

uint64_t CustomImage::GetOsTypeId() const
{
    return m_osTypeId;
}

void CustomImage::SetOsTypeId(const uint64_t& _osTypeId)
{
    m_osTypeId = _osTypeId;
    m_osTypeIdHasBeenSet = true;
}

bool CustomImage::OsTypeIdHasBeenSet() const
{
    return m_osTypeIdHasBeenSet;
}


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

#include <tencentcloud/tione/v20211111/model/DeviceImageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DeviceImageInfo::DeviceImageInfo() :
    m_deviceTypeHasBeenSet(false),
    m_imageInfoHasBeenSet(false)
{
}

CoreInternalOutcome DeviceImageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceImageInfo.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageInfo") && !value["ImageInfo"].IsNull())
    {
        if (!value["ImageInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceImageInfo.ImageInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageInfo.Deserialize(value["ImageInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceImageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DeviceImageInfo::GetDeviceType() const
{
    return m_deviceType;
}

void DeviceImageInfo::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool DeviceImageInfo::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

ImageInfo DeviceImageInfo::GetImageInfo() const
{
    return m_imageInfo;
}

void DeviceImageInfo::SetImageInfo(const ImageInfo& _imageInfo)
{
    m_imageInfo = _imageInfo;
    m_imageInfoHasBeenSet = true;
}

bool DeviceImageInfo::ImageInfoHasBeenSet() const
{
    return m_imageInfoHasBeenSet;
}


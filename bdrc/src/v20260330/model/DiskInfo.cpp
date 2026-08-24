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

#include <tencentcloud/bdrc/v20260330/model/DiskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

DiskInfo::DiskInfo() :
    m_diskIdHasBeenSet(false),
    m_imageFormatHasBeenSet(false)
{
}

CoreInternalOutcome DiskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskId") && !value["DiskId"].IsNull())
    {
        if (!value["DiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskInfo.DiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskId = string(value["DiskId"].GetString());
        m_diskIdHasBeenSet = true;
    }

    if (value.HasMember("ImageFormat") && !value["ImageFormat"].IsNull())
    {
        if (!value["ImageFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskInfo.ImageFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageFormat = string(value["ImageFormat"].GetString());
        m_imageFormatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageFormat.c_str(), allocator).Move(), allocator);
    }

}


string DiskInfo::GetDiskId() const
{
    return m_diskId;
}

void DiskInfo::SetDiskId(const string& _diskId)
{
    m_diskId = _diskId;
    m_diskIdHasBeenSet = true;
}

bool DiskInfo::DiskIdHasBeenSet() const
{
    return m_diskIdHasBeenSet;
}

string DiskInfo::GetImageFormat() const
{
    return m_imageFormat;
}

void DiskInfo::SetImageFormat(const string& _imageFormat)
{
    m_imageFormat = _imageFormat;
    m_imageFormatHasBeenSet = true;
}

bool DiskInfo::ImageFormatHasBeenSet() const
{
    return m_imageFormatHasBeenSet;
}


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

#include <tencentcloud/bm/v20180423/model/DeviceDiskSizeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

DeviceDiskSizeInfo::DeviceDiskSizeInfo() :
    m_diskNameHasBeenSet(false),
    m_diskSizeHasBeenSet(false)
{
}

CoreInternalOutcome DeviceDiskSizeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskName") && !value["DiskName"].IsNull())
    {
        if (!value["DiskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDiskSizeInfo.DiskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskName = string(value["DiskName"].GetString());
        m_diskNameHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDiskSizeInfo.DiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetUint64();
        m_diskSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceDiskSizeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskName.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

}


string DeviceDiskSizeInfo::GetDiskName() const
{
    return m_diskName;
}

void DeviceDiskSizeInfo::SetDiskName(const string& _diskName)
{
    m_diskName = _diskName;
    m_diskNameHasBeenSet = true;
}

bool DeviceDiskSizeInfo::DiskNameHasBeenSet() const
{
    return m_diskNameHasBeenSet;
}

uint64_t DeviceDiskSizeInfo::GetDiskSize() const
{
    return m_diskSize;
}

void DeviceDiskSizeInfo::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool DeviceDiskSizeInfo::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}


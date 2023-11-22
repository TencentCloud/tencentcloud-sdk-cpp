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

#include <tencentcloud/hai/v20230812/model/SystemDisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

SystemDisk::SystemDisk() :
    m_diskTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_diskNameHasBeenSet(false)
{
}

CoreInternalOutcome SystemDisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SystemDisk.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SystemDisk.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("DiskName") && !value["DiskName"].IsNull())
    {
        if (!value["DiskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SystemDisk.DiskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskName = string(value["DiskName"].GetString());
        m_diskNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SystemDisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_diskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskName.c_str(), allocator).Move(), allocator);
    }

}


string SystemDisk::GetDiskType() const
{
    return m_diskType;
}

void SystemDisk::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool SystemDisk::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

int64_t SystemDisk::GetDiskSize() const
{
    return m_diskSize;
}

void SystemDisk::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool SystemDisk::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string SystemDisk::GetDiskName() const
{
    return m_diskName;
}

void SystemDisk::SetDiskName(const string& _diskName)
{
    m_diskName = _diskName;
    m_diskNameHasBeenSet = true;
}

bool SystemDisk::DiskNameHasBeenSet() const
{
    return m_diskNameHasBeenSet;
}


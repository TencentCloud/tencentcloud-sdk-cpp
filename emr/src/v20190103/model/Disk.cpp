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

#include <tencentcloud/emr/v20190103/model/Disk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

Disk::Disk() :
    m_diskTypeHasBeenSet(false),
    m_diskCapacityHasBeenSet(false),
    m_diskNumberHasBeenSet(false)
{
}

CoreInternalOutcome Disk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskCapacity") && !value["DiskCapacity"].IsNull())
    {
        if (!value["DiskCapacity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DiskCapacity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskCapacity = value["DiskCapacity"].GetInt64();
        m_diskCapacityHasBeenSet = true;
    }

    if (value.HasMember("DiskNumber") && !value["DiskNumber"].IsNull())
    {
        if (!value["DiskNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DiskNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskNumber = value["DiskNumber"].GetInt64();
        m_diskNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Disk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskCapacity, allocator);
    }

    if (m_diskNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskNumber, allocator);
    }

}


string Disk::GetDiskType() const
{
    return m_diskType;
}

void Disk::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool Disk::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

int64_t Disk::GetDiskCapacity() const
{
    return m_diskCapacity;
}

void Disk::SetDiskCapacity(const int64_t& _diskCapacity)
{
    m_diskCapacity = _diskCapacity;
    m_diskCapacityHasBeenSet = true;
}

bool Disk::DiskCapacityHasBeenSet() const
{
    return m_diskCapacityHasBeenSet;
}

int64_t Disk::GetDiskNumber() const
{
    return m_diskNumber;
}

void Disk::SetDiskNumber(const int64_t& _diskNumber)
{
    m_diskNumber = _diskNumber;
    m_diskNumberHasBeenSet = true;
}

bool Disk::DiskNumberHasBeenSet() const
{
    return m_diskNumberHasBeenSet;
}


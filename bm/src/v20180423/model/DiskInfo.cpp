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

#include <tencentcloud/bm/v20180423/model/DiskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

DiskInfo::DiskInfo() :
    m_diskTypeIdHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_diskDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome DiskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskTypeId") && !value["DiskTypeId"].IsNull())
    {
        if (!value["DiskTypeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskInfo.DiskTypeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskTypeId = value["DiskTypeId"].GetUint64();
        m_diskTypeIdHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskInfo.Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("DiskDescription") && !value["DiskDescription"].IsNull())
    {
        if (!value["DiskDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskInfo.DiskDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskDescription = string(value["DiskDescription"].GetString());
        m_diskDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskTypeId, allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_diskDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskDescription.c_str(), allocator).Move(), allocator);
    }

}


uint64_t DiskInfo::GetDiskTypeId() const
{
    return m_diskTypeId;
}

void DiskInfo::SetDiskTypeId(const uint64_t& _diskTypeId)
{
    m_diskTypeId = _diskTypeId;
    m_diskTypeIdHasBeenSet = true;
}

bool DiskInfo::DiskTypeIdHasBeenSet() const
{
    return m_diskTypeIdHasBeenSet;
}

uint64_t DiskInfo::GetSize() const
{
    return m_size;
}

void DiskInfo::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool DiskInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string DiskInfo::GetDiskDescription() const
{
    return m_diskDescription;
}

void DiskInfo::SetDiskDescription(const string& _diskDescription)
{
    m_diskDescription = _diskDescription;
    m_diskDescriptionHasBeenSet = true;
}

bool DiskInfo::DiskDescriptionHasBeenSet() const
{
    return m_diskDescriptionHasBeenSet;
}


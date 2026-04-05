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

#include <tencentcloud/omics/v20221128/model/HPCDisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

HPCDisk::HPCDisk() :
    m_diskIdHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome HPCDisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskId") && !value["DiskId"].IsNull())
    {
        if (!value["DiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCDisk.DiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskId = string(value["DiskId"].GetString());
        m_diskIdHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HPCDisk.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCDisk.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HPCDisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskId.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


string HPCDisk::GetDiskId() const
{
    return m_diskId;
}

void HPCDisk::SetDiskId(const string& _diskId)
{
    m_diskId = _diskId;
    m_diskIdHasBeenSet = true;
}

bool HPCDisk::DiskIdHasBeenSet() const
{
    return m_diskIdHasBeenSet;
}

int64_t HPCDisk::GetSize() const
{
    return m_size;
}

void HPCDisk::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool HPCDisk::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string HPCDisk::GetType() const
{
    return m_type;
}

void HPCDisk::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool HPCDisk::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


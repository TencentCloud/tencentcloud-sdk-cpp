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

#include <tencentcloud/emr/v20190103/model/NodeSpecDisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

NodeSpecDisk::NodeSpecDisk() :
    m_countHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_defaultDiskSizeHasBeenSet(false)
{
}

CoreInternalOutcome NodeSpecDisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecDisk.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecDisk.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecDisk.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("DefaultDiskSize") && !value["DefaultDiskSize"].IsNull())
    {
        if (!value["DefaultDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecDisk.DefaultDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultDiskSize = value["DefaultDiskSize"].GetInt64();
        m_defaultDiskSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeSpecDisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultDiskSize, allocator);
    }

}


int64_t NodeSpecDisk::GetCount() const
{
    return m_count;
}

void NodeSpecDisk::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool NodeSpecDisk::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string NodeSpecDisk::GetName() const
{
    return m_name;
}

void NodeSpecDisk::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NodeSpecDisk::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string NodeSpecDisk::GetDiskType() const
{
    return m_diskType;
}

void NodeSpecDisk::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool NodeSpecDisk::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

int64_t NodeSpecDisk::GetDefaultDiskSize() const
{
    return m_defaultDiskSize;
}

void NodeSpecDisk::SetDefaultDiskSize(const int64_t& _defaultDiskSize)
{
    m_defaultDiskSize = _defaultDiskSize;
    m_defaultDiskSizeHasBeenSet = true;
}

bool NodeSpecDisk::DefaultDiskSizeHasBeenSet() const
{
    return m_defaultDiskSizeHasBeenSet;
}


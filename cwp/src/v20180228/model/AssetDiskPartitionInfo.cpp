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

#include <tencentcloud/cwp/v20180228/model/AssetDiskPartitionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AssetDiskPartitionInfo::AssetDiskPartitionInfo() :
    m_nameHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_percentHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_usedHasBeenSet(false)
{
}

CoreInternalOutcome AssetDiskPartitionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDiskPartitionInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDiskPartitionInfo.Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Percent") && !value["Percent"].IsNull())
    {
        if (!value["Percent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDiskPartitionInfo.Percent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_percent = value["Percent"].GetDouble();
        m_percentHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDiskPartitionInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDiskPartitionInfo.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Used") && !value["Used"].IsNull())
    {
        if (!value["Used"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDiskPartitionInfo.Used` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_used = value["Used"].GetUint64();
        m_usedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetDiskPartitionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_usedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Used";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_used, allocator);
    }

}


string AssetDiskPartitionInfo::GetName() const
{
    return m_name;
}

void AssetDiskPartitionInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AssetDiskPartitionInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t AssetDiskPartitionInfo::GetSize() const
{
    return m_size;
}

void AssetDiskPartitionInfo::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool AssetDiskPartitionInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

double AssetDiskPartitionInfo::GetPercent() const
{
    return m_percent;
}

void AssetDiskPartitionInfo::SetPercent(const double& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool AssetDiskPartitionInfo::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

string AssetDiskPartitionInfo::GetType() const
{
    return m_type;
}

void AssetDiskPartitionInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AssetDiskPartitionInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AssetDiskPartitionInfo::GetPath() const
{
    return m_path;
}

void AssetDiskPartitionInfo::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool AssetDiskPartitionInfo::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

uint64_t AssetDiskPartitionInfo::GetUsed() const
{
    return m_used;
}

void AssetDiskPartitionInfo::SetUsed(const uint64_t& _used)
{
    m_used = _used;
    m_usedHasBeenSet = true;
}

bool AssetDiskPartitionInfo::UsedHasBeenSet() const
{
    return m_usedHasBeenSet;
}


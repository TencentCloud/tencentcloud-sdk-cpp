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

#include <tencentcloud/wedata/v20250806/model/ColumnInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ColumnInfo::ColumnInfo() :
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_lengthHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_isPartitionHasBeenSet(false)
{
}

CoreInternalOutcome ColumnInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Length") && !value["Length"].IsNull())
    {
        if (!value["Length"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnInfo.Length` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_length = value["Length"].GetInt64();
        m_lengthHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnInfo.Position` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_position = value["Position"].GetInt64();
        m_positionHasBeenSet = true;
    }

    if (value.HasMember("IsPartition") && !value["IsPartition"].IsNull())
    {
        if (!value["IsPartition"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnInfo.IsPartition` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPartition = value["IsPartition"].GetBool();
        m_isPartitionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ColumnInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_lengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Length";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_length, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_position, allocator);
    }

    if (m_isPartitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPartition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPartition, allocator);
    }

}


string ColumnInfo::GetType() const
{
    return m_type;
}

void ColumnInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ColumnInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ColumnInfo::GetName() const
{
    return m_name;
}

void ColumnInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ColumnInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ColumnInfo::GetLength() const
{
    return m_length;
}

void ColumnInfo::SetLength(const int64_t& _length)
{
    m_length = _length;
    m_lengthHasBeenSet = true;
}

bool ColumnInfo::LengthHasBeenSet() const
{
    return m_lengthHasBeenSet;
}

string ColumnInfo::GetDescription() const
{
    return m_description;
}

void ColumnInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ColumnInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t ColumnInfo::GetPosition() const
{
    return m_position;
}

void ColumnInfo::SetPosition(const int64_t& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool ColumnInfo::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

bool ColumnInfo::GetIsPartition() const
{
    return m_isPartition;
}

void ColumnInfo::SetIsPartition(const bool& _isPartition)
{
    m_isPartition = _isPartition;
    m_isPartitionHasBeenSet = true;
}

bool ColumnInfo::IsPartitionHasBeenSet() const
{
    return m_isPartitionHasBeenSet;
}


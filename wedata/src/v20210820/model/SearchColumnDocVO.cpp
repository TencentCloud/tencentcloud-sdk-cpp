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

#include <tencentcloud/wedata/v20210820/model/SearchColumnDocVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SearchColumnDocVO::SearchColumnDocVO() :
    m_nameHasBeenSet(false),
    m_chineseNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_lengthHasBeenSet(false),
    m_precisionHasBeenSet(false),
    m_scaleHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_isPartitionHasBeenSet(false),
    m_columnKeyHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false)
{
}

CoreInternalOutcome SearchColumnDocVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchColumnDocVO.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ChineseName") && !value["ChineseName"].IsNull())
    {
        if (!value["ChineseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchColumnDocVO.ChineseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chineseName = string(value["ChineseName"].GetString());
        m_chineseNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchColumnDocVO.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Length") && !value["Length"].IsNull())
    {
        if (!value["Length"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchColumnDocVO.Length` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_length = value["Length"].GetUint64();
        m_lengthHasBeenSet = true;
    }

    if (value.HasMember("Precision") && !value["Precision"].IsNull())
    {
        if (!value["Precision"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchColumnDocVO.Precision` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_precision = value["Precision"].GetUint64();
        m_precisionHasBeenSet = true;
    }

    if (value.HasMember("Scale") && !value["Scale"].IsNull())
    {
        if (!value["Scale"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchColumnDocVO.Scale` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scale = value["Scale"].GetInt64();
        m_scaleHasBeenSet = true;
    }

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchColumnDocVO.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchColumnDocVO.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchColumnDocVO.Position` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_position = value["Position"].GetInt64();
        m_positionHasBeenSet = true;
    }

    if (value.HasMember("IsPartition") && !value["IsPartition"].IsNull())
    {
        if (!value["IsPartition"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SearchColumnDocVO.IsPartition` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPartition = value["IsPartition"].GetBool();
        m_isPartitionHasBeenSet = true;
    }

    if (value.HasMember("ColumnKey") && !value["ColumnKey"].IsNull())
    {
        if (!value["ColumnKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchColumnDocVO.ColumnKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnKey = string(value["ColumnKey"].GetString());
        m_columnKeyHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchColumnDocVO.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchColumnDocVO.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchColumnDocVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_chineseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChineseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chineseName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_lengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Length";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_length, allocator);
    }

    if (m_precisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Precision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_precision, allocator);
    }

    if (m_scaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scale";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scale, allocator);
    }

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
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

    if (m_columnKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnKey.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

}


string SearchColumnDocVO::GetName() const
{
    return m_name;
}

void SearchColumnDocVO::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SearchColumnDocVO::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SearchColumnDocVO::GetChineseName() const
{
    return m_chineseName;
}

void SearchColumnDocVO::SetChineseName(const string& _chineseName)
{
    m_chineseName = _chineseName;
    m_chineseNameHasBeenSet = true;
}

bool SearchColumnDocVO::ChineseNameHasBeenSet() const
{
    return m_chineseNameHasBeenSet;
}

string SearchColumnDocVO::GetType() const
{
    return m_type;
}

void SearchColumnDocVO::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SearchColumnDocVO::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t SearchColumnDocVO::GetLength() const
{
    return m_length;
}

void SearchColumnDocVO::SetLength(const uint64_t& _length)
{
    m_length = _length;
    m_lengthHasBeenSet = true;
}

bool SearchColumnDocVO::LengthHasBeenSet() const
{
    return m_lengthHasBeenSet;
}

uint64_t SearchColumnDocVO::GetPrecision() const
{
    return m_precision;
}

void SearchColumnDocVO::SetPrecision(const uint64_t& _precision)
{
    m_precision = _precision;
    m_precisionHasBeenSet = true;
}

bool SearchColumnDocVO::PrecisionHasBeenSet() const
{
    return m_precisionHasBeenSet;
}

int64_t SearchColumnDocVO::GetScale() const
{
    return m_scale;
}

void SearchColumnDocVO::SetScale(const int64_t& _scale)
{
    m_scale = _scale;
    m_scaleHasBeenSet = true;
}

bool SearchColumnDocVO::ScaleHasBeenSet() const
{
    return m_scaleHasBeenSet;
}

string SearchColumnDocVO::GetDefaultValue() const
{
    return m_defaultValue;
}

void SearchColumnDocVO::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool SearchColumnDocVO::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

string SearchColumnDocVO::GetDescription() const
{
    return m_description;
}

void SearchColumnDocVO::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SearchColumnDocVO::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t SearchColumnDocVO::GetPosition() const
{
    return m_position;
}

void SearchColumnDocVO::SetPosition(const int64_t& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool SearchColumnDocVO::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

bool SearchColumnDocVO::GetIsPartition() const
{
    return m_isPartition;
}

void SearchColumnDocVO::SetIsPartition(const bool& _isPartition)
{
    m_isPartition = _isPartition;
    m_isPartitionHasBeenSet = true;
}

bool SearchColumnDocVO::IsPartitionHasBeenSet() const
{
    return m_isPartitionHasBeenSet;
}

string SearchColumnDocVO::GetColumnKey() const
{
    return m_columnKey;
}

void SearchColumnDocVO::SetColumnKey(const string& _columnKey)
{
    m_columnKey = _columnKey;
    m_columnKeyHasBeenSet = true;
}

bool SearchColumnDocVO::ColumnKeyHasBeenSet() const
{
    return m_columnKeyHasBeenSet;
}

string SearchColumnDocVO::GetCreateTime() const
{
    return m_createTime;
}

void SearchColumnDocVO::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SearchColumnDocVO::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SearchColumnDocVO::GetModifiedTime() const
{
    return m_modifiedTime;
}

void SearchColumnDocVO::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool SearchColumnDocVO::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}


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

#include <tencentcloud/wedata/v20210820/model/ColumnMeta.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ColumnMeta::ColumnMeta() :
    m_nameEnHasBeenSet(false),
    m_nameCnHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_isPartitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_columnFamiliesFieldSetHasBeenSet(false),
    m_dictionaryIdHasBeenSet(false),
    m_dictionaryNameHasBeenSet(false),
    m_levelNameHasBeenSet(false),
    m_levelRankHasBeenSet(false),
    m_influxCategoryHasBeenSet(false)
{
}

CoreInternalOutcome ColumnMeta::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NameEn") && !value["NameEn"].IsNull())
    {
        if (!value["NameEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnMeta.NameEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameEn = string(value["NameEn"].GetString());
        m_nameEnHasBeenSet = true;
    }

    if (value.HasMember("NameCn") && !value["NameCn"].IsNull())
    {
        if (!value["NameCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnMeta.NameCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameCn = string(value["NameCn"].GetString());
        m_nameCnHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnMeta.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnMeta.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnMeta.Position` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_position = value["Position"].GetInt64();
        m_positionHasBeenSet = true;
    }

    if (value.HasMember("IsPartition") && !value["IsPartition"].IsNull())
    {
        if (!value["IsPartition"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnMeta.IsPartition` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPartition = value["IsPartition"].GetBool();
        m_isPartitionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnMeta.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ColumnFamiliesFieldSet") && !value["ColumnFamiliesFieldSet"].IsNull())
    {
        if (!value["ColumnFamiliesFieldSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ColumnMeta.ColumnFamiliesFieldSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ColumnFamiliesFieldSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Pair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_columnFamiliesFieldSet.push_back(item);
        }
        m_columnFamiliesFieldSetHasBeenSet = true;
    }

    if (value.HasMember("DictionaryId") && !value["DictionaryId"].IsNull())
    {
        if (!value["DictionaryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnMeta.DictionaryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dictionaryId = string(value["DictionaryId"].GetString());
        m_dictionaryIdHasBeenSet = true;
    }

    if (value.HasMember("DictionaryName") && !value["DictionaryName"].IsNull())
    {
        if (!value["DictionaryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnMeta.DictionaryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dictionaryName = string(value["DictionaryName"].GetString());
        m_dictionaryNameHasBeenSet = true;
    }

    if (value.HasMember("LevelName") && !value["LevelName"].IsNull())
    {
        if (!value["LevelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnMeta.LevelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelName = string(value["LevelName"].GetString());
        m_levelNameHasBeenSet = true;
    }

    if (value.HasMember("LevelRank") && !value["LevelRank"].IsNull())
    {
        if (!value["LevelRank"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnMeta.LevelRank` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_levelRank = value["LevelRank"].GetInt64();
        m_levelRankHasBeenSet = true;
    }

    if (value.HasMember("InfluxCategory") && !value["InfluxCategory"].IsNull())
    {
        if (!value["InfluxCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnMeta.InfluxCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_influxCategory = string(value["InfluxCategory"].GetString());
        m_influxCategoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ColumnMeta::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameEn.c_str(), allocator).Move(), allocator);
    }

    if (m_nameCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameCn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameCn.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_columnFamiliesFieldSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnFamiliesFieldSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_columnFamiliesFieldSet.begin(); itr != m_columnFamiliesFieldSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dictionaryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DictionaryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dictionaryId.c_str(), allocator).Move(), allocator);
    }

    if (m_dictionaryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DictionaryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dictionaryName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelRankHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelRank";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelRank, allocator);
    }

    if (m_influxCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InfluxCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_influxCategory.c_str(), allocator).Move(), allocator);
    }

}


string ColumnMeta::GetNameEn() const
{
    return m_nameEn;
}

void ColumnMeta::SetNameEn(const string& _nameEn)
{
    m_nameEn = _nameEn;
    m_nameEnHasBeenSet = true;
}

bool ColumnMeta::NameEnHasBeenSet() const
{
    return m_nameEnHasBeenSet;
}

string ColumnMeta::GetNameCn() const
{
    return m_nameCn;
}

void ColumnMeta::SetNameCn(const string& _nameCn)
{
    m_nameCn = _nameCn;
    m_nameCnHasBeenSet = true;
}

bool ColumnMeta::NameCnHasBeenSet() const
{
    return m_nameCnHasBeenSet;
}

string ColumnMeta::GetType() const
{
    return m_type;
}

void ColumnMeta::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ColumnMeta::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ColumnMeta::GetDescription() const
{
    return m_description;
}

void ColumnMeta::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ColumnMeta::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t ColumnMeta::GetPosition() const
{
    return m_position;
}

void ColumnMeta::SetPosition(const int64_t& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool ColumnMeta::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

bool ColumnMeta::GetIsPartition() const
{
    return m_isPartition;
}

void ColumnMeta::SetIsPartition(const bool& _isPartition)
{
    m_isPartition = _isPartition;
    m_isPartitionHasBeenSet = true;
}

bool ColumnMeta::IsPartitionHasBeenSet() const
{
    return m_isPartitionHasBeenSet;
}

string ColumnMeta::GetName() const
{
    return m_name;
}

void ColumnMeta::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ColumnMeta::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<Pair> ColumnMeta::GetColumnFamiliesFieldSet() const
{
    return m_columnFamiliesFieldSet;
}

void ColumnMeta::SetColumnFamiliesFieldSet(const vector<Pair>& _columnFamiliesFieldSet)
{
    m_columnFamiliesFieldSet = _columnFamiliesFieldSet;
    m_columnFamiliesFieldSetHasBeenSet = true;
}

bool ColumnMeta::ColumnFamiliesFieldSetHasBeenSet() const
{
    return m_columnFamiliesFieldSetHasBeenSet;
}

string ColumnMeta::GetDictionaryId() const
{
    return m_dictionaryId;
}

void ColumnMeta::SetDictionaryId(const string& _dictionaryId)
{
    m_dictionaryId = _dictionaryId;
    m_dictionaryIdHasBeenSet = true;
}

bool ColumnMeta::DictionaryIdHasBeenSet() const
{
    return m_dictionaryIdHasBeenSet;
}

string ColumnMeta::GetDictionaryName() const
{
    return m_dictionaryName;
}

void ColumnMeta::SetDictionaryName(const string& _dictionaryName)
{
    m_dictionaryName = _dictionaryName;
    m_dictionaryNameHasBeenSet = true;
}

bool ColumnMeta::DictionaryNameHasBeenSet() const
{
    return m_dictionaryNameHasBeenSet;
}

string ColumnMeta::GetLevelName() const
{
    return m_levelName;
}

void ColumnMeta::SetLevelName(const string& _levelName)
{
    m_levelName = _levelName;
    m_levelNameHasBeenSet = true;
}

bool ColumnMeta::LevelNameHasBeenSet() const
{
    return m_levelNameHasBeenSet;
}

int64_t ColumnMeta::GetLevelRank() const
{
    return m_levelRank;
}

void ColumnMeta::SetLevelRank(const int64_t& _levelRank)
{
    m_levelRank = _levelRank;
    m_levelRankHasBeenSet = true;
}

bool ColumnMeta::LevelRankHasBeenSet() const
{
    return m_levelRankHasBeenSet;
}

string ColumnMeta::GetInfluxCategory() const
{
    return m_influxCategory;
}

void ColumnMeta::SetInfluxCategory(const string& _influxCategory)
{
    m_influxCategory = _influxCategory;
    m_influxCategoryHasBeenSet = true;
}

bool ColumnMeta::InfluxCategoryHasBeenSet() const
{
    return m_influxCategoryHasBeenSet;
}


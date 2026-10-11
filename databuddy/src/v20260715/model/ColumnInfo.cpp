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

#include <tencentcloud/databuddy/v20260715/model/ColumnInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

ColumnInfo::ColumnInfo() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_fieldSettingHasBeenSet(false),
    m_isPrimaryKeyHasBeenSet(false),
    m_dataMaskStrategyInfoHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_dictDimensionHasBeenSet(false)
{
}

CoreInternalOutcome ColumnInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnInfo.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("FieldSetting") && !value["FieldSetting"].IsNull())
    {
        if (!value["FieldSetting"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnInfo.FieldSetting` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldSetting = string(value["FieldSetting"].GetString());
        m_fieldSettingHasBeenSet = true;
    }

    if (value.HasMember("IsPrimaryKey") && !value["IsPrimaryKey"].IsNull())
    {
        if (!value["IsPrimaryKey"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnInfo.IsPrimaryKey` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPrimaryKey = value["IsPrimaryKey"].GetBool();
        m_isPrimaryKeyHasBeenSet = true;
    }

    if (value.HasMember("DataMaskStrategyInfo") && !value["DataMaskStrategyInfo"].IsNull())
    {
        if (!value["DataMaskStrategyInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnInfo.DataMaskStrategyInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dataMaskStrategyInfo.Deserialize(value["DataMaskStrategyInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataMaskStrategyInfoHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ColumnInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CommonTagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("DictDimension") && !value["DictDimension"].IsNull())
    {
        if (!value["DictDimension"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnInfo.DictDimension` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dictDimension.Deserialize(value["DictDimension"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dictDimensionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ColumnInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldSetting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldSetting.c_str(), allocator).Move(), allocator);
    }

    if (m_isPrimaryKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPrimaryKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPrimaryKey, allocator);
    }

    if (m_dataMaskStrategyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataMaskStrategyInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dataMaskStrategyInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dictDimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DictDimension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dictDimension.ToJsonObject(value[key.c_str()], allocator);
    }

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

string ColumnInfo::GetComment() const
{
    return m_comment;
}

void ColumnInfo::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ColumnInfo::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string ColumnInfo::GetFieldSetting() const
{
    return m_fieldSetting;
}

void ColumnInfo::SetFieldSetting(const string& _fieldSetting)
{
    m_fieldSetting = _fieldSetting;
    m_fieldSettingHasBeenSet = true;
}

bool ColumnInfo::FieldSettingHasBeenSet() const
{
    return m_fieldSettingHasBeenSet;
}

bool ColumnInfo::GetIsPrimaryKey() const
{
    return m_isPrimaryKey;
}

void ColumnInfo::SetIsPrimaryKey(const bool& _isPrimaryKey)
{
    m_isPrimaryKey = _isPrimaryKey;
    m_isPrimaryKeyHasBeenSet = true;
}

bool ColumnInfo::IsPrimaryKeyHasBeenSet() const
{
    return m_isPrimaryKeyHasBeenSet;
}

DataMaskStrategyInfo ColumnInfo::GetDataMaskStrategyInfo() const
{
    return m_dataMaskStrategyInfo;
}

void ColumnInfo::SetDataMaskStrategyInfo(const DataMaskStrategyInfo& _dataMaskStrategyInfo)
{
    m_dataMaskStrategyInfo = _dataMaskStrategyInfo;
    m_dataMaskStrategyInfoHasBeenSet = true;
}

bool ColumnInfo::DataMaskStrategyInfoHasBeenSet() const
{
    return m_dataMaskStrategyInfoHasBeenSet;
}

vector<CommonTagInfo> ColumnInfo::GetTags() const
{
    return m_tags;
}

void ColumnInfo::SetTags(const vector<CommonTagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ColumnInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

DictDimensionInfo ColumnInfo::GetDictDimension() const
{
    return m_dictDimension;
}

void ColumnInfo::SetDictDimension(const DictDimensionInfo& _dictDimension)
{
    m_dictDimension = _dictDimension;
    m_dictDimensionHasBeenSet = true;
}

bool ColumnInfo::DictDimensionHasBeenSet() const
{
    return m_dictDimensionHasBeenSet;
}


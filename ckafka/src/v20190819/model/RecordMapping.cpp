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

#include <tencentcloud/ckafka/v20190819/model/RecordMapping.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

RecordMapping::RecordMapping() :
    m_jsonKeyHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_allowNullHasBeenSet(false),
    m_columnNameHasBeenSet(false),
    m_extraInfoHasBeenSet(false),
    m_columnSizeHasBeenSet(false),
    m_decimalDigitsHasBeenSet(false),
    m_autoIncrementHasBeenSet(false),
    m_defaultValueHasBeenSet(false)
{
}

CoreInternalOutcome RecordMapping::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JsonKey") && !value["JsonKey"].IsNull())
    {
        if (!value["JsonKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordMapping.JsonKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jsonKey = string(value["JsonKey"].GetString());
        m_jsonKeyHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordMapping.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AllowNull") && !value["AllowNull"].IsNull())
    {
        if (!value["AllowNull"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RecordMapping.AllowNull` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowNull = value["AllowNull"].GetBool();
        m_allowNullHasBeenSet = true;
    }

    if (value.HasMember("ColumnName") && !value["ColumnName"].IsNull())
    {
        if (!value["ColumnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordMapping.ColumnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnName = string(value["ColumnName"].GetString());
        m_columnNameHasBeenSet = true;
    }

    if (value.HasMember("ExtraInfo") && !value["ExtraInfo"].IsNull())
    {
        if (!value["ExtraInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordMapping.ExtraInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraInfo = string(value["ExtraInfo"].GetString());
        m_extraInfoHasBeenSet = true;
    }

    if (value.HasMember("ColumnSize") && !value["ColumnSize"].IsNull())
    {
        if (!value["ColumnSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordMapping.ColumnSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnSize = string(value["ColumnSize"].GetString());
        m_columnSizeHasBeenSet = true;
    }

    if (value.HasMember("DecimalDigits") && !value["DecimalDigits"].IsNull())
    {
        if (!value["DecimalDigits"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordMapping.DecimalDigits` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_decimalDigits = string(value["DecimalDigits"].GetString());
        m_decimalDigitsHasBeenSet = true;
    }

    if (value.HasMember("AutoIncrement") && !value["AutoIncrement"].IsNull())
    {
        if (!value["AutoIncrement"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RecordMapping.AutoIncrement` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoIncrement = value["AutoIncrement"].GetBool();
        m_autoIncrementHasBeenSet = true;
    }

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordMapping.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordMapping::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jsonKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JsonKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jsonKey.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_allowNullHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowNull";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowNull, allocator);
    }

    if (m_columnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnName.c_str(), allocator).Move(), allocator);
    }

    if (m_extraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_columnSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnSize.c_str(), allocator).Move(), allocator);
    }

    if (m_decimalDigitsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DecimalDigits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_decimalDigits.c_str(), allocator).Move(), allocator);
    }

    if (m_autoIncrementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoIncrement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoIncrement, allocator);
    }

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

}


string RecordMapping::GetJsonKey() const
{
    return m_jsonKey;
}

void RecordMapping::SetJsonKey(const string& _jsonKey)
{
    m_jsonKey = _jsonKey;
    m_jsonKeyHasBeenSet = true;
}

bool RecordMapping::JsonKeyHasBeenSet() const
{
    return m_jsonKeyHasBeenSet;
}

string RecordMapping::GetType() const
{
    return m_type;
}

void RecordMapping::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RecordMapping::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool RecordMapping::GetAllowNull() const
{
    return m_allowNull;
}

void RecordMapping::SetAllowNull(const bool& _allowNull)
{
    m_allowNull = _allowNull;
    m_allowNullHasBeenSet = true;
}

bool RecordMapping::AllowNullHasBeenSet() const
{
    return m_allowNullHasBeenSet;
}

string RecordMapping::GetColumnName() const
{
    return m_columnName;
}

void RecordMapping::SetColumnName(const string& _columnName)
{
    m_columnName = _columnName;
    m_columnNameHasBeenSet = true;
}

bool RecordMapping::ColumnNameHasBeenSet() const
{
    return m_columnNameHasBeenSet;
}

string RecordMapping::GetExtraInfo() const
{
    return m_extraInfo;
}

void RecordMapping::SetExtraInfo(const string& _extraInfo)
{
    m_extraInfo = _extraInfo;
    m_extraInfoHasBeenSet = true;
}

bool RecordMapping::ExtraInfoHasBeenSet() const
{
    return m_extraInfoHasBeenSet;
}

string RecordMapping::GetColumnSize() const
{
    return m_columnSize;
}

void RecordMapping::SetColumnSize(const string& _columnSize)
{
    m_columnSize = _columnSize;
    m_columnSizeHasBeenSet = true;
}

bool RecordMapping::ColumnSizeHasBeenSet() const
{
    return m_columnSizeHasBeenSet;
}

string RecordMapping::GetDecimalDigits() const
{
    return m_decimalDigits;
}

void RecordMapping::SetDecimalDigits(const string& _decimalDigits)
{
    m_decimalDigits = _decimalDigits;
    m_decimalDigitsHasBeenSet = true;
}

bool RecordMapping::DecimalDigitsHasBeenSet() const
{
    return m_decimalDigitsHasBeenSet;
}

bool RecordMapping::GetAutoIncrement() const
{
    return m_autoIncrement;
}

void RecordMapping::SetAutoIncrement(const bool& _autoIncrement)
{
    m_autoIncrement = _autoIncrement;
    m_autoIncrementHasBeenSet = true;
}

bool RecordMapping::AutoIncrementHasBeenSet() const
{
    return m_autoIncrementHasBeenSet;
}

string RecordMapping::GetDefaultValue() const
{
    return m_defaultValue;
}

void RecordMapping::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool RecordMapping::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}


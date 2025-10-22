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

#include <tencentcloud/wedata/v20210820/model/ColumnValueConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ColumnValueConfig::ColumnValueConfig() :
    m_fieldKeyHasBeenSet(false),
    m_fieldValueHasBeenSet(false),
    m_fieldDataTypeHasBeenSet(false)
{
}

CoreInternalOutcome ColumnValueConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FieldKey") && !value["FieldKey"].IsNull())
    {
        if (!value["FieldKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnValueConfig.FieldKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldKey = string(value["FieldKey"].GetString());
        m_fieldKeyHasBeenSet = true;
    }

    if (value.HasMember("FieldValue") && !value["FieldValue"].IsNull())
    {
        if (!value["FieldValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnValueConfig.FieldValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldValue = string(value["FieldValue"].GetString());
        m_fieldValueHasBeenSet = true;
    }

    if (value.HasMember("FieldDataType") && !value["FieldDataType"].IsNull())
    {
        if (!value["FieldDataType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnValueConfig.FieldDataType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldDataType = string(value["FieldDataType"].GetString());
        m_fieldDataTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ColumnValueConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldKey.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldValue.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldDataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldDataType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldDataType.c_str(), allocator).Move(), allocator);
    }

}


string ColumnValueConfig::GetFieldKey() const
{
    return m_fieldKey;
}

void ColumnValueConfig::SetFieldKey(const string& _fieldKey)
{
    m_fieldKey = _fieldKey;
    m_fieldKeyHasBeenSet = true;
}

bool ColumnValueConfig::FieldKeyHasBeenSet() const
{
    return m_fieldKeyHasBeenSet;
}

string ColumnValueConfig::GetFieldValue() const
{
    return m_fieldValue;
}

void ColumnValueConfig::SetFieldValue(const string& _fieldValue)
{
    m_fieldValue = _fieldValue;
    m_fieldValueHasBeenSet = true;
}

bool ColumnValueConfig::FieldValueHasBeenSet() const
{
    return m_fieldValueHasBeenSet;
}

string ColumnValueConfig::GetFieldDataType() const
{
    return m_fieldDataType;
}

void ColumnValueConfig::SetFieldDataType(const string& _fieldDataType)
{
    m_fieldDataType = _fieldDataType;
    m_fieldDataTypeHasBeenSet = true;
}

bool ColumnValueConfig::FieldDataTypeHasBeenSet() const
{
    return m_fieldDataTypeHasBeenSet;
}


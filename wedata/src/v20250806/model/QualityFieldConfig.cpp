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

#include <tencentcloud/wedata/v20250806/model/QualityFieldConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

QualityFieldConfig::QualityFieldConfig() :
    m_fieldKeyHasBeenSet(false),
    m_fieldValueHasBeenSet(false),
    m_fieldDataTypeHasBeenSet(false),
    m_valueConfigHasBeenSet(false)
{
}

CoreInternalOutcome QualityFieldConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FieldKey") && !value["FieldKey"].IsNull())
    {
        if (!value["FieldKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityFieldConfig.FieldKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldKey = string(value["FieldKey"].GetString());
        m_fieldKeyHasBeenSet = true;
    }

    if (value.HasMember("FieldValue") && !value["FieldValue"].IsNull())
    {
        if (!value["FieldValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityFieldConfig.FieldValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldValue = string(value["FieldValue"].GetString());
        m_fieldValueHasBeenSet = true;
    }

    if (value.HasMember("FieldDataType") && !value["FieldDataType"].IsNull())
    {
        if (!value["FieldDataType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityFieldConfig.FieldDataType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldDataType = string(value["FieldDataType"].GetString());
        m_fieldDataTypeHasBeenSet = true;
    }

    if (value.HasMember("ValueConfig") && !value["ValueConfig"].IsNull())
    {
        if (!value["ValueConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QualityFieldConfig.ValueConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_valueConfig.Deserialize(value["ValueConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_valueConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityFieldConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_valueConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_valueConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string QualityFieldConfig::GetFieldKey() const
{
    return m_fieldKey;
}

void QualityFieldConfig::SetFieldKey(const string& _fieldKey)
{
    m_fieldKey = _fieldKey;
    m_fieldKeyHasBeenSet = true;
}

bool QualityFieldConfig::FieldKeyHasBeenSet() const
{
    return m_fieldKeyHasBeenSet;
}

string QualityFieldConfig::GetFieldValue() const
{
    return m_fieldValue;
}

void QualityFieldConfig::SetFieldValue(const string& _fieldValue)
{
    m_fieldValue = _fieldValue;
    m_fieldValueHasBeenSet = true;
}

bool QualityFieldConfig::FieldValueHasBeenSet() const
{
    return m_fieldValueHasBeenSet;
}

string QualityFieldConfig::GetFieldDataType() const
{
    return m_fieldDataType;
}

void QualityFieldConfig::SetFieldDataType(const string& _fieldDataType)
{
    m_fieldDataType = _fieldDataType;
    m_fieldDataTypeHasBeenSet = true;
}

bool QualityFieldConfig::FieldDataTypeHasBeenSet() const
{
    return m_fieldDataTypeHasBeenSet;
}

QualityColumnValueConfig QualityFieldConfig::GetValueConfig() const
{
    return m_valueConfig;
}

void QualityFieldConfig::SetValueConfig(const QualityColumnValueConfig& _valueConfig)
{
    m_valueConfig = _valueConfig;
    m_valueConfigHasBeenSet = true;
}

bool QualityFieldConfig::ValueConfigHasBeenSet() const
{
    return m_valueConfigHasBeenSet;
}


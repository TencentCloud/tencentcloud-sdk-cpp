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

#include <tencentcloud/wedata/v20210820/model/FieldConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

FieldConfig::FieldConfig() :
    m_fieldKeyHasBeenSet(false),
    m_fieldValueHasBeenSet(false),
    m_fieldDataTypeHasBeenSet(false)
{
}

CoreInternalOutcome FieldConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FieldKey") && !value["FieldKey"].IsNull())
    {
        if (!value["FieldKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldConfig.FieldKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldKey = string(value["FieldKey"].GetString());
        m_fieldKeyHasBeenSet = true;
    }

    if (value.HasMember("FieldValue") && !value["FieldValue"].IsNull())
    {
        if (!value["FieldValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldConfig.FieldValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldValue = string(value["FieldValue"].GetString());
        m_fieldValueHasBeenSet = true;
    }

    if (value.HasMember("FieldDataType") && !value["FieldDataType"].IsNull())
    {
        if (!value["FieldDataType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldConfig.FieldDataType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldDataType = string(value["FieldDataType"].GetString());
        m_fieldDataTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FieldConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string FieldConfig::GetFieldKey() const
{
    return m_fieldKey;
}

void FieldConfig::SetFieldKey(const string& _fieldKey)
{
    m_fieldKey = _fieldKey;
    m_fieldKeyHasBeenSet = true;
}

bool FieldConfig::FieldKeyHasBeenSet() const
{
    return m_fieldKeyHasBeenSet;
}

string FieldConfig::GetFieldValue() const
{
    return m_fieldValue;
}

void FieldConfig::SetFieldValue(const string& _fieldValue)
{
    m_fieldValue = _fieldValue;
    m_fieldValueHasBeenSet = true;
}

bool FieldConfig::FieldValueHasBeenSet() const
{
    return m_fieldValueHasBeenSet;
}

string FieldConfig::GetFieldDataType() const
{
    return m_fieldDataType;
}

void FieldConfig::SetFieldDataType(const string& _fieldDataType)
{
    m_fieldDataType = _fieldDataType;
    m_fieldDataTypeHasBeenSet = true;
}

bool FieldConfig::FieldDataTypeHasBeenSet() const
{
    return m_fieldDataTypeHasBeenSet;
}


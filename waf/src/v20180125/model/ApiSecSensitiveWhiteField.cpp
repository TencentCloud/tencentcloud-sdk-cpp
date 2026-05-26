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

#include <tencentcloud/waf/v20180125/model/ApiSecSensitiveWhiteField.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ApiSecSensitiveWhiteField::ApiSecSensitiveWhiteField() :
    m_fieldNameHasBeenSet(false),
    m_fieldTypeHasBeenSet(false),
    m_sensitiveTypesHasBeenSet(false)
{
}

CoreInternalOutcome ApiSecSensitiveWhiteField::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FieldName") && !value["FieldName"].IsNull())
    {
        if (!value["FieldName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecSensitiveWhiteField.FieldName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldName = string(value["FieldName"].GetString());
        m_fieldNameHasBeenSet = true;
    }

    if (value.HasMember("FieldType") && !value["FieldType"].IsNull())
    {
        if (!value["FieldType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecSensitiveWhiteField.FieldType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldType = string(value["FieldType"].GetString());
        m_fieldTypeHasBeenSet = true;
    }

    if (value.HasMember("SensitiveTypes") && !value["SensitiveTypes"].IsNull())
    {
        if (!value["SensitiveTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiSecSensitiveWhiteField.SensitiveTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["SensitiveTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sensitiveTypes.push_back((*itr).GetString());
        }
        m_sensitiveTypesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiSecSensitiveWhiteField::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldName.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldType.c_str(), allocator).Move(), allocator);
    }

    if (m_sensitiveTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sensitiveTypes.begin(); itr != m_sensitiveTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ApiSecSensitiveWhiteField::GetFieldName() const
{
    return m_fieldName;
}

void ApiSecSensitiveWhiteField::SetFieldName(const string& _fieldName)
{
    m_fieldName = _fieldName;
    m_fieldNameHasBeenSet = true;
}

bool ApiSecSensitiveWhiteField::FieldNameHasBeenSet() const
{
    return m_fieldNameHasBeenSet;
}

string ApiSecSensitiveWhiteField::GetFieldType() const
{
    return m_fieldType;
}

void ApiSecSensitiveWhiteField::SetFieldType(const string& _fieldType)
{
    m_fieldType = _fieldType;
    m_fieldTypeHasBeenSet = true;
}

bool ApiSecSensitiveWhiteField::FieldTypeHasBeenSet() const
{
    return m_fieldTypeHasBeenSet;
}

vector<string> ApiSecSensitiveWhiteField::GetSensitiveTypes() const
{
    return m_sensitiveTypes;
}

void ApiSecSensitiveWhiteField::SetSensitiveTypes(const vector<string>& _sensitiveTypes)
{
    m_sensitiveTypes = _sensitiveTypes;
    m_sensitiveTypesHasBeenSet = true;
}

bool ApiSecSensitiveWhiteField::SensitiveTypesHasBeenSet() const
{
    return m_sensitiveTypesHasBeenSet;
}


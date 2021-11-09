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

#include <tencentcloud/advisor/v20200721/model/RiskFieldsDesc.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Advisor::V20200721::Model;
using namespace std;

RiskFieldsDesc::RiskFieldsDesc() :
    m_fieldHasBeenSet(false),
    m_fieldNameHasBeenSet(false),
    m_fieldTypeHasBeenSet(false),
    m_fieldDictHasBeenSet(false)
{
}

CoreInternalOutcome RiskFieldsDesc::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Field") && !value["Field"].IsNull())
    {
        if (!value["Field"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskFieldsDesc.Field` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_field = string(value["Field"].GetString());
        m_fieldHasBeenSet = true;
    }

    if (value.HasMember("FieldName") && !value["FieldName"].IsNull())
    {
        if (!value["FieldName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskFieldsDesc.FieldName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldName = string(value["FieldName"].GetString());
        m_fieldNameHasBeenSet = true;
    }

    if (value.HasMember("FieldType") && !value["FieldType"].IsNull())
    {
        if (!value["FieldType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskFieldsDesc.FieldType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldType = string(value["FieldType"].GetString());
        m_fieldTypeHasBeenSet = true;
    }

    if (value.HasMember("FieldDict") && !value["FieldDict"].IsNull())
    {
        if (!value["FieldDict"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskFieldsDesc.FieldDict` is not array type"));

        const rapidjson::Value &tmpValue = value["FieldDict"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fieldDict.push_back(item);
        }
        m_fieldDictHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskFieldsDesc::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Field";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_field.c_str(), allocator).Move(), allocator);
    }

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

    if (m_fieldDictHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldDict";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fieldDict.begin(); itr != m_fieldDict.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RiskFieldsDesc::GetField() const
{
    return m_field;
}

void RiskFieldsDesc::SetField(const string& _field)
{
    m_field = _field;
    m_fieldHasBeenSet = true;
}

bool RiskFieldsDesc::FieldHasBeenSet() const
{
    return m_fieldHasBeenSet;
}

string RiskFieldsDesc::GetFieldName() const
{
    return m_fieldName;
}

void RiskFieldsDesc::SetFieldName(const string& _fieldName)
{
    m_fieldName = _fieldName;
    m_fieldNameHasBeenSet = true;
}

bool RiskFieldsDesc::FieldNameHasBeenSet() const
{
    return m_fieldNameHasBeenSet;
}

string RiskFieldsDesc::GetFieldType() const
{
    return m_fieldType;
}

void RiskFieldsDesc::SetFieldType(const string& _fieldType)
{
    m_fieldType = _fieldType;
    m_fieldTypeHasBeenSet = true;
}

bool RiskFieldsDesc::FieldTypeHasBeenSet() const
{
    return m_fieldTypeHasBeenSet;
}

vector<KeyValue> RiskFieldsDesc::GetFieldDict() const
{
    return m_fieldDict;
}

void RiskFieldsDesc::SetFieldDict(const vector<KeyValue>& _fieldDict)
{
    m_fieldDict = _fieldDict;
    m_fieldDictHasBeenSet = true;
}

bool RiskFieldsDesc::FieldDictHasBeenSet() const
{
    return m_fieldDictHasBeenSet;
}


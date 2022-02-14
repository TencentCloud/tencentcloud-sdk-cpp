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

#include <tencentcloud/antiddos/v20200309/model/CCPrecisionPlyRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

CCPrecisionPlyRecord::CCPrecisionPlyRecord() :
    m_fieldTypeHasBeenSet(false),
    m_fieldNameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_valueOperatorHasBeenSet(false)
{
}

CoreInternalOutcome CCPrecisionPlyRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FieldType") && !value["FieldType"].IsNull())
    {
        if (!value["FieldType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCPrecisionPlyRecord.FieldType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldType = string(value["FieldType"].GetString());
        m_fieldTypeHasBeenSet = true;
    }

    if (value.HasMember("FieldName") && !value["FieldName"].IsNull())
    {
        if (!value["FieldName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCPrecisionPlyRecord.FieldName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldName = string(value["FieldName"].GetString());
        m_fieldNameHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCPrecisionPlyRecord.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("ValueOperator") && !value["ValueOperator"].IsNull())
    {
        if (!value["ValueOperator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCPrecisionPlyRecord.ValueOperator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueOperator = string(value["ValueOperator"].GetString());
        m_valueOperatorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CCPrecisionPlyRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldType.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldName.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_valueOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueOperator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueOperator.c_str(), allocator).Move(), allocator);
    }

}


string CCPrecisionPlyRecord::GetFieldType() const
{
    return m_fieldType;
}

void CCPrecisionPlyRecord::SetFieldType(const string& _fieldType)
{
    m_fieldType = _fieldType;
    m_fieldTypeHasBeenSet = true;
}

bool CCPrecisionPlyRecord::FieldTypeHasBeenSet() const
{
    return m_fieldTypeHasBeenSet;
}

string CCPrecisionPlyRecord::GetFieldName() const
{
    return m_fieldName;
}

void CCPrecisionPlyRecord::SetFieldName(const string& _fieldName)
{
    m_fieldName = _fieldName;
    m_fieldNameHasBeenSet = true;
}

bool CCPrecisionPlyRecord::FieldNameHasBeenSet() const
{
    return m_fieldNameHasBeenSet;
}

string CCPrecisionPlyRecord::GetValue() const
{
    return m_value;
}

void CCPrecisionPlyRecord::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool CCPrecisionPlyRecord::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string CCPrecisionPlyRecord::GetValueOperator() const
{
    return m_valueOperator;
}

void CCPrecisionPlyRecord::SetValueOperator(const string& _valueOperator)
{
    m_valueOperator = _valueOperator;
    m_valueOperatorHasBeenSet = true;
}

bool CCPrecisionPlyRecord::ValueOperatorHasBeenSet() const
{
    return m_valueOperatorHasBeenSet;
}


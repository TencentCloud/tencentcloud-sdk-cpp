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

#include <tencentcloud/apis/v20240801/model/ServiceDatabaseReqParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

ServiceDatabaseReqParam::ServiceDatabaseReqParam() :
    m_fieldNameHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_valHasBeenSet(false),
    m_valTypeHasBeenSet(false),
    m_internalFieldHasBeenSet(false)
{
}

CoreInternalOutcome ServiceDatabaseReqParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FieldName") && !value["FieldName"].IsNull())
    {
        if (!value["FieldName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDatabaseReqParam.FieldName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldName = string(value["FieldName"].GetString());
        m_fieldNameHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDatabaseReqParam.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("Val") && !value["Val"].IsNull())
    {
        if (!value["Val"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDatabaseReqParam.Val` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_val = string(value["Val"].GetString());
        m_valHasBeenSet = true;
    }

    if (value.HasMember("ValType") && !value["ValType"].IsNull())
    {
        if (!value["ValType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDatabaseReqParam.ValType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valType = string(value["ValType"].GetString());
        m_valTypeHasBeenSet = true;
    }

    if (value.HasMember("InternalField") && !value["InternalField"].IsNull())
    {
        if (!value["InternalField"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDatabaseReqParam.InternalField` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_internalField = value["InternalField"].GetBool();
        m_internalFieldHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceDatabaseReqParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldName.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_valHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Val";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_val.c_str(), allocator).Move(), allocator);
    }

    if (m_valTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valType.c_str(), allocator).Move(), allocator);
    }

    if (m_internalFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internalField, allocator);
    }

}


string ServiceDatabaseReqParam::GetFieldName() const
{
    return m_fieldName;
}

void ServiceDatabaseReqParam::SetFieldName(const string& _fieldName)
{
    m_fieldName = _fieldName;
    m_fieldNameHasBeenSet = true;
}

bool ServiceDatabaseReqParam::FieldNameHasBeenSet() const
{
    return m_fieldNameHasBeenSet;
}

string ServiceDatabaseReqParam::GetOperator() const
{
    return m_operator;
}

void ServiceDatabaseReqParam::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ServiceDatabaseReqParam::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string ServiceDatabaseReqParam::GetVal() const
{
    return m_val;
}

void ServiceDatabaseReqParam::SetVal(const string& _val)
{
    m_val = _val;
    m_valHasBeenSet = true;
}

bool ServiceDatabaseReqParam::ValHasBeenSet() const
{
    return m_valHasBeenSet;
}

string ServiceDatabaseReqParam::GetValType() const
{
    return m_valType;
}

void ServiceDatabaseReqParam::SetValType(const string& _valType)
{
    m_valType = _valType;
    m_valTypeHasBeenSet = true;
}

bool ServiceDatabaseReqParam::ValTypeHasBeenSet() const
{
    return m_valTypeHasBeenSet;
}

bool ServiceDatabaseReqParam::GetInternalField() const
{
    return m_internalField;
}

void ServiceDatabaseReqParam::SetInternalField(const bool& _internalField)
{
    m_internalField = _internalField;
    m_internalFieldHasBeenSet = true;
}

bool ServiceDatabaseReqParam::InternalFieldHasBeenSet() const
{
    return m_internalFieldHasBeenSet;
}


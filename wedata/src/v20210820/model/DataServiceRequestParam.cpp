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

#include <tencentcloud/wedata/v20210820/model/DataServiceRequestParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DataServiceRequestParam::DataServiceRequestParam() :
    m_paramNameHasBeenSet(false),
    m_bindFieldHasBeenSet(false),
    m_paramTypeHasBeenSet(false),
    m_paramPositionHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_nonEmptyHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_exampleValueHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome DataServiceRequestParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamName") && !value["ParamName"].IsNull())
    {
        if (!value["ParamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataServiceRequestParam.ParamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramName = string(value["ParamName"].GetString());
        m_paramNameHasBeenSet = true;
    }

    if (value.HasMember("BindField") && !value["BindField"].IsNull())
    {
        if (!value["BindField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataServiceRequestParam.BindField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindField = string(value["BindField"].GetString());
        m_bindFieldHasBeenSet = true;
    }

    if (value.HasMember("ParamType") && !value["ParamType"].IsNull())
    {
        if (!value["ParamType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataServiceRequestParam.ParamType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramType = string(value["ParamType"].GetString());
        m_paramTypeHasBeenSet = true;
    }

    if (value.HasMember("ParamPosition") && !value["ParamPosition"].IsNull())
    {
        if (!value["ParamPosition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataServiceRequestParam.ParamPosition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramPosition = string(value["ParamPosition"].GetString());
        m_paramPositionHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataServiceRequestParam.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("NonEmpty") && !value["NonEmpty"].IsNull())
    {
        if (!value["NonEmpty"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataServiceRequestParam.NonEmpty` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nonEmpty = value["NonEmpty"].GetUint64();
        m_nonEmptyHasBeenSet = true;
    }

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataServiceRequestParam.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }

    if (value.HasMember("ExampleValue") && !value["ExampleValue"].IsNull())
    {
        if (!value["ExampleValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataServiceRequestParam.ExampleValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exampleValue = string(value["ExampleValue"].GetString());
        m_exampleValueHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataServiceRequestParam.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataServiceRequestParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramName.c_str(), allocator).Move(), allocator);
    }

    if (m_bindFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindField.c_str(), allocator).Move(), allocator);
    }

    if (m_paramTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramType.c_str(), allocator).Move(), allocator);
    }

    if (m_paramPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamPosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramPosition.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_nonEmptyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NonEmpty";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nonEmpty, allocator);
    }

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_exampleValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExampleValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exampleValue.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string DataServiceRequestParam::GetParamName() const
{
    return m_paramName;
}

void DataServiceRequestParam::SetParamName(const string& _paramName)
{
    m_paramName = _paramName;
    m_paramNameHasBeenSet = true;
}

bool DataServiceRequestParam::ParamNameHasBeenSet() const
{
    return m_paramNameHasBeenSet;
}

string DataServiceRequestParam::GetBindField() const
{
    return m_bindField;
}

void DataServiceRequestParam::SetBindField(const string& _bindField)
{
    m_bindField = _bindField;
    m_bindFieldHasBeenSet = true;
}

bool DataServiceRequestParam::BindFieldHasBeenSet() const
{
    return m_bindFieldHasBeenSet;
}

string DataServiceRequestParam::GetParamType() const
{
    return m_paramType;
}

void DataServiceRequestParam::SetParamType(const string& _paramType)
{
    m_paramType = _paramType;
    m_paramTypeHasBeenSet = true;
}

bool DataServiceRequestParam::ParamTypeHasBeenSet() const
{
    return m_paramTypeHasBeenSet;
}

string DataServiceRequestParam::GetParamPosition() const
{
    return m_paramPosition;
}

void DataServiceRequestParam::SetParamPosition(const string& _paramPosition)
{
    m_paramPosition = _paramPosition;
    m_paramPositionHasBeenSet = true;
}

bool DataServiceRequestParam::ParamPositionHasBeenSet() const
{
    return m_paramPositionHasBeenSet;
}

string DataServiceRequestParam::GetOperator() const
{
    return m_operator;
}

void DataServiceRequestParam::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DataServiceRequestParam::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

uint64_t DataServiceRequestParam::GetNonEmpty() const
{
    return m_nonEmpty;
}

void DataServiceRequestParam::SetNonEmpty(const uint64_t& _nonEmpty)
{
    m_nonEmpty = _nonEmpty;
    m_nonEmptyHasBeenSet = true;
}

bool DataServiceRequestParam::NonEmptyHasBeenSet() const
{
    return m_nonEmptyHasBeenSet;
}

string DataServiceRequestParam::GetDefaultValue() const
{
    return m_defaultValue;
}

void DataServiceRequestParam::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool DataServiceRequestParam::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

string DataServiceRequestParam::GetExampleValue() const
{
    return m_exampleValue;
}

void DataServiceRequestParam::SetExampleValue(const string& _exampleValue)
{
    m_exampleValue = _exampleValue;
    m_exampleValueHasBeenSet = true;
}

bool DataServiceRequestParam::ExampleValueHasBeenSet() const
{
    return m_exampleValueHasBeenSet;
}

string DataServiceRequestParam::GetDescription() const
{
    return m_description;
}

void DataServiceRequestParam::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DataServiceRequestParam::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


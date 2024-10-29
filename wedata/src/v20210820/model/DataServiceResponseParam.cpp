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

#include <tencentcloud/wedata/v20210820/model/DataServiceResponseParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DataServiceResponseParam::DataServiceResponseParam() :
    m_paramNameHasBeenSet(false),
    m_bindFieldHasBeenSet(false),
    m_paramTypeHasBeenSet(false),
    m_exampleValueHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome DataServiceResponseParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamName") && !value["ParamName"].IsNull())
    {
        if (!value["ParamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataServiceResponseParam.ParamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramName = string(value["ParamName"].GetString());
        m_paramNameHasBeenSet = true;
    }

    if (value.HasMember("BindField") && !value["BindField"].IsNull())
    {
        if (!value["BindField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataServiceResponseParam.BindField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindField = string(value["BindField"].GetString());
        m_bindFieldHasBeenSet = true;
    }

    if (value.HasMember("ParamType") && !value["ParamType"].IsNull())
    {
        if (!value["ParamType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataServiceResponseParam.ParamType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramType = string(value["ParamType"].GetString());
        m_paramTypeHasBeenSet = true;
    }

    if (value.HasMember("ExampleValue") && !value["ExampleValue"].IsNull())
    {
        if (!value["ExampleValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataServiceResponseParam.ExampleValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exampleValue = string(value["ExampleValue"].GetString());
        m_exampleValueHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataServiceResponseParam.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataServiceResponseParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string DataServiceResponseParam::GetParamName() const
{
    return m_paramName;
}

void DataServiceResponseParam::SetParamName(const string& _paramName)
{
    m_paramName = _paramName;
    m_paramNameHasBeenSet = true;
}

bool DataServiceResponseParam::ParamNameHasBeenSet() const
{
    return m_paramNameHasBeenSet;
}

string DataServiceResponseParam::GetBindField() const
{
    return m_bindField;
}

void DataServiceResponseParam::SetBindField(const string& _bindField)
{
    m_bindField = _bindField;
    m_bindFieldHasBeenSet = true;
}

bool DataServiceResponseParam::BindFieldHasBeenSet() const
{
    return m_bindFieldHasBeenSet;
}

string DataServiceResponseParam::GetParamType() const
{
    return m_paramType;
}

void DataServiceResponseParam::SetParamType(const string& _paramType)
{
    m_paramType = _paramType;
    m_paramTypeHasBeenSet = true;
}

bool DataServiceResponseParam::ParamTypeHasBeenSet() const
{
    return m_paramTypeHasBeenSet;
}

string DataServiceResponseParam::GetExampleValue() const
{
    return m_exampleValue;
}

void DataServiceResponseParam::SetExampleValue(const string& _exampleValue)
{
    m_exampleValue = _exampleValue;
    m_exampleValueHasBeenSet = true;
}

bool DataServiceResponseParam::ExampleValueHasBeenSet() const
{
    return m_exampleValueHasBeenSet;
}

string DataServiceResponseParam::GetDescription() const
{
    return m_description;
}

void DataServiceResponseParam::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DataServiceResponseParam::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


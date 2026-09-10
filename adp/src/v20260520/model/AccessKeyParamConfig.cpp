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

#include <tencentcloud/adp/v20260520/model/AccessKeyParamConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AccessKeyParamConfig::AccessKeyParamConfig() :
    m_fieldTypeHasBeenSet(false),
    m_isRequiredHasBeenSet(false),
    m_paramNameHasBeenSet(false),
    m_paramValueHasBeenSet(false)
{
}

CoreInternalOutcome AccessKeyParamConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FieldType") && !value["FieldType"].IsNull())
    {
        if (!value["FieldType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyParamConfig.FieldType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fieldType = value["FieldType"].GetInt64();
        m_fieldTypeHasBeenSet = true;
    }

    if (value.HasMember("IsRequired") && !value["IsRequired"].IsNull())
    {
        if (!value["IsRequired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyParamConfig.IsRequired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRequired = value["IsRequired"].GetBool();
        m_isRequiredHasBeenSet = true;
    }

    if (value.HasMember("ParamName") && !value["ParamName"].IsNull())
    {
        if (!value["ParamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyParamConfig.ParamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramName = string(value["ParamName"].GetString());
        m_paramNameHasBeenSet = true;
    }

    if (value.HasMember("ParamValue") && !value["ParamValue"].IsNull())
    {
        if (!value["ParamValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyParamConfig.ParamValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramValue = string(value["ParamValue"].GetString());
        m_paramValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessKeyParamConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fieldType, allocator);
    }

    if (m_isRequiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRequired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRequired, allocator);
    }

    if (m_paramNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramName.c_str(), allocator).Move(), allocator);
    }

    if (m_paramValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramValue.c_str(), allocator).Move(), allocator);
    }

}


int64_t AccessKeyParamConfig::GetFieldType() const
{
    return m_fieldType;
}

void AccessKeyParamConfig::SetFieldType(const int64_t& _fieldType)
{
    m_fieldType = _fieldType;
    m_fieldTypeHasBeenSet = true;
}

bool AccessKeyParamConfig::FieldTypeHasBeenSet() const
{
    return m_fieldTypeHasBeenSet;
}

bool AccessKeyParamConfig::GetIsRequired() const
{
    return m_isRequired;
}

void AccessKeyParamConfig::SetIsRequired(const bool& _isRequired)
{
    m_isRequired = _isRequired;
    m_isRequiredHasBeenSet = true;
}

bool AccessKeyParamConfig::IsRequiredHasBeenSet() const
{
    return m_isRequiredHasBeenSet;
}

string AccessKeyParamConfig::GetParamName() const
{
    return m_paramName;
}

void AccessKeyParamConfig::SetParamName(const string& _paramName)
{
    m_paramName = _paramName;
    m_paramNameHasBeenSet = true;
}

bool AccessKeyParamConfig::ParamNameHasBeenSet() const
{
    return m_paramNameHasBeenSet;
}

string AccessKeyParamConfig::GetParamValue() const
{
    return m_paramValue;
}

void AccessKeyParamConfig::SetParamValue(const string& _paramValue)
{
    m_paramValue = _paramValue;
    m_paramValueHasBeenSet = true;
}

bool AccessKeyParamConfig::ParamValueHasBeenSet() const
{
    return m_paramValueHasBeenSet;
}


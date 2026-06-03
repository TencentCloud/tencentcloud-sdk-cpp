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

#include <tencentcloud/bi/v20220105/model/ParamCreateDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

ParamCreateDTO::ParamCreateDTO() :
    m_paramNameHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_paramTypeHasBeenSet(false),
    m_formatRuleHasBeenSet(false),
    m_complexTypeHasBeenSet(false),
    m_scopeHasBeenSet(false)
{
}

CoreInternalOutcome ParamCreateDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamName") && !value["ParamName"].IsNull())
    {
        if (!value["ParamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamCreateDTO.ParamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramName = string(value["ParamName"].GetString());
        m_paramNameHasBeenSet = true;
    }

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamCreateDTO.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }

    if (value.HasMember("ParamType") && !value["ParamType"].IsNull())
    {
        if (!value["ParamType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamCreateDTO.ParamType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramType = string(value["ParamType"].GetString());
        m_paramTypeHasBeenSet = true;
    }

    if (value.HasMember("FormatRule") && !value["FormatRule"].IsNull())
    {
        if (!value["FormatRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamCreateDTO.FormatRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formatRule = string(value["FormatRule"].GetString());
        m_formatRuleHasBeenSet = true;
    }

    if (value.HasMember("ComplexType") && !value["ComplexType"].IsNull())
    {
        if (!value["ComplexType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamCreateDTO.ComplexType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_complexType = string(value["ComplexType"].GetString());
        m_complexTypeHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamCreateDTO.Scope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scope = string(value["Scope"].GetString());
        m_scopeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParamCreateDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramName.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_paramTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramType.c_str(), allocator).Move(), allocator);
    }

    if (m_formatRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormatRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formatRule.c_str(), allocator).Move(), allocator);
    }

    if (m_complexTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplexType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_complexType.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

}


string ParamCreateDTO::GetParamName() const
{
    return m_paramName;
}

void ParamCreateDTO::SetParamName(const string& _paramName)
{
    m_paramName = _paramName;
    m_paramNameHasBeenSet = true;
}

bool ParamCreateDTO::ParamNameHasBeenSet() const
{
    return m_paramNameHasBeenSet;
}

string ParamCreateDTO::GetDefaultValue() const
{
    return m_defaultValue;
}

void ParamCreateDTO::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool ParamCreateDTO::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

string ParamCreateDTO::GetParamType() const
{
    return m_paramType;
}

void ParamCreateDTO::SetParamType(const string& _paramType)
{
    m_paramType = _paramType;
    m_paramTypeHasBeenSet = true;
}

bool ParamCreateDTO::ParamTypeHasBeenSet() const
{
    return m_paramTypeHasBeenSet;
}

string ParamCreateDTO::GetFormatRule() const
{
    return m_formatRule;
}

void ParamCreateDTO::SetFormatRule(const string& _formatRule)
{
    m_formatRule = _formatRule;
    m_formatRuleHasBeenSet = true;
}

bool ParamCreateDTO::FormatRuleHasBeenSet() const
{
    return m_formatRuleHasBeenSet;
}

string ParamCreateDTO::GetComplexType() const
{
    return m_complexType;
}

void ParamCreateDTO::SetComplexType(const string& _complexType)
{
    m_complexType = _complexType;
    m_complexTypeHasBeenSet = true;
}

bool ParamCreateDTO::ComplexTypeHasBeenSet() const
{
    return m_complexTypeHasBeenSet;
}

string ParamCreateDTO::GetScope() const
{
    return m_scope;
}

void ParamCreateDTO::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool ParamCreateDTO::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}


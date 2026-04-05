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

#include <tencentcloud/teo/v20220901/model/FunctionComponentBinding.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

FunctionComponentBinding::FunctionComponentBinding() :
    m_typeHasBeenSet(false),
    m_variableNameHasBeenSet(false),
    m_kVNamespaceParametersHasBeenSet(false)
{
}

CoreInternalOutcome FunctionComponentBinding::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionComponentBinding.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("VariableName") && !value["VariableName"].IsNull())
    {
        if (!value["VariableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionComponentBinding.VariableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_variableName = string(value["VariableName"].GetString());
        m_variableNameHasBeenSet = true;
    }

    if (value.HasMember("KVNamespaceParameters") && !value["KVNamespaceParameters"].IsNull())
    {
        if (!value["KVNamespaceParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionComponentBinding.KVNamespaceParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_kVNamespaceParameters.Deserialize(value["KVNamespaceParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_kVNamespaceParametersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FunctionComponentBinding::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_variableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VariableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_variableName.c_str(), allocator).Move(), allocator);
    }

    if (m_kVNamespaceParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KVNamespaceParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_kVNamespaceParameters.ToJsonObject(value[key.c_str()], allocator);
    }

}


string FunctionComponentBinding::GetType() const
{
    return m_type;
}

void FunctionComponentBinding::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool FunctionComponentBinding::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string FunctionComponentBinding::GetVariableName() const
{
    return m_variableName;
}

void FunctionComponentBinding::SetVariableName(const string& _variableName)
{
    m_variableName = _variableName;
    m_variableNameHasBeenSet = true;
}

bool FunctionComponentBinding::VariableNameHasBeenSet() const
{
    return m_variableNameHasBeenSet;
}

KVNamespaceParameters FunctionComponentBinding::GetKVNamespaceParameters() const
{
    return m_kVNamespaceParameters;
}

void FunctionComponentBinding::SetKVNamespaceParameters(const KVNamespaceParameters& _kVNamespaceParameters)
{
    m_kVNamespaceParameters = _kVNamespaceParameters;
    m_kVNamespaceParametersHasBeenSet = true;
}

bool FunctionComponentBinding::KVNamespaceParametersHasBeenSet() const
{
    return m_kVNamespaceParametersHasBeenSet;
}


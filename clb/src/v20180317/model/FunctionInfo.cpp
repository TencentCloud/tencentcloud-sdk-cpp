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

#include <tencentcloud/clb/v20180317/model/FunctionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

FunctionInfo::FunctionInfo() :
    m_functionNamespaceHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_functionQualifierHasBeenSet(false),
    m_functionQualifierTypeHasBeenSet(false)
{
}

CoreInternalOutcome FunctionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FunctionNamespace") && !value["FunctionNamespace"].IsNull())
    {
        if (!value["FunctionNamespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionInfo.FunctionNamespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionNamespace = string(value["FunctionNamespace"].GetString());
        m_functionNamespaceHasBeenSet = true;
    }

    if (value.HasMember("FunctionName") && !value["FunctionName"].IsNull())
    {
        if (!value["FunctionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionInfo.FunctionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionName = string(value["FunctionName"].GetString());
        m_functionNameHasBeenSet = true;
    }

    if (value.HasMember("FunctionQualifier") && !value["FunctionQualifier"].IsNull())
    {
        if (!value["FunctionQualifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionInfo.FunctionQualifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionQualifier = string(value["FunctionQualifier"].GetString());
        m_functionQualifierHasBeenSet = true;
    }

    if (value.HasMember("FunctionQualifierType") && !value["FunctionQualifierType"].IsNull())
    {
        if (!value["FunctionQualifierType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionInfo.FunctionQualifierType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionQualifierType = string(value["FunctionQualifierType"].GetString());
        m_functionQualifierTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FunctionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_functionNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionNamespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_functionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionName.c_str(), allocator).Move(), allocator);
    }

    if (m_functionQualifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionQualifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionQualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_functionQualifierTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionQualifierType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionQualifierType.c_str(), allocator).Move(), allocator);
    }

}


string FunctionInfo::GetFunctionNamespace() const
{
    return m_functionNamespace;
}

void FunctionInfo::SetFunctionNamespace(const string& _functionNamespace)
{
    m_functionNamespace = _functionNamespace;
    m_functionNamespaceHasBeenSet = true;
}

bool FunctionInfo::FunctionNamespaceHasBeenSet() const
{
    return m_functionNamespaceHasBeenSet;
}

string FunctionInfo::GetFunctionName() const
{
    return m_functionName;
}

void FunctionInfo::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool FunctionInfo::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string FunctionInfo::GetFunctionQualifier() const
{
    return m_functionQualifier;
}

void FunctionInfo::SetFunctionQualifier(const string& _functionQualifier)
{
    m_functionQualifier = _functionQualifier;
    m_functionQualifierHasBeenSet = true;
}

bool FunctionInfo::FunctionQualifierHasBeenSet() const
{
    return m_functionQualifierHasBeenSet;
}

string FunctionInfo::GetFunctionQualifierType() const
{
    return m_functionQualifierType;
}

void FunctionInfo::SetFunctionQualifierType(const string& _functionQualifierType)
{
    m_functionQualifierType = _functionQualifierType;
    m_functionQualifierTypeHasBeenSet = true;
}

bool FunctionInfo::FunctionQualifierTypeHasBeenSet() const
{
    return m_functionQualifierTypeHasBeenSet;
}


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

#include <tencentcloud/csip/v20221121/model/SCFFunctionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

SCFFunctionInfo::SCFFunctionInfo() :
    m_functionIdHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome SCFFunctionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FunctionId") && !value["FunctionId"].IsNull())
    {
        if (!value["FunctionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SCFFunctionInfo.FunctionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionId = string(value["FunctionId"].GetString());
        m_functionIdHasBeenSet = true;
    }

    if (value.HasMember("FunctionName") && !value["FunctionName"].IsNull())
    {
        if (!value["FunctionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SCFFunctionInfo.FunctionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionName = string(value["FunctionName"].GetString());
        m_functionNameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SCFFunctionInfo.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SCFFunctionInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SCFFunctionInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SCFFunctionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_functionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionId.c_str(), allocator).Move(), allocator);
    }

    if (m_functionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


string SCFFunctionInfo::GetFunctionId() const
{
    return m_functionId;
}

void SCFFunctionInfo::SetFunctionId(const string& _functionId)
{
    m_functionId = _functionId;
    m_functionIdHasBeenSet = true;
}

bool SCFFunctionInfo::FunctionIdHasBeenSet() const
{
    return m_functionIdHasBeenSet;
}

string SCFFunctionInfo::GetFunctionName() const
{
    return m_functionName;
}

void SCFFunctionInfo::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool SCFFunctionInfo::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string SCFFunctionInfo::GetNamespace() const
{
    return m_namespace;
}

void SCFFunctionInfo::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool SCFFunctionInfo::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string SCFFunctionInfo::GetStatus() const
{
    return m_status;
}

void SCFFunctionInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SCFFunctionInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SCFFunctionInfo::GetType() const
{
    return m_type;
}

void SCFFunctionInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SCFFunctionInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


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

#include <tencentcloud/scf/v20180416/model/NamespaceUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

NamespaceUsage::NamespaceUsage() :
    m_functionsHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_functionsCountHasBeenSet(false)
{
}

CoreInternalOutcome NamespaceUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Functions") && !value["Functions"].IsNull())
    {
        if (!value["Functions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NamespaceUsage.Functions` is not array type"));

        const rapidjson::Value &tmpValue = value["Functions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_functions.push_back((*itr).GetString());
        }
        m_functionsHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceUsage.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("FunctionsCount") && !value["FunctionsCount"].IsNull())
    {
        if (!value["FunctionsCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceUsage.FunctionsCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_functionsCount = value["FunctionsCount"].GetInt64();
        m_functionsCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NamespaceUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_functionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Functions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_functions.begin(); itr != m_functions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_functionsCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionsCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_functionsCount, allocator);
    }

}


vector<string> NamespaceUsage::GetFunctions() const
{
    return m_functions;
}

void NamespaceUsage::SetFunctions(const vector<string>& _functions)
{
    m_functions = _functions;
    m_functionsHasBeenSet = true;
}

bool NamespaceUsage::FunctionsHasBeenSet() const
{
    return m_functionsHasBeenSet;
}

string NamespaceUsage::GetNamespace() const
{
    return m_namespace;
}

void NamespaceUsage::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool NamespaceUsage::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

int64_t NamespaceUsage::GetFunctionsCount() const
{
    return m_functionsCount;
}

void NamespaceUsage::SetFunctionsCount(const int64_t& _functionsCount)
{
    m_functionsCount = _functionsCount;
    m_functionsCountHasBeenSet = true;
}

bool NamespaceUsage::FunctionsCountHasBeenSet() const
{
    return m_functionsCountHasBeenSet;
}


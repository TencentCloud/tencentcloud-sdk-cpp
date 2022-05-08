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
    m_functionsCountHasBeenSet(false),
    m_totalConcurrencyMemHasBeenSet(false),
    m_totalAllocatedConcurrencyMemHasBeenSet(false),
    m_totalAllocatedProvisionedMemHasBeenSet(false)
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

    if (value.HasMember("TotalConcurrencyMem") && !value["TotalConcurrencyMem"].IsNull())
    {
        if (!value["TotalConcurrencyMem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceUsage.TotalConcurrencyMem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalConcurrencyMem = value["TotalConcurrencyMem"].GetInt64();
        m_totalConcurrencyMemHasBeenSet = true;
    }

    if (value.HasMember("TotalAllocatedConcurrencyMem") && !value["TotalAllocatedConcurrencyMem"].IsNull())
    {
        if (!value["TotalAllocatedConcurrencyMem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceUsage.TotalAllocatedConcurrencyMem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalAllocatedConcurrencyMem = value["TotalAllocatedConcurrencyMem"].GetInt64();
        m_totalAllocatedConcurrencyMemHasBeenSet = true;
    }

    if (value.HasMember("TotalAllocatedProvisionedMem") && !value["TotalAllocatedProvisionedMem"].IsNull())
    {
        if (!value["TotalAllocatedProvisionedMem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceUsage.TotalAllocatedProvisionedMem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalAllocatedProvisionedMem = value["TotalAllocatedProvisionedMem"].GetInt64();
        m_totalAllocatedProvisionedMemHasBeenSet = true;
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

    if (m_totalConcurrencyMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalConcurrencyMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalConcurrencyMem, allocator);
    }

    if (m_totalAllocatedConcurrencyMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAllocatedConcurrencyMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalAllocatedConcurrencyMem, allocator);
    }

    if (m_totalAllocatedProvisionedMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAllocatedProvisionedMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalAllocatedProvisionedMem, allocator);
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

int64_t NamespaceUsage::GetTotalConcurrencyMem() const
{
    return m_totalConcurrencyMem;
}

void NamespaceUsage::SetTotalConcurrencyMem(const int64_t& _totalConcurrencyMem)
{
    m_totalConcurrencyMem = _totalConcurrencyMem;
    m_totalConcurrencyMemHasBeenSet = true;
}

bool NamespaceUsage::TotalConcurrencyMemHasBeenSet() const
{
    return m_totalConcurrencyMemHasBeenSet;
}

int64_t NamespaceUsage::GetTotalAllocatedConcurrencyMem() const
{
    return m_totalAllocatedConcurrencyMem;
}

void NamespaceUsage::SetTotalAllocatedConcurrencyMem(const int64_t& _totalAllocatedConcurrencyMem)
{
    m_totalAllocatedConcurrencyMem = _totalAllocatedConcurrencyMem;
    m_totalAllocatedConcurrencyMemHasBeenSet = true;
}

bool NamespaceUsage::TotalAllocatedConcurrencyMemHasBeenSet() const
{
    return m_totalAllocatedConcurrencyMemHasBeenSet;
}

int64_t NamespaceUsage::GetTotalAllocatedProvisionedMem() const
{
    return m_totalAllocatedProvisionedMem;
}

void NamespaceUsage::SetTotalAllocatedProvisionedMem(const int64_t& _totalAllocatedProvisionedMem)
{
    m_totalAllocatedProvisionedMem = _totalAllocatedProvisionedMem;
    m_totalAllocatedProvisionedMemHasBeenSet = true;
}

bool NamespaceUsage::TotalAllocatedProvisionedMemHasBeenSet() const
{
    return m_totalAllocatedProvisionedMemHasBeenSet;
}


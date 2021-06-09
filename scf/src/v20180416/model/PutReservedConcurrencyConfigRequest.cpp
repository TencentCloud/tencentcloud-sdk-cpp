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

#include <tencentcloud/scf/v20180416/model/PutReservedConcurrencyConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

PutReservedConcurrencyConfigRequest::PutReservedConcurrencyConfigRequest() :
    m_functionNameHasBeenSet(false),
    m_reservedConcurrencyMemHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

string PutReservedConcurrencyConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_functionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionName.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedConcurrencyMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedConcurrencyMem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reservedConcurrencyMem, allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string PutReservedConcurrencyConfigRequest::GetFunctionName() const
{
    return m_functionName;
}

void PutReservedConcurrencyConfigRequest::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool PutReservedConcurrencyConfigRequest::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

uint64_t PutReservedConcurrencyConfigRequest::GetReservedConcurrencyMem() const
{
    return m_reservedConcurrencyMem;
}

void PutReservedConcurrencyConfigRequest::SetReservedConcurrencyMem(const uint64_t& _reservedConcurrencyMem)
{
    m_reservedConcurrencyMem = _reservedConcurrencyMem;
    m_reservedConcurrencyMemHasBeenSet = true;
}

bool PutReservedConcurrencyConfigRequest::ReservedConcurrencyMemHasBeenSet() const
{
    return m_reservedConcurrencyMemHasBeenSet;
}

string PutReservedConcurrencyConfigRequest::GetNamespace() const
{
    return m_namespace;
}

void PutReservedConcurrencyConfigRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool PutReservedConcurrencyConfigRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}



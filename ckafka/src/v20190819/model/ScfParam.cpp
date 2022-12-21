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

#include <tencentcloud/ckafka/v20190819/model/ScfParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

ScfParam::ScfParam() :
    m_functionNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_qualifierHasBeenSet(false),
    m_batchSizeHasBeenSet(false),
    m_maxRetriesHasBeenSet(false)
{
}

CoreInternalOutcome ScfParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FunctionName") && !value["FunctionName"].IsNull())
    {
        if (!value["FunctionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScfParam.FunctionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionName = string(value["FunctionName"].GetString());
        m_functionNameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScfParam.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Qualifier") && !value["Qualifier"].IsNull())
    {
        if (!value["Qualifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScfParam.Qualifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qualifier = string(value["Qualifier"].GetString());
        m_qualifierHasBeenSet = true;
    }

    if (value.HasMember("BatchSize") && !value["BatchSize"].IsNull())
    {
        if (!value["BatchSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScfParam.BatchSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_batchSize = value["BatchSize"].GetInt64();
        m_batchSizeHasBeenSet = true;
    }

    if (value.HasMember("MaxRetries") && !value["MaxRetries"].IsNull())
    {
        if (!value["MaxRetries"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScfParam.MaxRetries` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRetries = value["MaxRetries"].GetInt64();
        m_maxRetriesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScfParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_qualifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qualifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_batchSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_batchSize, allocator);
    }

    if (m_maxRetriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRetries, allocator);
    }

}


string ScfParam::GetFunctionName() const
{
    return m_functionName;
}

void ScfParam::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool ScfParam::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string ScfParam::GetNamespace() const
{
    return m_namespace;
}

void ScfParam::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ScfParam::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string ScfParam::GetQualifier() const
{
    return m_qualifier;
}

void ScfParam::SetQualifier(const string& _qualifier)
{
    m_qualifier = _qualifier;
    m_qualifierHasBeenSet = true;
}

bool ScfParam::QualifierHasBeenSet() const
{
    return m_qualifierHasBeenSet;
}

int64_t ScfParam::GetBatchSize() const
{
    return m_batchSize;
}

void ScfParam::SetBatchSize(const int64_t& _batchSize)
{
    m_batchSize = _batchSize;
    m_batchSizeHasBeenSet = true;
}

bool ScfParam::BatchSizeHasBeenSet() const
{
    return m_batchSizeHasBeenSet;
}

int64_t ScfParam::GetMaxRetries() const
{
    return m_maxRetries;
}

void ScfParam::SetMaxRetries(const int64_t& _maxRetries)
{
    m_maxRetries = _maxRetries;
    m_maxRetriesHasBeenSet = true;
}

bool ScfParam::MaxRetriesHasBeenSet() const
{
    return m_maxRetriesHasBeenSet;
}


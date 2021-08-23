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

#include <tencentcloud/scf/v20180416/model/NamespaceLimit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

NamespaceLimit::NamespaceLimit() :
    m_functionsCountHasBeenSet(false),
    m_triggerHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_concurrentExecutionsHasBeenSet(false),
    m_timeoutLimitHasBeenSet(false),
    m_testModelLimitHasBeenSet(false),
    m_initTimeoutLimitHasBeenSet(false),
    m_retryNumLimitHasBeenSet(false),
    m_minMsgTTLHasBeenSet(false),
    m_maxMsgTTLHasBeenSet(false)
{
}

CoreInternalOutcome NamespaceLimit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FunctionsCount") && !value["FunctionsCount"].IsNull())
    {
        if (!value["FunctionsCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceLimit.FunctionsCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_functionsCount = value["FunctionsCount"].GetInt64();
        m_functionsCountHasBeenSet = true;
    }

    if (value.HasMember("Trigger") && !value["Trigger"].IsNull())
    {
        if (!value["Trigger"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceLimit.Trigger` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_trigger.Deserialize(value["Trigger"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_triggerHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceLimit.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("ConcurrentExecutions") && !value["ConcurrentExecutions"].IsNull())
    {
        if (!value["ConcurrentExecutions"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceLimit.ConcurrentExecutions` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_concurrentExecutions = value["ConcurrentExecutions"].GetInt64();
        m_concurrentExecutionsHasBeenSet = true;
    }

    if (value.HasMember("TimeoutLimit") && !value["TimeoutLimit"].IsNull())
    {
        if (!value["TimeoutLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceLimit.TimeoutLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeoutLimit = value["TimeoutLimit"].GetInt64();
        m_timeoutLimitHasBeenSet = true;
    }

    if (value.HasMember("TestModelLimit") && !value["TestModelLimit"].IsNull())
    {
        if (!value["TestModelLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceLimit.TestModelLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_testModelLimit = value["TestModelLimit"].GetInt64();
        m_testModelLimitHasBeenSet = true;
    }

    if (value.HasMember("InitTimeoutLimit") && !value["InitTimeoutLimit"].IsNull())
    {
        if (!value["InitTimeoutLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceLimit.InitTimeoutLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_initTimeoutLimit = value["InitTimeoutLimit"].GetInt64();
        m_initTimeoutLimitHasBeenSet = true;
    }

    if (value.HasMember("RetryNumLimit") && !value["RetryNumLimit"].IsNull())
    {
        if (!value["RetryNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceLimit.RetryNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryNumLimit = value["RetryNumLimit"].GetInt64();
        m_retryNumLimitHasBeenSet = true;
    }

    if (value.HasMember("MinMsgTTL") && !value["MinMsgTTL"].IsNull())
    {
        if (!value["MinMsgTTL"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceLimit.MinMsgTTL` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minMsgTTL = value["MinMsgTTL"].GetInt64();
        m_minMsgTTLHasBeenSet = true;
    }

    if (value.HasMember("MaxMsgTTL") && !value["MaxMsgTTL"].IsNull())
    {
        if (!value["MaxMsgTTL"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceLimit.MaxMsgTTL` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMsgTTL = value["MaxMsgTTL"].GetInt64();
        m_maxMsgTTLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NamespaceLimit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_functionsCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionsCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_functionsCount, allocator);
    }

    if (m_triggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trigger";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_trigger.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_concurrentExecutionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConcurrentExecutions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_concurrentExecutions, allocator);
    }

    if (m_timeoutLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeoutLimit, allocator);
    }

    if (m_testModelLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TestModelLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_testModelLimit, allocator);
    }

    if (m_initTimeoutLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitTimeoutLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_initTimeoutLimit, allocator);
    }

    if (m_retryNumLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryNumLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryNumLimit, allocator);
    }

    if (m_minMsgTTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinMsgTTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minMsgTTL, allocator);
    }

    if (m_maxMsgTTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMsgTTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxMsgTTL, allocator);
    }

}


int64_t NamespaceLimit::GetFunctionsCount() const
{
    return m_functionsCount;
}

void NamespaceLimit::SetFunctionsCount(const int64_t& _functionsCount)
{
    m_functionsCount = _functionsCount;
    m_functionsCountHasBeenSet = true;
}

bool NamespaceLimit::FunctionsCountHasBeenSet() const
{
    return m_functionsCountHasBeenSet;
}

TriggerCount NamespaceLimit::GetTrigger() const
{
    return m_trigger;
}

void NamespaceLimit::SetTrigger(const TriggerCount& _trigger)
{
    m_trigger = _trigger;
    m_triggerHasBeenSet = true;
}

bool NamespaceLimit::TriggerHasBeenSet() const
{
    return m_triggerHasBeenSet;
}

string NamespaceLimit::GetNamespace() const
{
    return m_namespace;
}

void NamespaceLimit::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool NamespaceLimit::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

int64_t NamespaceLimit::GetConcurrentExecutions() const
{
    return m_concurrentExecutions;
}

void NamespaceLimit::SetConcurrentExecutions(const int64_t& _concurrentExecutions)
{
    m_concurrentExecutions = _concurrentExecutions;
    m_concurrentExecutionsHasBeenSet = true;
}

bool NamespaceLimit::ConcurrentExecutionsHasBeenSet() const
{
    return m_concurrentExecutionsHasBeenSet;
}

int64_t NamespaceLimit::GetTimeoutLimit() const
{
    return m_timeoutLimit;
}

void NamespaceLimit::SetTimeoutLimit(const int64_t& _timeoutLimit)
{
    m_timeoutLimit = _timeoutLimit;
    m_timeoutLimitHasBeenSet = true;
}

bool NamespaceLimit::TimeoutLimitHasBeenSet() const
{
    return m_timeoutLimitHasBeenSet;
}

int64_t NamespaceLimit::GetTestModelLimit() const
{
    return m_testModelLimit;
}

void NamespaceLimit::SetTestModelLimit(const int64_t& _testModelLimit)
{
    m_testModelLimit = _testModelLimit;
    m_testModelLimitHasBeenSet = true;
}

bool NamespaceLimit::TestModelLimitHasBeenSet() const
{
    return m_testModelLimitHasBeenSet;
}

int64_t NamespaceLimit::GetInitTimeoutLimit() const
{
    return m_initTimeoutLimit;
}

void NamespaceLimit::SetInitTimeoutLimit(const int64_t& _initTimeoutLimit)
{
    m_initTimeoutLimit = _initTimeoutLimit;
    m_initTimeoutLimitHasBeenSet = true;
}

bool NamespaceLimit::InitTimeoutLimitHasBeenSet() const
{
    return m_initTimeoutLimitHasBeenSet;
}

int64_t NamespaceLimit::GetRetryNumLimit() const
{
    return m_retryNumLimit;
}

void NamespaceLimit::SetRetryNumLimit(const int64_t& _retryNumLimit)
{
    m_retryNumLimit = _retryNumLimit;
    m_retryNumLimitHasBeenSet = true;
}

bool NamespaceLimit::RetryNumLimitHasBeenSet() const
{
    return m_retryNumLimitHasBeenSet;
}

int64_t NamespaceLimit::GetMinMsgTTL() const
{
    return m_minMsgTTL;
}

void NamespaceLimit::SetMinMsgTTL(const int64_t& _minMsgTTL)
{
    m_minMsgTTL = _minMsgTTL;
    m_minMsgTTLHasBeenSet = true;
}

bool NamespaceLimit::MinMsgTTLHasBeenSet() const
{
    return m_minMsgTTLHasBeenSet;
}

int64_t NamespaceLimit::GetMaxMsgTTL() const
{
    return m_maxMsgTTL;
}

void NamespaceLimit::SetMaxMsgTTL(const int64_t& _maxMsgTTL)
{
    m_maxMsgTTL = _maxMsgTTL;
    m_maxMsgTTLHasBeenSet = true;
}

bool NamespaceLimit::MaxMsgTTLHasBeenSet() const
{
    return m_maxMsgTTLHasBeenSet;
}


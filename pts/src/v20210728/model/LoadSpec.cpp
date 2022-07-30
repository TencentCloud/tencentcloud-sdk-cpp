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

#include <tencentcloud/pts/v20210728/model/LoadSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

LoadSpec::LoadSpec() :
    m_concurrencyHasBeenSet(false),
    m_requestsPerSecondHasBeenSet(false),
    m_scriptOriginHasBeenSet(false)
{
}

CoreInternalOutcome LoadSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Concurrency") && !value["Concurrency"].IsNull())
    {
        if (!value["Concurrency"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LoadSpec.Concurrency` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_concurrency.Deserialize(value["Concurrency"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_concurrencyHasBeenSet = true;
    }

    if (value.HasMember("RequestsPerSecond") && !value["RequestsPerSecond"].IsNull())
    {
        if (!value["RequestsPerSecond"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LoadSpec.RequestsPerSecond` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_requestsPerSecond.Deserialize(value["RequestsPerSecond"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_requestsPerSecondHasBeenSet = true;
    }

    if (value.HasMember("ScriptOrigin") && !value["ScriptOrigin"].IsNull())
    {
        if (!value["ScriptOrigin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LoadSpec.ScriptOrigin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scriptOrigin.Deserialize(value["ScriptOrigin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scriptOriginHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoadSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_concurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Concurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_concurrency.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_requestsPerSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestsPerSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_requestsPerSecond.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scriptOriginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptOrigin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scriptOrigin.ToJsonObject(value[key.c_str()], allocator);
    }

}


Concurrency LoadSpec::GetConcurrency() const
{
    return m_concurrency;
}

void LoadSpec::SetConcurrency(const Concurrency& _concurrency)
{
    m_concurrency = _concurrency;
    m_concurrencyHasBeenSet = true;
}

bool LoadSpec::ConcurrencyHasBeenSet() const
{
    return m_concurrencyHasBeenSet;
}

RequestsPerSecond LoadSpec::GetRequestsPerSecond() const
{
    return m_requestsPerSecond;
}

void LoadSpec::SetRequestsPerSecond(const RequestsPerSecond& _requestsPerSecond)
{
    m_requestsPerSecond = _requestsPerSecond;
    m_requestsPerSecondHasBeenSet = true;
}

bool LoadSpec::RequestsPerSecondHasBeenSet() const
{
    return m_requestsPerSecondHasBeenSet;
}

ScriptOrigin LoadSpec::GetScriptOrigin() const
{
    return m_scriptOrigin;
}

void LoadSpec::SetScriptOrigin(const ScriptOrigin& _scriptOrigin)
{
    m_scriptOrigin = _scriptOrigin;
    m_scriptOriginHasBeenSet = true;
}

bool LoadSpec::ScriptOriginHasBeenSet() const
{
    return m_scriptOriginHasBeenSet;
}


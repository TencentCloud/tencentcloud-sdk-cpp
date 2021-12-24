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

#include <tencentcloud/iecp/v20210914/model/Job.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

Job::Job() :
    m_parallelismHasBeenSet(false),
    m_completionHasBeenSet(false),
    m_activeDeadlineSecondsHasBeenSet(false),
    m_backOffLimitHasBeenSet(false)
{
}

CoreInternalOutcome Job::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Parallelism") && !value["Parallelism"].IsNull())
    {
        if (!value["Parallelism"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Parallelism` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_parallelism = value["Parallelism"].GetInt64();
        m_parallelismHasBeenSet = true;
    }

    if (value.HasMember("Completion") && !value["Completion"].IsNull())
    {
        if (!value["Completion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Completion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_completion = value["Completion"].GetInt64();
        m_completionHasBeenSet = true;
    }

    if (value.HasMember("ActiveDeadlineSeconds") && !value["ActiveDeadlineSeconds"].IsNull())
    {
        if (!value["ActiveDeadlineSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.ActiveDeadlineSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activeDeadlineSeconds = value["ActiveDeadlineSeconds"].GetInt64();
        m_activeDeadlineSecondsHasBeenSet = true;
    }

    if (value.HasMember("BackOffLimit") && !value["BackOffLimit"].IsNull())
    {
        if (!value["BackOffLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.BackOffLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backOffLimit = value["BackOffLimit"].GetInt64();
        m_backOffLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Job::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_parallelismHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parallelism";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parallelism, allocator);
    }

    if (m_completionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Completion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_completion, allocator);
    }

    if (m_activeDeadlineSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveDeadlineSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeDeadlineSeconds, allocator);
    }

    if (m_backOffLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackOffLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backOffLimit, allocator);
    }

}


int64_t Job::GetParallelism() const
{
    return m_parallelism;
}

void Job::SetParallelism(const int64_t& _parallelism)
{
    m_parallelism = _parallelism;
    m_parallelismHasBeenSet = true;
}

bool Job::ParallelismHasBeenSet() const
{
    return m_parallelismHasBeenSet;
}

int64_t Job::GetCompletion() const
{
    return m_completion;
}

void Job::SetCompletion(const int64_t& _completion)
{
    m_completion = _completion;
    m_completionHasBeenSet = true;
}

bool Job::CompletionHasBeenSet() const
{
    return m_completionHasBeenSet;
}

int64_t Job::GetActiveDeadlineSeconds() const
{
    return m_activeDeadlineSeconds;
}

void Job::SetActiveDeadlineSeconds(const int64_t& _activeDeadlineSeconds)
{
    m_activeDeadlineSeconds = _activeDeadlineSeconds;
    m_activeDeadlineSecondsHasBeenSet = true;
}

bool Job::ActiveDeadlineSecondsHasBeenSet() const
{
    return m_activeDeadlineSecondsHasBeenSet;
}

int64_t Job::GetBackOffLimit() const
{
    return m_backOffLimit;
}

void Job::SetBackOffLimit(const int64_t& _backOffLimit)
{
    m_backOffLimit = _backOffLimit;
    m_backOffLimitHasBeenSet = true;
}

bool Job::BackOffLimitHasBeenSet() const
{
    return m_backOffLimitHasBeenSet;
}


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

#include <tencentcloud/eb/v20210416/model/RetryPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

RetryPolicy::RetryPolicy() :
    m_retryIntervalHasBeenSet(false),
    m_maxRetryAttemptsHasBeenSet(false)
{
}

CoreInternalOutcome RetryPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RetryInterval") && !value["RetryInterval"].IsNull())
    {
        if (!value["RetryInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RetryPolicy.RetryInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retryInterval = value["RetryInterval"].GetUint64();
        m_retryIntervalHasBeenSet = true;
    }

    if (value.HasMember("MaxRetryAttempts") && !value["MaxRetryAttempts"].IsNull())
    {
        if (!value["MaxRetryAttempts"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RetryPolicy.MaxRetryAttempts` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRetryAttempts = value["MaxRetryAttempts"].GetUint64();
        m_maxRetryAttemptsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RetryPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_retryIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryInterval, allocator);
    }

    if (m_maxRetryAttemptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetryAttempts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRetryAttempts, allocator);
    }

}


uint64_t RetryPolicy::GetRetryInterval() const
{
    return m_retryInterval;
}

void RetryPolicy::SetRetryInterval(const uint64_t& _retryInterval)
{
    m_retryInterval = _retryInterval;
    m_retryIntervalHasBeenSet = true;
}

bool RetryPolicy::RetryIntervalHasBeenSet() const
{
    return m_retryIntervalHasBeenSet;
}

uint64_t RetryPolicy::GetMaxRetryAttempts() const
{
    return m_maxRetryAttempts;
}

void RetryPolicy::SetMaxRetryAttempts(const uint64_t& _maxRetryAttempts)
{
    m_maxRetryAttempts = _maxRetryAttempts;
    m_maxRetryAttemptsHasBeenSet = true;
}

bool RetryPolicy::MaxRetryAttemptsHasBeenSet() const
{
    return m_maxRetryAttemptsHasBeenSet;
}


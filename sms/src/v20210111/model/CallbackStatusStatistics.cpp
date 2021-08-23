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

#include <tencentcloud/sms/v20210111/model/CallbackStatusStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sms::V20210111::Model;
using namespace std;

CallbackStatusStatistics::CallbackStatusStatistics() :
    m_callbackCountHasBeenSet(false),
    m_requestSuccessCountHasBeenSet(false),
    m_callbackFailCountHasBeenSet(false),
    m_callbackSuccessCountHasBeenSet(false),
    m_internalErrorCountHasBeenSet(false),
    m_invalidNumberCountHasBeenSet(false),
    m_shutdownErrorCountHasBeenSet(false),
    m_blackListCountHasBeenSet(false),
    m_frequencyLimitCountHasBeenSet(false)
{
}

CoreInternalOutcome CallbackStatusStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CallbackCount") && !value["CallbackCount"].IsNull())
    {
        if (!value["CallbackCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackStatusStatistics.CallbackCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_callbackCount = value["CallbackCount"].GetUint64();
        m_callbackCountHasBeenSet = true;
    }

    if (value.HasMember("RequestSuccessCount") && !value["RequestSuccessCount"].IsNull())
    {
        if (!value["RequestSuccessCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackStatusStatistics.RequestSuccessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_requestSuccessCount = value["RequestSuccessCount"].GetUint64();
        m_requestSuccessCountHasBeenSet = true;
    }

    if (value.HasMember("CallbackFailCount") && !value["CallbackFailCount"].IsNull())
    {
        if (!value["CallbackFailCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackStatusStatistics.CallbackFailCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_callbackFailCount = value["CallbackFailCount"].GetUint64();
        m_callbackFailCountHasBeenSet = true;
    }

    if (value.HasMember("CallbackSuccessCount") && !value["CallbackSuccessCount"].IsNull())
    {
        if (!value["CallbackSuccessCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackStatusStatistics.CallbackSuccessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_callbackSuccessCount = value["CallbackSuccessCount"].GetUint64();
        m_callbackSuccessCountHasBeenSet = true;
    }

    if (value.HasMember("InternalErrorCount") && !value["InternalErrorCount"].IsNull())
    {
        if (!value["InternalErrorCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackStatusStatistics.InternalErrorCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_internalErrorCount = value["InternalErrorCount"].GetUint64();
        m_internalErrorCountHasBeenSet = true;
    }

    if (value.HasMember("InvalidNumberCount") && !value["InvalidNumberCount"].IsNull())
    {
        if (!value["InvalidNumberCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackStatusStatistics.InvalidNumberCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_invalidNumberCount = value["InvalidNumberCount"].GetUint64();
        m_invalidNumberCountHasBeenSet = true;
    }

    if (value.HasMember("ShutdownErrorCount") && !value["ShutdownErrorCount"].IsNull())
    {
        if (!value["ShutdownErrorCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackStatusStatistics.ShutdownErrorCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shutdownErrorCount = value["ShutdownErrorCount"].GetUint64();
        m_shutdownErrorCountHasBeenSet = true;
    }

    if (value.HasMember("BlackListCount") && !value["BlackListCount"].IsNull())
    {
        if (!value["BlackListCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackStatusStatistics.BlackListCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_blackListCount = value["BlackListCount"].GetUint64();
        m_blackListCountHasBeenSet = true;
    }

    if (value.HasMember("FrequencyLimitCount") && !value["FrequencyLimitCount"].IsNull())
    {
        if (!value["FrequencyLimitCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackStatusStatistics.FrequencyLimitCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_frequencyLimitCount = value["FrequencyLimitCount"].GetUint64();
        m_frequencyLimitCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CallbackStatusStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callbackCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callbackCount, allocator);
    }

    if (m_requestSuccessCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestSuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestSuccessCount, allocator);
    }

    if (m_callbackFailCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackFailCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callbackFailCount, allocator);
    }

    if (m_callbackSuccessCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackSuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callbackSuccessCount, allocator);
    }

    if (m_internalErrorCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalErrorCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internalErrorCount, allocator);
    }

    if (m_invalidNumberCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvalidNumberCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invalidNumberCount, allocator);
    }

    if (m_shutdownErrorCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShutdownErrorCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shutdownErrorCount, allocator);
    }

    if (m_blackListCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlackListCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blackListCount, allocator);
    }

    if (m_frequencyLimitCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrequencyLimitCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frequencyLimitCount, allocator);
    }

}


uint64_t CallbackStatusStatistics::GetCallbackCount() const
{
    return m_callbackCount;
}

void CallbackStatusStatistics::SetCallbackCount(const uint64_t& _callbackCount)
{
    m_callbackCount = _callbackCount;
    m_callbackCountHasBeenSet = true;
}

bool CallbackStatusStatistics::CallbackCountHasBeenSet() const
{
    return m_callbackCountHasBeenSet;
}

uint64_t CallbackStatusStatistics::GetRequestSuccessCount() const
{
    return m_requestSuccessCount;
}

void CallbackStatusStatistics::SetRequestSuccessCount(const uint64_t& _requestSuccessCount)
{
    m_requestSuccessCount = _requestSuccessCount;
    m_requestSuccessCountHasBeenSet = true;
}

bool CallbackStatusStatistics::RequestSuccessCountHasBeenSet() const
{
    return m_requestSuccessCountHasBeenSet;
}

uint64_t CallbackStatusStatistics::GetCallbackFailCount() const
{
    return m_callbackFailCount;
}

void CallbackStatusStatistics::SetCallbackFailCount(const uint64_t& _callbackFailCount)
{
    m_callbackFailCount = _callbackFailCount;
    m_callbackFailCountHasBeenSet = true;
}

bool CallbackStatusStatistics::CallbackFailCountHasBeenSet() const
{
    return m_callbackFailCountHasBeenSet;
}

uint64_t CallbackStatusStatistics::GetCallbackSuccessCount() const
{
    return m_callbackSuccessCount;
}

void CallbackStatusStatistics::SetCallbackSuccessCount(const uint64_t& _callbackSuccessCount)
{
    m_callbackSuccessCount = _callbackSuccessCount;
    m_callbackSuccessCountHasBeenSet = true;
}

bool CallbackStatusStatistics::CallbackSuccessCountHasBeenSet() const
{
    return m_callbackSuccessCountHasBeenSet;
}

uint64_t CallbackStatusStatistics::GetInternalErrorCount() const
{
    return m_internalErrorCount;
}

void CallbackStatusStatistics::SetInternalErrorCount(const uint64_t& _internalErrorCount)
{
    m_internalErrorCount = _internalErrorCount;
    m_internalErrorCountHasBeenSet = true;
}

bool CallbackStatusStatistics::InternalErrorCountHasBeenSet() const
{
    return m_internalErrorCountHasBeenSet;
}

uint64_t CallbackStatusStatistics::GetInvalidNumberCount() const
{
    return m_invalidNumberCount;
}

void CallbackStatusStatistics::SetInvalidNumberCount(const uint64_t& _invalidNumberCount)
{
    m_invalidNumberCount = _invalidNumberCount;
    m_invalidNumberCountHasBeenSet = true;
}

bool CallbackStatusStatistics::InvalidNumberCountHasBeenSet() const
{
    return m_invalidNumberCountHasBeenSet;
}

uint64_t CallbackStatusStatistics::GetShutdownErrorCount() const
{
    return m_shutdownErrorCount;
}

void CallbackStatusStatistics::SetShutdownErrorCount(const uint64_t& _shutdownErrorCount)
{
    m_shutdownErrorCount = _shutdownErrorCount;
    m_shutdownErrorCountHasBeenSet = true;
}

bool CallbackStatusStatistics::ShutdownErrorCountHasBeenSet() const
{
    return m_shutdownErrorCountHasBeenSet;
}

uint64_t CallbackStatusStatistics::GetBlackListCount() const
{
    return m_blackListCount;
}

void CallbackStatusStatistics::SetBlackListCount(const uint64_t& _blackListCount)
{
    m_blackListCount = _blackListCount;
    m_blackListCountHasBeenSet = true;
}

bool CallbackStatusStatistics::BlackListCountHasBeenSet() const
{
    return m_blackListCountHasBeenSet;
}

uint64_t CallbackStatusStatistics::GetFrequencyLimitCount() const
{
    return m_frequencyLimitCount;
}

void CallbackStatusStatistics::SetFrequencyLimitCount(const uint64_t& _frequencyLimitCount)
{
    m_frequencyLimitCount = _frequencyLimitCount;
    m_frequencyLimitCountHasBeenSet = true;
}

bool CallbackStatusStatistics::FrequencyLimitCountHasBeenSet() const
{
    return m_frequencyLimitCountHasBeenSet;
}


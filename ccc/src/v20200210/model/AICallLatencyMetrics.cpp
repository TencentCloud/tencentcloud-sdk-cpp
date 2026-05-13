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

#include <tencentcloud/ccc/v20200210/model/AICallLatencyMetrics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

AICallLatencyMetrics::AICallLatencyMetrics() :
    m_asrLatencyHasBeenSet(false),
    m_lLMFirstTokenLatencyHasBeenSet(false),
    m_tTSLatencyHasBeenSet(false),
    m_totalLatencyHasBeenSet(false)
{
}

CoreInternalOutcome AICallLatencyMetrics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AsrLatency") && !value["AsrLatency"].IsNull())
    {
        if (!value["AsrLatency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AICallLatencyMetrics.AsrLatency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_asrLatency = value["AsrLatency"].GetInt64();
        m_asrLatencyHasBeenSet = true;
    }

    if (value.HasMember("LLMFirstTokenLatency") && !value["LLMFirstTokenLatency"].IsNull())
    {
        if (!value["LLMFirstTokenLatency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AICallLatencyMetrics.LLMFirstTokenLatency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lLMFirstTokenLatency = value["LLMFirstTokenLatency"].GetInt64();
        m_lLMFirstTokenLatencyHasBeenSet = true;
    }

    if (value.HasMember("TTSLatency") && !value["TTSLatency"].IsNull())
    {
        if (!value["TTSLatency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AICallLatencyMetrics.TTSLatency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tTSLatency = value["TTSLatency"].GetInt64();
        m_tTSLatencyHasBeenSet = true;
    }

    if (value.HasMember("TotalLatency") && !value["TotalLatency"].IsNull())
    {
        if (!value["TotalLatency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AICallLatencyMetrics.TotalLatency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalLatency = value["TotalLatency"].GetInt64();
        m_totalLatencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AICallLatencyMetrics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_asrLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asrLatency, allocator);
    }

    if (m_lLMFirstTokenLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LLMFirstTokenLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lLMFirstTokenLatency, allocator);
    }

    if (m_tTSLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTSLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tTSLatency, allocator);
    }

    if (m_totalLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalLatency, allocator);
    }

}


int64_t AICallLatencyMetrics::GetAsrLatency() const
{
    return m_asrLatency;
}

void AICallLatencyMetrics::SetAsrLatency(const int64_t& _asrLatency)
{
    m_asrLatency = _asrLatency;
    m_asrLatencyHasBeenSet = true;
}

bool AICallLatencyMetrics::AsrLatencyHasBeenSet() const
{
    return m_asrLatencyHasBeenSet;
}

int64_t AICallLatencyMetrics::GetLLMFirstTokenLatency() const
{
    return m_lLMFirstTokenLatency;
}

void AICallLatencyMetrics::SetLLMFirstTokenLatency(const int64_t& _lLMFirstTokenLatency)
{
    m_lLMFirstTokenLatency = _lLMFirstTokenLatency;
    m_lLMFirstTokenLatencyHasBeenSet = true;
}

bool AICallLatencyMetrics::LLMFirstTokenLatencyHasBeenSet() const
{
    return m_lLMFirstTokenLatencyHasBeenSet;
}

int64_t AICallLatencyMetrics::GetTTSLatency() const
{
    return m_tTSLatency;
}

void AICallLatencyMetrics::SetTTSLatency(const int64_t& _tTSLatency)
{
    m_tTSLatency = _tTSLatency;
    m_tTSLatencyHasBeenSet = true;
}

bool AICallLatencyMetrics::TTSLatencyHasBeenSet() const
{
    return m_tTSLatencyHasBeenSet;
}

int64_t AICallLatencyMetrics::GetTotalLatency() const
{
    return m_totalLatency;
}

void AICallLatencyMetrics::SetTotalLatency(const int64_t& _totalLatency)
{
    m_totalLatency = _totalLatency;
    m_totalLatencyHasBeenSet = true;
}

bool AICallLatencyMetrics::TotalLatencyHasBeenSet() const
{
    return m_totalLatencyHasBeenSet;
}


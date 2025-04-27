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

#include <tencentcloud/ccc/v20200210/model/AILatencyDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

AILatencyDetail::AILatencyDetail() :
    m_roundIdHasBeenSet(false),
    m_aSRLatencyHasBeenSet(false),
    m_tTSLatencyHasBeenSet(false),
    m_lLMLatencyHasBeenSet(false),
    m_lLMFirstTokenLatencyHasBeenSet(false),
    m_eTELatencyHasBeenSet(false)
{
}

CoreInternalOutcome AILatencyDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoundId") && !value["RoundId"].IsNull())
    {
        if (!value["RoundId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AILatencyDetail.RoundId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roundId = string(value["RoundId"].GetString());
        m_roundIdHasBeenSet = true;
    }

    if (value.HasMember("ASRLatency") && !value["ASRLatency"].IsNull())
    {
        if (!value["ASRLatency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AILatencyDetail.ASRLatency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aSRLatency = value["ASRLatency"].GetInt64();
        m_aSRLatencyHasBeenSet = true;
    }

    if (value.HasMember("TTSLatency") && !value["TTSLatency"].IsNull())
    {
        if (!value["TTSLatency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AILatencyDetail.TTSLatency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tTSLatency = value["TTSLatency"].GetInt64();
        m_tTSLatencyHasBeenSet = true;
    }

    if (value.HasMember("LLMLatency") && !value["LLMLatency"].IsNull())
    {
        if (!value["LLMLatency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AILatencyDetail.LLMLatency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lLMLatency = value["LLMLatency"].GetInt64();
        m_lLMLatencyHasBeenSet = true;
    }

    if (value.HasMember("LLMFirstTokenLatency") && !value["LLMFirstTokenLatency"].IsNull())
    {
        if (!value["LLMFirstTokenLatency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AILatencyDetail.LLMFirstTokenLatency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lLMFirstTokenLatency = value["LLMFirstTokenLatency"].GetInt64();
        m_lLMFirstTokenLatencyHasBeenSet = true;
    }

    if (value.HasMember("ETELatency") && !value["ETELatency"].IsNull())
    {
        if (!value["ETELatency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AILatencyDetail.ETELatency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eTELatency = value["ETELatency"].GetInt64();
        m_eTELatencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AILatencyDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roundIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoundId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roundId.c_str(), allocator).Move(), allocator);
    }

    if (m_aSRLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ASRLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aSRLatency, allocator);
    }

    if (m_tTSLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTSLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tTSLatency, allocator);
    }

    if (m_lLMLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LLMLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lLMLatency, allocator);
    }

    if (m_lLMFirstTokenLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LLMFirstTokenLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lLMFirstTokenLatency, allocator);
    }

    if (m_eTELatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ETELatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eTELatency, allocator);
    }

}


string AILatencyDetail::GetRoundId() const
{
    return m_roundId;
}

void AILatencyDetail::SetRoundId(const string& _roundId)
{
    m_roundId = _roundId;
    m_roundIdHasBeenSet = true;
}

bool AILatencyDetail::RoundIdHasBeenSet() const
{
    return m_roundIdHasBeenSet;
}

int64_t AILatencyDetail::GetASRLatency() const
{
    return m_aSRLatency;
}

void AILatencyDetail::SetASRLatency(const int64_t& _aSRLatency)
{
    m_aSRLatency = _aSRLatency;
    m_aSRLatencyHasBeenSet = true;
}

bool AILatencyDetail::ASRLatencyHasBeenSet() const
{
    return m_aSRLatencyHasBeenSet;
}

int64_t AILatencyDetail::GetTTSLatency() const
{
    return m_tTSLatency;
}

void AILatencyDetail::SetTTSLatency(const int64_t& _tTSLatency)
{
    m_tTSLatency = _tTSLatency;
    m_tTSLatencyHasBeenSet = true;
}

bool AILatencyDetail::TTSLatencyHasBeenSet() const
{
    return m_tTSLatencyHasBeenSet;
}

int64_t AILatencyDetail::GetLLMLatency() const
{
    return m_lLMLatency;
}

void AILatencyDetail::SetLLMLatency(const int64_t& _lLMLatency)
{
    m_lLMLatency = _lLMLatency;
    m_lLMLatencyHasBeenSet = true;
}

bool AILatencyDetail::LLMLatencyHasBeenSet() const
{
    return m_lLMLatencyHasBeenSet;
}

int64_t AILatencyDetail::GetLLMFirstTokenLatency() const
{
    return m_lLMFirstTokenLatency;
}

void AILatencyDetail::SetLLMFirstTokenLatency(const int64_t& _lLMFirstTokenLatency)
{
    m_lLMFirstTokenLatency = _lLMFirstTokenLatency;
    m_lLMFirstTokenLatencyHasBeenSet = true;
}

bool AILatencyDetail::LLMFirstTokenLatencyHasBeenSet() const
{
    return m_lLMFirstTokenLatencyHasBeenSet;
}

int64_t AILatencyDetail::GetETELatency() const
{
    return m_eTELatency;
}

void AILatencyDetail::SetETELatency(const int64_t& _eTELatency)
{
    m_eTELatency = _eTELatency;
    m_eTELatencyHasBeenSet = true;
}

bool AILatencyDetail::ETELatencyHasBeenSet() const
{
    return m_eTELatencyHasBeenSet;
}


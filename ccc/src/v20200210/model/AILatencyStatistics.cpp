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

#include <tencentcloud/ccc/v20200210/model/AILatencyStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

AILatencyStatistics::AILatencyStatistics() :
    m_aSRLatencyHasBeenSet(false),
    m_tTSLatencyHasBeenSet(false),
    m_lLMLatencyHasBeenSet(false),
    m_eTELatencyHasBeenSet(false)
{
}

CoreInternalOutcome AILatencyStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ASRLatency") && !value["ASRLatency"].IsNull())
    {
        if (!value["ASRLatency"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AILatencyStatistics.ASRLatency` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aSRLatency.Deserialize(value["ASRLatency"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aSRLatencyHasBeenSet = true;
    }

    if (value.HasMember("TTSLatency") && !value["TTSLatency"].IsNull())
    {
        if (!value["TTSLatency"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AILatencyStatistics.TTSLatency` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tTSLatency.Deserialize(value["TTSLatency"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tTSLatencyHasBeenSet = true;
    }

    if (value.HasMember("LLMLatency") && !value["LLMLatency"].IsNull())
    {
        if (!value["LLMLatency"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AILatencyStatistics.LLMLatency` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lLMLatency.Deserialize(value["LLMLatency"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lLMLatencyHasBeenSet = true;
    }

    if (value.HasMember("ETELatency") && !value["ETELatency"].IsNull())
    {
        if (!value["ETELatency"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AILatencyStatistics.ETELatency` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eTELatency.Deserialize(value["ETELatency"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eTELatencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AILatencyStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aSRLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ASRLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aSRLatency.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tTSLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTSLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tTSLatency.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lLMLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LLMLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lLMLatency.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eTELatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ETELatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eTELatency.ToJsonObject(value[key.c_str()], allocator);
    }

}


AILatencyStatisticsInfo AILatencyStatistics::GetASRLatency() const
{
    return m_aSRLatency;
}

void AILatencyStatistics::SetASRLatency(const AILatencyStatisticsInfo& _aSRLatency)
{
    m_aSRLatency = _aSRLatency;
    m_aSRLatencyHasBeenSet = true;
}

bool AILatencyStatistics::ASRLatencyHasBeenSet() const
{
    return m_aSRLatencyHasBeenSet;
}

AILatencyStatisticsInfo AILatencyStatistics::GetTTSLatency() const
{
    return m_tTSLatency;
}

void AILatencyStatistics::SetTTSLatency(const AILatencyStatisticsInfo& _tTSLatency)
{
    m_tTSLatency = _tTSLatency;
    m_tTSLatencyHasBeenSet = true;
}

bool AILatencyStatistics::TTSLatencyHasBeenSet() const
{
    return m_tTSLatencyHasBeenSet;
}

AILatencyStatisticsInfo AILatencyStatistics::GetLLMLatency() const
{
    return m_lLMLatency;
}

void AILatencyStatistics::SetLLMLatency(const AILatencyStatisticsInfo& _lLMLatency)
{
    m_lLMLatency = _lLMLatency;
    m_lLMLatencyHasBeenSet = true;
}

bool AILatencyStatistics::LLMLatencyHasBeenSet() const
{
    return m_lLMLatencyHasBeenSet;
}

AILatencyStatisticsInfo AILatencyStatistics::GetETELatency() const
{
    return m_eTELatency;
}

void AILatencyStatistics::SetETELatency(const AILatencyStatisticsInfo& _eTELatency)
{
    m_eTELatency = _eTELatency;
    m_eTELatencyHasBeenSet = true;
}

bool AILatencyStatistics::ETELatencyHasBeenSet() const
{
    return m_eTELatencyHasBeenSet;
}


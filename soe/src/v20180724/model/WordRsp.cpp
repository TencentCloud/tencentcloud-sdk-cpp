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

#include <tencentcloud/soe/v20180724/model/WordRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Soe::V20180724::Model;
using namespace std;

WordRsp::WordRsp() :
    m_memBeginTimeHasBeenSet(false),
    m_memEndTimeHasBeenSet(false),
    m_pronAccuracyHasBeenSet(false),
    m_pronFluencyHasBeenSet(false),
    m_wordHasBeenSet(false),
    m_matchTagHasBeenSet(false),
    m_phoneInfosHasBeenSet(false),
    m_referenceWordHasBeenSet(false),
    m_keywordTagHasBeenSet(false),
    m_toneHasBeenSet(false)
{
}

CoreInternalOutcome WordRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MemBeginTime") && !value["MemBeginTime"].IsNull())
    {
        if (!value["MemBeginTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WordRsp.MemBeginTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memBeginTime = value["MemBeginTime"].GetInt64();
        m_memBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("MemEndTime") && !value["MemEndTime"].IsNull())
    {
        if (!value["MemEndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WordRsp.MemEndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memEndTime = value["MemEndTime"].GetInt64();
        m_memEndTimeHasBeenSet = true;
    }

    if (value.HasMember("PronAccuracy") && !value["PronAccuracy"].IsNull())
    {
        if (!value["PronAccuracy"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `WordRsp.PronAccuracy` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pronAccuracy = value["PronAccuracy"].GetDouble();
        m_pronAccuracyHasBeenSet = true;
    }

    if (value.HasMember("PronFluency") && !value["PronFluency"].IsNull())
    {
        if (!value["PronFluency"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `WordRsp.PronFluency` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pronFluency = value["PronFluency"].GetDouble();
        m_pronFluencyHasBeenSet = true;
    }

    if (value.HasMember("Word") && !value["Word"].IsNull())
    {
        if (!value["Word"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WordRsp.Word` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_word = string(value["Word"].GetString());
        m_wordHasBeenSet = true;
    }

    if (value.HasMember("MatchTag") && !value["MatchTag"].IsNull())
    {
        if (!value["MatchTag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WordRsp.MatchTag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_matchTag = value["MatchTag"].GetInt64();
        m_matchTagHasBeenSet = true;
    }

    if (value.HasMember("PhoneInfos") && !value["PhoneInfos"].IsNull())
    {
        if (!value["PhoneInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WordRsp.PhoneInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["PhoneInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PhoneInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_phoneInfos.push_back(item);
        }
        m_phoneInfosHasBeenSet = true;
    }

    if (value.HasMember("ReferenceWord") && !value["ReferenceWord"].IsNull())
    {
        if (!value["ReferenceWord"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WordRsp.ReferenceWord` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referenceWord = string(value["ReferenceWord"].GetString());
        m_referenceWordHasBeenSet = true;
    }

    if (value.HasMember("KeywordTag") && !value["KeywordTag"].IsNull())
    {
        if (!value["KeywordTag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WordRsp.KeywordTag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_keywordTag = value["KeywordTag"].GetInt64();
        m_keywordTagHasBeenSet = true;
    }

    if (value.HasMember("Tone") && !value["Tone"].IsNull())
    {
        if (!value["Tone"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WordRsp.Tone` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tone.Deserialize(value["Tone"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_toneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WordRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_memBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemBeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memBeginTime, allocator);
    }

    if (m_memEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memEndTime, allocator);
    }

    if (m_pronAccuracyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PronAccuracy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pronAccuracy, allocator);
    }

    if (m_pronFluencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PronFluency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pronFluency, allocator);
    }

    if (m_wordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Word";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_word.c_str(), allocator).Move(), allocator);
    }

    if (m_matchTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_matchTag, allocator);
    }

    if (m_phoneInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_phoneInfos.begin(); itr != m_phoneInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_referenceWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceWord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referenceWord.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeywordTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keywordTag, allocator);
    }

    if (m_toneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tone.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t WordRsp::GetMemBeginTime() const
{
    return m_memBeginTime;
}

void WordRsp::SetMemBeginTime(const int64_t& _memBeginTime)
{
    m_memBeginTime = _memBeginTime;
    m_memBeginTimeHasBeenSet = true;
}

bool WordRsp::MemBeginTimeHasBeenSet() const
{
    return m_memBeginTimeHasBeenSet;
}

int64_t WordRsp::GetMemEndTime() const
{
    return m_memEndTime;
}

void WordRsp::SetMemEndTime(const int64_t& _memEndTime)
{
    m_memEndTime = _memEndTime;
    m_memEndTimeHasBeenSet = true;
}

bool WordRsp::MemEndTimeHasBeenSet() const
{
    return m_memEndTimeHasBeenSet;
}

double WordRsp::GetPronAccuracy() const
{
    return m_pronAccuracy;
}

void WordRsp::SetPronAccuracy(const double& _pronAccuracy)
{
    m_pronAccuracy = _pronAccuracy;
    m_pronAccuracyHasBeenSet = true;
}

bool WordRsp::PronAccuracyHasBeenSet() const
{
    return m_pronAccuracyHasBeenSet;
}

double WordRsp::GetPronFluency() const
{
    return m_pronFluency;
}

void WordRsp::SetPronFluency(const double& _pronFluency)
{
    m_pronFluency = _pronFluency;
    m_pronFluencyHasBeenSet = true;
}

bool WordRsp::PronFluencyHasBeenSet() const
{
    return m_pronFluencyHasBeenSet;
}

string WordRsp::GetWord() const
{
    return m_word;
}

void WordRsp::SetWord(const string& _word)
{
    m_word = _word;
    m_wordHasBeenSet = true;
}

bool WordRsp::WordHasBeenSet() const
{
    return m_wordHasBeenSet;
}

int64_t WordRsp::GetMatchTag() const
{
    return m_matchTag;
}

void WordRsp::SetMatchTag(const int64_t& _matchTag)
{
    m_matchTag = _matchTag;
    m_matchTagHasBeenSet = true;
}

bool WordRsp::MatchTagHasBeenSet() const
{
    return m_matchTagHasBeenSet;
}

vector<PhoneInfo> WordRsp::GetPhoneInfos() const
{
    return m_phoneInfos;
}

void WordRsp::SetPhoneInfos(const vector<PhoneInfo>& _phoneInfos)
{
    m_phoneInfos = _phoneInfos;
    m_phoneInfosHasBeenSet = true;
}

bool WordRsp::PhoneInfosHasBeenSet() const
{
    return m_phoneInfosHasBeenSet;
}

string WordRsp::GetReferenceWord() const
{
    return m_referenceWord;
}

void WordRsp::SetReferenceWord(const string& _referenceWord)
{
    m_referenceWord = _referenceWord;
    m_referenceWordHasBeenSet = true;
}

bool WordRsp::ReferenceWordHasBeenSet() const
{
    return m_referenceWordHasBeenSet;
}

int64_t WordRsp::GetKeywordTag() const
{
    return m_keywordTag;
}

void WordRsp::SetKeywordTag(const int64_t& _keywordTag)
{
    m_keywordTag = _keywordTag;
    m_keywordTagHasBeenSet = true;
}

bool WordRsp::KeywordTagHasBeenSet() const
{
    return m_keywordTagHasBeenSet;
}

Tone WordRsp::GetTone() const
{
    return m_tone;
}

void WordRsp::SetTone(const Tone& _tone)
{
    m_tone = _tone;
    m_toneHasBeenSet = true;
}

bool WordRsp::ToneHasBeenSet() const
{
    return m_toneHasBeenSet;
}


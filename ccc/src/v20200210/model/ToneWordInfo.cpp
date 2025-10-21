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

#include <tencentcloud/ccc/v20200210/model/ToneWordInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

ToneWordInfo::ToneWordInfo() :
    m_firstSentenceTimeoutHasBeenSet(false),
    m_zHToneWordsHasBeenSet(false)
{
}

CoreInternalOutcome ToneWordInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FirstSentenceTimeout") && !value["FirstSentenceTimeout"].IsNull())
    {
        if (!value["FirstSentenceTimeout"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ToneWordInfo.FirstSentenceTimeout` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_firstSentenceTimeout = value["FirstSentenceTimeout"].GetDouble();
        m_firstSentenceTimeoutHasBeenSet = true;
    }

    if (value.HasMember("ZHToneWords") && !value["ZHToneWords"].IsNull())
    {
        if (!value["ZHToneWords"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ToneWordInfo.ZHToneWords` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_zHToneWords.Deserialize(value["ZHToneWords"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_zHToneWordsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ToneWordInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_firstSentenceTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstSentenceTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstSentenceTimeout, allocator);
    }

    if (m_zHToneWordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZHToneWords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_zHToneWords.ToJsonObject(value[key.c_str()], allocator);
    }

}


double ToneWordInfo::GetFirstSentenceTimeout() const
{
    return m_firstSentenceTimeout;
}

void ToneWordInfo::SetFirstSentenceTimeout(const double& _firstSentenceTimeout)
{
    m_firstSentenceTimeout = _firstSentenceTimeout;
    m_firstSentenceTimeoutHasBeenSet = true;
}

bool ToneWordInfo::FirstSentenceTimeoutHasBeenSet() const
{
    return m_firstSentenceTimeoutHasBeenSet;
}

ZHToneWordsInfo ToneWordInfo::GetZHToneWords() const
{
    return m_zHToneWords;
}

void ToneWordInfo::SetZHToneWords(const ZHToneWordsInfo& _zHToneWords)
{
    m_zHToneWords = _zHToneWords;
    m_zHToneWordsHasBeenSet = true;
}

bool ToneWordInfo::ZHToneWordsHasBeenSet() const
{
    return m_zHToneWordsHasBeenSet;
}


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

#include <tencentcloud/ecc/v20181213/model/SentenceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecc::V20181213::Model;
using namespace std;

SentenceItem::SentenceItem() :
    m_sentenceHasBeenSet(false),
    m_paraIDHasBeenSet(false),
    m_sentenceIDHasBeenSet(false)
{
}

CoreInternalOutcome SentenceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Sentence") && !value["Sentence"].IsNull())
    {
        if (!value["Sentence"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceItem.Sentence` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sentence = string(value["Sentence"].GetString());
        m_sentenceHasBeenSet = true;
    }

    if (value.HasMember("ParaID") && !value["ParaID"].IsNull())
    {
        if (!value["ParaID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceItem.ParaID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_paraID = value["ParaID"].GetInt64();
        m_paraIDHasBeenSet = true;
    }

    if (value.HasMember("SentenceID") && !value["SentenceID"].IsNull())
    {
        if (!value["SentenceID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceItem.SentenceID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sentenceID = value["SentenceID"].GetInt64();
        m_sentenceIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SentenceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sentenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sentence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sentence.c_str(), allocator).Move(), allocator);
    }

    if (m_paraIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParaID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_paraID, allocator);
    }

    if (m_sentenceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SentenceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sentenceID, allocator);
    }

}


string SentenceItem::GetSentence() const
{
    return m_sentence;
}

void SentenceItem::SetSentence(const string& _sentence)
{
    m_sentence = _sentence;
    m_sentenceHasBeenSet = true;
}

bool SentenceItem::SentenceHasBeenSet() const
{
    return m_sentenceHasBeenSet;
}

int64_t SentenceItem::GetParaID() const
{
    return m_paraID;
}

void SentenceItem::SetParaID(const int64_t& _paraID)
{
    m_paraID = _paraID;
    m_paraIDHasBeenSet = true;
}

bool SentenceItem::ParaIDHasBeenSet() const
{
    return m_paraIDHasBeenSet;
}

int64_t SentenceItem::GetSentenceID() const
{
    return m_sentenceID;
}

void SentenceItem::SetSentenceID(const int64_t& _sentenceID)
{
    m_sentenceID = _sentenceID;
    m_sentenceIDHasBeenSet = true;
}

bool SentenceItem::SentenceIDHasBeenSet() const
{
    return m_sentenceIDHasBeenSet;
}


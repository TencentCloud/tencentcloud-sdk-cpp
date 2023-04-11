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

#include <tencentcloud/vrs/v20200824/model/Words.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vrs::V20200824::Model;
using namespace std;

Words::Words() :
    m_pronAccuracyHasBeenSet(false),
    m_pronFluencyHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_wordHasBeenSet(false)
{
}

CoreInternalOutcome Words::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PronAccuracy") && !value["PronAccuracy"].IsNull())
    {
        if (!value["PronAccuracy"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Words.PronAccuracy` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pronAccuracy = value["PronAccuracy"].GetDouble();
        m_pronAccuracyHasBeenSet = true;
    }

    if (value.HasMember("PronFluency") && !value["PronFluency"].IsNull())
    {
        if (!value["PronFluency"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Words.PronFluency` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pronFluency = value["PronFluency"].GetDouble();
        m_pronFluencyHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Words.Tag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tag = value["Tag"].GetInt64();
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("Word") && !value["Word"].IsNull())
    {
        if (!value["Word"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Words.Word` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_word = string(value["Word"].GetString());
        m_wordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Words::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tag, allocator);
    }

    if (m_wordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Word";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_word.c_str(), allocator).Move(), allocator);
    }

}


double Words::GetPronAccuracy() const
{
    return m_pronAccuracy;
}

void Words::SetPronAccuracy(const double& _pronAccuracy)
{
    m_pronAccuracy = _pronAccuracy;
    m_pronAccuracyHasBeenSet = true;
}

bool Words::PronAccuracyHasBeenSet() const
{
    return m_pronAccuracyHasBeenSet;
}

double Words::GetPronFluency() const
{
    return m_pronFluency;
}

void Words::SetPronFluency(const double& _pronFluency)
{
    m_pronFluency = _pronFluency;
    m_pronFluencyHasBeenSet = true;
}

bool Words::PronFluencyHasBeenSet() const
{
    return m_pronFluencyHasBeenSet;
}

int64_t Words::GetTag() const
{
    return m_tag;
}

void Words::SetTag(const int64_t& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool Words::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string Words::GetWord() const
{
    return m_word;
}

void Words::SetWord(const string& _word)
{
    m_word = _word;
    m_wordHasBeenSet = true;
}

bool Words::WordHasBeenSet() const
{
    return m_wordHasBeenSet;
}


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

#include <tencentcloud/nlp/v20190408/model/Keyword.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Nlp::V20190408::Model;
using namespace rapidjson;
using namespace std;

Keyword::Keyword() :
    m_scoreHasBeenSet(false),
    m_wordHasBeenSet(false)
{
}

CoreInternalOutcome Keyword::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `Keyword.Score` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Word") && !value["Word"].IsNull())
    {
        if (!value["Word"].IsString())
        {
            return CoreInternalOutcome(Error("response `Keyword.Word` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_word = string(value["Word"].GetString());
        m_wordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Keyword::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_scoreHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_wordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Word";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_word.c_str(), allocator).Move(), allocator);
    }

}


double Keyword::GetScore() const
{
    return m_score;
}

void Keyword::SetScore(const double& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool Keyword::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

string Keyword::GetWord() const
{
    return m_word;
}

void Keyword::SetWord(const string& _word)
{
    m_word = _word;
    m_wordHasBeenSet = true;
}

bool Keyword::WordHasBeenSet() const
{
    return m_wordHasBeenSet;
}


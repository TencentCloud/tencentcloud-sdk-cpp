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

#include <tencentcloud/ecc/v20181213/model/CorrectData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecc::V20181213::Model;
using namespace std;

CorrectData::CorrectData() :
    m_scoreHasBeenSet(false),
    m_scoreCatHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_sentenceCommentsHasBeenSet(false)
{
}

CoreInternalOutcome CorrectData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CorrectData.Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("ScoreCat") && !value["ScoreCat"].IsNull())
    {
        if (!value["ScoreCat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CorrectData.ScoreCat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scoreCat.Deserialize(value["ScoreCat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scoreCatHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CorrectData.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("SentenceComments") && !value["SentenceComments"].IsNull())
    {
        if (!value["SentenceComments"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CorrectData.SentenceComments` is not array type"));

        const rapidjson::Value &tmpValue = value["SentenceComments"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SentenceCom item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sentenceComments.push_back(item);
        }
        m_sentenceCommentsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CorrectData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_scoreCatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScoreCat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scoreCat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_sentenceCommentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SentenceComments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sentenceComments.begin(); itr != m_sentenceComments.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


double CorrectData::GetScore() const
{
    return m_score;
}

void CorrectData::SetScore(const double& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool CorrectData::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

ScoreCategory CorrectData::GetScoreCat() const
{
    return m_scoreCat;
}

void CorrectData::SetScoreCat(const ScoreCategory& _scoreCat)
{
    m_scoreCat = _scoreCat;
    m_scoreCatHasBeenSet = true;
}

bool CorrectData::ScoreCatHasBeenSet() const
{
    return m_scoreCatHasBeenSet;
}

string CorrectData::GetComment() const
{
    return m_comment;
}

void CorrectData::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CorrectData::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

vector<SentenceCom> CorrectData::GetSentenceComments() const
{
    return m_sentenceComments;
}

void CorrectData::SetSentenceComments(const vector<SentenceCom>& _sentenceComments)
{
    m_sentenceComments = _sentenceComments;
    m_sentenceCommentsHasBeenSet = true;
}

bool CorrectData::SentenceCommentsHasBeenSet() const
{
    return m_sentenceCommentsHasBeenSet;
}


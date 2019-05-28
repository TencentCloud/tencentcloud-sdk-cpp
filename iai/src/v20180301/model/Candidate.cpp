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

#include <tencentcloud/iai/v20180301/model/Candidate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20180301::Model;
using namespace rapidjson;
using namespace std;

Candidate::Candidate() :
    m_personIdHasBeenSet(false),
    m_faceIdHasBeenSet(false),
    m_scoreHasBeenSet(false)
{
}

CoreInternalOutcome Candidate::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Candidate.PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(value["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }

    if (value.HasMember("FaceId") && !value["FaceId"].IsNull())
    {
        if (!value["FaceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Candidate.FaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faceId = string(value["FaceId"].GetString());
        m_faceIdHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `Candidate.Score` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Candidate::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_personIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_faceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_faceId.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

}


string Candidate::GetPersonId() const
{
    return m_personId;
}

void Candidate::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool Candidate::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

string Candidate::GetFaceId() const
{
    return m_faceId;
}

void Candidate::SetFaceId(const string& _faceId)
{
    m_faceId = _faceId;
    m_faceIdHasBeenSet = true;
}

bool Candidate::FaceIdHasBeenSet() const
{
    return m_faceIdHasBeenSet;
}

double Candidate::GetScore() const
{
    return m_score;
}

void Candidate::SetScore(const double& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool Candidate::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}


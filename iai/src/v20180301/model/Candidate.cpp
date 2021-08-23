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
using namespace std;

Candidate::Candidate() :
    m_personIdHasBeenSet(false),
    m_faceIdHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_personNameHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_personGroupInfosHasBeenSet(false)
{
}

CoreInternalOutcome Candidate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Candidate.PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(value["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }

    if (value.HasMember("FaceId") && !value["FaceId"].IsNull())
    {
        if (!value["FaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Candidate.FaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faceId = string(value["FaceId"].GetString());
        m_faceIdHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Candidate.Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("PersonName") && !value["PersonName"].IsNull())
    {
        if (!value["PersonName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Candidate.PersonName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personName = string(value["PersonName"].GetString());
        m_personNameHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Candidate.Gender` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gender = value["Gender"].GetInt64();
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("PersonGroupInfos") && !value["PersonGroupInfos"].IsNull())
    {
        if (!value["PersonGroupInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Candidate.PersonGroupInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["PersonGroupInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PersonGroupInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_personGroupInfos.push_back(item);
        }
        m_personGroupInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Candidate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_faceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_faceId.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_personNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personName.c_str(), allocator).Move(), allocator);
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gender, allocator);
    }

    if (m_personGroupInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonGroupInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_personGroupInfos.begin(); itr != m_personGroupInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

string Candidate::GetPersonName() const
{
    return m_personName;
}

void Candidate::SetPersonName(const string& _personName)
{
    m_personName = _personName;
    m_personNameHasBeenSet = true;
}

bool Candidate::PersonNameHasBeenSet() const
{
    return m_personNameHasBeenSet;
}

int64_t Candidate::GetGender() const
{
    return m_gender;
}

void Candidate::SetGender(const int64_t& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool Candidate::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

vector<PersonGroupInfo> Candidate::GetPersonGroupInfos() const
{
    return m_personGroupInfos;
}

void Candidate::SetPersonGroupInfos(const vector<PersonGroupInfo>& _personGroupInfos)
{
    m_personGroupInfos = _personGroupInfos;
    m_personGroupInfosHasBeenSet = true;
}

bool Candidate::PersonGroupInfosHasBeenSet() const
{
    return m_personGroupInfosHasBeenSet;
}


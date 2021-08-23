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

#include <tencentcloud/youmall/v20180228/model/PersonProfile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

PersonProfile::PersonProfile() :
    m_personIdHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_ageHasBeenSet(false),
    m_firstArrivedTimeHasBeenSet(false),
    m_arrivedCountHasBeenSet(false),
    m_picUrlHasBeenSet(false),
    m_similarityHasBeenSet(false)
{
}

CoreInternalOutcome PersonProfile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonProfile.PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(value["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonProfile.Gender` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gender = value["Gender"].GetUint64();
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonProfile.Age` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_age = value["Age"].GetUint64();
        m_ageHasBeenSet = true;
    }

    if (value.HasMember("FirstArrivedTime") && !value["FirstArrivedTime"].IsNull())
    {
        if (!value["FirstArrivedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonProfile.FirstArrivedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstArrivedTime = string(value["FirstArrivedTime"].GetString());
        m_firstArrivedTimeHasBeenSet = true;
    }

    if (value.HasMember("ArrivedCount") && !value["ArrivedCount"].IsNull())
    {
        if (!value["ArrivedCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonProfile.ArrivedCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_arrivedCount = value["ArrivedCount"].GetUint64();
        m_arrivedCountHasBeenSet = true;
    }

    if (value.HasMember("PicUrl") && !value["PicUrl"].IsNull())
    {
        if (!value["PicUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonProfile.PicUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_picUrl = string(value["PicUrl"].GetString());
        m_picUrlHasBeenSet = true;
    }

    if (value.HasMember("Similarity") && !value["Similarity"].IsNull())
    {
        if (!value["Similarity"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PersonProfile.Similarity` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_similarity = value["Similarity"].GetDouble();
        m_similarityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PersonProfile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gender, allocator);
    }

    if (m_ageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Age";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_age, allocator);
    }

    if (m_firstArrivedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstArrivedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstArrivedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_arrivedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArrivedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_arrivedCount, allocator);
    }

    if (m_picUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PicUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_picUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_similarityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Similarity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_similarity, allocator);
    }

}


string PersonProfile::GetPersonId() const
{
    return m_personId;
}

void PersonProfile::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool PersonProfile::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

uint64_t PersonProfile::GetGender() const
{
    return m_gender;
}

void PersonProfile::SetGender(const uint64_t& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool PersonProfile::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

uint64_t PersonProfile::GetAge() const
{
    return m_age;
}

void PersonProfile::SetAge(const uint64_t& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool PersonProfile::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

string PersonProfile::GetFirstArrivedTime() const
{
    return m_firstArrivedTime;
}

void PersonProfile::SetFirstArrivedTime(const string& _firstArrivedTime)
{
    m_firstArrivedTime = _firstArrivedTime;
    m_firstArrivedTimeHasBeenSet = true;
}

bool PersonProfile::FirstArrivedTimeHasBeenSet() const
{
    return m_firstArrivedTimeHasBeenSet;
}

uint64_t PersonProfile::GetArrivedCount() const
{
    return m_arrivedCount;
}

void PersonProfile::SetArrivedCount(const uint64_t& _arrivedCount)
{
    m_arrivedCount = _arrivedCount;
    m_arrivedCountHasBeenSet = true;
}

bool PersonProfile::ArrivedCountHasBeenSet() const
{
    return m_arrivedCountHasBeenSet;
}

string PersonProfile::GetPicUrl() const
{
    return m_picUrl;
}

void PersonProfile::SetPicUrl(const string& _picUrl)
{
    m_picUrl = _picUrl;
    m_picUrlHasBeenSet = true;
}

bool PersonProfile::PicUrlHasBeenSet() const
{
    return m_picUrlHasBeenSet;
}

double PersonProfile::GetSimilarity() const
{
    return m_similarity;
}

void PersonProfile::SetSimilarity(const double& _similarity)
{
    m_similarity = _similarity;
    m_similarityHasBeenSet = true;
}

bool PersonProfile::SimilarityHasBeenSet() const
{
    return m_similarityHasBeenSet;
}


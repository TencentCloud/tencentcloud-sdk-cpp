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

#include <tencentcloud/youmall/v20180228/model/PersonInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

PersonInfo::PersonInfo() :
    m_personIdHasBeenSet(false),
    m_personPictureHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_ageHasBeenSet(false),
    m_personTypeHasBeenSet(false),
    m_personPictureUrlHasBeenSet(false),
    m_personSubTypeHasBeenSet(false),
    m_visitTimesHasBeenSet(false),
    m_visitDaysHasBeenSet(false)
{
}

CoreInternalOutcome PersonInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo.PersonId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_personId = value["PersonId"].GetUint64();
        m_personIdHasBeenSet = true;
    }

    if (value.HasMember("PersonPicture") && !value["PersonPicture"].IsNull())
    {
        if (!value["PersonPicture"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo.PersonPicture` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personPicture = string(value["PersonPicture"].GetString());
        m_personPictureHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo.Gender` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gender = value["Gender"].GetInt64();
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo.Age` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_age = value["Age"].GetInt64();
        m_ageHasBeenSet = true;
    }

    if (value.HasMember("PersonType") && !value["PersonType"].IsNull())
    {
        if (!value["PersonType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo.PersonType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_personType = value["PersonType"].GetInt64();
        m_personTypeHasBeenSet = true;
    }

    if (value.HasMember("PersonPictureUrl") && !value["PersonPictureUrl"].IsNull())
    {
        if (!value["PersonPictureUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo.PersonPictureUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personPictureUrl = string(value["PersonPictureUrl"].GetString());
        m_personPictureUrlHasBeenSet = true;
    }

    if (value.HasMember("PersonSubType") && !value["PersonSubType"].IsNull())
    {
        if (!value["PersonSubType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo.PersonSubType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_personSubType = value["PersonSubType"].GetInt64();
        m_personSubTypeHasBeenSet = true;
    }

    if (value.HasMember("VisitTimes") && !value["VisitTimes"].IsNull())
    {
        if (!value["VisitTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo.VisitTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_visitTimes = value["VisitTimes"].GetInt64();
        m_visitTimesHasBeenSet = true;
    }

    if (value.HasMember("VisitDays") && !value["VisitDays"].IsNull())
    {
        if (!value["VisitDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo.VisitDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_visitDays = value["VisitDays"].GetInt64();
        m_visitDaysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PersonInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_personId, allocator);
    }

    if (m_personPictureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonPicture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personPicture.c_str(), allocator).Move(), allocator);
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

    if (m_personTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_personType, allocator);
    }

    if (m_personPictureUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonPictureUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personPictureUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_personSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonSubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_personSubType, allocator);
    }

    if (m_visitTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisitTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_visitTimes, allocator);
    }

    if (m_visitDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisitDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_visitDays, allocator);
    }

}


uint64_t PersonInfo::GetPersonId() const
{
    return m_personId;
}

void PersonInfo::SetPersonId(const uint64_t& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool PersonInfo::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

string PersonInfo::GetPersonPicture() const
{
    return m_personPicture;
}

void PersonInfo::SetPersonPicture(const string& _personPicture)
{
    m_personPicture = _personPicture;
    m_personPictureHasBeenSet = true;
}

bool PersonInfo::PersonPictureHasBeenSet() const
{
    return m_personPictureHasBeenSet;
}

int64_t PersonInfo::GetGender() const
{
    return m_gender;
}

void PersonInfo::SetGender(const int64_t& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool PersonInfo::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

int64_t PersonInfo::GetAge() const
{
    return m_age;
}

void PersonInfo::SetAge(const int64_t& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool PersonInfo::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

int64_t PersonInfo::GetPersonType() const
{
    return m_personType;
}

void PersonInfo::SetPersonType(const int64_t& _personType)
{
    m_personType = _personType;
    m_personTypeHasBeenSet = true;
}

bool PersonInfo::PersonTypeHasBeenSet() const
{
    return m_personTypeHasBeenSet;
}

string PersonInfo::GetPersonPictureUrl() const
{
    return m_personPictureUrl;
}

void PersonInfo::SetPersonPictureUrl(const string& _personPictureUrl)
{
    m_personPictureUrl = _personPictureUrl;
    m_personPictureUrlHasBeenSet = true;
}

bool PersonInfo::PersonPictureUrlHasBeenSet() const
{
    return m_personPictureUrlHasBeenSet;
}

int64_t PersonInfo::GetPersonSubType() const
{
    return m_personSubType;
}

void PersonInfo::SetPersonSubType(const int64_t& _personSubType)
{
    m_personSubType = _personSubType;
    m_personSubTypeHasBeenSet = true;
}

bool PersonInfo::PersonSubTypeHasBeenSet() const
{
    return m_personSubTypeHasBeenSet;
}

int64_t PersonInfo::GetVisitTimes() const
{
    return m_visitTimes;
}

void PersonInfo::SetVisitTimes(const int64_t& _visitTimes)
{
    m_visitTimes = _visitTimes;
    m_visitTimesHasBeenSet = true;
}

bool PersonInfo::VisitTimesHasBeenSet() const
{
    return m_visitTimesHasBeenSet;
}

int64_t PersonInfo::GetVisitDays() const
{
    return m_visitDays;
}

void PersonInfo::SetVisitDays(const int64_t& _visitDays)
{
    m_visitDays = _visitDays;
    m_visitDaysHasBeenSet = true;
}

bool PersonInfo::VisitDaysHasBeenSet() const
{
    return m_visitDaysHasBeenSet;
}


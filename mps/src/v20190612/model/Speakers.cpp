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

#include <tencentcloud/mps/v20190612/model/Speakers.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

Speakers::Speakers() :
    m_speakerIdHasBeenSet(false),
    m_voiceIdHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_ageGroupHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameTermsHasBeenSet(false)
{
}

CoreInternalOutcome Speakers::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpeakerId") && !value["SpeakerId"].IsNull())
    {
        if (!value["SpeakerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Speakers.SpeakerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_speakerId = string(value["SpeakerId"].GetString());
        m_speakerIdHasBeenSet = true;
    }

    if (value.HasMember("VoiceId") && !value["VoiceId"].IsNull())
    {
        if (!value["VoiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Speakers.VoiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceId = string(value["VoiceId"].GetString());
        m_voiceIdHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Speakers.Gender` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gender = string(value["Gender"].GetString());
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("AgeGroup") && !value["AgeGroup"].IsNull())
    {
        if (!value["AgeGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Speakers.AgeGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ageGroup = string(value["AgeGroup"].GetString());
        m_ageGroupHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Speakers.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("NameTerms") && !value["NameTerms"].IsNull())
    {
        if (!value["NameTerms"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Speakers.NameTerms` is not array type"));

        const rapidjson::Value &tmpValue = value["NameTerms"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TermBase item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nameTerms.push_back(item);
        }
        m_nameTermsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Speakers::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_speakerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeakerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_speakerId.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gender.c_str(), allocator).Move(), allocator);
    }

    if (m_ageGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgeGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ageGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_nameTermsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameTerms";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nameTerms.begin(); itr != m_nameTerms.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Speakers::GetSpeakerId() const
{
    return m_speakerId;
}

void Speakers::SetSpeakerId(const string& _speakerId)
{
    m_speakerId = _speakerId;
    m_speakerIdHasBeenSet = true;
}

bool Speakers::SpeakerIdHasBeenSet() const
{
    return m_speakerIdHasBeenSet;
}

string Speakers::GetVoiceId() const
{
    return m_voiceId;
}

void Speakers::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool Speakers::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

string Speakers::GetGender() const
{
    return m_gender;
}

void Speakers::SetGender(const string& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool Speakers::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

string Speakers::GetAgeGroup() const
{
    return m_ageGroup;
}

void Speakers::SetAgeGroup(const string& _ageGroup)
{
    m_ageGroup = _ageGroup;
    m_ageGroupHasBeenSet = true;
}

bool Speakers::AgeGroupHasBeenSet() const
{
    return m_ageGroupHasBeenSet;
}

string Speakers::GetDescription() const
{
    return m_description;
}

void Speakers::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Speakers::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<TermBase> Speakers::GetNameTerms() const
{
    return m_nameTerms;
}

void Speakers::SetNameTerms(const vector<TermBase>& _nameTerms)
{
    m_nameTerms = _nameTerms;
    m_nameTermsHasBeenSet = true;
}

bool Speakers::NameTermsHasBeenSet() const
{
    return m_nameTermsHasBeenSet;
}


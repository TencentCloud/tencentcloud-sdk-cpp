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

#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskFaceResultItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiRecognitionTaskFaceResultItem::AiRecognitionTaskFaceResultItem() :
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_segmentSetHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_professionHasBeenSet(false),
    m_schoolOfGraduationHasBeenSet(false),
    m_abstractHasBeenSet(false),
    m_placeOfBirthHasBeenSet(false),
    m_personTypeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome AiRecognitionTaskFaceResultItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskFaceResultItem.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskFaceResultItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskFaceResultItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SegmentSet") && !value["SegmentSet"].IsNull())
    {
        if (!value["SegmentSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskFaceResultItem.SegmentSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SegmentSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AiRecognitionTaskFaceSegmentItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_segmentSet.push_back(item);
        }
        m_segmentSetHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskFaceResultItem.Gender` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gender = string(value["Gender"].GetString());
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("Birthday") && !value["Birthday"].IsNull())
    {
        if (!value["Birthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskFaceResultItem.Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(value["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }

    if (value.HasMember("Profession") && !value["Profession"].IsNull())
    {
        if (!value["Profession"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskFaceResultItem.Profession` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_profession = string(value["Profession"].GetString());
        m_professionHasBeenSet = true;
    }

    if (value.HasMember("SchoolOfGraduation") && !value["SchoolOfGraduation"].IsNull())
    {
        if (!value["SchoolOfGraduation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskFaceResultItem.SchoolOfGraduation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schoolOfGraduation = string(value["SchoolOfGraduation"].GetString());
        m_schoolOfGraduationHasBeenSet = true;
    }

    if (value.HasMember("Abstract") && !value["Abstract"].IsNull())
    {
        if (!value["Abstract"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskFaceResultItem.Abstract` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_abstract = string(value["Abstract"].GetString());
        m_abstractHasBeenSet = true;
    }

    if (value.HasMember("PlaceOfBirth") && !value["PlaceOfBirth"].IsNull())
    {
        if (!value["PlaceOfBirth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskFaceResultItem.PlaceOfBirth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_placeOfBirth = string(value["PlaceOfBirth"].GetString());
        m_placeOfBirthHasBeenSet = true;
    }

    if (value.HasMember("PersonType") && !value["PersonType"].IsNull())
    {
        if (!value["PersonType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskFaceResultItem.PersonType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personType = string(value["PersonType"].GetString());
        m_personTypeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskFaceResultItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskFaceResultItem.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiRecognitionTaskFaceResultItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_segmentSet.begin(); itr != m_segmentSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gender.c_str(), allocator).Move(), allocator);
    }

    if (m_birthdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthday.c_str(), allocator).Move(), allocator);
    }

    if (m_professionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profession";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_profession.c_str(), allocator).Move(), allocator);
    }

    if (m_schoolOfGraduationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchoolOfGraduation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schoolOfGraduation.c_str(), allocator).Move(), allocator);
    }

    if (m_abstractHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Abstract";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_abstract.c_str(), allocator).Move(), allocator);
    }

    if (m_placeOfBirthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlaceOfBirth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_placeOfBirth.c_str(), allocator).Move(), allocator);
    }

    if (m_personTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personType.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

}


string AiRecognitionTaskFaceResultItem::GetId() const
{
    return m_id;
}

void AiRecognitionTaskFaceResultItem::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AiRecognitionTaskFaceResultItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AiRecognitionTaskFaceResultItem::GetType() const
{
    return m_type;
}

void AiRecognitionTaskFaceResultItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AiRecognitionTaskFaceResultItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AiRecognitionTaskFaceResultItem::GetName() const
{
    return m_name;
}

void AiRecognitionTaskFaceResultItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AiRecognitionTaskFaceResultItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<AiRecognitionTaskFaceSegmentItem> AiRecognitionTaskFaceResultItem::GetSegmentSet() const
{
    return m_segmentSet;
}

void AiRecognitionTaskFaceResultItem::SetSegmentSet(const vector<AiRecognitionTaskFaceSegmentItem>& _segmentSet)
{
    m_segmentSet = _segmentSet;
    m_segmentSetHasBeenSet = true;
}

bool AiRecognitionTaskFaceResultItem::SegmentSetHasBeenSet() const
{
    return m_segmentSetHasBeenSet;
}

string AiRecognitionTaskFaceResultItem::GetGender() const
{
    return m_gender;
}

void AiRecognitionTaskFaceResultItem::SetGender(const string& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool AiRecognitionTaskFaceResultItem::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

string AiRecognitionTaskFaceResultItem::GetBirthday() const
{
    return m_birthday;
}

void AiRecognitionTaskFaceResultItem::SetBirthday(const string& _birthday)
{
    m_birthday = _birthday;
    m_birthdayHasBeenSet = true;
}

bool AiRecognitionTaskFaceResultItem::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string AiRecognitionTaskFaceResultItem::GetProfession() const
{
    return m_profession;
}

void AiRecognitionTaskFaceResultItem::SetProfession(const string& _profession)
{
    m_profession = _profession;
    m_professionHasBeenSet = true;
}

bool AiRecognitionTaskFaceResultItem::ProfessionHasBeenSet() const
{
    return m_professionHasBeenSet;
}

string AiRecognitionTaskFaceResultItem::GetSchoolOfGraduation() const
{
    return m_schoolOfGraduation;
}

void AiRecognitionTaskFaceResultItem::SetSchoolOfGraduation(const string& _schoolOfGraduation)
{
    m_schoolOfGraduation = _schoolOfGraduation;
    m_schoolOfGraduationHasBeenSet = true;
}

bool AiRecognitionTaskFaceResultItem::SchoolOfGraduationHasBeenSet() const
{
    return m_schoolOfGraduationHasBeenSet;
}

string AiRecognitionTaskFaceResultItem::GetAbstract() const
{
    return m_abstract;
}

void AiRecognitionTaskFaceResultItem::SetAbstract(const string& _abstract)
{
    m_abstract = _abstract;
    m_abstractHasBeenSet = true;
}

bool AiRecognitionTaskFaceResultItem::AbstractHasBeenSet() const
{
    return m_abstractHasBeenSet;
}

string AiRecognitionTaskFaceResultItem::GetPlaceOfBirth() const
{
    return m_placeOfBirth;
}

void AiRecognitionTaskFaceResultItem::SetPlaceOfBirth(const string& _placeOfBirth)
{
    m_placeOfBirth = _placeOfBirth;
    m_placeOfBirthHasBeenSet = true;
}

bool AiRecognitionTaskFaceResultItem::PlaceOfBirthHasBeenSet() const
{
    return m_placeOfBirthHasBeenSet;
}

string AiRecognitionTaskFaceResultItem::GetPersonType() const
{
    return m_personType;
}

void AiRecognitionTaskFaceResultItem::SetPersonType(const string& _personType)
{
    m_personType = _personType;
    m_personTypeHasBeenSet = true;
}

bool AiRecognitionTaskFaceResultItem::PersonTypeHasBeenSet() const
{
    return m_personTypeHasBeenSet;
}

string AiRecognitionTaskFaceResultItem::GetRemark() const
{
    return m_remark;
}

void AiRecognitionTaskFaceResultItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AiRecognitionTaskFaceResultItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string AiRecognitionTaskFaceResultItem::GetUrl() const
{
    return m_url;
}

void AiRecognitionTaskFaceResultItem::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool AiRecognitionTaskFaceResultItem::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}


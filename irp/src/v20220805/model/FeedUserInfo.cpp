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

#include <tencentcloud/irp/v20220805/model/FeedUserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Irp::V20220805::Model;
using namespace std;

FeedUserInfo::FeedUserInfo() :
    m_userIdHasBeenSet(false),
    m_userIdListHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_dislikeInfoListHasBeenSet(false),
    m_ageHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_degreeHasBeenSet(false),
    m_schoolHasBeenSet(false),
    m_occupationHasBeenSet(false),
    m_industryHasBeenSet(false),
    m_residentCountryHasBeenSet(false),
    m_residentProvinceHasBeenSet(false),
    m_residentCityHasBeenSet(false),
    m_registerTimestampHasBeenSet(false),
    m_membershipLevelHasBeenSet(false),
    m_lastLoginTimestampHasBeenSet(false),
    m_lastLoginIpHasBeenSet(false),
    m_lastModifyTimestampHasBeenSet(false),
    m_extensionHasBeenSet(false)
{
}

CoreInternalOutcome FeedUserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedUserInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserIdList") && !value["UserIdList"].IsNull())
    {
        if (!value["UserIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FeedUserInfo.UserIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["UserIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserIdInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_userIdList.push_back(item);
        }
        m_userIdListHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedUserInfo.Tags` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tags = string(value["Tags"].GetString());
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("DislikeInfoList") && !value["DislikeInfoList"].IsNull())
    {
        if (!value["DislikeInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FeedUserInfo.DislikeInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["DislikeInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DislikeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dislikeInfoList.push_back(item);
        }
        m_dislikeInfoListHasBeenSet = true;
    }

    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FeedUserInfo.Age` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_age = value["Age"].GetInt64();
        m_ageHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FeedUserInfo.Gender` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gender = value["Gender"].GetInt64();
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("Degree") && !value["Degree"].IsNull())
    {
        if (!value["Degree"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedUserInfo.Degree` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_degree = string(value["Degree"].GetString());
        m_degreeHasBeenSet = true;
    }

    if (value.HasMember("School") && !value["School"].IsNull())
    {
        if (!value["School"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedUserInfo.School` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_school = string(value["School"].GetString());
        m_schoolHasBeenSet = true;
    }

    if (value.HasMember("Occupation") && !value["Occupation"].IsNull())
    {
        if (!value["Occupation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedUserInfo.Occupation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_occupation = string(value["Occupation"].GetString());
        m_occupationHasBeenSet = true;
    }

    if (value.HasMember("Industry") && !value["Industry"].IsNull())
    {
        if (!value["Industry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedUserInfo.Industry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_industry = string(value["Industry"].GetString());
        m_industryHasBeenSet = true;
    }

    if (value.HasMember("ResidentCountry") && !value["ResidentCountry"].IsNull())
    {
        if (!value["ResidentCountry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedUserInfo.ResidentCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_residentCountry = string(value["ResidentCountry"].GetString());
        m_residentCountryHasBeenSet = true;
    }

    if (value.HasMember("ResidentProvince") && !value["ResidentProvince"].IsNull())
    {
        if (!value["ResidentProvince"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedUserInfo.ResidentProvince` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_residentProvince = string(value["ResidentProvince"].GetString());
        m_residentProvinceHasBeenSet = true;
    }

    if (value.HasMember("ResidentCity") && !value["ResidentCity"].IsNull())
    {
        if (!value["ResidentCity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedUserInfo.ResidentCity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_residentCity = string(value["ResidentCity"].GetString());
        m_residentCityHasBeenSet = true;
    }

    if (value.HasMember("RegisterTimestamp") && !value["RegisterTimestamp"].IsNull())
    {
        if (!value["RegisterTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FeedUserInfo.RegisterTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_registerTimestamp = value["RegisterTimestamp"].GetInt64();
        m_registerTimestampHasBeenSet = true;
    }

    if (value.HasMember("MembershipLevel") && !value["MembershipLevel"].IsNull())
    {
        if (!value["MembershipLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedUserInfo.MembershipLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_membershipLevel = string(value["MembershipLevel"].GetString());
        m_membershipLevelHasBeenSet = true;
    }

    if (value.HasMember("LastLoginTimestamp") && !value["LastLoginTimestamp"].IsNull())
    {
        if (!value["LastLoginTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FeedUserInfo.LastLoginTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastLoginTimestamp = value["LastLoginTimestamp"].GetInt64();
        m_lastLoginTimestampHasBeenSet = true;
    }

    if (value.HasMember("LastLoginIp") && !value["LastLoginIp"].IsNull())
    {
        if (!value["LastLoginIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedUserInfo.LastLoginIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastLoginIp = string(value["LastLoginIp"].GetString());
        m_lastLoginIpHasBeenSet = true;
    }

    if (value.HasMember("LastModifyTimestamp") && !value["LastModifyTimestamp"].IsNull())
    {
        if (!value["LastModifyTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FeedUserInfo.LastModifyTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifyTimestamp = value["LastModifyTimestamp"].GetInt64();
        m_lastModifyTimestampHasBeenSet = true;
    }

    if (value.HasMember("Extension") && !value["Extension"].IsNull())
    {
        if (!value["Extension"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedUserInfo.Extension` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extension = string(value["Extension"].GetString());
        m_extensionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FeedUserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userIdList.begin(); itr != m_userIdList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tags.c_str(), allocator).Move(), allocator);
    }

    if (m_dislikeInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DislikeInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dislikeInfoList.begin(); itr != m_dislikeInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Age";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_age, allocator);
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gender, allocator);
    }

    if (m_degreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Degree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_degree.c_str(), allocator).Move(), allocator);
    }

    if (m_schoolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "School";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_school.c_str(), allocator).Move(), allocator);
    }

    if (m_occupationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Occupation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_occupation.c_str(), allocator).Move(), allocator);
    }

    if (m_industryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Industry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_industry.c_str(), allocator).Move(), allocator);
    }

    if (m_residentCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResidentCountry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_residentCountry.c_str(), allocator).Move(), allocator);
    }

    if (m_residentProvinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResidentProvince";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_residentProvince.c_str(), allocator).Move(), allocator);
    }

    if (m_residentCityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResidentCity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_residentCity.c_str(), allocator).Move(), allocator);
    }

    if (m_registerTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registerTimestamp, allocator);
    }

    if (m_membershipLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MembershipLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_membershipLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_lastLoginTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastLoginTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastLoginTimestamp, allocator);
    }

    if (m_lastLoginIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastLoginIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastLoginIp.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifyTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifyTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastModifyTimestamp, allocator);
    }

    if (m_extensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extension.c_str(), allocator).Move(), allocator);
    }

}


string FeedUserInfo::GetUserId() const
{
    return m_userId;
}

void FeedUserInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool FeedUserInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

vector<UserIdInfo> FeedUserInfo::GetUserIdList() const
{
    return m_userIdList;
}

void FeedUserInfo::SetUserIdList(const vector<UserIdInfo>& _userIdList)
{
    m_userIdList = _userIdList;
    m_userIdListHasBeenSet = true;
}

bool FeedUserInfo::UserIdListHasBeenSet() const
{
    return m_userIdListHasBeenSet;
}

string FeedUserInfo::GetTags() const
{
    return m_tags;
}

void FeedUserInfo::SetTags(const string& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool FeedUserInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<DislikeInfo> FeedUserInfo::GetDislikeInfoList() const
{
    return m_dislikeInfoList;
}

void FeedUserInfo::SetDislikeInfoList(const vector<DislikeInfo>& _dislikeInfoList)
{
    m_dislikeInfoList = _dislikeInfoList;
    m_dislikeInfoListHasBeenSet = true;
}

bool FeedUserInfo::DislikeInfoListHasBeenSet() const
{
    return m_dislikeInfoListHasBeenSet;
}

int64_t FeedUserInfo::GetAge() const
{
    return m_age;
}

void FeedUserInfo::SetAge(const int64_t& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool FeedUserInfo::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

int64_t FeedUserInfo::GetGender() const
{
    return m_gender;
}

void FeedUserInfo::SetGender(const int64_t& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool FeedUserInfo::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

string FeedUserInfo::GetDegree() const
{
    return m_degree;
}

void FeedUserInfo::SetDegree(const string& _degree)
{
    m_degree = _degree;
    m_degreeHasBeenSet = true;
}

bool FeedUserInfo::DegreeHasBeenSet() const
{
    return m_degreeHasBeenSet;
}

string FeedUserInfo::GetSchool() const
{
    return m_school;
}

void FeedUserInfo::SetSchool(const string& _school)
{
    m_school = _school;
    m_schoolHasBeenSet = true;
}

bool FeedUserInfo::SchoolHasBeenSet() const
{
    return m_schoolHasBeenSet;
}

string FeedUserInfo::GetOccupation() const
{
    return m_occupation;
}

void FeedUserInfo::SetOccupation(const string& _occupation)
{
    m_occupation = _occupation;
    m_occupationHasBeenSet = true;
}

bool FeedUserInfo::OccupationHasBeenSet() const
{
    return m_occupationHasBeenSet;
}

string FeedUserInfo::GetIndustry() const
{
    return m_industry;
}

void FeedUserInfo::SetIndustry(const string& _industry)
{
    m_industry = _industry;
    m_industryHasBeenSet = true;
}

bool FeedUserInfo::IndustryHasBeenSet() const
{
    return m_industryHasBeenSet;
}

string FeedUserInfo::GetResidentCountry() const
{
    return m_residentCountry;
}

void FeedUserInfo::SetResidentCountry(const string& _residentCountry)
{
    m_residentCountry = _residentCountry;
    m_residentCountryHasBeenSet = true;
}

bool FeedUserInfo::ResidentCountryHasBeenSet() const
{
    return m_residentCountryHasBeenSet;
}

string FeedUserInfo::GetResidentProvince() const
{
    return m_residentProvince;
}

void FeedUserInfo::SetResidentProvince(const string& _residentProvince)
{
    m_residentProvince = _residentProvince;
    m_residentProvinceHasBeenSet = true;
}

bool FeedUserInfo::ResidentProvinceHasBeenSet() const
{
    return m_residentProvinceHasBeenSet;
}

string FeedUserInfo::GetResidentCity() const
{
    return m_residentCity;
}

void FeedUserInfo::SetResidentCity(const string& _residentCity)
{
    m_residentCity = _residentCity;
    m_residentCityHasBeenSet = true;
}

bool FeedUserInfo::ResidentCityHasBeenSet() const
{
    return m_residentCityHasBeenSet;
}

int64_t FeedUserInfo::GetRegisterTimestamp() const
{
    return m_registerTimestamp;
}

void FeedUserInfo::SetRegisterTimestamp(const int64_t& _registerTimestamp)
{
    m_registerTimestamp = _registerTimestamp;
    m_registerTimestampHasBeenSet = true;
}

bool FeedUserInfo::RegisterTimestampHasBeenSet() const
{
    return m_registerTimestampHasBeenSet;
}

string FeedUserInfo::GetMembershipLevel() const
{
    return m_membershipLevel;
}

void FeedUserInfo::SetMembershipLevel(const string& _membershipLevel)
{
    m_membershipLevel = _membershipLevel;
    m_membershipLevelHasBeenSet = true;
}

bool FeedUserInfo::MembershipLevelHasBeenSet() const
{
    return m_membershipLevelHasBeenSet;
}

int64_t FeedUserInfo::GetLastLoginTimestamp() const
{
    return m_lastLoginTimestamp;
}

void FeedUserInfo::SetLastLoginTimestamp(const int64_t& _lastLoginTimestamp)
{
    m_lastLoginTimestamp = _lastLoginTimestamp;
    m_lastLoginTimestampHasBeenSet = true;
}

bool FeedUserInfo::LastLoginTimestampHasBeenSet() const
{
    return m_lastLoginTimestampHasBeenSet;
}

string FeedUserInfo::GetLastLoginIp() const
{
    return m_lastLoginIp;
}

void FeedUserInfo::SetLastLoginIp(const string& _lastLoginIp)
{
    m_lastLoginIp = _lastLoginIp;
    m_lastLoginIpHasBeenSet = true;
}

bool FeedUserInfo::LastLoginIpHasBeenSet() const
{
    return m_lastLoginIpHasBeenSet;
}

int64_t FeedUserInfo::GetLastModifyTimestamp() const
{
    return m_lastModifyTimestamp;
}

void FeedUserInfo::SetLastModifyTimestamp(const int64_t& _lastModifyTimestamp)
{
    m_lastModifyTimestamp = _lastModifyTimestamp;
    m_lastModifyTimestampHasBeenSet = true;
}

bool FeedUserInfo::LastModifyTimestampHasBeenSet() const
{
    return m_lastModifyTimestampHasBeenSet;
}

string FeedUserInfo::GetExtension() const
{
    return m_extension;
}

void FeedUserInfo::SetExtension(const string& _extension)
{
    m_extension = _extension;
    m_extensionHasBeenSet = true;
}

bool FeedUserInfo::ExtensionHasBeenSet() const
{
    return m_extensionHasBeenSet;
}


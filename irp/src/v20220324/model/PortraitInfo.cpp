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

#include <tencentcloud/irp/v20220324/model/PortraitInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Irp::V20220324::Model;
using namespace std;

PortraitInfo::PortraitInfo() :
    m_userIdListHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_ageHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_degreeHasBeenSet(false),
    m_schoolHasBeenSet(false),
    m_occupationHasBeenSet(false),
    m_industryHasBeenSet(false),
    m_residentCountryHasBeenSet(false),
    m_residentProvinceHasBeenSet(false),
    m_residentCityHasBeenSet(false),
    m_residentDistrictHasBeenSet(false),
    m_phoneMd5HasBeenSet(false),
    m_phoneImeiHasBeenSet(false),
    m_idfaHasBeenSet(false),
    m_registerTimestampHasBeenSet(false),
    m_membershipLevelHasBeenSet(false),
    m_lastLoginTimestampHasBeenSet(false),
    m_lastLoginIpHasBeenSet(false),
    m_lastModifyTimestampHasBeenSet(false),
    m_tagInfoListHasBeenSet(false),
    m_authorInfoListHasBeenSet(false),
    m_dislikeInfoListHasBeenSet(false),
    m_extensionHasBeenSet(false),
    m_oaidHasBeenSet(false),
    m_androidIdHasBeenSet(false)
{
}

CoreInternalOutcome PortraitInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserIdList") && !value["UserIdList"].IsNull())
    {
        if (!value["UserIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.UserIdList` is not array type"));

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

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.Age` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_age = value["Age"].GetInt64();
        m_ageHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.Gender` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gender = value["Gender"].GetInt64();
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("Degree") && !value["Degree"].IsNull())
    {
        if (!value["Degree"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.Degree` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_degree = string(value["Degree"].GetString());
        m_degreeHasBeenSet = true;
    }

    if (value.HasMember("School") && !value["School"].IsNull())
    {
        if (!value["School"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.School` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_school = string(value["School"].GetString());
        m_schoolHasBeenSet = true;
    }

    if (value.HasMember("Occupation") && !value["Occupation"].IsNull())
    {
        if (!value["Occupation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.Occupation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_occupation = string(value["Occupation"].GetString());
        m_occupationHasBeenSet = true;
    }

    if (value.HasMember("Industry") && !value["Industry"].IsNull())
    {
        if (!value["Industry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.Industry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_industry = string(value["Industry"].GetString());
        m_industryHasBeenSet = true;
    }

    if (value.HasMember("ResidentCountry") && !value["ResidentCountry"].IsNull())
    {
        if (!value["ResidentCountry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.ResidentCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_residentCountry = string(value["ResidentCountry"].GetString());
        m_residentCountryHasBeenSet = true;
    }

    if (value.HasMember("ResidentProvince") && !value["ResidentProvince"].IsNull())
    {
        if (!value["ResidentProvince"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.ResidentProvince` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_residentProvince = string(value["ResidentProvince"].GetString());
        m_residentProvinceHasBeenSet = true;
    }

    if (value.HasMember("ResidentCity") && !value["ResidentCity"].IsNull())
    {
        if (!value["ResidentCity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.ResidentCity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_residentCity = string(value["ResidentCity"].GetString());
        m_residentCityHasBeenSet = true;
    }

    if (value.HasMember("ResidentDistrict") && !value["ResidentDistrict"].IsNull())
    {
        if (!value["ResidentDistrict"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.ResidentDistrict` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_residentDistrict = string(value["ResidentDistrict"].GetString());
        m_residentDistrictHasBeenSet = true;
    }

    if (value.HasMember("PhoneMd5") && !value["PhoneMd5"].IsNull())
    {
        if (!value["PhoneMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.PhoneMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneMd5 = string(value["PhoneMd5"].GetString());
        m_phoneMd5HasBeenSet = true;
    }

    if (value.HasMember("PhoneImei") && !value["PhoneImei"].IsNull())
    {
        if (!value["PhoneImei"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.PhoneImei` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneImei = string(value["PhoneImei"].GetString());
        m_phoneImeiHasBeenSet = true;
    }

    if (value.HasMember("Idfa") && !value["Idfa"].IsNull())
    {
        if (!value["Idfa"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.Idfa` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idfa = string(value["Idfa"].GetString());
        m_idfaHasBeenSet = true;
    }

    if (value.HasMember("RegisterTimestamp") && !value["RegisterTimestamp"].IsNull())
    {
        if (!value["RegisterTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.RegisterTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_registerTimestamp = value["RegisterTimestamp"].GetInt64();
        m_registerTimestampHasBeenSet = true;
    }

    if (value.HasMember("MembershipLevel") && !value["MembershipLevel"].IsNull())
    {
        if (!value["MembershipLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.MembershipLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_membershipLevel = string(value["MembershipLevel"].GetString());
        m_membershipLevelHasBeenSet = true;
    }

    if (value.HasMember("LastLoginTimestamp") && !value["LastLoginTimestamp"].IsNull())
    {
        if (!value["LastLoginTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.LastLoginTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastLoginTimestamp = value["LastLoginTimestamp"].GetInt64();
        m_lastLoginTimestampHasBeenSet = true;
    }

    if (value.HasMember("LastLoginIp") && !value["LastLoginIp"].IsNull())
    {
        if (!value["LastLoginIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.LastLoginIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastLoginIp = string(value["LastLoginIp"].GetString());
        m_lastLoginIpHasBeenSet = true;
    }

    if (value.HasMember("LastModifyTimestamp") && !value["LastModifyTimestamp"].IsNull())
    {
        if (!value["LastModifyTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.LastModifyTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifyTimestamp = value["LastModifyTimestamp"].GetInt64();
        m_lastModifyTimestampHasBeenSet = true;
    }

    if (value.HasMember("TagInfoList") && !value["TagInfoList"].IsNull())
    {
        if (!value["TagInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.TagInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagInfoList.push_back(item);
        }
        m_tagInfoListHasBeenSet = true;
    }

    if (value.HasMember("AuthorInfoList") && !value["AuthorInfoList"].IsNull())
    {
        if (!value["AuthorInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.AuthorInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["AuthorInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AuthorInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_authorInfoList.push_back(item);
        }
        m_authorInfoListHasBeenSet = true;
    }

    if (value.HasMember("DislikeInfoList") && !value["DislikeInfoList"].IsNull())
    {
        if (!value["DislikeInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.DislikeInfoList` is not array type"));

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

    if (value.HasMember("Extension") && !value["Extension"].IsNull())
    {
        if (!value["Extension"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.Extension` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extension = string(value["Extension"].GetString());
        m_extensionHasBeenSet = true;
    }

    if (value.HasMember("Oaid") && !value["Oaid"].IsNull())
    {
        if (!value["Oaid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.Oaid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oaid = string(value["Oaid"].GetString());
        m_oaidHasBeenSet = true;
    }

    if (value.HasMember("AndroidId") && !value["AndroidId"].IsNull())
    {
        if (!value["AndroidId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitInfo.AndroidId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidId = string(value["AndroidId"].GetString());
        m_androidIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PortraitInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
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

    if (m_residentDistrictHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResidentDistrict";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_residentDistrict.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneImeiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneImei";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneImei.c_str(), allocator).Move(), allocator);
    }

    if (m_idfaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Idfa";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idfa.c_str(), allocator).Move(), allocator);
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

    if (m_tagInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagInfoList.begin(); itr != m_tagInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_authorInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_authorInfoList.begin(); itr != m_authorInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_extensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extension.c_str(), allocator).Move(), allocator);
    }

    if (m_oaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Oaid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oaid.c_str(), allocator).Move(), allocator);
    }

    if (m_androidIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidId.c_str(), allocator).Move(), allocator);
    }

}


vector<UserIdInfo> PortraitInfo::GetUserIdList() const
{
    return m_userIdList;
}

void PortraitInfo::SetUserIdList(const vector<UserIdInfo>& _userIdList)
{
    m_userIdList = _userIdList;
    m_userIdListHasBeenSet = true;
}

bool PortraitInfo::UserIdListHasBeenSet() const
{
    return m_userIdListHasBeenSet;
}

string PortraitInfo::GetAppId() const
{
    return m_appId;
}

void PortraitInfo::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool PortraitInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t PortraitInfo::GetAge() const
{
    return m_age;
}

void PortraitInfo::SetAge(const int64_t& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool PortraitInfo::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

int64_t PortraitInfo::GetGender() const
{
    return m_gender;
}

void PortraitInfo::SetGender(const int64_t& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool PortraitInfo::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

string PortraitInfo::GetDegree() const
{
    return m_degree;
}

void PortraitInfo::SetDegree(const string& _degree)
{
    m_degree = _degree;
    m_degreeHasBeenSet = true;
}

bool PortraitInfo::DegreeHasBeenSet() const
{
    return m_degreeHasBeenSet;
}

string PortraitInfo::GetSchool() const
{
    return m_school;
}

void PortraitInfo::SetSchool(const string& _school)
{
    m_school = _school;
    m_schoolHasBeenSet = true;
}

bool PortraitInfo::SchoolHasBeenSet() const
{
    return m_schoolHasBeenSet;
}

string PortraitInfo::GetOccupation() const
{
    return m_occupation;
}

void PortraitInfo::SetOccupation(const string& _occupation)
{
    m_occupation = _occupation;
    m_occupationHasBeenSet = true;
}

bool PortraitInfo::OccupationHasBeenSet() const
{
    return m_occupationHasBeenSet;
}

string PortraitInfo::GetIndustry() const
{
    return m_industry;
}

void PortraitInfo::SetIndustry(const string& _industry)
{
    m_industry = _industry;
    m_industryHasBeenSet = true;
}

bool PortraitInfo::IndustryHasBeenSet() const
{
    return m_industryHasBeenSet;
}

string PortraitInfo::GetResidentCountry() const
{
    return m_residentCountry;
}

void PortraitInfo::SetResidentCountry(const string& _residentCountry)
{
    m_residentCountry = _residentCountry;
    m_residentCountryHasBeenSet = true;
}

bool PortraitInfo::ResidentCountryHasBeenSet() const
{
    return m_residentCountryHasBeenSet;
}

string PortraitInfo::GetResidentProvince() const
{
    return m_residentProvince;
}

void PortraitInfo::SetResidentProvince(const string& _residentProvince)
{
    m_residentProvince = _residentProvince;
    m_residentProvinceHasBeenSet = true;
}

bool PortraitInfo::ResidentProvinceHasBeenSet() const
{
    return m_residentProvinceHasBeenSet;
}

string PortraitInfo::GetResidentCity() const
{
    return m_residentCity;
}

void PortraitInfo::SetResidentCity(const string& _residentCity)
{
    m_residentCity = _residentCity;
    m_residentCityHasBeenSet = true;
}

bool PortraitInfo::ResidentCityHasBeenSet() const
{
    return m_residentCityHasBeenSet;
}

string PortraitInfo::GetResidentDistrict() const
{
    return m_residentDistrict;
}

void PortraitInfo::SetResidentDistrict(const string& _residentDistrict)
{
    m_residentDistrict = _residentDistrict;
    m_residentDistrictHasBeenSet = true;
}

bool PortraitInfo::ResidentDistrictHasBeenSet() const
{
    return m_residentDistrictHasBeenSet;
}

string PortraitInfo::GetPhoneMd5() const
{
    return m_phoneMd5;
}

void PortraitInfo::SetPhoneMd5(const string& _phoneMd5)
{
    m_phoneMd5 = _phoneMd5;
    m_phoneMd5HasBeenSet = true;
}

bool PortraitInfo::PhoneMd5HasBeenSet() const
{
    return m_phoneMd5HasBeenSet;
}

string PortraitInfo::GetPhoneImei() const
{
    return m_phoneImei;
}

void PortraitInfo::SetPhoneImei(const string& _phoneImei)
{
    m_phoneImei = _phoneImei;
    m_phoneImeiHasBeenSet = true;
}

bool PortraitInfo::PhoneImeiHasBeenSet() const
{
    return m_phoneImeiHasBeenSet;
}

string PortraitInfo::GetIdfa() const
{
    return m_idfa;
}

void PortraitInfo::SetIdfa(const string& _idfa)
{
    m_idfa = _idfa;
    m_idfaHasBeenSet = true;
}

bool PortraitInfo::IdfaHasBeenSet() const
{
    return m_idfaHasBeenSet;
}

int64_t PortraitInfo::GetRegisterTimestamp() const
{
    return m_registerTimestamp;
}

void PortraitInfo::SetRegisterTimestamp(const int64_t& _registerTimestamp)
{
    m_registerTimestamp = _registerTimestamp;
    m_registerTimestampHasBeenSet = true;
}

bool PortraitInfo::RegisterTimestampHasBeenSet() const
{
    return m_registerTimestampHasBeenSet;
}

string PortraitInfo::GetMembershipLevel() const
{
    return m_membershipLevel;
}

void PortraitInfo::SetMembershipLevel(const string& _membershipLevel)
{
    m_membershipLevel = _membershipLevel;
    m_membershipLevelHasBeenSet = true;
}

bool PortraitInfo::MembershipLevelHasBeenSet() const
{
    return m_membershipLevelHasBeenSet;
}

int64_t PortraitInfo::GetLastLoginTimestamp() const
{
    return m_lastLoginTimestamp;
}

void PortraitInfo::SetLastLoginTimestamp(const int64_t& _lastLoginTimestamp)
{
    m_lastLoginTimestamp = _lastLoginTimestamp;
    m_lastLoginTimestampHasBeenSet = true;
}

bool PortraitInfo::LastLoginTimestampHasBeenSet() const
{
    return m_lastLoginTimestampHasBeenSet;
}

string PortraitInfo::GetLastLoginIp() const
{
    return m_lastLoginIp;
}

void PortraitInfo::SetLastLoginIp(const string& _lastLoginIp)
{
    m_lastLoginIp = _lastLoginIp;
    m_lastLoginIpHasBeenSet = true;
}

bool PortraitInfo::LastLoginIpHasBeenSet() const
{
    return m_lastLoginIpHasBeenSet;
}

int64_t PortraitInfo::GetLastModifyTimestamp() const
{
    return m_lastModifyTimestamp;
}

void PortraitInfo::SetLastModifyTimestamp(const int64_t& _lastModifyTimestamp)
{
    m_lastModifyTimestamp = _lastModifyTimestamp;
    m_lastModifyTimestampHasBeenSet = true;
}

bool PortraitInfo::LastModifyTimestampHasBeenSet() const
{
    return m_lastModifyTimestampHasBeenSet;
}

vector<TagInfo> PortraitInfo::GetTagInfoList() const
{
    return m_tagInfoList;
}

void PortraitInfo::SetTagInfoList(const vector<TagInfo>& _tagInfoList)
{
    m_tagInfoList = _tagInfoList;
    m_tagInfoListHasBeenSet = true;
}

bool PortraitInfo::TagInfoListHasBeenSet() const
{
    return m_tagInfoListHasBeenSet;
}

vector<AuthorInfo> PortraitInfo::GetAuthorInfoList() const
{
    return m_authorInfoList;
}

void PortraitInfo::SetAuthorInfoList(const vector<AuthorInfo>& _authorInfoList)
{
    m_authorInfoList = _authorInfoList;
    m_authorInfoListHasBeenSet = true;
}

bool PortraitInfo::AuthorInfoListHasBeenSet() const
{
    return m_authorInfoListHasBeenSet;
}

vector<DislikeInfo> PortraitInfo::GetDislikeInfoList() const
{
    return m_dislikeInfoList;
}

void PortraitInfo::SetDislikeInfoList(const vector<DislikeInfo>& _dislikeInfoList)
{
    m_dislikeInfoList = _dislikeInfoList;
    m_dislikeInfoListHasBeenSet = true;
}

bool PortraitInfo::DislikeInfoListHasBeenSet() const
{
    return m_dislikeInfoListHasBeenSet;
}

string PortraitInfo::GetExtension() const
{
    return m_extension;
}

void PortraitInfo::SetExtension(const string& _extension)
{
    m_extension = _extension;
    m_extensionHasBeenSet = true;
}

bool PortraitInfo::ExtensionHasBeenSet() const
{
    return m_extensionHasBeenSet;
}

string PortraitInfo::GetOaid() const
{
    return m_oaid;
}

void PortraitInfo::SetOaid(const string& _oaid)
{
    m_oaid = _oaid;
    m_oaidHasBeenSet = true;
}

bool PortraitInfo::OaidHasBeenSet() const
{
    return m_oaidHasBeenSet;
}

string PortraitInfo::GetAndroidId() const
{
    return m_androidId;
}

void PortraitInfo::SetAndroidId(const string& _androidId)
{
    m_androidId = _androidId;
    m_androidIdHasBeenSet = true;
}

bool PortraitInfo::AndroidIdHasBeenSet() const
{
    return m_androidIdHasBeenSet;
}


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

#include <tencentcloud/solar/v20181011/model/CustomerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Solar::V20181011::Model;
using namespace std;

CustomerInfo::CustomerInfo() :
    m_activityHasBeenSet(false),
    m_audienceUserIdHasBeenSet(false),
    m_avatarHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_lastActiveTimeHasBeenSet(false),
    m_markFlagHasBeenSet(false),
    m_monthActiveHasBeenSet(false),
    m_monthRecommendHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_realNameHasBeenSet(false),
    m_relChannelFlagHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_spreadHasBeenSet(false),
    m_weekActiveHasBeenSet(false),
    m_weekRecommendHasBeenSet(false),
    m_wxCityHasBeenSet(false),
    m_wxCountryHasBeenSet(false),
    m_wxNicknameHasBeenSet(false),
    m_wxProvinceHasBeenSet(false)
{
}

CoreInternalOutcome CustomerInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Activity") && !value["Activity"].IsNull())
    {
        if (!value["Activity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerInfo.Activity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activity = value["Activity"].GetInt64();
        m_activityHasBeenSet = true;
    }

    if (value.HasMember("AudienceUserId") && !value["AudienceUserId"].IsNull())
    {
        if (!value["AudienceUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerInfo.AudienceUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audienceUserId = string(value["AudienceUserId"].GetString());
        m_audienceUserIdHasBeenSet = true;
    }

    if (value.HasMember("Avatar") && !value["Avatar"].IsNull())
    {
        if (!value["Avatar"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerInfo.Avatar` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avatar = string(value["Avatar"].GetString());
        m_avatarHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerInfo.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("LastActiveTime") && !value["LastActiveTime"].IsNull())
    {
        if (!value["LastActiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerInfo.LastActiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastActiveTime = string(value["LastActiveTime"].GetString());
        m_lastActiveTimeHasBeenSet = true;
    }

    if (value.HasMember("MarkFlag") && !value["MarkFlag"].IsNull())
    {
        if (!value["MarkFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerInfo.MarkFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_markFlag = string(value["MarkFlag"].GetString());
        m_markFlagHasBeenSet = true;
    }

    if (value.HasMember("MonthActive") && !value["MonthActive"].IsNull())
    {
        if (!value["MonthActive"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerInfo.MonthActive` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monthActive = value["MonthActive"].GetInt64();
        m_monthActiveHasBeenSet = true;
    }

    if (value.HasMember("MonthRecommend") && !value["MonthRecommend"].IsNull())
    {
        if (!value["MonthRecommend"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerInfo.MonthRecommend` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monthRecommend = value["MonthRecommend"].GetInt64();
        m_monthRecommendHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerInfo.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerInfo.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("RealName") && !value["RealName"].IsNull())
    {
        if (!value["RealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerInfo.RealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realName = string(value["RealName"].GetString());
        m_realNameHasBeenSet = true;
    }

    if (value.HasMember("RelChannelFlag") && !value["RelChannelFlag"].IsNull())
    {
        if (!value["RelChannelFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerInfo.RelChannelFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_relChannelFlag = value["RelChannelFlag"].GetInt64();
        m_relChannelFlagHasBeenSet = true;
    }

    if (value.HasMember("Sex") && !value["Sex"].IsNull())
    {
        if (!value["Sex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerInfo.Sex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sex = value["Sex"].GetInt64();
        m_sexHasBeenSet = true;
    }

    if (value.HasMember("Spread") && !value["Spread"].IsNull())
    {
        if (!value["Spread"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerInfo.Spread` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_spread = value["Spread"].GetInt64();
        m_spreadHasBeenSet = true;
    }

    if (value.HasMember("WeekActive") && !value["WeekActive"].IsNull())
    {
        if (!value["WeekActive"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerInfo.WeekActive` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weekActive = value["WeekActive"].GetInt64();
        m_weekActiveHasBeenSet = true;
    }

    if (value.HasMember("WeekRecommend") && !value["WeekRecommend"].IsNull())
    {
        if (!value["WeekRecommend"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerInfo.WeekRecommend` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weekRecommend = value["WeekRecommend"].GetInt64();
        m_weekRecommendHasBeenSet = true;
    }

    if (value.HasMember("WxCity") && !value["WxCity"].IsNull())
    {
        if (!value["WxCity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerInfo.WxCity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wxCity = string(value["WxCity"].GetString());
        m_wxCityHasBeenSet = true;
    }

    if (value.HasMember("WxCountry") && !value["WxCountry"].IsNull())
    {
        if (!value["WxCountry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerInfo.WxCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wxCountry = string(value["WxCountry"].GetString());
        m_wxCountryHasBeenSet = true;
    }

    if (value.HasMember("WxNickname") && !value["WxNickname"].IsNull())
    {
        if (!value["WxNickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerInfo.WxNickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wxNickname = string(value["WxNickname"].GetString());
        m_wxNicknameHasBeenSet = true;
    }

    if (value.HasMember("WxProvince") && !value["WxProvince"].IsNull())
    {
        if (!value["WxProvince"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerInfo.WxProvince` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wxProvince = string(value["WxProvince"].GetString());
        m_wxProvinceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomerInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_activityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Activity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activity, allocator);
    }

    if (m_audienceUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudienceUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audienceUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_avatarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Avatar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avatar.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_lastActiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastActiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastActiveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_markFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_markFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_monthActiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonthActive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monthActive, allocator);
    }

    if (m_monthRecommendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonthRecommend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monthRecommend, allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_realNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realName.c_str(), allocator).Move(), allocator);
    }

    if (m_relChannelFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelChannelFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relChannelFlag, allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sex, allocator);
    }

    if (m_spreadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spread";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_spread, allocator);
    }

    if (m_weekActiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeekActive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weekActive, allocator);
    }

    if (m_weekRecommendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeekRecommend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weekRecommend, allocator);
    }

    if (m_wxCityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxCity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wxCity.c_str(), allocator).Move(), allocator);
    }

    if (m_wxCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxCountry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wxCountry.c_str(), allocator).Move(), allocator);
    }

    if (m_wxNicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxNickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wxNickname.c_str(), allocator).Move(), allocator);
    }

    if (m_wxProvinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxProvince";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wxProvince.c_str(), allocator).Move(), allocator);
    }

}


int64_t CustomerInfo::GetActivity() const
{
    return m_activity;
}

void CustomerInfo::SetActivity(const int64_t& _activity)
{
    m_activity = _activity;
    m_activityHasBeenSet = true;
}

bool CustomerInfo::ActivityHasBeenSet() const
{
    return m_activityHasBeenSet;
}

string CustomerInfo::GetAudienceUserId() const
{
    return m_audienceUserId;
}

void CustomerInfo::SetAudienceUserId(const string& _audienceUserId)
{
    m_audienceUserId = _audienceUserId;
    m_audienceUserIdHasBeenSet = true;
}

bool CustomerInfo::AudienceUserIdHasBeenSet() const
{
    return m_audienceUserIdHasBeenSet;
}

string CustomerInfo::GetAvatar() const
{
    return m_avatar;
}

void CustomerInfo::SetAvatar(const string& _avatar)
{
    m_avatar = _avatar;
    m_avatarHasBeenSet = true;
}

bool CustomerInfo::AvatarHasBeenSet() const
{
    return m_avatarHasBeenSet;
}

string CustomerInfo::GetCity() const
{
    return m_city;
}

void CustomerInfo::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool CustomerInfo::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string CustomerInfo::GetLastActiveTime() const
{
    return m_lastActiveTime;
}

void CustomerInfo::SetLastActiveTime(const string& _lastActiveTime)
{
    m_lastActiveTime = _lastActiveTime;
    m_lastActiveTimeHasBeenSet = true;
}

bool CustomerInfo::LastActiveTimeHasBeenSet() const
{
    return m_lastActiveTimeHasBeenSet;
}

string CustomerInfo::GetMarkFlag() const
{
    return m_markFlag;
}

void CustomerInfo::SetMarkFlag(const string& _markFlag)
{
    m_markFlag = _markFlag;
    m_markFlagHasBeenSet = true;
}

bool CustomerInfo::MarkFlagHasBeenSet() const
{
    return m_markFlagHasBeenSet;
}

int64_t CustomerInfo::GetMonthActive() const
{
    return m_monthActive;
}

void CustomerInfo::SetMonthActive(const int64_t& _monthActive)
{
    m_monthActive = _monthActive;
    m_monthActiveHasBeenSet = true;
}

bool CustomerInfo::MonthActiveHasBeenSet() const
{
    return m_monthActiveHasBeenSet;
}

int64_t CustomerInfo::GetMonthRecommend() const
{
    return m_monthRecommend;
}

void CustomerInfo::SetMonthRecommend(const int64_t& _monthRecommend)
{
    m_monthRecommend = _monthRecommend;
    m_monthRecommendHasBeenSet = true;
}

bool CustomerInfo::MonthRecommendHasBeenSet() const
{
    return m_monthRecommendHasBeenSet;
}

string CustomerInfo::GetPhone() const
{
    return m_phone;
}

void CustomerInfo::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool CustomerInfo::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string CustomerInfo::GetProvince() const
{
    return m_province;
}

void CustomerInfo::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool CustomerInfo::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string CustomerInfo::GetRealName() const
{
    return m_realName;
}

void CustomerInfo::SetRealName(const string& _realName)
{
    m_realName = _realName;
    m_realNameHasBeenSet = true;
}

bool CustomerInfo::RealNameHasBeenSet() const
{
    return m_realNameHasBeenSet;
}

int64_t CustomerInfo::GetRelChannelFlag() const
{
    return m_relChannelFlag;
}

void CustomerInfo::SetRelChannelFlag(const int64_t& _relChannelFlag)
{
    m_relChannelFlag = _relChannelFlag;
    m_relChannelFlagHasBeenSet = true;
}

bool CustomerInfo::RelChannelFlagHasBeenSet() const
{
    return m_relChannelFlagHasBeenSet;
}

int64_t CustomerInfo::GetSex() const
{
    return m_sex;
}

void CustomerInfo::SetSex(const int64_t& _sex)
{
    m_sex = _sex;
    m_sexHasBeenSet = true;
}

bool CustomerInfo::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

int64_t CustomerInfo::GetSpread() const
{
    return m_spread;
}

void CustomerInfo::SetSpread(const int64_t& _spread)
{
    m_spread = _spread;
    m_spreadHasBeenSet = true;
}

bool CustomerInfo::SpreadHasBeenSet() const
{
    return m_spreadHasBeenSet;
}

int64_t CustomerInfo::GetWeekActive() const
{
    return m_weekActive;
}

void CustomerInfo::SetWeekActive(const int64_t& _weekActive)
{
    m_weekActive = _weekActive;
    m_weekActiveHasBeenSet = true;
}

bool CustomerInfo::WeekActiveHasBeenSet() const
{
    return m_weekActiveHasBeenSet;
}

int64_t CustomerInfo::GetWeekRecommend() const
{
    return m_weekRecommend;
}

void CustomerInfo::SetWeekRecommend(const int64_t& _weekRecommend)
{
    m_weekRecommend = _weekRecommend;
    m_weekRecommendHasBeenSet = true;
}

bool CustomerInfo::WeekRecommendHasBeenSet() const
{
    return m_weekRecommendHasBeenSet;
}

string CustomerInfo::GetWxCity() const
{
    return m_wxCity;
}

void CustomerInfo::SetWxCity(const string& _wxCity)
{
    m_wxCity = _wxCity;
    m_wxCityHasBeenSet = true;
}

bool CustomerInfo::WxCityHasBeenSet() const
{
    return m_wxCityHasBeenSet;
}

string CustomerInfo::GetWxCountry() const
{
    return m_wxCountry;
}

void CustomerInfo::SetWxCountry(const string& _wxCountry)
{
    m_wxCountry = _wxCountry;
    m_wxCountryHasBeenSet = true;
}

bool CustomerInfo::WxCountryHasBeenSet() const
{
    return m_wxCountryHasBeenSet;
}

string CustomerInfo::GetWxNickname() const
{
    return m_wxNickname;
}

void CustomerInfo::SetWxNickname(const string& _wxNickname)
{
    m_wxNickname = _wxNickname;
    m_wxNicknameHasBeenSet = true;
}

bool CustomerInfo::WxNicknameHasBeenSet() const
{
    return m_wxNicknameHasBeenSet;
}

string CustomerInfo::GetWxProvince() const
{
    return m_wxProvince;
}

void CustomerInfo::SetWxProvince(const string& _wxProvince)
{
    m_wxProvince = _wxProvince;
    m_wxProvinceHasBeenSet = true;
}

bool CustomerInfo::WxProvinceHasBeenSet() const
{
    return m_wxProvinceHasBeenSet;
}


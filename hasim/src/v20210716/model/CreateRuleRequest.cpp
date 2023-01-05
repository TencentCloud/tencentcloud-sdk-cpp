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

#include <tencentcloud/hasim/v20210716/model/CreateRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hasim::V20210716::Model;
using namespace std;

CreateRuleRequest::CreateRuleRequest() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_isActiveHasBeenSet(false),
    m_noticeHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_dataThresholdHasBeenSet(false),
    m_districtHasBeenSet(false),
    m_distanceHasBeenSet(false),
    m_signalStrengthHasBeenSet(false),
    m_lostDayHasBeenSet(false),
    m_tagIDsHasBeenSet(false),
    m_salePlanHasBeenSet(false)
{
}

string CreateRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_isActiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsActive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isActive, allocator);
    }

    if (m_noticeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notice";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_notice, allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_dataThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataThreshold, allocator);
    }

    if (m_districtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "District";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_district, allocator);
    }

    if (m_distanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Distance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_distance, allocator);
    }

    if (m_signalStrengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignalStrength";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_signalStrength, allocator);
    }

    if (m_lostDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LostDay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lostDay, allocator);
    }

    if (m_tagIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagIDs.begin(); itr != m_tagIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_salePlanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalePlan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_salePlan.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRuleRequest::GetName() const
{
    return m_name;
}

void CreateRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t CreateRuleRequest::GetType() const
{
    return m_type;
}

void CreateRuleRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateRuleRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool CreateRuleRequest::GetIsActive() const
{
    return m_isActive;
}

void CreateRuleRequest::SetIsActive(const bool& _isActive)
{
    m_isActive = _isActive;
    m_isActiveHasBeenSet = true;
}

bool CreateRuleRequest::IsActiveHasBeenSet() const
{
    return m_isActiveHasBeenSet;
}

int64_t CreateRuleRequest::GetNotice() const
{
    return m_notice;
}

void CreateRuleRequest::SetNotice(const int64_t& _notice)
{
    m_notice = _notice;
    m_noticeHasBeenSet = true;
}

bool CreateRuleRequest::NoticeHasBeenSet() const
{
    return m_noticeHasBeenSet;
}

string CreateRuleRequest::GetEmail() const
{
    return m_email;
}

void CreateRuleRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool CreateRuleRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string CreateRuleRequest::GetUrl() const
{
    return m_url;
}

void CreateRuleRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool CreateRuleRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

int64_t CreateRuleRequest::GetDataThreshold() const
{
    return m_dataThreshold;
}

void CreateRuleRequest::SetDataThreshold(const int64_t& _dataThreshold)
{
    m_dataThreshold = _dataThreshold;
    m_dataThresholdHasBeenSet = true;
}

bool CreateRuleRequest::DataThresholdHasBeenSet() const
{
    return m_dataThresholdHasBeenSet;
}

int64_t CreateRuleRequest::GetDistrict() const
{
    return m_district;
}

void CreateRuleRequest::SetDistrict(const int64_t& _district)
{
    m_district = _district;
    m_districtHasBeenSet = true;
}

bool CreateRuleRequest::DistrictHasBeenSet() const
{
    return m_districtHasBeenSet;
}

int64_t CreateRuleRequest::GetDistance() const
{
    return m_distance;
}

void CreateRuleRequest::SetDistance(const int64_t& _distance)
{
    m_distance = _distance;
    m_distanceHasBeenSet = true;
}

bool CreateRuleRequest::DistanceHasBeenSet() const
{
    return m_distanceHasBeenSet;
}

int64_t CreateRuleRequest::GetSignalStrength() const
{
    return m_signalStrength;
}

void CreateRuleRequest::SetSignalStrength(const int64_t& _signalStrength)
{
    m_signalStrength = _signalStrength;
    m_signalStrengthHasBeenSet = true;
}

bool CreateRuleRequest::SignalStrengthHasBeenSet() const
{
    return m_signalStrengthHasBeenSet;
}

int64_t CreateRuleRequest::GetLostDay() const
{
    return m_lostDay;
}

void CreateRuleRequest::SetLostDay(const int64_t& _lostDay)
{
    m_lostDay = _lostDay;
    m_lostDayHasBeenSet = true;
}

bool CreateRuleRequest::LostDayHasBeenSet() const
{
    return m_lostDayHasBeenSet;
}

vector<int64_t> CreateRuleRequest::GetTagIDs() const
{
    return m_tagIDs;
}

void CreateRuleRequest::SetTagIDs(const vector<int64_t>& _tagIDs)
{
    m_tagIDs = _tagIDs;
    m_tagIDsHasBeenSet = true;
}

bool CreateRuleRequest::TagIDsHasBeenSet() const
{
    return m_tagIDsHasBeenSet;
}

string CreateRuleRequest::GetSalePlan() const
{
    return m_salePlan;
}

void CreateRuleRequest::SetSalePlan(const string& _salePlan)
{
    m_salePlan = _salePlan;
    m_salePlanHasBeenSet = true;
}

bool CreateRuleRequest::SalePlanHasBeenSet() const
{
    return m_salePlanHasBeenSet;
}



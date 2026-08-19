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

#include <tencentcloud/csip/v20221121/model/UebaUserSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

UebaUserSummary::UebaUserSummary() :
    m_allUserCountHasBeenSet(false),
    m_abnormalUserCountHasBeenSet(false),
    m_userCountHasBeenSet(false),
    m_subUserCountHasBeenSet(false),
    m_customUserCountHasBeenSet(false),
    m_elementHasBeenSet(false)
{
}

CoreInternalOutcome UebaUserSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AllUserCount") && !value["AllUserCount"].IsNull())
    {
        if (!value["AllUserCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UebaUserSummary.AllUserCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_allUserCount = value["AllUserCount"].GetUint64();
        m_allUserCountHasBeenSet = true;
    }

    if (value.HasMember("AbnormalUserCount") && !value["AbnormalUserCount"].IsNull())
    {
        if (!value["AbnormalUserCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UebaUserSummary.AbnormalUserCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_abnormalUserCount = value["AbnormalUserCount"].GetUint64();
        m_abnormalUserCountHasBeenSet = true;
    }

    if (value.HasMember("UserCount") && !value["UserCount"].IsNull())
    {
        if (!value["UserCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UebaUserSummary.UserCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userCount = value["UserCount"].GetUint64();
        m_userCountHasBeenSet = true;
    }

    if (value.HasMember("SubUserCount") && !value["SubUserCount"].IsNull())
    {
        if (!value["SubUserCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UebaUserSummary.SubUserCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subUserCount = value["SubUserCount"].GetUint64();
        m_subUserCountHasBeenSet = true;
    }

    if (value.HasMember("CustomUserCount") && !value["CustomUserCount"].IsNull())
    {
        if (!value["CustomUserCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UebaUserSummary.CustomUserCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_customUserCount = value["CustomUserCount"].GetUint64();
        m_customUserCountHasBeenSet = true;
    }

    if (value.HasMember("Element") && !value["Element"].IsNull())
    {
        if (!value["Element"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UebaUserSummary.Element` is not array type"));

        const rapidjson::Value &tmpValue = value["Element"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UebaUserSummaryElement item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_element.push_back(item);
        }
        m_elementHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UebaUserSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_allUserCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllUserCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allUserCount, allocator);
    }

    if (m_abnormalUserCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalUserCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_abnormalUserCount, allocator);
    }

    if (m_userCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userCount, allocator);
    }

    if (m_subUserCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUserCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subUserCount, allocator);
    }

    if (m_customUserCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomUserCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customUserCount, allocator);
    }

    if (m_elementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Element";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_element.begin(); itr != m_element.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t UebaUserSummary::GetAllUserCount() const
{
    return m_allUserCount;
}

void UebaUserSummary::SetAllUserCount(const uint64_t& _allUserCount)
{
    m_allUserCount = _allUserCount;
    m_allUserCountHasBeenSet = true;
}

bool UebaUserSummary::AllUserCountHasBeenSet() const
{
    return m_allUserCountHasBeenSet;
}

uint64_t UebaUserSummary::GetAbnormalUserCount() const
{
    return m_abnormalUserCount;
}

void UebaUserSummary::SetAbnormalUserCount(const uint64_t& _abnormalUserCount)
{
    m_abnormalUserCount = _abnormalUserCount;
    m_abnormalUserCountHasBeenSet = true;
}

bool UebaUserSummary::AbnormalUserCountHasBeenSet() const
{
    return m_abnormalUserCountHasBeenSet;
}

uint64_t UebaUserSummary::GetUserCount() const
{
    return m_userCount;
}

void UebaUserSummary::SetUserCount(const uint64_t& _userCount)
{
    m_userCount = _userCount;
    m_userCountHasBeenSet = true;
}

bool UebaUserSummary::UserCountHasBeenSet() const
{
    return m_userCountHasBeenSet;
}

uint64_t UebaUserSummary::GetSubUserCount() const
{
    return m_subUserCount;
}

void UebaUserSummary::SetSubUserCount(const uint64_t& _subUserCount)
{
    m_subUserCount = _subUserCount;
    m_subUserCountHasBeenSet = true;
}

bool UebaUserSummary::SubUserCountHasBeenSet() const
{
    return m_subUserCountHasBeenSet;
}

uint64_t UebaUserSummary::GetCustomUserCount() const
{
    return m_customUserCount;
}

void UebaUserSummary::SetCustomUserCount(const uint64_t& _customUserCount)
{
    m_customUserCount = _customUserCount;
    m_customUserCountHasBeenSet = true;
}

bool UebaUserSummary::CustomUserCountHasBeenSet() const
{
    return m_customUserCountHasBeenSet;
}

vector<UebaUserSummaryElement> UebaUserSummary::GetElement() const
{
    return m_element;
}

void UebaUserSummary::SetElement(const vector<UebaUserSummaryElement>& _element)
{
    m_element = _element;
    m_elementHasBeenSet = true;
}

bool UebaUserSummary::ElementHasBeenSet() const
{
    return m_elementHasBeenSet;
}


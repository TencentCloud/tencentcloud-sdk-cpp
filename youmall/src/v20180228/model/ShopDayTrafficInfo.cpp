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

#include <tencentcloud/youmall/v20180228/model/ShopDayTrafficInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

ShopDayTrafficInfo::ShopDayTrafficInfo() :
    m_dateHasBeenSet(false),
    m_dayTrafficTotalCountHasBeenSet(false),
    m_genderAgeTrafficDetailSetHasBeenSet(false)
{
}

CoreInternalOutcome ShopDayTrafficInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShopDayTrafficInfo.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("DayTrafficTotalCount") && !value["DayTrafficTotalCount"].IsNull())
    {
        if (!value["DayTrafficTotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ShopDayTrafficInfo.DayTrafficTotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dayTrafficTotalCount = value["DayTrafficTotalCount"].GetUint64();
        m_dayTrafficTotalCountHasBeenSet = true;
    }

    if (value.HasMember("GenderAgeTrafficDetailSet") && !value["GenderAgeTrafficDetailSet"].IsNull())
    {
        if (!value["GenderAgeTrafficDetailSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ShopDayTrafficInfo.GenderAgeTrafficDetailSet` is not array type"));

        const rapidjson::Value &tmpValue = value["GenderAgeTrafficDetailSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GenderAgeTrafficDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_genderAgeTrafficDetailSet.push_back(item);
        }
        m_genderAgeTrafficDetailSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShopDayTrafficInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_dayTrafficTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayTrafficTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dayTrafficTotalCount, allocator);
    }

    if (m_genderAgeTrafficDetailSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenderAgeTrafficDetailSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_genderAgeTrafficDetailSet.begin(); itr != m_genderAgeTrafficDetailSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ShopDayTrafficInfo::GetDate() const
{
    return m_date;
}

void ShopDayTrafficInfo::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool ShopDayTrafficInfo::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

uint64_t ShopDayTrafficInfo::GetDayTrafficTotalCount() const
{
    return m_dayTrafficTotalCount;
}

void ShopDayTrafficInfo::SetDayTrafficTotalCount(const uint64_t& _dayTrafficTotalCount)
{
    m_dayTrafficTotalCount = _dayTrafficTotalCount;
    m_dayTrafficTotalCountHasBeenSet = true;
}

bool ShopDayTrafficInfo::DayTrafficTotalCountHasBeenSet() const
{
    return m_dayTrafficTotalCountHasBeenSet;
}

vector<GenderAgeTrafficDetail> ShopDayTrafficInfo::GetGenderAgeTrafficDetailSet() const
{
    return m_genderAgeTrafficDetailSet;
}

void ShopDayTrafficInfo::SetGenderAgeTrafficDetailSet(const vector<GenderAgeTrafficDetail>& _genderAgeTrafficDetailSet)
{
    m_genderAgeTrafficDetailSet = _genderAgeTrafficDetailSet;
    m_genderAgeTrafficDetailSetHasBeenSet = true;
}

bool ShopDayTrafficInfo::GenderAgeTrafficDetailSetHasBeenSet() const
{
    return m_genderAgeTrafficDetailSetHasBeenSet;
}


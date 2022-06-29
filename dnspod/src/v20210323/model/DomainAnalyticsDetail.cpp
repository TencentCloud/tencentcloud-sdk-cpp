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

#include <tencentcloud/dnspod/v20210323/model/DomainAnalyticsDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

DomainAnalyticsDetail::DomainAnalyticsDetail() :
    m_numHasBeenSet(false),
    m_dateKeyHasBeenSet(false),
    m_hourKeyHasBeenSet(false)
{
}

CoreInternalOutcome DomainAnalyticsDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Num") && !value["Num"].IsNull())
    {
        if (!value["Num"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAnalyticsDetail.Num` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_num = value["Num"].GetUint64();
        m_numHasBeenSet = true;
    }

    if (value.HasMember("DateKey") && !value["DateKey"].IsNull())
    {
        if (!value["DateKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAnalyticsDetail.DateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateKey = string(value["DateKey"].GetString());
        m_dateKeyHasBeenSet = true;
    }

    if (value.HasMember("HourKey") && !value["HourKey"].IsNull())
    {
        if (!value["HourKey"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAnalyticsDetail.HourKey` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hourKey = value["HourKey"].GetUint64();
        m_hourKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainAnalyticsDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_num, allocator);
    }

    if (m_dateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_hourKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HourKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hourKey, allocator);
    }

}


uint64_t DomainAnalyticsDetail::GetNum() const
{
    return m_num;
}

void DomainAnalyticsDetail::SetNum(const uint64_t& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool DomainAnalyticsDetail::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

string DomainAnalyticsDetail::GetDateKey() const
{
    return m_dateKey;
}

void DomainAnalyticsDetail::SetDateKey(const string& _dateKey)
{
    m_dateKey = _dateKey;
    m_dateKeyHasBeenSet = true;
}

bool DomainAnalyticsDetail::DateKeyHasBeenSet() const
{
    return m_dateKeyHasBeenSet;
}

uint64_t DomainAnalyticsDetail::GetHourKey() const
{
    return m_hourKey;
}

void DomainAnalyticsDetail::SetHourKey(const uint64_t& _hourKey)
{
    m_hourKey = _hourKey;
    m_hourKeyHasBeenSet = true;
}

bool DomainAnalyticsDetail::HourKeyHasBeenSet() const
{
    return m_hourKeyHasBeenSet;
}


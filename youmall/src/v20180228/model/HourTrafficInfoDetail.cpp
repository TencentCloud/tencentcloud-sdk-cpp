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

#include <tencentcloud/youmall/v20180228/model/HourTrafficInfoDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

HourTrafficInfoDetail::HourTrafficInfoDetail() :
    m_hourHasBeenSet(false),
    m_hourTrafficTotalCountHasBeenSet(false)
{
}

CoreInternalOutcome HourTrafficInfoDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Hour") && !value["Hour"].IsNull())
    {
        if (!value["Hour"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HourTrafficInfoDetail.Hour` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hour = value["Hour"].GetUint64();
        m_hourHasBeenSet = true;
    }

    if (value.HasMember("HourTrafficTotalCount") && !value["HourTrafficTotalCount"].IsNull())
    {
        if (!value["HourTrafficTotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HourTrafficInfoDetail.HourTrafficTotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hourTrafficTotalCount = value["HourTrafficTotalCount"].GetUint64();
        m_hourTrafficTotalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HourTrafficInfoDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hour, allocator);
    }

    if (m_hourTrafficTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HourTrafficTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hourTrafficTotalCount, allocator);
    }

}


uint64_t HourTrafficInfoDetail::GetHour() const
{
    return m_hour;
}

void HourTrafficInfoDetail::SetHour(const uint64_t& _hour)
{
    m_hour = _hour;
    m_hourHasBeenSet = true;
}

bool HourTrafficInfoDetail::HourHasBeenSet() const
{
    return m_hourHasBeenSet;
}

uint64_t HourTrafficInfoDetail::GetHourTrafficTotalCount() const
{
    return m_hourTrafficTotalCount;
}

void HourTrafficInfoDetail::SetHourTrafficTotalCount(const uint64_t& _hourTrafficTotalCount)
{
    m_hourTrafficTotalCount = _hourTrafficTotalCount;
    m_hourTrafficTotalCountHasBeenSet = true;
}

bool HourTrafficInfoDetail::HourTrafficTotalCountHasBeenSet() const
{
    return m_hourTrafficTotalCountHasBeenSet;
}


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

#include <tencentcloud/tcss/v20201101/model/ModifySecLogCleanSettingInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ModifySecLogCleanSettingInfoRequest::ModifySecLogCleanSettingInfoRequest() :
    m_reservesLimitHasBeenSet(false),
    m_reservesDeadlineHasBeenSet(false),
    m_dayLimitHasBeenSet(false)
{
}

string ModifySecLogCleanSettingInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_reservesLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservesLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reservesLimit, allocator);
    }

    if (m_reservesDeadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservesDeadline";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reservesDeadline, allocator);
    }

    if (m_dayLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dayLimit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifySecLogCleanSettingInfoRequest::GetReservesLimit() const
{
    return m_reservesLimit;
}

void ModifySecLogCleanSettingInfoRequest::SetReservesLimit(const uint64_t& _reservesLimit)
{
    m_reservesLimit = _reservesLimit;
    m_reservesLimitHasBeenSet = true;
}

bool ModifySecLogCleanSettingInfoRequest::ReservesLimitHasBeenSet() const
{
    return m_reservesLimitHasBeenSet;
}

uint64_t ModifySecLogCleanSettingInfoRequest::GetReservesDeadline() const
{
    return m_reservesDeadline;
}

void ModifySecLogCleanSettingInfoRequest::SetReservesDeadline(const uint64_t& _reservesDeadline)
{
    m_reservesDeadline = _reservesDeadline;
    m_reservesDeadlineHasBeenSet = true;
}

bool ModifySecLogCleanSettingInfoRequest::ReservesDeadlineHasBeenSet() const
{
    return m_reservesDeadlineHasBeenSet;
}

uint64_t ModifySecLogCleanSettingInfoRequest::GetDayLimit() const
{
    return m_dayLimit;
}

void ModifySecLogCleanSettingInfoRequest::SetDayLimit(const uint64_t& _dayLimit)
{
    m_dayLimit = _dayLimit;
    m_dayLimitHasBeenSet = true;
}

bool ModifySecLogCleanSettingInfoRequest::DayLimitHasBeenSet() const
{
    return m_dayLimitHasBeenSet;
}



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

#include <tencentcloud/cdb/v20170320/model/AddTimeWindowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

AddTimeWindowRequest::AddTimeWindowRequest() :
    m_instanceIdHasBeenSet(false),
    m_mondayHasBeenSet(false),
    m_tuesdayHasBeenSet(false),
    m_wednesdayHasBeenSet(false),
    m_thursdayHasBeenSet(false),
    m_fridayHasBeenSet(false),
    m_saturdayHasBeenSet(false),
    m_sundayHasBeenSet(false)
{
}

string AddTimeWindowRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_mondayHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Monday";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_monday.begin(); itr != m_monday.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tuesdayHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tuesday";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_tuesday.begin(); itr != m_tuesday.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_wednesdayHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Wednesday";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_wednesday.begin(); itr != m_wednesday.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_thursdayHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Thursday";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_thursday.begin(); itr != m_thursday.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fridayHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Friday";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_friday.begin(); itr != m_friday.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_saturdayHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Saturday";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_saturday.begin(); itr != m_saturday.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sundayHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Sunday";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_sunday.begin(); itr != m_sunday.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddTimeWindowRequest::GetInstanceId() const
{
    return m_instanceId;
}

void AddTimeWindowRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AddTimeWindowRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> AddTimeWindowRequest::GetMonday() const
{
    return m_monday;
}

void AddTimeWindowRequest::SetMonday(const vector<string>& _monday)
{
    m_monday = _monday;
    m_mondayHasBeenSet = true;
}

bool AddTimeWindowRequest::MondayHasBeenSet() const
{
    return m_mondayHasBeenSet;
}

vector<string> AddTimeWindowRequest::GetTuesday() const
{
    return m_tuesday;
}

void AddTimeWindowRequest::SetTuesday(const vector<string>& _tuesday)
{
    m_tuesday = _tuesday;
    m_tuesdayHasBeenSet = true;
}

bool AddTimeWindowRequest::TuesdayHasBeenSet() const
{
    return m_tuesdayHasBeenSet;
}

vector<string> AddTimeWindowRequest::GetWednesday() const
{
    return m_wednesday;
}

void AddTimeWindowRequest::SetWednesday(const vector<string>& _wednesday)
{
    m_wednesday = _wednesday;
    m_wednesdayHasBeenSet = true;
}

bool AddTimeWindowRequest::WednesdayHasBeenSet() const
{
    return m_wednesdayHasBeenSet;
}

vector<string> AddTimeWindowRequest::GetThursday() const
{
    return m_thursday;
}

void AddTimeWindowRequest::SetThursday(const vector<string>& _thursday)
{
    m_thursday = _thursday;
    m_thursdayHasBeenSet = true;
}

bool AddTimeWindowRequest::ThursdayHasBeenSet() const
{
    return m_thursdayHasBeenSet;
}

vector<string> AddTimeWindowRequest::GetFriday() const
{
    return m_friday;
}

void AddTimeWindowRequest::SetFriday(const vector<string>& _friday)
{
    m_friday = _friday;
    m_fridayHasBeenSet = true;
}

bool AddTimeWindowRequest::FridayHasBeenSet() const
{
    return m_fridayHasBeenSet;
}

vector<string> AddTimeWindowRequest::GetSaturday() const
{
    return m_saturday;
}

void AddTimeWindowRequest::SetSaturday(const vector<string>& _saturday)
{
    m_saturday = _saturday;
    m_saturdayHasBeenSet = true;
}

bool AddTimeWindowRequest::SaturdayHasBeenSet() const
{
    return m_saturdayHasBeenSet;
}

vector<string> AddTimeWindowRequest::GetSunday() const
{
    return m_sunday;
}

void AddTimeWindowRequest::SetSunday(const vector<string>& _sunday)
{
    m_sunday = _sunday;
    m_sundayHasBeenSet = true;
}

bool AddTimeWindowRequest::SundayHasBeenSet() const
{
    return m_sundayHasBeenSet;
}



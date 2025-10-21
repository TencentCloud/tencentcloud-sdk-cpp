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

#include <tencentcloud/ccc/v20200210/model/EventStaffDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

EventStaffDetail::EventStaffDetail() :
    m_staffsHasBeenSet(false)
{
}

CoreInternalOutcome EventStaffDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Staffs") && !value["Staffs"].IsNull())
    {
        if (!value["Staffs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventStaffDetail.Staffs` is not array type"));

        const rapidjson::Value &tmpValue = value["Staffs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventStaffElement item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_staffs.push_back(item);
        }
        m_staffsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventStaffDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_staffsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Staffs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_staffs.begin(); itr != m_staffs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<EventStaffElement> EventStaffDetail::GetStaffs() const
{
    return m_staffs;
}

void EventStaffDetail::SetStaffs(const vector<EventStaffElement>& _staffs)
{
    m_staffs = _staffs;
    m_staffsHasBeenSet = true;
}

bool EventStaffDetail::StaffsHasBeenSet() const
{
    return m_staffsHasBeenSet;
}


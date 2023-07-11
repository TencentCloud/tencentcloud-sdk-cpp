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

#include <tencentcloud/tchd/v20230306/model/ProductEventList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tchd::V20230306::Model;
using namespace std;

ProductEventList::ProductEventList() :
    m_eventListHasBeenSet(false)
{
}

CoreInternalOutcome ProductEventList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventList") && !value["EventList"].IsNull())
    {
        if (!value["EventList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProductEventList.EventList` is not array type"));

        const rapidjson::Value &tmpValue = value["EventList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eventList.push_back(item);
        }
        m_eventListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductEventList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eventList.begin(); itr != m_eventList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<EventDetail> ProductEventList::GetEventList() const
{
    return m_eventList;
}

void ProductEventList::SetEventList(const vector<EventDetail>& _eventList)
{
    m_eventList = _eventList;
    m_eventListHasBeenSet = true;
}

bool ProductEventList::EventListHasBeenSet() const
{
    return m_eventListHasBeenSet;
}


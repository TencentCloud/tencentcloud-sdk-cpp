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

#include <tencentcloud/cdn/v20180606/model/EventLogStatsData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

EventLogStatsData::EventLogStatsData() :
    m_datetimeHasBeenSet(false),
    m_requestHasBeenSet(false)
{
}

CoreInternalOutcome EventLogStatsData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Datetime") && !value["Datetime"].IsNull())
    {
        if (!value["Datetime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventLogStatsData.Datetime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datetime = string(value["Datetime"].GetString());
        m_datetimeHasBeenSet = true;
    }

    if (value.HasMember("Request") && !value["Request"].IsNull())
    {
        if (!value["Request"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventLogStatsData.Request` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_request = value["Request"].GetUint64();
        m_requestHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventLogStatsData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_datetimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Datetime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datetime.c_str(), allocator).Move(), allocator);
    }

    if (m_requestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Request";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_request, allocator);
    }

}


string EventLogStatsData::GetDatetime() const
{
    return m_datetime;
}

void EventLogStatsData::SetDatetime(const string& _datetime)
{
    m_datetime = _datetime;
    m_datetimeHasBeenSet = true;
}

bool EventLogStatsData::DatetimeHasBeenSet() const
{
    return m_datetimeHasBeenSet;
}

uint64_t EventLogStatsData::GetRequest() const
{
    return m_request;
}

void EventLogStatsData::SetRequest(const uint64_t& _request)
{
    m_request = _request;
    m_requestHasBeenSet = true;
}

bool EventLogStatsData::RequestHasBeenSet() const
{
    return m_requestHasBeenSet;
}


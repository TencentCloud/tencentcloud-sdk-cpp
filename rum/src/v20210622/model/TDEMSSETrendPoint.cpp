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

#include <tencentcloud/rum/v20210622/model/TDEMSSETrendPoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

TDEMSSETrendPoint::TDEMSSETrendPoint() :
    m_timeHasBeenSet(false),
    m_conversationCountHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome TDEMSSETrendPoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TDEMSSETrendPoint.Time` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_time = value["Time"].GetInt64();
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("ConversationCount") && !value["ConversationCount"].IsNull())
    {
        if (!value["ConversationCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TDEMSSETrendPoint.ConversationCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_conversationCount = value["ConversationCount"].GetInt64();
        m_conversationCountHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TDEMSSETrendPoint.Value` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetDouble();
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TDEMSSETrendPoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_time, allocator);
    }

    if (m_conversationCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConversationCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_conversationCount, allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

}


int64_t TDEMSSETrendPoint::GetTime() const
{
    return m_time;
}

void TDEMSSETrendPoint::SetTime(const int64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool TDEMSSETrendPoint::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

int64_t TDEMSSETrendPoint::GetConversationCount() const
{
    return m_conversationCount;
}

void TDEMSSETrendPoint::SetConversationCount(const int64_t& _conversationCount)
{
    m_conversationCount = _conversationCount;
    m_conversationCountHasBeenSet = true;
}

bool TDEMSSETrendPoint::ConversationCountHasBeenSet() const
{
    return m_conversationCountHasBeenSet;
}

double TDEMSSETrendPoint::GetValue() const
{
    return m_value;
}

void TDEMSSETrendPoint::SetValue(const double& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool TDEMSSETrendPoint::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}


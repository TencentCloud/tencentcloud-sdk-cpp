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

#include <tencentcloud/captcha/v20190722/model/TicketThroughUnit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

TicketThroughUnit::TicketThroughUnit() :
    m_dateKeyHasBeenSet(false),
    m_throughHasBeenSet(false)
{
}

CoreInternalOutcome TicketThroughUnit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DateKey") && !value["DateKey"].IsNull())
    {
        if (!value["DateKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TicketThroughUnit.DateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateKey = string(value["DateKey"].GetString());
        m_dateKeyHasBeenSet = true;
    }

    if (value.HasMember("Through") && !value["Through"].IsNull())
    {
        if (!value["Through"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TicketThroughUnit.Through` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_through = value["Through"].GetInt64();
        m_throughHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TicketThroughUnit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_throughHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Through";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_through, allocator);
    }

}


string TicketThroughUnit::GetDateKey() const
{
    return m_dateKey;
}

void TicketThroughUnit::SetDateKey(const string& _dateKey)
{
    m_dateKey = _dateKey;
    m_dateKeyHasBeenSet = true;
}

bool TicketThroughUnit::DateKeyHasBeenSet() const
{
    return m_dateKeyHasBeenSet;
}

int64_t TicketThroughUnit::GetThrough() const
{
    return m_through;
}

void TicketThroughUnit::SetThrough(const int64_t& _through)
{
    m_through = _through;
    m_throughHasBeenSet = true;
}

bool TicketThroughUnit::ThroughHasBeenSet() const
{
    return m_throughHasBeenSet;
}


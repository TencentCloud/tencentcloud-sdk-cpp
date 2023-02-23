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

#include <tencentcloud/mna/v20210119/model/NetDetails.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

NetDetails::NetDetails() :
    m_currentHasBeenSet(false),
    m_timeHasBeenSet(false)
{
}

CoreInternalOutcome NetDetails::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Current") && !value["Current"].IsNull())
    {
        if (!value["Current"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NetDetails.Current` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_current = value["Current"].GetDouble();
        m_currentHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDetails.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetDetails::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_currentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Current";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_current, allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

}


double NetDetails::GetCurrent() const
{
    return m_current;
}

void NetDetails::SetCurrent(const double& _current)
{
    m_current = _current;
    m_currentHasBeenSet = true;
}

bool NetDetails::CurrentHasBeenSet() const
{
    return m_currentHasBeenSet;
}

string NetDetails::GetTime() const
{
    return m_time;
}

void NetDetails::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool NetDetails::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}


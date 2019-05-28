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

#include <tencentcloud/live/v20180801/model/PlayStatInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

PlayStatInfo::PlayStatInfo() :
    m_timeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome PlayStatInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Error("response `PlayStatInfo.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `PlayStatInfo.Value` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetDouble();
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlayStatInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

}


string PlayStatInfo::GetTime() const
{
    return m_time;
}

void PlayStatInfo::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool PlayStatInfo::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

double PlayStatInfo::GetValue() const
{
    return m_value;
}

void PlayStatInfo::SetValue(const double& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool PlayStatInfo::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}


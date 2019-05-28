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

#include <tencentcloud/tics/v20181115/model/IntelligenceType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tics::V20181115::Model;
using namespace rapidjson;
using namespace std;

IntelligenceType::IntelligenceType() :
    m_sourceHasBeenSet(false),
    m_stampHasBeenSet(false),
    m_timeHasBeenSet(false)
{
}

CoreInternalOutcome IntelligenceType::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Error("response `IntelligenceType.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Stamp") && !value["Stamp"].IsNull())
    {
        if (!value["Stamp"].IsString())
        {
            return CoreInternalOutcome(Error("response `IntelligenceType.Stamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stamp = string(value["Stamp"].GetString());
        m_stampHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `IntelligenceType.Time` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_time = value["Time"].GetUint64();
        m_timeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntelligenceType::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_sourceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_stampHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Stamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_stamp.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_time, allocator);
    }

}


string IntelligenceType::GetSource() const
{
    return m_source;
}

void IntelligenceType::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool IntelligenceType::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string IntelligenceType::GetStamp() const
{
    return m_stamp;
}

void IntelligenceType::SetStamp(const string& _stamp)
{
    m_stamp = _stamp;
    m_stampHasBeenSet = true;
}

bool IntelligenceType::StampHasBeenSet() const
{
    return m_stampHasBeenSet;
}

uint64_t IntelligenceType::GetTime() const
{
    return m_time;
}

void IntelligenceType::SetTime(const uint64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool IntelligenceType::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}


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

#include <tencentcloud/mariadb/v20170312/model/MonitorIntData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace rapidjson;
using namespace std;

MonitorIntData::MonitorIntData() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome MonitorIntData::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `MonitorIntData.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `MonitorIntData.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MonitorIntData.Data` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_data = value["Data"].GetInt64();
        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonitorIntData::ToJsonObject(Value &value, Document::AllocatorType& allocator)
{

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_data, allocator);
    }

}


string MonitorIntData::GetStartTime() const
{
    return m_startTime;
}

void MonitorIntData::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool MonitorIntData::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string MonitorIntData::GetEndTime() const
{
    return m_endTime;
}

void MonitorIntData::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool MonitorIntData::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t MonitorIntData::GetData() const
{
    return m_data;
}

void MonitorIntData::SetData(const int64_t& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool MonitorIntData::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}


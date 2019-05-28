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

#include <tencentcloud/mariadb/v20170312/model/MonitorData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace rapidjson;
using namespace std;

MonitorData::MonitorData() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome MonitorData::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `MonitorData.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `MonitorData.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsArray())
            return CoreInternalOutcome(Error("response `MonitorData.Data` is not array type"));

        const Value &tmpValue = value["Data"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_data.push_back((*itr).GetDouble());
        }
        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonitorData::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetDouble(*itr), allocator);
        }
    }

}


string MonitorData::GetStartTime() const
{
    return m_startTime;
}

void MonitorData::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool MonitorData::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string MonitorData::GetEndTime() const
{
    return m_endTime;
}

void MonitorData::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool MonitorData::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<double> MonitorData::GetData() const
{
    return m_data;
}

void MonitorData::SetData(const vector<double>& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool MonitorData::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}


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

#include <tencentcloud/monitor/v20230616/model/AIWorkbenchSREDigitalTwinWorkLogList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

AIWorkbenchSREDigitalTwinWorkLogList::AIWorkbenchSREDigitalTwinWorkLogList() :
    m_workLogsHasBeenSet(false),
    m_totalHasBeenSet(false)
{
}

CoreInternalOutcome AIWorkbenchSREDigitalTwinWorkLogList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkLogs") && !value["WorkLogs"].IsNull())
    {
        if (!value["WorkLogs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIWorkbenchSREDigitalTwinWorkLogList.WorkLogs` is not array type"));

        const rapidjson::Value &tmpValue = value["WorkLogs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AIWorkbenchSREDigitalTwinWorkLog item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_workLogs.push_back(item);
        }
        m_workLogsHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIWorkbenchSREDigitalTwinWorkLogList.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIWorkbenchSREDigitalTwinWorkLogList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workLogsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkLogs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_workLogs.begin(); itr != m_workLogs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

}


vector<AIWorkbenchSREDigitalTwinWorkLog> AIWorkbenchSREDigitalTwinWorkLogList::GetWorkLogs() const
{
    return m_workLogs;
}

void AIWorkbenchSREDigitalTwinWorkLogList::SetWorkLogs(const vector<AIWorkbenchSREDigitalTwinWorkLog>& _workLogs)
{
    m_workLogs = _workLogs;
    m_workLogsHasBeenSet = true;
}

bool AIWorkbenchSREDigitalTwinWorkLogList::WorkLogsHasBeenSet() const
{
    return m_workLogsHasBeenSet;
}

int64_t AIWorkbenchSREDigitalTwinWorkLogList::GetTotal() const
{
    return m_total;
}

void AIWorkbenchSREDigitalTwinWorkLogList::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool AIWorkbenchSREDigitalTwinWorkLogList::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}


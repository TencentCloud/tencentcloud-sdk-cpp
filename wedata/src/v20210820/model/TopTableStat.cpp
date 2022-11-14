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

#include <tencentcloud/wedata/v20210820/model/TopTableStat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TopTableStat::TopTableStat() :
    m_alarmTablesHasBeenSet(false),
    m_pipelineTablesHasBeenSet(false)
{
}

CoreInternalOutcome TopTableStat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmTables") && !value["AlarmTables"].IsNull())
    {
        if (!value["AlarmTables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopTableStat.AlarmTables` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmTables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TopTableStatItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_alarmTables.push_back(item);
        }
        m_alarmTablesHasBeenSet = true;
    }

    if (value.HasMember("PipelineTables") && !value["PipelineTables"].IsNull())
    {
        if (!value["PipelineTables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopTableStat.PipelineTables` is not array type"));

        const rapidjson::Value &tmpValue = value["PipelineTables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TopTableStatItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pipelineTables.push_back(item);
        }
        m_pipelineTablesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopTableStat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmTables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_alarmTables.begin(); itr != m_alarmTables.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pipelineTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PipelineTables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pipelineTables.begin(); itr != m_pipelineTables.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<TopTableStatItem> TopTableStat::GetAlarmTables() const
{
    return m_alarmTables;
}

void TopTableStat::SetAlarmTables(const vector<TopTableStatItem>& _alarmTables)
{
    m_alarmTables = _alarmTables;
    m_alarmTablesHasBeenSet = true;
}

bool TopTableStat::AlarmTablesHasBeenSet() const
{
    return m_alarmTablesHasBeenSet;
}

vector<TopTableStatItem> TopTableStat::GetPipelineTables() const
{
    return m_pipelineTables;
}

void TopTableStat::SetPipelineTables(const vector<TopTableStatItem>& _pipelineTables)
{
    m_pipelineTables = _pipelineTables;
    m_pipelineTablesHasBeenSet = true;
}

bool TopTableStat::PipelineTablesHasBeenSet() const
{
    return m_pipelineTablesHasBeenSet;
}


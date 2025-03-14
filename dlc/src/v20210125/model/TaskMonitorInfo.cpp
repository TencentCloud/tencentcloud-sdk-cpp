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

#include <tencentcloud/dlc/v20210125/model/TaskMonitorInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

TaskMonitorInfo::TaskMonitorInfo() :
    m_taskIdHasBeenSet(false),
    m_houseNameHasBeenSet(false),
    m_querySQLHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_usedTimeHasBeenSet(false),
    m_dataAmountHasBeenSet(false),
    m_queryStatsHasBeenSet(false)
{
}

CoreInternalOutcome TaskMonitorInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMonitorInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("HouseName") && !value["HouseName"].IsNull())
    {
        if (!value["HouseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMonitorInfo.HouseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_houseName = string(value["HouseName"].GetString());
        m_houseNameHasBeenSet = true;
    }

    if (value.HasMember("QuerySQL") && !value["QuerySQL"].IsNull())
    {
        if (!value["QuerySQL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMonitorInfo.QuerySQL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_querySQL = string(value["QuerySQL"].GetString());
        m_querySQLHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMonitorInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UsedTime") && !value["UsedTime"].IsNull())
    {
        if (!value["UsedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMonitorInfo.UsedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usedTime = string(value["UsedTime"].GetString());
        m_usedTimeHasBeenSet = true;
    }

    if (value.HasMember("DataAmount") && !value["DataAmount"].IsNull())
    {
        if (!value["DataAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMonitorInfo.DataAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataAmount = string(value["DataAmount"].GetString());
        m_dataAmountHasBeenSet = true;
    }

    if (value.HasMember("QueryStats") && !value["QueryStats"].IsNull())
    {
        if (!value["QueryStats"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMonitorInfo.QueryStats` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryStats = string(value["QueryStats"].GetString());
        m_queryStatsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskMonitorInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_houseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HouseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_houseName.c_str(), allocator).Move(), allocator);
    }

    if (m_querySQLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuerySQL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_querySQL.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_usedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dataAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_queryStatsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryStats";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryStats.c_str(), allocator).Move(), allocator);
    }

}


string TaskMonitorInfo::GetTaskId() const
{
    return m_taskId;
}

void TaskMonitorInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskMonitorInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskMonitorInfo::GetHouseName() const
{
    return m_houseName;
}

void TaskMonitorInfo::SetHouseName(const string& _houseName)
{
    m_houseName = _houseName;
    m_houseNameHasBeenSet = true;
}

bool TaskMonitorInfo::HouseNameHasBeenSet() const
{
    return m_houseNameHasBeenSet;
}

string TaskMonitorInfo::GetQuerySQL() const
{
    return m_querySQL;
}

void TaskMonitorInfo::SetQuerySQL(const string& _querySQL)
{
    m_querySQL = _querySQL;
    m_querySQLHasBeenSet = true;
}

bool TaskMonitorInfo::QuerySQLHasBeenSet() const
{
    return m_querySQLHasBeenSet;
}

string TaskMonitorInfo::GetCreateTime() const
{
    return m_createTime;
}

void TaskMonitorInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TaskMonitorInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TaskMonitorInfo::GetUsedTime() const
{
    return m_usedTime;
}

void TaskMonitorInfo::SetUsedTime(const string& _usedTime)
{
    m_usedTime = _usedTime;
    m_usedTimeHasBeenSet = true;
}

bool TaskMonitorInfo::UsedTimeHasBeenSet() const
{
    return m_usedTimeHasBeenSet;
}

string TaskMonitorInfo::GetDataAmount() const
{
    return m_dataAmount;
}

void TaskMonitorInfo::SetDataAmount(const string& _dataAmount)
{
    m_dataAmount = _dataAmount;
    m_dataAmountHasBeenSet = true;
}

bool TaskMonitorInfo::DataAmountHasBeenSet() const
{
    return m_dataAmountHasBeenSet;
}

string TaskMonitorInfo::GetQueryStats() const
{
    return m_queryStats;
}

void TaskMonitorInfo::SetQueryStats(const string& _queryStats)
{
    m_queryStats = _queryStats;
    m_queryStatsHasBeenSet = true;
}

bool TaskMonitorInfo::QueryStatsHasBeenSet() const
{
    return m_queryStatsHasBeenSet;
}


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

#include <tencentcloud/cdb/v20170320/model/RollbackInstancesInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

RollbackInstancesInfo::RollbackInstancesInfo() :
    m_instanceIdHasBeenSet(false),
    m_strategyHasBeenSet(false),
    m_rollbackTimeHasBeenSet(false),
    m_databasesHasBeenSet(false),
    m_tablesHasBeenSet(false)
{
}

CoreInternalOutcome RollbackInstancesInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackInstancesInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Strategy") && !value["Strategy"].IsNull())
    {
        if (!value["Strategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackInstancesInfo.Strategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategy = string(value["Strategy"].GetString());
        m_strategyHasBeenSet = true;
    }

    if (value.HasMember("RollbackTime") && !value["RollbackTime"].IsNull())
    {
        if (!value["RollbackTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackInstancesInfo.RollbackTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rollbackTime = string(value["RollbackTime"].GetString());
        m_rollbackTimeHasBeenSet = true;
    }

    if (value.HasMember("Databases") && !value["Databases"].IsNull())
    {
        if (!value["Databases"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RollbackInstancesInfo.Databases` is not array type"));

        const rapidjson::Value &tmpValue = value["Databases"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RollbackDBName item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_databases.push_back(item);
        }
        m_databasesHasBeenSet = true;
    }

    if (value.HasMember("Tables") && !value["Tables"].IsNull())
    {
        if (!value["Tables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RollbackInstancesInfo.Tables` is not array type"));

        const rapidjson::Value &tmpValue = value["Tables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RollbackTables item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tables.push_back(item);
        }
        m_tablesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RollbackInstancesInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategy.c_str(), allocator).Move(), allocator);
    }

    if (m_rollbackTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rollbackTime.c_str(), allocator).Move(), allocator);
    }

    if (m_databasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Databases";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_databases.begin(); itr != m_databases.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tables.begin(); itr != m_tables.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RollbackInstancesInfo::GetInstanceId() const
{
    return m_instanceId;
}

void RollbackInstancesInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RollbackInstancesInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RollbackInstancesInfo::GetStrategy() const
{
    return m_strategy;
}

void RollbackInstancesInfo::SetStrategy(const string& _strategy)
{
    m_strategy = _strategy;
    m_strategyHasBeenSet = true;
}

bool RollbackInstancesInfo::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}

string RollbackInstancesInfo::GetRollbackTime() const
{
    return m_rollbackTime;
}

void RollbackInstancesInfo::SetRollbackTime(const string& _rollbackTime)
{
    m_rollbackTime = _rollbackTime;
    m_rollbackTimeHasBeenSet = true;
}

bool RollbackInstancesInfo::RollbackTimeHasBeenSet() const
{
    return m_rollbackTimeHasBeenSet;
}

vector<RollbackDBName> RollbackInstancesInfo::GetDatabases() const
{
    return m_databases;
}

void RollbackInstancesInfo::SetDatabases(const vector<RollbackDBName>& _databases)
{
    m_databases = _databases;
    m_databasesHasBeenSet = true;
}

bool RollbackInstancesInfo::DatabasesHasBeenSet() const
{
    return m_databasesHasBeenSet;
}

vector<RollbackTables> RollbackInstancesInfo::GetTables() const
{
    return m_tables;
}

void RollbackInstancesInfo::SetTables(const vector<RollbackTables>& _tables)
{
    m_tables = _tables;
    m_tablesHasBeenSet = true;
}

bool RollbackInstancesInfo::TablesHasBeenSet() const
{
    return m_tablesHasBeenSet;
}


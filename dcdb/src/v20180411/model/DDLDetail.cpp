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

#include <tencentcloud/dcdb/v20180411/model/DDLDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

DDLDetail::DDLDetail() :
    m_shardSerialIdHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_alterHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_descHasBeenSet(false),
    m_stageHasBeenSet(false),
    m_switchStatusHasBeenSet(false)
{
}

CoreInternalOutcome DDLDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ShardSerialId") && !value["ShardSerialId"].IsNull())
    {
        if (!value["ShardSerialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDLDetail.ShardSerialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardSerialId = string(value["ShardSerialId"].GetString());
        m_shardSerialIdHasBeenSet = true;
    }

    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDLDetail.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDLDetail.Table` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_table = string(value["Table"].GetString());
        m_tableHasBeenSet = true;
    }

    if (value.HasMember("Alter") && !value["Alter"].IsNull())
    {
        if (!value["Alter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDLDetail.Alter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alter = string(value["Alter"].GetString());
        m_alterHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDLDetail.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDLDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDLDetail.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Stage") && !value["Stage"].IsNull())
    {
        if (!value["Stage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDLDetail.Stage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stage = string(value["Stage"].GetString());
        m_stageHasBeenSet = true;
    }

    if (value.HasMember("SwitchStatus") && !value["SwitchStatus"].IsNull())
    {
        if (!value["SwitchStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDLDetail.SwitchStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_switchStatus = value["SwitchStatus"].GetInt64();
        m_switchStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDLDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_shardSerialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardSerialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shardSerialId.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_table.c_str(), allocator).Move(), allocator);
    }

    if (m_alterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alter.c_str(), allocator).Move(), allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_stageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stage.c_str(), allocator).Move(), allocator);
    }

    if (m_switchStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_switchStatus, allocator);
    }

}


string DDLDetail::GetShardSerialId() const
{
    return m_shardSerialId;
}

void DDLDetail::SetShardSerialId(const string& _shardSerialId)
{
    m_shardSerialId = _shardSerialId;
    m_shardSerialIdHasBeenSet = true;
}

bool DDLDetail::ShardSerialIdHasBeenSet() const
{
    return m_shardSerialIdHasBeenSet;
}

string DDLDetail::GetDbName() const
{
    return m_dbName;
}

void DDLDetail::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DDLDetail::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string DDLDetail::GetTable() const
{
    return m_table;
}

void DDLDetail::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool DDLDetail::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

string DDLDetail::GetAlter() const
{
    return m_alter;
}

void DDLDetail::SetAlter(const string& _alter)
{
    m_alter = _alter;
    m_alterHasBeenSet = true;
}

bool DDLDetail::AlterHasBeenSet() const
{
    return m_alterHasBeenSet;
}

string DDLDetail::GetBeginTime() const
{
    return m_beginTime;
}

void DDLDetail::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool DDLDetail::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

int64_t DDLDetail::GetStatus() const
{
    return m_status;
}

void DDLDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DDLDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DDLDetail::GetDesc() const
{
    return m_desc;
}

void DDLDetail::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool DDLDetail::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string DDLDetail::GetStage() const
{
    return m_stage;
}

void DDLDetail::SetStage(const string& _stage)
{
    m_stage = _stage;
    m_stageHasBeenSet = true;
}

bool DDLDetail::StageHasBeenSet() const
{
    return m_stageHasBeenSet;
}

int64_t DDLDetail::GetSwitchStatus() const
{
    return m_switchStatus;
}

void DDLDetail::SetSwitchStatus(const int64_t& _switchStatus)
{
    m_switchStatus = _switchStatus;
    m_switchStatusHasBeenSet = true;
}

bool DDLDetail::SwitchStatusHasBeenSet() const
{
    return m_switchStatusHasBeenSet;
}


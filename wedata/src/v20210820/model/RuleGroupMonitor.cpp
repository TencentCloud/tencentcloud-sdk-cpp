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

#include <tencentcloud/wedata/v20210820/model/RuleGroupMonitor.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RuleGroupMonitor::RuleGroupMonitor() :
    m_ruleGroupIdHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_monitorTypeHasBeenSet(false),
    m_monitorStatusHasBeenSet(false),
    m_createUserIdHasBeenSet(false),
    m_createUserNameHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome RuleGroupMonitor::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleGroupId") && !value["RuleGroupId"].IsNull())
    {
        if (!value["RuleGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupMonitor.RuleGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupId = value["RuleGroupId"].GetUint64();
        m_ruleGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupMonitor.TableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = string(value["TableId"].GetString());
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupMonitor.DatasourceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = value["DatasourceId"].GetUint64();
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("DatabaseId") && !value["DatabaseId"].IsNull())
    {
        if (!value["DatabaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupMonitor.DatabaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseId = string(value["DatabaseId"].GetString());
        m_databaseIdHasBeenSet = true;
    }

    if (value.HasMember("MonitorType") && !value["MonitorType"].IsNull())
    {
        if (!value["MonitorType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupMonitor.MonitorType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorType = value["MonitorType"].GetUint64();
        m_monitorTypeHasBeenSet = true;
    }

    if (value.HasMember("MonitorStatus") && !value["MonitorStatus"].IsNull())
    {
        if (!value["MonitorStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupMonitor.MonitorStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorStatus = value["MonitorStatus"].GetUint64();
        m_monitorStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateUserId") && !value["CreateUserId"].IsNull())
    {
        if (!value["CreateUserId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupMonitor.CreateUserId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createUserId = value["CreateUserId"].GetUint64();
        m_createUserIdHasBeenSet = true;
    }

    if (value.HasMember("CreateUserName") && !value["CreateUserName"].IsNull())
    {
        if (!value["CreateUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupMonitor.CreateUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserName = string(value["CreateUserName"].GetString());
        m_createUserNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupMonitor.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleGroupMonitor::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleGroupId, allocator);
    }

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_datasourceId, allocator);
    }

    if (m_databaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseId.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorType, allocator);
    }

    if (m_monitorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorStatus, allocator);
    }

    if (m_createUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createUserId, allocator);
    }

    if (m_createUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RuleGroupMonitor::GetRuleGroupId() const
{
    return m_ruleGroupId;
}

void RuleGroupMonitor::SetRuleGroupId(const uint64_t& _ruleGroupId)
{
    m_ruleGroupId = _ruleGroupId;
    m_ruleGroupIdHasBeenSet = true;
}

bool RuleGroupMonitor::RuleGroupIdHasBeenSet() const
{
    return m_ruleGroupIdHasBeenSet;
}

string RuleGroupMonitor::GetTableId() const
{
    return m_tableId;
}

void RuleGroupMonitor::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool RuleGroupMonitor::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

uint64_t RuleGroupMonitor::GetDatasourceId() const
{
    return m_datasourceId;
}

void RuleGroupMonitor::SetDatasourceId(const uint64_t& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool RuleGroupMonitor::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string RuleGroupMonitor::GetDatabaseId() const
{
    return m_databaseId;
}

void RuleGroupMonitor::SetDatabaseId(const string& _databaseId)
{
    m_databaseId = _databaseId;
    m_databaseIdHasBeenSet = true;
}

bool RuleGroupMonitor::DatabaseIdHasBeenSet() const
{
    return m_databaseIdHasBeenSet;
}

uint64_t RuleGroupMonitor::GetMonitorType() const
{
    return m_monitorType;
}

void RuleGroupMonitor::SetMonitorType(const uint64_t& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool RuleGroupMonitor::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}

uint64_t RuleGroupMonitor::GetMonitorStatus() const
{
    return m_monitorStatus;
}

void RuleGroupMonitor::SetMonitorStatus(const uint64_t& _monitorStatus)
{
    m_monitorStatus = _monitorStatus;
    m_monitorStatusHasBeenSet = true;
}

bool RuleGroupMonitor::MonitorStatusHasBeenSet() const
{
    return m_monitorStatusHasBeenSet;
}

uint64_t RuleGroupMonitor::GetCreateUserId() const
{
    return m_createUserId;
}

void RuleGroupMonitor::SetCreateUserId(const uint64_t& _createUserId)
{
    m_createUserId = _createUserId;
    m_createUserIdHasBeenSet = true;
}

bool RuleGroupMonitor::CreateUserIdHasBeenSet() const
{
    return m_createUserIdHasBeenSet;
}

string RuleGroupMonitor::GetCreateUserName() const
{
    return m_createUserName;
}

void RuleGroupMonitor::SetCreateUserName(const string& _createUserName)
{
    m_createUserName = _createUserName;
    m_createUserNameHasBeenSet = true;
}

bool RuleGroupMonitor::CreateUserNameHasBeenSet() const
{
    return m_createUserNameHasBeenSet;
}

string RuleGroupMonitor::GetCreateTime() const
{
    return m_createTime;
}

void RuleGroupMonitor::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RuleGroupMonitor::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}


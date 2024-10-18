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

#include <tencentcloud/emr/v20190103/model/StarRocksQueryInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

StarRocksQueryInfo::StarRocksQueryInfo() :
    m_clientIPHasBeenSet(false),
    m_cPUCostHasBeenSet(false),
    m_defaultDBHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_executionIPHasBeenSet(false),
    m_queryIDHasBeenSet(false),
    m_queryTypeHasBeenSet(false),
    m_memCostHasBeenSet(false),
    m_planCpuCostsHasBeenSet(false),
    m_planMemCostsHasBeenSet(false),
    m_queryTimeHasBeenSet(false),
    m_resourceGroupHasBeenSet(false),
    m_returnRowsHasBeenSet(false),
    m_scanBytesHasBeenSet(false),
    m_scanRowsHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_executionStateHasBeenSet(false),
    m_executionStatementHasBeenSet(false),
    m_userHasBeenSet(false)
{
}

CoreInternalOutcome StarRocksQueryInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientIP") && !value["ClientIP"].IsNull())
    {
        if (!value["ClientIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StarRocksQueryInfo.ClientIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIP = string(value["ClientIP"].GetString());
        m_clientIPHasBeenSet = true;
    }

    if (value.HasMember("CPUCost") && !value["CPUCost"].IsNull())
    {
        if (!value["CPUCost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StarRocksQueryInfo.CPUCost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cPUCost = value["CPUCost"].GetInt64();
        m_cPUCostHasBeenSet = true;
    }

    if (value.HasMember("DefaultDB") && !value["DefaultDB"].IsNull())
    {
        if (!value["DefaultDB"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StarRocksQueryInfo.DefaultDB` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultDB = string(value["DefaultDB"].GetString());
        m_defaultDBHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StarRocksQueryInfo.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionIP") && !value["ExecutionIP"].IsNull())
    {
        if (!value["ExecutionIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StarRocksQueryInfo.ExecutionIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionIP = string(value["ExecutionIP"].GetString());
        m_executionIPHasBeenSet = true;
    }

    if (value.HasMember("QueryID") && !value["QueryID"].IsNull())
    {
        if (!value["QueryID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StarRocksQueryInfo.QueryID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryID = string(value["QueryID"].GetString());
        m_queryIDHasBeenSet = true;
    }

    if (value.HasMember("QueryType") && !value["QueryType"].IsNull())
    {
        if (!value["QueryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StarRocksQueryInfo.QueryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryType = string(value["QueryType"].GetString());
        m_queryTypeHasBeenSet = true;
    }

    if (value.HasMember("MemCost") && !value["MemCost"].IsNull())
    {
        if (!value["MemCost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StarRocksQueryInfo.MemCost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memCost = value["MemCost"].GetInt64();
        m_memCostHasBeenSet = true;
    }

    if (value.HasMember("PlanCpuCosts") && !value["PlanCpuCosts"].IsNull())
    {
        if (!value["PlanCpuCosts"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StarRocksQueryInfo.PlanCpuCosts` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_planCpuCosts = value["PlanCpuCosts"].GetInt64();
        m_planCpuCostsHasBeenSet = true;
    }

    if (value.HasMember("PlanMemCosts") && !value["PlanMemCosts"].IsNull())
    {
        if (!value["PlanMemCosts"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StarRocksQueryInfo.PlanMemCosts` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_planMemCosts = value["PlanMemCosts"].GetInt64();
        m_planMemCostsHasBeenSet = true;
    }

    if (value.HasMember("QueryTime") && !value["QueryTime"].IsNull())
    {
        if (!value["QueryTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StarRocksQueryInfo.QueryTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_queryTime = value["QueryTime"].GetInt64();
        m_queryTimeHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroup") && !value["ResourceGroup"].IsNull())
    {
        if (!value["ResourceGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StarRocksQueryInfo.ResourceGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroup = string(value["ResourceGroup"].GetString());
        m_resourceGroupHasBeenSet = true;
    }

    if (value.HasMember("ReturnRows") && !value["ReturnRows"].IsNull())
    {
        if (!value["ReturnRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StarRocksQueryInfo.ReturnRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_returnRows = value["ReturnRows"].GetInt64();
        m_returnRowsHasBeenSet = true;
    }

    if (value.HasMember("ScanBytes") && !value["ScanBytes"].IsNull())
    {
        if (!value["ScanBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StarRocksQueryInfo.ScanBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scanBytes = value["ScanBytes"].GetInt64();
        m_scanBytesHasBeenSet = true;
    }

    if (value.HasMember("ScanRows") && !value["ScanRows"].IsNull())
    {
        if (!value["ScanRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StarRocksQueryInfo.ScanRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scanRows = value["ScanRows"].GetInt64();
        m_scanRowsHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StarRocksQueryInfo.BeginTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = value["BeginTime"].GetInt64();
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionState") && !value["ExecutionState"].IsNull())
    {
        if (!value["ExecutionState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StarRocksQueryInfo.ExecutionState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionState = string(value["ExecutionState"].GetString());
        m_executionStateHasBeenSet = true;
    }

    if (value.HasMember("ExecutionStatement") && !value["ExecutionStatement"].IsNull())
    {
        if (!value["ExecutionStatement"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StarRocksQueryInfo.ExecutionStatement` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionStatement = string(value["ExecutionStatement"].GetString());
        m_executionStatementHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StarRocksQueryInfo.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StarRocksQueryInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIP.c_str(), allocator).Move(), allocator);
    }

    if (m_cPUCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPUCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPUCost, allocator);
    }

    if (m_defaultDBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultDB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultDB.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_executionIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionIP.c_str(), allocator).Move(), allocator);
    }

    if (m_queryIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryID.c_str(), allocator).Move(), allocator);
    }

    if (m_queryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryType.c_str(), allocator).Move(), allocator);
    }

    if (m_memCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memCost, allocator);
    }

    if (m_planCpuCostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanCpuCosts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_planCpuCosts, allocator);
    }

    if (m_planMemCostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanMemCosts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_planMemCosts, allocator);
    }

    if (m_queryTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryTime, allocator);
    }

    if (m_resourceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_returnRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_returnRows, allocator);
    }

    if (m_scanBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanBytes, allocator);
    }

    if (m_scanRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanRows, allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_beginTime, allocator);
    }

    if (m_executionStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionState.c_str(), allocator).Move(), allocator);
    }

    if (m_executionStatementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionStatement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionStatement.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

}


string StarRocksQueryInfo::GetClientIP() const
{
    return m_clientIP;
}

void StarRocksQueryInfo::SetClientIP(const string& _clientIP)
{
    m_clientIP = _clientIP;
    m_clientIPHasBeenSet = true;
}

bool StarRocksQueryInfo::ClientIPHasBeenSet() const
{
    return m_clientIPHasBeenSet;
}

int64_t StarRocksQueryInfo::GetCPUCost() const
{
    return m_cPUCost;
}

void StarRocksQueryInfo::SetCPUCost(const int64_t& _cPUCost)
{
    m_cPUCost = _cPUCost;
    m_cPUCostHasBeenSet = true;
}

bool StarRocksQueryInfo::CPUCostHasBeenSet() const
{
    return m_cPUCostHasBeenSet;
}

string StarRocksQueryInfo::GetDefaultDB() const
{
    return m_defaultDB;
}

void StarRocksQueryInfo::SetDefaultDB(const string& _defaultDB)
{
    m_defaultDB = _defaultDB;
    m_defaultDBHasBeenSet = true;
}

bool StarRocksQueryInfo::DefaultDBHasBeenSet() const
{
    return m_defaultDBHasBeenSet;
}

int64_t StarRocksQueryInfo::GetEndTime() const
{
    return m_endTime;
}

void StarRocksQueryInfo::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool StarRocksQueryInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string StarRocksQueryInfo::GetExecutionIP() const
{
    return m_executionIP;
}

void StarRocksQueryInfo::SetExecutionIP(const string& _executionIP)
{
    m_executionIP = _executionIP;
    m_executionIPHasBeenSet = true;
}

bool StarRocksQueryInfo::ExecutionIPHasBeenSet() const
{
    return m_executionIPHasBeenSet;
}

string StarRocksQueryInfo::GetQueryID() const
{
    return m_queryID;
}

void StarRocksQueryInfo::SetQueryID(const string& _queryID)
{
    m_queryID = _queryID;
    m_queryIDHasBeenSet = true;
}

bool StarRocksQueryInfo::QueryIDHasBeenSet() const
{
    return m_queryIDHasBeenSet;
}

string StarRocksQueryInfo::GetQueryType() const
{
    return m_queryType;
}

void StarRocksQueryInfo::SetQueryType(const string& _queryType)
{
    m_queryType = _queryType;
    m_queryTypeHasBeenSet = true;
}

bool StarRocksQueryInfo::QueryTypeHasBeenSet() const
{
    return m_queryTypeHasBeenSet;
}

int64_t StarRocksQueryInfo::GetMemCost() const
{
    return m_memCost;
}

void StarRocksQueryInfo::SetMemCost(const int64_t& _memCost)
{
    m_memCost = _memCost;
    m_memCostHasBeenSet = true;
}

bool StarRocksQueryInfo::MemCostHasBeenSet() const
{
    return m_memCostHasBeenSet;
}

int64_t StarRocksQueryInfo::GetPlanCpuCosts() const
{
    return m_planCpuCosts;
}

void StarRocksQueryInfo::SetPlanCpuCosts(const int64_t& _planCpuCosts)
{
    m_planCpuCosts = _planCpuCosts;
    m_planCpuCostsHasBeenSet = true;
}

bool StarRocksQueryInfo::PlanCpuCostsHasBeenSet() const
{
    return m_planCpuCostsHasBeenSet;
}

int64_t StarRocksQueryInfo::GetPlanMemCosts() const
{
    return m_planMemCosts;
}

void StarRocksQueryInfo::SetPlanMemCosts(const int64_t& _planMemCosts)
{
    m_planMemCosts = _planMemCosts;
    m_planMemCostsHasBeenSet = true;
}

bool StarRocksQueryInfo::PlanMemCostsHasBeenSet() const
{
    return m_planMemCostsHasBeenSet;
}

int64_t StarRocksQueryInfo::GetQueryTime() const
{
    return m_queryTime;
}

void StarRocksQueryInfo::SetQueryTime(const int64_t& _queryTime)
{
    m_queryTime = _queryTime;
    m_queryTimeHasBeenSet = true;
}

bool StarRocksQueryInfo::QueryTimeHasBeenSet() const
{
    return m_queryTimeHasBeenSet;
}

string StarRocksQueryInfo::GetResourceGroup() const
{
    return m_resourceGroup;
}

void StarRocksQueryInfo::SetResourceGroup(const string& _resourceGroup)
{
    m_resourceGroup = _resourceGroup;
    m_resourceGroupHasBeenSet = true;
}

bool StarRocksQueryInfo::ResourceGroupHasBeenSet() const
{
    return m_resourceGroupHasBeenSet;
}

int64_t StarRocksQueryInfo::GetReturnRows() const
{
    return m_returnRows;
}

void StarRocksQueryInfo::SetReturnRows(const int64_t& _returnRows)
{
    m_returnRows = _returnRows;
    m_returnRowsHasBeenSet = true;
}

bool StarRocksQueryInfo::ReturnRowsHasBeenSet() const
{
    return m_returnRowsHasBeenSet;
}

int64_t StarRocksQueryInfo::GetScanBytes() const
{
    return m_scanBytes;
}

void StarRocksQueryInfo::SetScanBytes(const int64_t& _scanBytes)
{
    m_scanBytes = _scanBytes;
    m_scanBytesHasBeenSet = true;
}

bool StarRocksQueryInfo::ScanBytesHasBeenSet() const
{
    return m_scanBytesHasBeenSet;
}

int64_t StarRocksQueryInfo::GetScanRows() const
{
    return m_scanRows;
}

void StarRocksQueryInfo::SetScanRows(const int64_t& _scanRows)
{
    m_scanRows = _scanRows;
    m_scanRowsHasBeenSet = true;
}

bool StarRocksQueryInfo::ScanRowsHasBeenSet() const
{
    return m_scanRowsHasBeenSet;
}

int64_t StarRocksQueryInfo::GetBeginTime() const
{
    return m_beginTime;
}

void StarRocksQueryInfo::SetBeginTime(const int64_t& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool StarRocksQueryInfo::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string StarRocksQueryInfo::GetExecutionState() const
{
    return m_executionState;
}

void StarRocksQueryInfo::SetExecutionState(const string& _executionState)
{
    m_executionState = _executionState;
    m_executionStateHasBeenSet = true;
}

bool StarRocksQueryInfo::ExecutionStateHasBeenSet() const
{
    return m_executionStateHasBeenSet;
}

string StarRocksQueryInfo::GetExecutionStatement() const
{
    return m_executionStatement;
}

void StarRocksQueryInfo::SetExecutionStatement(const string& _executionStatement)
{
    m_executionStatement = _executionStatement;
    m_executionStatementHasBeenSet = true;
}

bool StarRocksQueryInfo::ExecutionStatementHasBeenSet() const
{
    return m_executionStatementHasBeenSet;
}

string StarRocksQueryInfo::GetUser() const
{
    return m_user;
}

void StarRocksQueryInfo::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool StarRocksQueryInfo::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}


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

#include <tencentcloud/emr/v20190103/model/ImpalaQuery.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ImpalaQuery::ImpalaQuery() :
    m_statementHasBeenSet(false),
    m_idHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_rowsFetchedHasBeenSet(false),
    m_userHasBeenSet(false),
    m_defaultDBHasBeenSet(false),
    m_coordinatorHasBeenSet(false),
    m_maxNodePeakMemoryUsageHasBeenSet(false),
    m_queryTypeHasBeenSet(false),
    m_scanHDFSRowsHasBeenSet(false),
    m_scanKUDURowsHasBeenSet(false),
    m_scanRowsTotalHasBeenSet(false),
    m_totalBytesReadHasBeenSet(false),
    m_totalBytesSentHasBeenSet(false),
    m_totalCpuTimeHasBeenSet(false),
    m_totalInnerBytesSentHasBeenSet(false),
    m_totalScanBytesSentHasBeenSet(false),
    m_estimatedPerHostMemBytesHasBeenSet(false),
    m_numRowsFetchedFromCacheHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_perNodePeakMemoryBytesSumHasBeenSet(false),
    m_backendsCountHasBeenSet(false),
    m_fragmentInstancesCountHasBeenSet(false),
    m_remainingFragmentCountHasBeenSet(false)
{
}

CoreInternalOutcome ImpalaQuery::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Statement") && !value["Statement"].IsNull())
    {
        if (!value["Statement"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.Statement` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statement = string(value["Statement"].GetString());
        m_statementHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.Duration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duration = string(value["Duration"].GetString());
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("RowsFetched") && !value["RowsFetched"].IsNull())
    {
        if (!value["RowsFetched"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.RowsFetched` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rowsFetched = value["RowsFetched"].GetInt64();
        m_rowsFetchedHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("DefaultDB") && !value["DefaultDB"].IsNull())
    {
        if (!value["DefaultDB"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.DefaultDB` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultDB = string(value["DefaultDB"].GetString());
        m_defaultDBHasBeenSet = true;
    }

    if (value.HasMember("Coordinator") && !value["Coordinator"].IsNull())
    {
        if (!value["Coordinator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.Coordinator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coordinator = string(value["Coordinator"].GetString());
        m_coordinatorHasBeenSet = true;
    }

    if (value.HasMember("MaxNodePeakMemoryUsage") && !value["MaxNodePeakMemoryUsage"].IsNull())
    {
        if (!value["MaxNodePeakMemoryUsage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.MaxNodePeakMemoryUsage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxNodePeakMemoryUsage = string(value["MaxNodePeakMemoryUsage"].GetString());
        m_maxNodePeakMemoryUsageHasBeenSet = true;
    }

    if (value.HasMember("QueryType") && !value["QueryType"].IsNull())
    {
        if (!value["QueryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.QueryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryType = string(value["QueryType"].GetString());
        m_queryTypeHasBeenSet = true;
    }

    if (value.HasMember("ScanHDFSRows") && !value["ScanHDFSRows"].IsNull())
    {
        if (!value["ScanHDFSRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.ScanHDFSRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scanHDFSRows = value["ScanHDFSRows"].GetInt64();
        m_scanHDFSRowsHasBeenSet = true;
    }

    if (value.HasMember("ScanKUDURows") && !value["ScanKUDURows"].IsNull())
    {
        if (!value["ScanKUDURows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.ScanKUDURows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scanKUDURows = value["ScanKUDURows"].GetInt64();
        m_scanKUDURowsHasBeenSet = true;
    }

    if (value.HasMember("ScanRowsTotal") && !value["ScanRowsTotal"].IsNull())
    {
        if (!value["ScanRowsTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.ScanRowsTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scanRowsTotal = value["ScanRowsTotal"].GetInt64();
        m_scanRowsTotalHasBeenSet = true;
    }

    if (value.HasMember("TotalBytesRead") && !value["TotalBytesRead"].IsNull())
    {
        if (!value["TotalBytesRead"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.TotalBytesRead` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalBytesRead = value["TotalBytesRead"].GetInt64();
        m_totalBytesReadHasBeenSet = true;
    }

    if (value.HasMember("TotalBytesSent") && !value["TotalBytesSent"].IsNull())
    {
        if (!value["TotalBytesSent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.TotalBytesSent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalBytesSent = value["TotalBytesSent"].GetInt64();
        m_totalBytesSentHasBeenSet = true;
    }

    if (value.HasMember("TotalCpuTime") && !value["TotalCpuTime"].IsNull())
    {
        if (!value["TotalCpuTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.TotalCpuTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCpuTime = value["TotalCpuTime"].GetInt64();
        m_totalCpuTimeHasBeenSet = true;
    }

    if (value.HasMember("TotalInnerBytesSent") && !value["TotalInnerBytesSent"].IsNull())
    {
        if (!value["TotalInnerBytesSent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.TotalInnerBytesSent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalInnerBytesSent = value["TotalInnerBytesSent"].GetInt64();
        m_totalInnerBytesSentHasBeenSet = true;
    }

    if (value.HasMember("TotalScanBytesSent") && !value["TotalScanBytesSent"].IsNull())
    {
        if (!value["TotalScanBytesSent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.TotalScanBytesSent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalScanBytesSent = value["TotalScanBytesSent"].GetInt64();
        m_totalScanBytesSentHasBeenSet = true;
    }

    if (value.HasMember("EstimatedPerHostMemBytes") && !value["EstimatedPerHostMemBytes"].IsNull())
    {
        if (!value["EstimatedPerHostMemBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.EstimatedPerHostMemBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_estimatedPerHostMemBytes = value["EstimatedPerHostMemBytes"].GetInt64();
        m_estimatedPerHostMemBytesHasBeenSet = true;
    }

    if (value.HasMember("NumRowsFetchedFromCache") && !value["NumRowsFetchedFromCache"].IsNull())
    {
        if (!value["NumRowsFetchedFromCache"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.NumRowsFetchedFromCache` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_numRowsFetchedFromCache = value["NumRowsFetchedFromCache"].GetInt64();
        m_numRowsFetchedFromCacheHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("PerNodePeakMemoryBytesSum") && !value["PerNodePeakMemoryBytesSum"].IsNull())
    {
        if (!value["PerNodePeakMemoryBytesSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.PerNodePeakMemoryBytesSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_perNodePeakMemoryBytesSum = value["PerNodePeakMemoryBytesSum"].GetInt64();
        m_perNodePeakMemoryBytesSumHasBeenSet = true;
    }

    if (value.HasMember("BackendsCount") && !value["BackendsCount"].IsNull())
    {
        if (!value["BackendsCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.BackendsCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backendsCount = value["BackendsCount"].GetInt64();
        m_backendsCountHasBeenSet = true;
    }

    if (value.HasMember("FragmentInstancesCount") && !value["FragmentInstancesCount"].IsNull())
    {
        if (!value["FragmentInstancesCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.FragmentInstancesCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fragmentInstancesCount = value["FragmentInstancesCount"].GetInt64();
        m_fragmentInstancesCountHasBeenSet = true;
    }

    if (value.HasMember("RemainingFragmentCount") && !value["RemainingFragmentCount"].IsNull())
    {
        if (!value["RemainingFragmentCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImpalaQuery.RemainingFragmentCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainingFragmentCount = value["RemainingFragmentCount"].GetInt64();
        m_remainingFragmentCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImpalaQuery::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Statement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statement.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_duration.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_rowsFetchedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowsFetched";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowsFetched, allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultDBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultDB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultDB.c_str(), allocator).Move(), allocator);
    }

    if (m_coordinatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Coordinator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coordinator.c_str(), allocator).Move(), allocator);
    }

    if (m_maxNodePeakMemoryUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNodePeakMemoryUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxNodePeakMemoryUsage.c_str(), allocator).Move(), allocator);
    }

    if (m_queryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryType.c_str(), allocator).Move(), allocator);
    }

    if (m_scanHDFSRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanHDFSRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanHDFSRows, allocator);
    }

    if (m_scanKUDURowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanKUDURows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanKUDURows, allocator);
    }

    if (m_scanRowsTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanRowsTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanRowsTotal, allocator);
    }

    if (m_totalBytesReadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalBytesRead";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalBytesRead, allocator);
    }

    if (m_totalBytesSentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalBytesSent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalBytesSent, allocator);
    }

    if (m_totalCpuTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCpuTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCpuTime, allocator);
    }

    if (m_totalInnerBytesSentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalInnerBytesSent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalInnerBytesSent, allocator);
    }

    if (m_totalScanBytesSentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalScanBytesSent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalScanBytesSent, allocator);
    }

    if (m_estimatedPerHostMemBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EstimatedPerHostMemBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_estimatedPerHostMemBytes, allocator);
    }

    if (m_numRowsFetchedFromCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumRowsFetchedFromCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numRowsFetchedFromCache, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_perNodePeakMemoryBytesSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PerNodePeakMemoryBytesSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_perNodePeakMemoryBytesSum, allocator);
    }

    if (m_backendsCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackendsCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backendsCount, allocator);
    }

    if (m_fragmentInstancesCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FragmentInstancesCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fragmentInstancesCount, allocator);
    }

    if (m_remainingFragmentCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainingFragmentCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainingFragmentCount, allocator);
    }

}


string ImpalaQuery::GetStatement() const
{
    return m_statement;
}

void ImpalaQuery::SetStatement(const string& _statement)
{
    m_statement = _statement;
    m_statementHasBeenSet = true;
}

bool ImpalaQuery::StatementHasBeenSet() const
{
    return m_statementHasBeenSet;
}

string ImpalaQuery::GetId() const
{
    return m_id;
}

void ImpalaQuery::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ImpalaQuery::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t ImpalaQuery::GetStartTime() const
{
    return m_startTime;
}

void ImpalaQuery::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ImpalaQuery::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ImpalaQuery::GetDuration() const
{
    return m_duration;
}

void ImpalaQuery::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool ImpalaQuery::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t ImpalaQuery::GetEndTime() const
{
    return m_endTime;
}

void ImpalaQuery::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ImpalaQuery::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ImpalaQuery::GetState() const
{
    return m_state;
}

void ImpalaQuery::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool ImpalaQuery::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

int64_t ImpalaQuery::GetRowsFetched() const
{
    return m_rowsFetched;
}

void ImpalaQuery::SetRowsFetched(const int64_t& _rowsFetched)
{
    m_rowsFetched = _rowsFetched;
    m_rowsFetchedHasBeenSet = true;
}

bool ImpalaQuery::RowsFetchedHasBeenSet() const
{
    return m_rowsFetchedHasBeenSet;
}

string ImpalaQuery::GetUser() const
{
    return m_user;
}

void ImpalaQuery::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool ImpalaQuery::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string ImpalaQuery::GetDefaultDB() const
{
    return m_defaultDB;
}

void ImpalaQuery::SetDefaultDB(const string& _defaultDB)
{
    m_defaultDB = _defaultDB;
    m_defaultDBHasBeenSet = true;
}

bool ImpalaQuery::DefaultDBHasBeenSet() const
{
    return m_defaultDBHasBeenSet;
}

string ImpalaQuery::GetCoordinator() const
{
    return m_coordinator;
}

void ImpalaQuery::SetCoordinator(const string& _coordinator)
{
    m_coordinator = _coordinator;
    m_coordinatorHasBeenSet = true;
}

bool ImpalaQuery::CoordinatorHasBeenSet() const
{
    return m_coordinatorHasBeenSet;
}

string ImpalaQuery::GetMaxNodePeakMemoryUsage() const
{
    return m_maxNodePeakMemoryUsage;
}

void ImpalaQuery::SetMaxNodePeakMemoryUsage(const string& _maxNodePeakMemoryUsage)
{
    m_maxNodePeakMemoryUsage = _maxNodePeakMemoryUsage;
    m_maxNodePeakMemoryUsageHasBeenSet = true;
}

bool ImpalaQuery::MaxNodePeakMemoryUsageHasBeenSet() const
{
    return m_maxNodePeakMemoryUsageHasBeenSet;
}

string ImpalaQuery::GetQueryType() const
{
    return m_queryType;
}

void ImpalaQuery::SetQueryType(const string& _queryType)
{
    m_queryType = _queryType;
    m_queryTypeHasBeenSet = true;
}

bool ImpalaQuery::QueryTypeHasBeenSet() const
{
    return m_queryTypeHasBeenSet;
}

int64_t ImpalaQuery::GetScanHDFSRows() const
{
    return m_scanHDFSRows;
}

void ImpalaQuery::SetScanHDFSRows(const int64_t& _scanHDFSRows)
{
    m_scanHDFSRows = _scanHDFSRows;
    m_scanHDFSRowsHasBeenSet = true;
}

bool ImpalaQuery::ScanHDFSRowsHasBeenSet() const
{
    return m_scanHDFSRowsHasBeenSet;
}

int64_t ImpalaQuery::GetScanKUDURows() const
{
    return m_scanKUDURows;
}

void ImpalaQuery::SetScanKUDURows(const int64_t& _scanKUDURows)
{
    m_scanKUDURows = _scanKUDURows;
    m_scanKUDURowsHasBeenSet = true;
}

bool ImpalaQuery::ScanKUDURowsHasBeenSet() const
{
    return m_scanKUDURowsHasBeenSet;
}

int64_t ImpalaQuery::GetScanRowsTotal() const
{
    return m_scanRowsTotal;
}

void ImpalaQuery::SetScanRowsTotal(const int64_t& _scanRowsTotal)
{
    m_scanRowsTotal = _scanRowsTotal;
    m_scanRowsTotalHasBeenSet = true;
}

bool ImpalaQuery::ScanRowsTotalHasBeenSet() const
{
    return m_scanRowsTotalHasBeenSet;
}

int64_t ImpalaQuery::GetTotalBytesRead() const
{
    return m_totalBytesRead;
}

void ImpalaQuery::SetTotalBytesRead(const int64_t& _totalBytesRead)
{
    m_totalBytesRead = _totalBytesRead;
    m_totalBytesReadHasBeenSet = true;
}

bool ImpalaQuery::TotalBytesReadHasBeenSet() const
{
    return m_totalBytesReadHasBeenSet;
}

int64_t ImpalaQuery::GetTotalBytesSent() const
{
    return m_totalBytesSent;
}

void ImpalaQuery::SetTotalBytesSent(const int64_t& _totalBytesSent)
{
    m_totalBytesSent = _totalBytesSent;
    m_totalBytesSentHasBeenSet = true;
}

bool ImpalaQuery::TotalBytesSentHasBeenSet() const
{
    return m_totalBytesSentHasBeenSet;
}

int64_t ImpalaQuery::GetTotalCpuTime() const
{
    return m_totalCpuTime;
}

void ImpalaQuery::SetTotalCpuTime(const int64_t& _totalCpuTime)
{
    m_totalCpuTime = _totalCpuTime;
    m_totalCpuTimeHasBeenSet = true;
}

bool ImpalaQuery::TotalCpuTimeHasBeenSet() const
{
    return m_totalCpuTimeHasBeenSet;
}

int64_t ImpalaQuery::GetTotalInnerBytesSent() const
{
    return m_totalInnerBytesSent;
}

void ImpalaQuery::SetTotalInnerBytesSent(const int64_t& _totalInnerBytesSent)
{
    m_totalInnerBytesSent = _totalInnerBytesSent;
    m_totalInnerBytesSentHasBeenSet = true;
}

bool ImpalaQuery::TotalInnerBytesSentHasBeenSet() const
{
    return m_totalInnerBytesSentHasBeenSet;
}

int64_t ImpalaQuery::GetTotalScanBytesSent() const
{
    return m_totalScanBytesSent;
}

void ImpalaQuery::SetTotalScanBytesSent(const int64_t& _totalScanBytesSent)
{
    m_totalScanBytesSent = _totalScanBytesSent;
    m_totalScanBytesSentHasBeenSet = true;
}

bool ImpalaQuery::TotalScanBytesSentHasBeenSet() const
{
    return m_totalScanBytesSentHasBeenSet;
}

int64_t ImpalaQuery::GetEstimatedPerHostMemBytes() const
{
    return m_estimatedPerHostMemBytes;
}

void ImpalaQuery::SetEstimatedPerHostMemBytes(const int64_t& _estimatedPerHostMemBytes)
{
    m_estimatedPerHostMemBytes = _estimatedPerHostMemBytes;
    m_estimatedPerHostMemBytesHasBeenSet = true;
}

bool ImpalaQuery::EstimatedPerHostMemBytesHasBeenSet() const
{
    return m_estimatedPerHostMemBytesHasBeenSet;
}

int64_t ImpalaQuery::GetNumRowsFetchedFromCache() const
{
    return m_numRowsFetchedFromCache;
}

void ImpalaQuery::SetNumRowsFetchedFromCache(const int64_t& _numRowsFetchedFromCache)
{
    m_numRowsFetchedFromCache = _numRowsFetchedFromCache;
    m_numRowsFetchedFromCacheHasBeenSet = true;
}

bool ImpalaQuery::NumRowsFetchedFromCacheHasBeenSet() const
{
    return m_numRowsFetchedFromCacheHasBeenSet;
}

string ImpalaQuery::GetSessionId() const
{
    return m_sessionId;
}

void ImpalaQuery::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool ImpalaQuery::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

int64_t ImpalaQuery::GetPerNodePeakMemoryBytesSum() const
{
    return m_perNodePeakMemoryBytesSum;
}

void ImpalaQuery::SetPerNodePeakMemoryBytesSum(const int64_t& _perNodePeakMemoryBytesSum)
{
    m_perNodePeakMemoryBytesSum = _perNodePeakMemoryBytesSum;
    m_perNodePeakMemoryBytesSumHasBeenSet = true;
}

bool ImpalaQuery::PerNodePeakMemoryBytesSumHasBeenSet() const
{
    return m_perNodePeakMemoryBytesSumHasBeenSet;
}

int64_t ImpalaQuery::GetBackendsCount() const
{
    return m_backendsCount;
}

void ImpalaQuery::SetBackendsCount(const int64_t& _backendsCount)
{
    m_backendsCount = _backendsCount;
    m_backendsCountHasBeenSet = true;
}

bool ImpalaQuery::BackendsCountHasBeenSet() const
{
    return m_backendsCountHasBeenSet;
}

int64_t ImpalaQuery::GetFragmentInstancesCount() const
{
    return m_fragmentInstancesCount;
}

void ImpalaQuery::SetFragmentInstancesCount(const int64_t& _fragmentInstancesCount)
{
    m_fragmentInstancesCount = _fragmentInstancesCount;
    m_fragmentInstancesCountHasBeenSet = true;
}

bool ImpalaQuery::FragmentInstancesCountHasBeenSet() const
{
    return m_fragmentInstancesCountHasBeenSet;
}

int64_t ImpalaQuery::GetRemainingFragmentCount() const
{
    return m_remainingFragmentCount;
}

void ImpalaQuery::SetRemainingFragmentCount(const int64_t& _remainingFragmentCount)
{
    m_remainingFragmentCount = _remainingFragmentCount;
    m_remainingFragmentCountHasBeenSet = true;
}

bool ImpalaQuery::RemainingFragmentCountHasBeenSet() const
{
    return m_remainingFragmentCountHasBeenSet;
}


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

#include <tencentcloud/emr/v20190103/model/TrinoQueryInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

TrinoQueryInfo::TrinoQueryInfo() :
    m_catalogHasBeenSet(false),
    m_clientIpAddrHasBeenSet(false),
    m_completedSplitsHasBeenSet(false),
    m_cpuTimeHasBeenSet(false),
    m_cumulativeMemoryHasBeenSet(false),
    m_durationMillisHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_internalNetworkBytesHasBeenSet(false),
    m_outputBytesHasBeenSet(false),
    m_peakUserMemoryBytesHasBeenSet(false),
    m_physicalInputBytesHasBeenSet(false),
    m_processedInputBytesHasBeenSet(false),
    m_sqlCompileTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_statementHasBeenSet(false),
    m_userHasBeenSet(false),
    m_writtenBytesHasBeenSet(false)
{
}

CoreInternalOutcome TrinoQueryInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Catalog") && !value["Catalog"].IsNull())
    {
        if (!value["Catalog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrinoQueryInfo.Catalog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalog = string(value["Catalog"].GetString());
        m_catalogHasBeenSet = true;
    }

    if (value.HasMember("ClientIpAddr") && !value["ClientIpAddr"].IsNull())
    {
        if (!value["ClientIpAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrinoQueryInfo.ClientIpAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIpAddr = string(value["ClientIpAddr"].GetString());
        m_clientIpAddrHasBeenSet = true;
    }

    if (value.HasMember("CompletedSplits") && !value["CompletedSplits"].IsNull())
    {
        if (!value["CompletedSplits"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrinoQueryInfo.CompletedSplits` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_completedSplits = string(value["CompletedSplits"].GetString());
        m_completedSplitsHasBeenSet = true;
    }

    if (value.HasMember("CpuTime") && !value["CpuTime"].IsNull())
    {
        if (!value["CpuTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrinoQueryInfo.CpuTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuTime = value["CpuTime"].GetInt64();
        m_cpuTimeHasBeenSet = true;
    }

    if (value.HasMember("CumulativeMemory") && !value["CumulativeMemory"].IsNull())
    {
        if (!value["CumulativeMemory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrinoQueryInfo.CumulativeMemory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cumulativeMemory = value["CumulativeMemory"].GetInt64();
        m_cumulativeMemoryHasBeenSet = true;
    }

    if (value.HasMember("DurationMillis") && !value["DurationMillis"].IsNull())
    {
        if (!value["DurationMillis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrinoQueryInfo.DurationMillis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_durationMillis = value["DurationMillis"].GetInt64();
        m_durationMillisHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrinoQueryInfo.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrinoQueryInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("InternalNetworkBytes") && !value["InternalNetworkBytes"].IsNull())
    {
        if (!value["InternalNetworkBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrinoQueryInfo.InternalNetworkBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_internalNetworkBytes = value["InternalNetworkBytes"].GetInt64();
        m_internalNetworkBytesHasBeenSet = true;
    }

    if (value.HasMember("OutputBytes") && !value["OutputBytes"].IsNull())
    {
        if (!value["OutputBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrinoQueryInfo.OutputBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputBytes = value["OutputBytes"].GetInt64();
        m_outputBytesHasBeenSet = true;
    }

    if (value.HasMember("PeakUserMemoryBytes") && !value["PeakUserMemoryBytes"].IsNull())
    {
        if (!value["PeakUserMemoryBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrinoQueryInfo.PeakUserMemoryBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_peakUserMemoryBytes = value["PeakUserMemoryBytes"].GetInt64();
        m_peakUserMemoryBytesHasBeenSet = true;
    }

    if (value.HasMember("PhysicalInputBytes") && !value["PhysicalInputBytes"].IsNull())
    {
        if (!value["PhysicalInputBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrinoQueryInfo.PhysicalInputBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_physicalInputBytes = value["PhysicalInputBytes"].GetInt64();
        m_physicalInputBytesHasBeenSet = true;
    }

    if (value.HasMember("ProcessedInputBytes") && !value["ProcessedInputBytes"].IsNull())
    {
        if (!value["ProcessedInputBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrinoQueryInfo.ProcessedInputBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_processedInputBytes = value["ProcessedInputBytes"].GetInt64();
        m_processedInputBytesHasBeenSet = true;
    }

    if (value.HasMember("SqlCompileTime") && !value["SqlCompileTime"].IsNull())
    {
        if (!value["SqlCompileTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrinoQueryInfo.SqlCompileTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sqlCompileTime = value["SqlCompileTime"].GetInt64();
        m_sqlCompileTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrinoQueryInfo.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrinoQueryInfo.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Statement") && !value["Statement"].IsNull())
    {
        if (!value["Statement"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrinoQueryInfo.Statement` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statement = string(value["Statement"].GetString());
        m_statementHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrinoQueryInfo.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("WrittenBytes") && !value["WrittenBytes"].IsNull())
    {
        if (!value["WrittenBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrinoQueryInfo.WrittenBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_writtenBytes = value["WrittenBytes"].GetInt64();
        m_writtenBytesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrinoQueryInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIpAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIpAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIpAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_completedSplitsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompletedSplits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_completedSplits.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuTime, allocator);
    }

    if (m_cumulativeMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CumulativeMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cumulativeMemory, allocator);
    }

    if (m_durationMillisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationMillis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_durationMillis, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_internalNetworkBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalNetworkBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internalNetworkBytes, allocator);
    }

    if (m_outputBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputBytes, allocator);
    }

    if (m_peakUserMemoryBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeakUserMemoryBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_peakUserMemoryBytes, allocator);
    }

    if (m_physicalInputBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhysicalInputBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_physicalInputBytes, allocator);
    }

    if (m_processedInputBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessedInputBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processedInputBytes, allocator);
    }

    if (m_sqlCompileTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlCompileTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sqlCompileTime, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_statementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Statement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statement.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_writtenBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WrittenBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_writtenBytes, allocator);
    }

}


string TrinoQueryInfo::GetCatalog() const
{
    return m_catalog;
}

void TrinoQueryInfo::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool TrinoQueryInfo::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string TrinoQueryInfo::GetClientIpAddr() const
{
    return m_clientIpAddr;
}

void TrinoQueryInfo::SetClientIpAddr(const string& _clientIpAddr)
{
    m_clientIpAddr = _clientIpAddr;
    m_clientIpAddrHasBeenSet = true;
}

bool TrinoQueryInfo::ClientIpAddrHasBeenSet() const
{
    return m_clientIpAddrHasBeenSet;
}

string TrinoQueryInfo::GetCompletedSplits() const
{
    return m_completedSplits;
}

void TrinoQueryInfo::SetCompletedSplits(const string& _completedSplits)
{
    m_completedSplits = _completedSplits;
    m_completedSplitsHasBeenSet = true;
}

bool TrinoQueryInfo::CompletedSplitsHasBeenSet() const
{
    return m_completedSplitsHasBeenSet;
}

int64_t TrinoQueryInfo::GetCpuTime() const
{
    return m_cpuTime;
}

void TrinoQueryInfo::SetCpuTime(const int64_t& _cpuTime)
{
    m_cpuTime = _cpuTime;
    m_cpuTimeHasBeenSet = true;
}

bool TrinoQueryInfo::CpuTimeHasBeenSet() const
{
    return m_cpuTimeHasBeenSet;
}

int64_t TrinoQueryInfo::GetCumulativeMemory() const
{
    return m_cumulativeMemory;
}

void TrinoQueryInfo::SetCumulativeMemory(const int64_t& _cumulativeMemory)
{
    m_cumulativeMemory = _cumulativeMemory;
    m_cumulativeMemoryHasBeenSet = true;
}

bool TrinoQueryInfo::CumulativeMemoryHasBeenSet() const
{
    return m_cumulativeMemoryHasBeenSet;
}

int64_t TrinoQueryInfo::GetDurationMillis() const
{
    return m_durationMillis;
}

void TrinoQueryInfo::SetDurationMillis(const int64_t& _durationMillis)
{
    m_durationMillis = _durationMillis;
    m_durationMillisHasBeenSet = true;
}

bool TrinoQueryInfo::DurationMillisHasBeenSet() const
{
    return m_durationMillisHasBeenSet;
}

int64_t TrinoQueryInfo::GetEndTime() const
{
    return m_endTime;
}

void TrinoQueryInfo::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TrinoQueryInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string TrinoQueryInfo::GetId() const
{
    return m_id;
}

void TrinoQueryInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool TrinoQueryInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t TrinoQueryInfo::GetInternalNetworkBytes() const
{
    return m_internalNetworkBytes;
}

void TrinoQueryInfo::SetInternalNetworkBytes(const int64_t& _internalNetworkBytes)
{
    m_internalNetworkBytes = _internalNetworkBytes;
    m_internalNetworkBytesHasBeenSet = true;
}

bool TrinoQueryInfo::InternalNetworkBytesHasBeenSet() const
{
    return m_internalNetworkBytesHasBeenSet;
}

int64_t TrinoQueryInfo::GetOutputBytes() const
{
    return m_outputBytes;
}

void TrinoQueryInfo::SetOutputBytes(const int64_t& _outputBytes)
{
    m_outputBytes = _outputBytes;
    m_outputBytesHasBeenSet = true;
}

bool TrinoQueryInfo::OutputBytesHasBeenSet() const
{
    return m_outputBytesHasBeenSet;
}

int64_t TrinoQueryInfo::GetPeakUserMemoryBytes() const
{
    return m_peakUserMemoryBytes;
}

void TrinoQueryInfo::SetPeakUserMemoryBytes(const int64_t& _peakUserMemoryBytes)
{
    m_peakUserMemoryBytes = _peakUserMemoryBytes;
    m_peakUserMemoryBytesHasBeenSet = true;
}

bool TrinoQueryInfo::PeakUserMemoryBytesHasBeenSet() const
{
    return m_peakUserMemoryBytesHasBeenSet;
}

int64_t TrinoQueryInfo::GetPhysicalInputBytes() const
{
    return m_physicalInputBytes;
}

void TrinoQueryInfo::SetPhysicalInputBytes(const int64_t& _physicalInputBytes)
{
    m_physicalInputBytes = _physicalInputBytes;
    m_physicalInputBytesHasBeenSet = true;
}

bool TrinoQueryInfo::PhysicalInputBytesHasBeenSet() const
{
    return m_physicalInputBytesHasBeenSet;
}

int64_t TrinoQueryInfo::GetProcessedInputBytes() const
{
    return m_processedInputBytes;
}

void TrinoQueryInfo::SetProcessedInputBytes(const int64_t& _processedInputBytes)
{
    m_processedInputBytes = _processedInputBytes;
    m_processedInputBytesHasBeenSet = true;
}

bool TrinoQueryInfo::ProcessedInputBytesHasBeenSet() const
{
    return m_processedInputBytesHasBeenSet;
}

int64_t TrinoQueryInfo::GetSqlCompileTime() const
{
    return m_sqlCompileTime;
}

void TrinoQueryInfo::SetSqlCompileTime(const int64_t& _sqlCompileTime)
{
    m_sqlCompileTime = _sqlCompileTime;
    m_sqlCompileTimeHasBeenSet = true;
}

bool TrinoQueryInfo::SqlCompileTimeHasBeenSet() const
{
    return m_sqlCompileTimeHasBeenSet;
}

int64_t TrinoQueryInfo::GetStartTime() const
{
    return m_startTime;
}

void TrinoQueryInfo::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TrinoQueryInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string TrinoQueryInfo::GetState() const
{
    return m_state;
}

void TrinoQueryInfo::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool TrinoQueryInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string TrinoQueryInfo::GetStatement() const
{
    return m_statement;
}

void TrinoQueryInfo::SetStatement(const string& _statement)
{
    m_statement = _statement;
    m_statementHasBeenSet = true;
}

bool TrinoQueryInfo::StatementHasBeenSet() const
{
    return m_statementHasBeenSet;
}

string TrinoQueryInfo::GetUser() const
{
    return m_user;
}

void TrinoQueryInfo::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool TrinoQueryInfo::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

int64_t TrinoQueryInfo::GetWrittenBytes() const
{
    return m_writtenBytes;
}

void TrinoQueryInfo::SetWrittenBytes(const int64_t& _writtenBytes)
{
    m_writtenBytes = _writtenBytes;
    m_writtenBytesHasBeenSet = true;
}

bool TrinoQueryInfo::WrittenBytesHasBeenSet() const
{
    return m_writtenBytesHasBeenSet;
}


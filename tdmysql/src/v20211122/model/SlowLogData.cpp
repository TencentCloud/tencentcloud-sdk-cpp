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

#include <tencentcloud/tdmysql/v20211122/model/SlowLogData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

SlowLogData::SlowLogData() :
    m_timestampHasBeenSet(false),
    m_queryTimeHasBeenSet(false),
    m_sqlTextHasBeenSet(false),
    m_userHostHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_lockTimeHasBeenSet(false),
    m_rowsExaminedHasBeenSet(false),
    m_rowsSentHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_rpcTimeHasBeenSet(false),
    m_storageRpcTimeHasBeenSet(false),
    m_rpcRetryDelayTimeHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_rpcTraceHasBeenSet(false),
    m_tDStoreLockTimeHasBeenSet(false),
    m_traceIdHasBeenSet(false),
    m_explainHasBeenSet(false)
{
}

CoreInternalOutcome SlowLogData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.Timestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = string(value["Timestamp"].GetString());
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("QueryTime") && !value["QueryTime"].IsNull())
    {
        if (!value["QueryTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.QueryTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_queryTime = value["QueryTime"].GetDouble();
        m_queryTimeHasBeenSet = true;
    }

    if (value.HasMember("SqlText") && !value["SqlText"].IsNull())
    {
        if (!value["SqlText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.SqlText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlText = string(value["SqlText"].GetString());
        m_sqlTextHasBeenSet = true;
    }

    if (value.HasMember("UserHost") && !value["UserHost"].IsNull())
    {
        if (!value["UserHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.UserHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userHost = string(value["UserHost"].GetString());
        m_userHostHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("LockTime") && !value["LockTime"].IsNull())
    {
        if (!value["LockTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.LockTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lockTime = value["LockTime"].GetDouble();
        m_lockTimeHasBeenSet = true;
    }

    if (value.HasMember("RowsExamined") && !value["RowsExamined"].IsNull())
    {
        if (!value["RowsExamined"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.RowsExamined` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rowsExamined = value["RowsExamined"].GetUint64();
        m_rowsExaminedHasBeenSet = true;
    }

    if (value.HasMember("RowsSent") && !value["RowsSent"].IsNull())
    {
        if (!value["RowsSent"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.RowsSent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rowsSent = value["RowsSent"].GetUint64();
        m_rowsSentHasBeenSet = true;
    }

    if (value.HasMember("TransactionId") && !value["TransactionId"].IsNull())
    {
        if (!value["TransactionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.TransactionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionId = string(value["TransactionId"].GetString());
        m_transactionIdHasBeenSet = true;
    }

    if (value.HasMember("RpcTime") && !value["RpcTime"].IsNull())
    {
        if (!value["RpcTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.RpcTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_rpcTime = value["RpcTime"].GetDouble();
        m_rpcTimeHasBeenSet = true;
    }

    if (value.HasMember("StorageRpcTime") && !value["StorageRpcTime"].IsNull())
    {
        if (!value["StorageRpcTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.StorageRpcTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_storageRpcTime = value["StorageRpcTime"].GetDouble();
        m_storageRpcTimeHasBeenSet = true;
    }

    if (value.HasMember("RpcRetryDelayTime") && !value["RpcRetryDelayTime"].IsNull())
    {
        if (!value["RpcRetryDelayTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.RpcRetryDelayTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_rpcRetryDelayTime = value["RpcRetryDelayTime"].GetDouble();
        m_rpcRetryDelayTimeHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("RpcTrace") && !value["RpcTrace"].IsNull())
    {
        if (!value["RpcTrace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.RpcTrace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rpcTrace = string(value["RpcTrace"].GetString());
        m_rpcTraceHasBeenSet = true;
    }

    if (value.HasMember("TDStoreLockTime") && !value["TDStoreLockTime"].IsNull())
    {
        if (!value["TDStoreLockTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.TDStoreLockTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_tDStoreLockTime = value["TDStoreLockTime"].GetDouble();
        m_tDStoreLockTimeHasBeenSet = true;
    }

    if (value.HasMember("TraceId") && !value["TraceId"].IsNull())
    {
        if (!value["TraceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.TraceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceId = string(value["TraceId"].GetString());
        m_traceIdHasBeenSet = true;
    }

    if (value.HasMember("Explain") && !value["Explain"].IsNull())
    {
        if (!value["Explain"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SlowLogData.Explain` is not array type"));

        const rapidjson::Value &tmpValue = value["Explain"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Explain item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_explain.push_back(item);
        }
        m_explainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlowLogData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_queryTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryTime, allocator);
    }

    if (m_sqlTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlText.c_str(), allocator).Move(), allocator);
    }

    if (m_userHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userHost.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_lockTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockTime, allocator);
    }

    if (m_rowsExaminedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowsExamined";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowsExamined, allocator);
    }

    if (m_rowsSentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowsSent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowsSent, allocator);
    }

    if (m_transactionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transactionId.c_str(), allocator).Move(), allocator);
    }

    if (m_rpcTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RpcTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rpcTime, allocator);
    }

    if (m_storageRpcTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageRpcTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageRpcTime, allocator);
    }

    if (m_rpcRetryDelayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RpcRetryDelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rpcRetryDelayTime, allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_rpcTraceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RpcTrace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rpcTrace.c_str(), allocator).Move(), allocator);
    }

    if (m_tDStoreLockTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TDStoreLockTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tDStoreLockTime, allocator);
    }

    if (m_traceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceId.c_str(), allocator).Move(), allocator);
    }

    if (m_explainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Explain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_explain.begin(); itr != m_explain.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SlowLogData::GetTimestamp() const
{
    return m_timestamp;
}

void SlowLogData::SetTimestamp(const string& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool SlowLogData::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

double SlowLogData::GetQueryTime() const
{
    return m_queryTime;
}

void SlowLogData::SetQueryTime(const double& _queryTime)
{
    m_queryTime = _queryTime;
    m_queryTimeHasBeenSet = true;
}

bool SlowLogData::QueryTimeHasBeenSet() const
{
    return m_queryTimeHasBeenSet;
}

string SlowLogData::GetSqlText() const
{
    return m_sqlText;
}

void SlowLogData::SetSqlText(const string& _sqlText)
{
    m_sqlText = _sqlText;
    m_sqlTextHasBeenSet = true;
}

bool SlowLogData::SqlTextHasBeenSet() const
{
    return m_sqlTextHasBeenSet;
}

string SlowLogData::GetUserHost() const
{
    return m_userHost;
}

void SlowLogData::SetUserHost(const string& _userHost)
{
    m_userHost = _userHost;
    m_userHostHasBeenSet = true;
}

bool SlowLogData::UserHostHasBeenSet() const
{
    return m_userHostHasBeenSet;
}

string SlowLogData::GetUserName() const
{
    return m_userName;
}

void SlowLogData::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool SlowLogData::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string SlowLogData::GetDatabase() const
{
    return m_database;
}

void SlowLogData::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool SlowLogData::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

double SlowLogData::GetLockTime() const
{
    return m_lockTime;
}

void SlowLogData::SetLockTime(const double& _lockTime)
{
    m_lockTime = _lockTime;
    m_lockTimeHasBeenSet = true;
}

bool SlowLogData::LockTimeHasBeenSet() const
{
    return m_lockTimeHasBeenSet;
}

uint64_t SlowLogData::GetRowsExamined() const
{
    return m_rowsExamined;
}

void SlowLogData::SetRowsExamined(const uint64_t& _rowsExamined)
{
    m_rowsExamined = _rowsExamined;
    m_rowsExaminedHasBeenSet = true;
}

bool SlowLogData::RowsExaminedHasBeenSet() const
{
    return m_rowsExaminedHasBeenSet;
}

uint64_t SlowLogData::GetRowsSent() const
{
    return m_rowsSent;
}

void SlowLogData::SetRowsSent(const uint64_t& _rowsSent)
{
    m_rowsSent = _rowsSent;
    m_rowsSentHasBeenSet = true;
}

bool SlowLogData::RowsSentHasBeenSet() const
{
    return m_rowsSentHasBeenSet;
}

string SlowLogData::GetTransactionId() const
{
    return m_transactionId;
}

void SlowLogData::SetTransactionId(const string& _transactionId)
{
    m_transactionId = _transactionId;
    m_transactionIdHasBeenSet = true;
}

bool SlowLogData::TransactionIdHasBeenSet() const
{
    return m_transactionIdHasBeenSet;
}

double SlowLogData::GetRpcTime() const
{
    return m_rpcTime;
}

void SlowLogData::SetRpcTime(const double& _rpcTime)
{
    m_rpcTime = _rpcTime;
    m_rpcTimeHasBeenSet = true;
}

bool SlowLogData::RpcTimeHasBeenSet() const
{
    return m_rpcTimeHasBeenSet;
}

double SlowLogData::GetStorageRpcTime() const
{
    return m_storageRpcTime;
}

void SlowLogData::SetStorageRpcTime(const double& _storageRpcTime)
{
    m_storageRpcTime = _storageRpcTime;
    m_storageRpcTimeHasBeenSet = true;
}

bool SlowLogData::StorageRpcTimeHasBeenSet() const
{
    return m_storageRpcTimeHasBeenSet;
}

double SlowLogData::GetRpcRetryDelayTime() const
{
    return m_rpcRetryDelayTime;
}

void SlowLogData::SetRpcRetryDelayTime(const double& _rpcRetryDelayTime)
{
    m_rpcRetryDelayTime = _rpcRetryDelayTime;
    m_rpcRetryDelayTimeHasBeenSet = true;
}

bool SlowLogData::RpcRetryDelayTimeHasBeenSet() const
{
    return m_rpcRetryDelayTimeHasBeenSet;
}

string SlowLogData::GetNodeId() const
{
    return m_nodeId;
}

void SlowLogData::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool SlowLogData::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string SlowLogData::GetRpcTrace() const
{
    return m_rpcTrace;
}

void SlowLogData::SetRpcTrace(const string& _rpcTrace)
{
    m_rpcTrace = _rpcTrace;
    m_rpcTraceHasBeenSet = true;
}

bool SlowLogData::RpcTraceHasBeenSet() const
{
    return m_rpcTraceHasBeenSet;
}

double SlowLogData::GetTDStoreLockTime() const
{
    return m_tDStoreLockTime;
}

void SlowLogData::SetTDStoreLockTime(const double& _tDStoreLockTime)
{
    m_tDStoreLockTime = _tDStoreLockTime;
    m_tDStoreLockTimeHasBeenSet = true;
}

bool SlowLogData::TDStoreLockTimeHasBeenSet() const
{
    return m_tDStoreLockTimeHasBeenSet;
}

string SlowLogData::GetTraceId() const
{
    return m_traceId;
}

void SlowLogData::SetTraceId(const string& _traceId)
{
    m_traceId = _traceId;
    m_traceIdHasBeenSet = true;
}

bool SlowLogData::TraceIdHasBeenSet() const
{
    return m_traceIdHasBeenSet;
}

vector<Explain> SlowLogData::GetExplain() const
{
    return m_explain;
}

void SlowLogData::SetExplain(const vector<Explain>& _explain)
{
    m_explain = _explain;
    m_explainHasBeenSet = true;
}

bool SlowLogData::ExplainHasBeenSet() const
{
    return m_explainHasBeenSet;
}


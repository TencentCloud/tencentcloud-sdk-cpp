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

#include <tencentcloud/dtf/v20200506/model/Transaction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dtf::V20200506::Model;
using namespace std;

Transaction::Transaction() :
    m_transactionIdHasBeenSet(false),
    m_transactionBeginHasBeenSet(false),
    m_transactionEndHasBeenSet(false),
    m_transactionCommitHasBeenSet(false),
    m_transactionRollbackHasBeenSet(false),
    m_transactionErrorHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_endFlagHasBeenSet(false),
    m_timeoutFlagHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_serverHasBeenSet(false),
    m_branchQuantityHasBeenSet(false),
    m_retryFlagHasBeenSet(false)
{
}

CoreInternalOutcome Transaction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TransactionId") && !value["TransactionId"].IsNull())
    {
        if (!value["TransactionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Transaction.TransactionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transactionId = value["TransactionId"].GetInt64();
        m_transactionIdHasBeenSet = true;
    }

    if (value.HasMember("TransactionBegin") && !value["TransactionBegin"].IsNull())
    {
        if (!value["TransactionBegin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Transaction.TransactionBegin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transactionBegin = value["TransactionBegin"].GetInt64();
        m_transactionBeginHasBeenSet = true;
    }

    if (value.HasMember("TransactionEnd") && !value["TransactionEnd"].IsNull())
    {
        if (!value["TransactionEnd"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Transaction.TransactionEnd` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transactionEnd = value["TransactionEnd"].GetInt64();
        m_transactionEndHasBeenSet = true;
    }

    if (value.HasMember("TransactionCommit") && !value["TransactionCommit"].IsNull())
    {
        if (!value["TransactionCommit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Transaction.TransactionCommit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transactionCommit = value["TransactionCommit"].GetInt64();
        m_transactionCommitHasBeenSet = true;
    }

    if (value.HasMember("TransactionRollback") && !value["TransactionRollback"].IsNull())
    {
        if (!value["TransactionRollback"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Transaction.TransactionRollback` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transactionRollback = value["TransactionRollback"].GetInt64();
        m_transactionRollbackHasBeenSet = true;
    }

    if (value.HasMember("TransactionError") && !value["TransactionError"].IsNull())
    {
        if (!value["TransactionError"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Transaction.TransactionError` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transactionError = value["TransactionError"].GetInt64();
        m_transactionErrorHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Transaction.Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Transaction.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EndFlag") && !value["EndFlag"].IsNull())
    {
        if (!value["EndFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Transaction.EndFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endFlag = value["EndFlag"].GetInt64();
        m_endFlagHasBeenSet = true;
    }

    if (value.HasMember("TimeoutFlag") && !value["TimeoutFlag"].IsNull())
    {
        if (!value["TimeoutFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Transaction.TimeoutFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeoutFlag = value["TimeoutFlag"].GetInt64();
        m_timeoutFlagHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Transaction.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Transaction.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("Server") && !value["Server"].IsNull())
    {
        if (!value["Server"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Transaction.Server` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_server = string(value["Server"].GetString());
        m_serverHasBeenSet = true;
    }

    if (value.HasMember("BranchQuantity") && !value["BranchQuantity"].IsNull())
    {
        if (!value["BranchQuantity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Transaction.BranchQuantity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_branchQuantity = value["BranchQuantity"].GetInt64();
        m_branchQuantityHasBeenSet = true;
    }

    if (value.HasMember("RetryFlag") && !value["RetryFlag"].IsNull())
    {
        if (!value["RetryFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Transaction.RetryFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_retryFlag = value["RetryFlag"].GetBool();
        m_retryFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Transaction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_transactionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transactionId, allocator);
    }

    if (m_transactionBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionBegin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transactionBegin, allocator);
    }

    if (m_transactionEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transactionEnd, allocator);
    }

    if (m_transactionCommitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionCommit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transactionCommit, allocator);
    }

    if (m_transactionRollbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionRollback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transactionRollback, allocator);
    }

    if (m_transactionErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transactionError, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_endFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endFlag, allocator);
    }

    if (m_timeoutFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeoutFlag, allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_serverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Server";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_server.c_str(), allocator).Move(), allocator);
    }

    if (m_branchQuantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BranchQuantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_branchQuantity, allocator);
    }

    if (m_retryFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryFlag, allocator);
    }

}


int64_t Transaction::GetTransactionId() const
{
    return m_transactionId;
}

void Transaction::SetTransactionId(const int64_t& _transactionId)
{
    m_transactionId = _transactionId;
    m_transactionIdHasBeenSet = true;
}

bool Transaction::TransactionIdHasBeenSet() const
{
    return m_transactionIdHasBeenSet;
}

int64_t Transaction::GetTransactionBegin() const
{
    return m_transactionBegin;
}

void Transaction::SetTransactionBegin(const int64_t& _transactionBegin)
{
    m_transactionBegin = _transactionBegin;
    m_transactionBeginHasBeenSet = true;
}

bool Transaction::TransactionBeginHasBeenSet() const
{
    return m_transactionBeginHasBeenSet;
}

int64_t Transaction::GetTransactionEnd() const
{
    return m_transactionEnd;
}

void Transaction::SetTransactionEnd(const int64_t& _transactionEnd)
{
    m_transactionEnd = _transactionEnd;
    m_transactionEndHasBeenSet = true;
}

bool Transaction::TransactionEndHasBeenSet() const
{
    return m_transactionEndHasBeenSet;
}

int64_t Transaction::GetTransactionCommit() const
{
    return m_transactionCommit;
}

void Transaction::SetTransactionCommit(const int64_t& _transactionCommit)
{
    m_transactionCommit = _transactionCommit;
    m_transactionCommitHasBeenSet = true;
}

bool Transaction::TransactionCommitHasBeenSet() const
{
    return m_transactionCommitHasBeenSet;
}

int64_t Transaction::GetTransactionRollback() const
{
    return m_transactionRollback;
}

void Transaction::SetTransactionRollback(const int64_t& _transactionRollback)
{
    m_transactionRollback = _transactionRollback;
    m_transactionRollbackHasBeenSet = true;
}

bool Transaction::TransactionRollbackHasBeenSet() const
{
    return m_transactionRollbackHasBeenSet;
}

int64_t Transaction::GetTransactionError() const
{
    return m_transactionError;
}

void Transaction::SetTransactionError(const int64_t& _transactionError)
{
    m_transactionError = _transactionError;
    m_transactionErrorHasBeenSet = true;
}

bool Transaction::TransactionErrorHasBeenSet() const
{
    return m_transactionErrorHasBeenSet;
}

int64_t Transaction::GetTimeout() const
{
    return m_timeout;
}

void Transaction::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool Transaction::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

int64_t Transaction::GetStatus() const
{
    return m_status;
}

void Transaction::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Transaction::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t Transaction::GetEndFlag() const
{
    return m_endFlag;
}

void Transaction::SetEndFlag(const int64_t& _endFlag)
{
    m_endFlag = _endFlag;
    m_endFlagHasBeenSet = true;
}

bool Transaction::EndFlagHasBeenSet() const
{
    return m_endFlagHasBeenSet;
}

int64_t Transaction::GetTimeoutFlag() const
{
    return m_timeoutFlag;
}

void Transaction::SetTimeoutFlag(const int64_t& _timeoutFlag)
{
    m_timeoutFlag = _timeoutFlag;
    m_timeoutFlagHasBeenSet = true;
}

bool Transaction::TimeoutFlagHasBeenSet() const
{
    return m_timeoutFlagHasBeenSet;
}

string Transaction::GetComment() const
{
    return m_comment;
}

void Transaction::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool Transaction::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string Transaction::GetGroupId() const
{
    return m_groupId;
}

void Transaction::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool Transaction::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string Transaction::GetServer() const
{
    return m_server;
}

void Transaction::SetServer(const string& _server)
{
    m_server = _server;
    m_serverHasBeenSet = true;
}

bool Transaction::ServerHasBeenSet() const
{
    return m_serverHasBeenSet;
}

int64_t Transaction::GetBranchQuantity() const
{
    return m_branchQuantity;
}

void Transaction::SetBranchQuantity(const int64_t& _branchQuantity)
{
    m_branchQuantity = _branchQuantity;
    m_branchQuantityHasBeenSet = true;
}

bool Transaction::BranchQuantityHasBeenSet() const
{
    return m_branchQuantityHasBeenSet;
}

bool Transaction::GetRetryFlag() const
{
    return m_retryFlag;
}

void Transaction::SetRetryFlag(const bool& _retryFlag)
{
    m_retryFlag = _retryFlag;
    m_retryFlagHasBeenSet = true;
}

bool Transaction::RetryFlagHasBeenSet() const
{
    return m_retryFlagHasBeenSet;
}


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

#include <tencentcloud/dbbrain/v20210527/model/DeadlockTransaction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DeadlockTransaction::DeadlockTransaction() :
    m_statusHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_isVictimHasBeenSet(false),
    m_sessionsHasBeenSet(false)
{
}

CoreInternalOutcome DeadlockTransaction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockTransaction.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TransactionId") && !value["TransactionId"].IsNull())
    {
        if (!value["TransactionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockTransaction.TransactionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionId = string(value["TransactionId"].GetString());
        m_transactionIdHasBeenSet = true;
    }

    if (value.HasMember("IsVictim") && !value["IsVictim"].IsNull())
    {
        if (!value["IsVictim"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockTransaction.IsVictim` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isVictim = value["IsVictim"].GetBool();
        m_isVictimHasBeenSet = true;
    }

    if (value.HasMember("Sessions") && !value["Sessions"].IsNull())
    {
        if (!value["Sessions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeadlockTransaction.Sessions` is not array type"));

        const rapidjson::Value &tmpValue = value["Sessions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeadlockSession item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sessions.push_back(item);
        }
        m_sessionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeadlockTransaction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_transactionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transactionId.c_str(), allocator).Move(), allocator);
    }

    if (m_isVictimHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsVictim";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isVictim, allocator);
    }

    if (m_sessionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sessions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sessions.begin(); itr != m_sessions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DeadlockTransaction::GetStatus() const
{
    return m_status;
}

void DeadlockTransaction::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DeadlockTransaction::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DeadlockTransaction::GetTransactionId() const
{
    return m_transactionId;
}

void DeadlockTransaction::SetTransactionId(const string& _transactionId)
{
    m_transactionId = _transactionId;
    m_transactionIdHasBeenSet = true;
}

bool DeadlockTransaction::TransactionIdHasBeenSet() const
{
    return m_transactionIdHasBeenSet;
}

bool DeadlockTransaction::GetIsVictim() const
{
    return m_isVictim;
}

void DeadlockTransaction::SetIsVictim(const bool& _isVictim)
{
    m_isVictim = _isVictim;
    m_isVictimHasBeenSet = true;
}

bool DeadlockTransaction::IsVictimHasBeenSet() const
{
    return m_isVictimHasBeenSet;
}

vector<DeadlockSession> DeadlockTransaction::GetSessions() const
{
    return m_sessions;
}

void DeadlockTransaction::SetSessions(const vector<DeadlockSession>& _sessions)
{
    m_sessions = _sessions;
    m_sessionsHasBeenSet = true;
}

bool DeadlockTransaction::SessionsHasBeenSet() const
{
    return m_sessionsHasBeenSet;
}


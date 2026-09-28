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

#include <tencentcloud/dbbrain/v20210527/model/DeadlockFrame.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DeadlockFrame::DeadlockFrame() :
    m_lineHasBeenSet(false),
    m_statementStartHasBeenSet(false),
    m_procNameHasBeenSet(false),
    m_sqlHandleHasBeenSet(false),
    m_statementEndHasBeenSet(false)
{
}

CoreInternalOutcome DeadlockFrame::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Line") && !value["Line"].IsNull())
    {
        if (!value["Line"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockFrame.Line` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_line = value["Line"].GetInt64();
        m_lineHasBeenSet = true;
    }

    if (value.HasMember("StatementStart") && !value["StatementStart"].IsNull())
    {
        if (!value["StatementStart"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockFrame.StatementStart` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statementStart = value["StatementStart"].GetInt64();
        m_statementStartHasBeenSet = true;
    }

    if (value.HasMember("ProcName") && !value["ProcName"].IsNull())
    {
        if (!value["ProcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockFrame.ProcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_procName = string(value["ProcName"].GetString());
        m_procNameHasBeenSet = true;
    }

    if (value.HasMember("SqlHandle") && !value["SqlHandle"].IsNull())
    {
        if (!value["SqlHandle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockFrame.SqlHandle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlHandle = string(value["SqlHandle"].GetString());
        m_sqlHandleHasBeenSet = true;
    }

    if (value.HasMember("StatementEnd") && !value["StatementEnd"].IsNull())
    {
        if (!value["StatementEnd"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockFrame.StatementEnd` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statementEnd = value["StatementEnd"].GetInt64();
        m_statementEndHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeadlockFrame::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Line";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_line, allocator);
    }

    if (m_statementStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatementStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statementStart, allocator);
    }

    if (m_procNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_procName.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlHandleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlHandle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlHandle.c_str(), allocator).Move(), allocator);
    }

    if (m_statementEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatementEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statementEnd, allocator);
    }

}


int64_t DeadlockFrame::GetLine() const
{
    return m_line;
}

void DeadlockFrame::SetLine(const int64_t& _line)
{
    m_line = _line;
    m_lineHasBeenSet = true;
}

bool DeadlockFrame::LineHasBeenSet() const
{
    return m_lineHasBeenSet;
}

int64_t DeadlockFrame::GetStatementStart() const
{
    return m_statementStart;
}

void DeadlockFrame::SetStatementStart(const int64_t& _statementStart)
{
    m_statementStart = _statementStart;
    m_statementStartHasBeenSet = true;
}

bool DeadlockFrame::StatementStartHasBeenSet() const
{
    return m_statementStartHasBeenSet;
}

string DeadlockFrame::GetProcName() const
{
    return m_procName;
}

void DeadlockFrame::SetProcName(const string& _procName)
{
    m_procName = _procName;
    m_procNameHasBeenSet = true;
}

bool DeadlockFrame::ProcNameHasBeenSet() const
{
    return m_procNameHasBeenSet;
}

string DeadlockFrame::GetSqlHandle() const
{
    return m_sqlHandle;
}

void DeadlockFrame::SetSqlHandle(const string& _sqlHandle)
{
    m_sqlHandle = _sqlHandle;
    m_sqlHandleHasBeenSet = true;
}

bool DeadlockFrame::SqlHandleHasBeenSet() const
{
    return m_sqlHandleHasBeenSet;
}

int64_t DeadlockFrame::GetStatementEnd() const
{
    return m_statementEnd;
}

void DeadlockFrame::SetStatementEnd(const int64_t& _statementEnd)
{
    m_statementEnd = _statementEnd;
    m_statementEndHasBeenSet = true;
}

bool DeadlockFrame::StatementEndHasBeenSet() const
{
    return m_statementEndHasBeenSet;
}


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

#include <tencentcloud/dlc/v20210125/model/CreateSparkSessionBatchSQLRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateSparkSessionBatchSQLRequest::CreateSparkSessionBatchSQLRequest() :
    m_dataEngineNameHasBeenSet(false),
    m_executeSQLHasBeenSet(false),
    m_driverSizeHasBeenSet(false),
    m_executorSizeHasBeenSet(false),
    m_executorNumbersHasBeenSet(false),
    m_executorMaxNumbersHasBeenSet(false),
    m_timeoutInSecondHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionNameHasBeenSet(false),
    m_argumentsHasBeenSet(false),
    m_isInheritHasBeenSet(false),
    m_customKeyHasBeenSet(false),
    m_sourceInfoHasBeenSet(false)
{
}

string CreateSparkSessionBatchSQLRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dataEngineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataEngineName.c_str(), allocator).Move(), allocator);
    }

    if (m_executeSQLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteSQL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executeSQL.c_str(), allocator).Move(), allocator);
    }

    if (m_driverSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DriverSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_driverSize.c_str(), allocator).Move(), allocator);
    }

    if (m_executorSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executorSize.c_str(), allocator).Move(), allocator);
    }

    if (m_executorNumbersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorNumbers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_executorNumbers, allocator);
    }

    if (m_executorMaxNumbersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorMaxNumbers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_executorMaxNumbers, allocator);
    }

    if (m_timeoutInSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutInSecond";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeoutInSecond, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionName.c_str(), allocator).Move(), allocator);
    }

    if (m_argumentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Arguments";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_arguments.begin(); itr != m_arguments.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_isInheritHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInherit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isInherit, allocator);
    }

    if (m_customKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customKey.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceInfo.begin(); itr != m_sourceInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSparkSessionBatchSQLRequest::GetDataEngineName() const
{
    return m_dataEngineName;
}

void CreateSparkSessionBatchSQLRequest::SetDataEngineName(const string& _dataEngineName)
{
    m_dataEngineName = _dataEngineName;
    m_dataEngineNameHasBeenSet = true;
}

bool CreateSparkSessionBatchSQLRequest::DataEngineNameHasBeenSet() const
{
    return m_dataEngineNameHasBeenSet;
}

string CreateSparkSessionBatchSQLRequest::GetExecuteSQL() const
{
    return m_executeSQL;
}

void CreateSparkSessionBatchSQLRequest::SetExecuteSQL(const string& _executeSQL)
{
    m_executeSQL = _executeSQL;
    m_executeSQLHasBeenSet = true;
}

bool CreateSparkSessionBatchSQLRequest::ExecuteSQLHasBeenSet() const
{
    return m_executeSQLHasBeenSet;
}

string CreateSparkSessionBatchSQLRequest::GetDriverSize() const
{
    return m_driverSize;
}

void CreateSparkSessionBatchSQLRequest::SetDriverSize(const string& _driverSize)
{
    m_driverSize = _driverSize;
    m_driverSizeHasBeenSet = true;
}

bool CreateSparkSessionBatchSQLRequest::DriverSizeHasBeenSet() const
{
    return m_driverSizeHasBeenSet;
}

string CreateSparkSessionBatchSQLRequest::GetExecutorSize() const
{
    return m_executorSize;
}

void CreateSparkSessionBatchSQLRequest::SetExecutorSize(const string& _executorSize)
{
    m_executorSize = _executorSize;
    m_executorSizeHasBeenSet = true;
}

bool CreateSparkSessionBatchSQLRequest::ExecutorSizeHasBeenSet() const
{
    return m_executorSizeHasBeenSet;
}

uint64_t CreateSparkSessionBatchSQLRequest::GetExecutorNumbers() const
{
    return m_executorNumbers;
}

void CreateSparkSessionBatchSQLRequest::SetExecutorNumbers(const uint64_t& _executorNumbers)
{
    m_executorNumbers = _executorNumbers;
    m_executorNumbersHasBeenSet = true;
}

bool CreateSparkSessionBatchSQLRequest::ExecutorNumbersHasBeenSet() const
{
    return m_executorNumbersHasBeenSet;
}

uint64_t CreateSparkSessionBatchSQLRequest::GetExecutorMaxNumbers() const
{
    return m_executorMaxNumbers;
}

void CreateSparkSessionBatchSQLRequest::SetExecutorMaxNumbers(const uint64_t& _executorMaxNumbers)
{
    m_executorMaxNumbers = _executorMaxNumbers;
    m_executorMaxNumbersHasBeenSet = true;
}

bool CreateSparkSessionBatchSQLRequest::ExecutorMaxNumbersHasBeenSet() const
{
    return m_executorMaxNumbersHasBeenSet;
}

int64_t CreateSparkSessionBatchSQLRequest::GetTimeoutInSecond() const
{
    return m_timeoutInSecond;
}

void CreateSparkSessionBatchSQLRequest::SetTimeoutInSecond(const int64_t& _timeoutInSecond)
{
    m_timeoutInSecond = _timeoutInSecond;
    m_timeoutInSecondHasBeenSet = true;
}

bool CreateSparkSessionBatchSQLRequest::TimeoutInSecondHasBeenSet() const
{
    return m_timeoutInSecondHasBeenSet;
}

string CreateSparkSessionBatchSQLRequest::GetSessionId() const
{
    return m_sessionId;
}

void CreateSparkSessionBatchSQLRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool CreateSparkSessionBatchSQLRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string CreateSparkSessionBatchSQLRequest::GetSessionName() const
{
    return m_sessionName;
}

void CreateSparkSessionBatchSQLRequest::SetSessionName(const string& _sessionName)
{
    m_sessionName = _sessionName;
    m_sessionNameHasBeenSet = true;
}

bool CreateSparkSessionBatchSQLRequest::SessionNameHasBeenSet() const
{
    return m_sessionNameHasBeenSet;
}

vector<KVPair> CreateSparkSessionBatchSQLRequest::GetArguments() const
{
    return m_arguments;
}

void CreateSparkSessionBatchSQLRequest::SetArguments(const vector<KVPair>& _arguments)
{
    m_arguments = _arguments;
    m_argumentsHasBeenSet = true;
}

bool CreateSparkSessionBatchSQLRequest::ArgumentsHasBeenSet() const
{
    return m_argumentsHasBeenSet;
}

int64_t CreateSparkSessionBatchSQLRequest::GetIsInherit() const
{
    return m_isInherit;
}

void CreateSparkSessionBatchSQLRequest::SetIsInherit(const int64_t& _isInherit)
{
    m_isInherit = _isInherit;
    m_isInheritHasBeenSet = true;
}

bool CreateSparkSessionBatchSQLRequest::IsInheritHasBeenSet() const
{
    return m_isInheritHasBeenSet;
}

string CreateSparkSessionBatchSQLRequest::GetCustomKey() const
{
    return m_customKey;
}

void CreateSparkSessionBatchSQLRequest::SetCustomKey(const string& _customKey)
{
    m_customKey = _customKey;
    m_customKeyHasBeenSet = true;
}

bool CreateSparkSessionBatchSQLRequest::CustomKeyHasBeenSet() const
{
    return m_customKeyHasBeenSet;
}

vector<KVPair> CreateSparkSessionBatchSQLRequest::GetSourceInfo() const
{
    return m_sourceInfo;
}

void CreateSparkSessionBatchSQLRequest::SetSourceInfo(const vector<KVPair>& _sourceInfo)
{
    m_sourceInfo = _sourceInfo;
    m_sourceInfoHasBeenSet = true;
}

bool CreateSparkSessionBatchSQLRequest::SourceInfoHasBeenSet() const
{
    return m_sourceInfoHasBeenSet;
}



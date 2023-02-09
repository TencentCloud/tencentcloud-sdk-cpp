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

#include <tencentcloud/dlc/v20210125/model/StatementOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

StatementOutput::StatementOutput() :
    m_executionCountHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errorNameHasBeenSet(false),
    m_errorValueHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_sQLResultHasBeenSet(false)
{
}

CoreInternalOutcome StatementOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExecutionCount") && !value["ExecutionCount"].IsNull())
    {
        if (!value["ExecutionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StatementOutput.ExecutionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executionCount = value["ExecutionCount"].GetInt64();
        m_executionCountHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StatementOutput.Data` is not array type"));

        const rapidjson::Value &tmpValue = value["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_data.push_back(item);
        }
        m_dataHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatementOutput.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrorName") && !value["ErrorName"].IsNull())
    {
        if (!value["ErrorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatementOutput.ErrorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorName = string(value["ErrorName"].GetString());
        m_errorNameHasBeenSet = true;
    }

    if (value.HasMember("ErrorValue") && !value["ErrorValue"].IsNull())
    {
        if (!value["ErrorValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatementOutput.ErrorValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorValue = string(value["ErrorValue"].GetString());
        m_errorValueHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StatementOutput.ErrorMessage` is not array type"));

        const rapidjson::Value &tmpValue = value["ErrorMessage"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_errorMessage.push_back((*itr).GetString());
        }
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("SQLResult") && !value["SQLResult"].IsNull())
    {
        if (!value["SQLResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatementOutput.SQLResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sQLResult = string(value["SQLResult"].GetString());
        m_sQLResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StatementOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_executionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executionCount, allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_errorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorName.c_str(), allocator).Move(), allocator);
    }

    if (m_errorValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorValue.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_errorMessage.begin(); itr != m_errorMessage.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sQLResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQLResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sQLResult.c_str(), allocator).Move(), allocator);
    }

}


int64_t StatementOutput::GetExecutionCount() const
{
    return m_executionCount;
}

void StatementOutput::SetExecutionCount(const int64_t& _executionCount)
{
    m_executionCount = _executionCount;
    m_executionCountHasBeenSet = true;
}

bool StatementOutput::ExecutionCountHasBeenSet() const
{
    return m_executionCountHasBeenSet;
}

vector<KVPair> StatementOutput::GetData() const
{
    return m_data;
}

void StatementOutput::SetData(const vector<KVPair>& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool StatementOutput::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

string StatementOutput::GetStatus() const
{
    return m_status;
}

void StatementOutput::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool StatementOutput::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string StatementOutput::GetErrorName() const
{
    return m_errorName;
}

void StatementOutput::SetErrorName(const string& _errorName)
{
    m_errorName = _errorName;
    m_errorNameHasBeenSet = true;
}

bool StatementOutput::ErrorNameHasBeenSet() const
{
    return m_errorNameHasBeenSet;
}

string StatementOutput::GetErrorValue() const
{
    return m_errorValue;
}

void StatementOutput::SetErrorValue(const string& _errorValue)
{
    m_errorValue = _errorValue;
    m_errorValueHasBeenSet = true;
}

bool StatementOutput::ErrorValueHasBeenSet() const
{
    return m_errorValueHasBeenSet;
}

vector<string> StatementOutput::GetErrorMessage() const
{
    return m_errorMessage;
}

void StatementOutput::SetErrorMessage(const vector<string>& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool StatementOutput::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string StatementOutput::GetSQLResult() const
{
    return m_sQLResult;
}

void StatementOutput::SetSQLResult(const string& _sQLResult)
{
    m_sQLResult = _sQLResult;
    m_sQLResultHasBeenSet = true;
}

bool StatementOutput::SQLResultHasBeenSet() const
{
    return m_sQLResultHasBeenSet;
}


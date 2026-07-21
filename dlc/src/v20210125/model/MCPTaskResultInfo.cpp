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

#include <tencentcloud/dlc/v20210125/model/MCPTaskResultInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

MCPTaskResultInfo::MCPTaskResultInfo() :
    m_taskIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_resultSchemaHasBeenSet(false),
    m_resultSetHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_rowAffectInfoHasBeenSet(false),
    m_outputMessageHasBeenSet(false),
    m_displayFormatHasBeenSet(false),
    m_canDownloadHasBeenSet(false),
    m_queryResultTimeHasBeenSet(false),
    m_isResultOversizeHasBeenSet(false)
{
}

CoreInternalOutcome MCPTaskResultInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskResultInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskResultInfo.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("ResultSchema") && !value["ResultSchema"].IsNull())
    {
        if (!value["ResultSchema"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MCPTaskResultInfo.ResultSchema` is not array type"));

        const rapidjson::Value &tmpValue = value["ResultSchema"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Column item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resultSchema.push_back(item);
        }
        m_resultSchemaHasBeenSet = true;
    }

    if (value.HasMember("ResultSet") && !value["ResultSet"].IsNull())
    {
        if (!value["ResultSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskResultInfo.ResultSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultSet = string(value["ResultSet"].GetString());
        m_resultSetHasBeenSet = true;
    }

    if (value.HasMember("NextToken") && !value["NextToken"].IsNull())
    {
        if (!value["NextToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskResultInfo.NextToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextToken = string(value["NextToken"].GetString());
        m_nextTokenHasBeenSet = true;
    }

    if (value.HasMember("RowAffectInfo") && !value["RowAffectInfo"].IsNull())
    {
        if (!value["RowAffectInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskResultInfo.RowAffectInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rowAffectInfo = string(value["RowAffectInfo"].GetString());
        m_rowAffectInfoHasBeenSet = true;
    }

    if (value.HasMember("OutputMessage") && !value["OutputMessage"].IsNull())
    {
        if (!value["OutputMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskResultInfo.OutputMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputMessage = string(value["OutputMessage"].GetString());
        m_outputMessageHasBeenSet = true;
    }

    if (value.HasMember("DisplayFormat") && !value["DisplayFormat"].IsNull())
    {
        if (!value["DisplayFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskResultInfo.DisplayFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayFormat = string(value["DisplayFormat"].GetString());
        m_displayFormatHasBeenSet = true;
    }

    if (value.HasMember("CanDownload") && !value["CanDownload"].IsNull())
    {
        if (!value["CanDownload"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskResultInfo.CanDownload` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canDownload = value["CanDownload"].GetBool();
        m_canDownloadHasBeenSet = true;
    }

    if (value.HasMember("QueryResultTime") && !value["QueryResultTime"].IsNull())
    {
        if (!value["QueryResultTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskResultInfo.QueryResultTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_queryResultTime = value["QueryResultTime"].GetDouble();
        m_queryResultTimeHasBeenSet = true;
    }

    if (value.HasMember("IsResultOversize") && !value["IsResultOversize"].IsNull())
    {
        if (!value["IsResultOversize"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskResultInfo.IsResultOversize` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isResultOversize = value["IsResultOversize"].GetBool();
        m_isResultOversizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MCPTaskResultInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_resultSchemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultSchema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resultSchema.begin(); itr != m_resultSchema.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultSet.c_str(), allocator).Move(), allocator);
    }

    if (m_nextTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextToken.c_str(), allocator).Move(), allocator);
    }

    if (m_rowAffectInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowAffectInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rowAffectInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_outputMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_displayFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_canDownloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanDownload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canDownload, allocator);
    }

    if (m_queryResultTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryResultTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryResultTime, allocator);
    }

    if (m_isResultOversizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsResultOversize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isResultOversize, allocator);
    }

}


string MCPTaskResultInfo::GetTaskId() const
{
    return m_taskId;
}

void MCPTaskResultInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool MCPTaskResultInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t MCPTaskResultInfo::GetState() const
{
    return m_state;
}

void MCPTaskResultInfo::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool MCPTaskResultInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

vector<Column> MCPTaskResultInfo::GetResultSchema() const
{
    return m_resultSchema;
}

void MCPTaskResultInfo::SetResultSchema(const vector<Column>& _resultSchema)
{
    m_resultSchema = _resultSchema;
    m_resultSchemaHasBeenSet = true;
}

bool MCPTaskResultInfo::ResultSchemaHasBeenSet() const
{
    return m_resultSchemaHasBeenSet;
}

string MCPTaskResultInfo::GetResultSet() const
{
    return m_resultSet;
}

void MCPTaskResultInfo::SetResultSet(const string& _resultSet)
{
    m_resultSet = _resultSet;
    m_resultSetHasBeenSet = true;
}

bool MCPTaskResultInfo::ResultSetHasBeenSet() const
{
    return m_resultSetHasBeenSet;
}

string MCPTaskResultInfo::GetNextToken() const
{
    return m_nextToken;
}

void MCPTaskResultInfo::SetNextToken(const string& _nextToken)
{
    m_nextToken = _nextToken;
    m_nextTokenHasBeenSet = true;
}

bool MCPTaskResultInfo::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}

string MCPTaskResultInfo::GetRowAffectInfo() const
{
    return m_rowAffectInfo;
}

void MCPTaskResultInfo::SetRowAffectInfo(const string& _rowAffectInfo)
{
    m_rowAffectInfo = _rowAffectInfo;
    m_rowAffectInfoHasBeenSet = true;
}

bool MCPTaskResultInfo::RowAffectInfoHasBeenSet() const
{
    return m_rowAffectInfoHasBeenSet;
}

string MCPTaskResultInfo::GetOutputMessage() const
{
    return m_outputMessage;
}

void MCPTaskResultInfo::SetOutputMessage(const string& _outputMessage)
{
    m_outputMessage = _outputMessage;
    m_outputMessageHasBeenSet = true;
}

bool MCPTaskResultInfo::OutputMessageHasBeenSet() const
{
    return m_outputMessageHasBeenSet;
}

string MCPTaskResultInfo::GetDisplayFormat() const
{
    return m_displayFormat;
}

void MCPTaskResultInfo::SetDisplayFormat(const string& _displayFormat)
{
    m_displayFormat = _displayFormat;
    m_displayFormatHasBeenSet = true;
}

bool MCPTaskResultInfo::DisplayFormatHasBeenSet() const
{
    return m_displayFormatHasBeenSet;
}

bool MCPTaskResultInfo::GetCanDownload() const
{
    return m_canDownload;
}

void MCPTaskResultInfo::SetCanDownload(const bool& _canDownload)
{
    m_canDownload = _canDownload;
    m_canDownloadHasBeenSet = true;
}

bool MCPTaskResultInfo::CanDownloadHasBeenSet() const
{
    return m_canDownloadHasBeenSet;
}

double MCPTaskResultInfo::GetQueryResultTime() const
{
    return m_queryResultTime;
}

void MCPTaskResultInfo::SetQueryResultTime(const double& _queryResultTime)
{
    m_queryResultTime = _queryResultTime;
    m_queryResultTimeHasBeenSet = true;
}

bool MCPTaskResultInfo::QueryResultTimeHasBeenSet() const
{
    return m_queryResultTimeHasBeenSet;
}

bool MCPTaskResultInfo::GetIsResultOversize() const
{
    return m_isResultOversize;
}

void MCPTaskResultInfo::SetIsResultOversize(const bool& _isResultOversize)
{
    m_isResultOversize = _isResultOversize;
    m_isResultOversizeHasBeenSet = true;
}

bool MCPTaskResultInfo::IsResultOversizeHasBeenSet() const
{
    return m_isResultOversizeHasBeenSet;
}


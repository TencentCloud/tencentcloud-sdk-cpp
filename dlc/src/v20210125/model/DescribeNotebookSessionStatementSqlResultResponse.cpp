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

#include <tencentcloud/dlc/v20210125/model/DescribeNotebookSessionStatementSqlResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeNotebookSessionStatementSqlResultResponse::DescribeNotebookSessionStatementSqlResultResponse() :
    m_taskIdHasBeenSet(false),
    m_resultSetHasBeenSet(false),
    m_resultSchemaHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_outputPathHasBeenSet(false),
    m_useTimeHasBeenSet(false),
    m_affectRowsHasBeenSet(false),
    m_dataAmountHasBeenSet(false),
    m_uiUrlHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNotebookSessionStatementSqlResultResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("ResultSet") && !rsp["ResultSet"].IsNull())
    {
        if (!rsp["ResultSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultSet = string(rsp["ResultSet"].GetString());
        m_resultSetHasBeenSet = true;
    }

    if (rsp.HasMember("ResultSchema") && !rsp["ResultSchema"].IsNull())
    {
        if (!rsp["ResultSchema"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResultSchema` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ResultSchema"];
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

    if (rsp.HasMember("NextToken") && !rsp["NextToken"].IsNull())
    {
        if (!rsp["NextToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NextToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextToken = string(rsp["NextToken"].GetString());
        m_nextTokenHasBeenSet = true;
    }

    if (rsp.HasMember("OutputPath") && !rsp["OutputPath"].IsNull())
    {
        if (!rsp["OutputPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputPath = string(rsp["OutputPath"].GetString());
        m_outputPathHasBeenSet = true;
    }

    if (rsp.HasMember("UseTime") && !rsp["UseTime"].IsNull())
    {
        if (!rsp["UseTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UseTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_useTime = rsp["UseTime"].GetInt64();
        m_useTimeHasBeenSet = true;
    }

    if (rsp.HasMember("AffectRows") && !rsp["AffectRows"].IsNull())
    {
        if (!rsp["AffectRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AffectRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_affectRows = rsp["AffectRows"].GetInt64();
        m_affectRowsHasBeenSet = true;
    }

    if (rsp.HasMember("DataAmount") && !rsp["DataAmount"].IsNull())
    {
        if (!rsp["DataAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataAmount = rsp["DataAmount"].GetInt64();
        m_dataAmountHasBeenSet = true;
    }

    if (rsp.HasMember("UiUrl") && !rsp["UiUrl"].IsNull())
    {
        if (!rsp["UiUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UiUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uiUrl = string(rsp["UiUrl"].GetString());
        m_uiUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeNotebookSessionStatementSqlResultResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_resultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultSet.c_str(), allocator).Move(), allocator);
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

    if (m_nextTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextToken.c_str(), allocator).Move(), allocator);
    }

    if (m_outputPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputPath.c_str(), allocator).Move(), allocator);
    }

    if (m_useTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useTime, allocator);
    }

    if (m_affectRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectRows, allocator);
    }

    if (m_dataAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataAmount, allocator);
    }

    if (m_uiUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UiUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uiUrl.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeNotebookSessionStatementSqlResultResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeNotebookSessionStatementSqlResultResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeNotebookSessionStatementSqlResultResponse::GetResultSet() const
{
    return m_resultSet;
}

bool DescribeNotebookSessionStatementSqlResultResponse::ResultSetHasBeenSet() const
{
    return m_resultSetHasBeenSet;
}

vector<Column> DescribeNotebookSessionStatementSqlResultResponse::GetResultSchema() const
{
    return m_resultSchema;
}

bool DescribeNotebookSessionStatementSqlResultResponse::ResultSchemaHasBeenSet() const
{
    return m_resultSchemaHasBeenSet;
}

string DescribeNotebookSessionStatementSqlResultResponse::GetNextToken() const
{
    return m_nextToken;
}

bool DescribeNotebookSessionStatementSqlResultResponse::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}

string DescribeNotebookSessionStatementSqlResultResponse::GetOutputPath() const
{
    return m_outputPath;
}

bool DescribeNotebookSessionStatementSqlResultResponse::OutputPathHasBeenSet() const
{
    return m_outputPathHasBeenSet;
}

int64_t DescribeNotebookSessionStatementSqlResultResponse::GetUseTime() const
{
    return m_useTime;
}

bool DescribeNotebookSessionStatementSqlResultResponse::UseTimeHasBeenSet() const
{
    return m_useTimeHasBeenSet;
}

int64_t DescribeNotebookSessionStatementSqlResultResponse::GetAffectRows() const
{
    return m_affectRows;
}

bool DescribeNotebookSessionStatementSqlResultResponse::AffectRowsHasBeenSet() const
{
    return m_affectRowsHasBeenSet;
}

int64_t DescribeNotebookSessionStatementSqlResultResponse::GetDataAmount() const
{
    return m_dataAmount;
}

bool DescribeNotebookSessionStatementSqlResultResponse::DataAmountHasBeenSet() const
{
    return m_dataAmountHasBeenSet;
}

string DescribeNotebookSessionStatementSqlResultResponse::GetUiUrl() const
{
    return m_uiUrl;
}

bool DescribeNotebookSessionStatementSqlResultResponse::UiUrlHasBeenSet() const
{
    return m_uiUrlHasBeenSet;
}



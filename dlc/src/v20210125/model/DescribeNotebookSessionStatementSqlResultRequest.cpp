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

#include <tencentcloud/dlc/v20210125/model/DescribeNotebookSessionStatementSqlResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeNotebookSessionStatementSqlResultRequest::DescribeNotebookSessionStatementSqlResultRequest() :
    m_taskIdHasBeenSet(false),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_batchIdHasBeenSet(false),
    m_dataFieldCutLenHasBeenSet(false)
{
}

string DescribeNotebookSessionStatementSqlResultRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_maxResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxResults";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxResults, allocator);
    }

    if (m_nextTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nextToken.c_str(), allocator).Move(), allocator);
    }

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataFieldCutLenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFieldCutLen";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataFieldCutLen, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeNotebookSessionStatementSqlResultRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeNotebookSessionStatementSqlResultRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeNotebookSessionStatementSqlResultRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t DescribeNotebookSessionStatementSqlResultRequest::GetMaxResults() const
{
    return m_maxResults;
}

void DescribeNotebookSessionStatementSqlResultRequest::SetMaxResults(const uint64_t& _maxResults)
{
    m_maxResults = _maxResults;
    m_maxResultsHasBeenSet = true;
}

bool DescribeNotebookSessionStatementSqlResultRequest::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}

string DescribeNotebookSessionStatementSqlResultRequest::GetNextToken() const
{
    return m_nextToken;
}

void DescribeNotebookSessionStatementSqlResultRequest::SetNextToken(const string& _nextToken)
{
    m_nextToken = _nextToken;
    m_nextTokenHasBeenSet = true;
}

bool DescribeNotebookSessionStatementSqlResultRequest::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}

string DescribeNotebookSessionStatementSqlResultRequest::GetBatchId() const
{
    return m_batchId;
}

void DescribeNotebookSessionStatementSqlResultRequest::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool DescribeNotebookSessionStatementSqlResultRequest::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

int64_t DescribeNotebookSessionStatementSqlResultRequest::GetDataFieldCutLen() const
{
    return m_dataFieldCutLen;
}

void DescribeNotebookSessionStatementSqlResultRequest::SetDataFieldCutLen(const int64_t& _dataFieldCutLen)
{
    m_dataFieldCutLen = _dataFieldCutLen;
    m_dataFieldCutLenHasBeenSet = true;
}

bool DescribeNotebookSessionStatementSqlResultRequest::DataFieldCutLenHasBeenSet() const
{
    return m_dataFieldCutLenHasBeenSet;
}



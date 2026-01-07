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

#include <tencentcloud/live/v20180801/model/InsertTaskTemporaryFilesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

InsertTaskTemporaryFilesRequest::InsertTaskTemporaryFilesRequest() :
    m_taskIdHasBeenSet(false),
    m_temporaryFilesHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_insertAfterIndexHasBeenSet(false),
    m_insertPriorityTypeHasBeenSet(false),
    m_insertContextHasBeenSet(false)
{
}

string InsertTaskTemporaryFilesRequest::ToJsonString() const
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

    if (m_temporaryFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemporaryFiles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_temporaryFiles.begin(); itr != m_temporaryFiles.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_insertAfterIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertAfterIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_insertAfterIndex, allocator);
    }

    if (m_insertPriorityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertPriorityType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_insertPriorityType, allocator);
    }

    if (m_insertContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_insertContext.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InsertTaskTemporaryFilesRequest::GetTaskId() const
{
    return m_taskId;
}

void InsertTaskTemporaryFilesRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool InsertTaskTemporaryFilesRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<string> InsertTaskTemporaryFilesRequest::GetTemporaryFiles() const
{
    return m_temporaryFiles;
}

void InsertTaskTemporaryFilesRequest::SetTemporaryFiles(const vector<string>& _temporaryFiles)
{
    m_temporaryFiles = _temporaryFiles;
    m_temporaryFilesHasBeenSet = true;
}

bool InsertTaskTemporaryFilesRequest::TemporaryFilesHasBeenSet() const
{
    return m_temporaryFilesHasBeenSet;
}

string InsertTaskTemporaryFilesRequest::GetOperator() const
{
    return m_operator;
}

void InsertTaskTemporaryFilesRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool InsertTaskTemporaryFilesRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

int64_t InsertTaskTemporaryFilesRequest::GetInsertAfterIndex() const
{
    return m_insertAfterIndex;
}

void InsertTaskTemporaryFilesRequest::SetInsertAfterIndex(const int64_t& _insertAfterIndex)
{
    m_insertAfterIndex = _insertAfterIndex;
    m_insertAfterIndexHasBeenSet = true;
}

bool InsertTaskTemporaryFilesRequest::InsertAfterIndexHasBeenSet() const
{
    return m_insertAfterIndexHasBeenSet;
}

int64_t InsertTaskTemporaryFilesRequest::GetInsertPriorityType() const
{
    return m_insertPriorityType;
}

void InsertTaskTemporaryFilesRequest::SetInsertPriorityType(const int64_t& _insertPriorityType)
{
    m_insertPriorityType = _insertPriorityType;
    m_insertPriorityTypeHasBeenSet = true;
}

bool InsertTaskTemporaryFilesRequest::InsertPriorityTypeHasBeenSet() const
{
    return m_insertPriorityTypeHasBeenSet;
}

string InsertTaskTemporaryFilesRequest::GetInsertContext() const
{
    return m_insertContext;
}

void InsertTaskTemporaryFilesRequest::SetInsertContext(const string& _insertContext)
{
    m_insertContext = _insertContext;
    m_insertContextHasBeenSet = true;
}

bool InsertTaskTemporaryFilesRequest::InsertContextHasBeenSet() const
{
    return m_insertContextHasBeenSet;
}



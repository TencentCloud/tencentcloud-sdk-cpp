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

#include <tencentcloud/wedata/v20210820/model/CommitExportTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CommitExportTaskRequest::CommitExportTaskRequest() :
    m_projectIdHasBeenSet(false),
    m_ruleExecIdHasBeenSet(false),
    m_exportTypeHasBeenSet(false),
    m_executorGroupIdHasBeenSet(false),
    m_queueNameHasBeenSet(false)
{
}

string CommitExportTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleExecIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleExecId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleExecId, allocator);
    }

    if (m_exportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_exportType, allocator);
    }

    if (m_executorGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executorGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CommitExportTaskRequest::GetProjectId() const
{
    return m_projectId;
}

void CommitExportTaskRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CommitExportTaskRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t CommitExportTaskRequest::GetRuleExecId() const
{
    return m_ruleExecId;
}

void CommitExportTaskRequest::SetRuleExecId(const uint64_t& _ruleExecId)
{
    m_ruleExecId = _ruleExecId;
    m_ruleExecIdHasBeenSet = true;
}

bool CommitExportTaskRequest::RuleExecIdHasBeenSet() const
{
    return m_ruleExecIdHasBeenSet;
}

uint64_t CommitExportTaskRequest::GetExportType() const
{
    return m_exportType;
}

void CommitExportTaskRequest::SetExportType(const uint64_t& _exportType)
{
    m_exportType = _exportType;
    m_exportTypeHasBeenSet = true;
}

bool CommitExportTaskRequest::ExportTypeHasBeenSet() const
{
    return m_exportTypeHasBeenSet;
}

string CommitExportTaskRequest::GetExecutorGroupId() const
{
    return m_executorGroupId;
}

void CommitExportTaskRequest::SetExecutorGroupId(const string& _executorGroupId)
{
    m_executorGroupId = _executorGroupId;
    m_executorGroupIdHasBeenSet = true;
}

bool CommitExportTaskRequest::ExecutorGroupIdHasBeenSet() const
{
    return m_executorGroupIdHasBeenSet;
}

string CommitExportTaskRequest::GetQueueName() const
{
    return m_queueName;
}

void CommitExportTaskRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool CommitExportTaskRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}



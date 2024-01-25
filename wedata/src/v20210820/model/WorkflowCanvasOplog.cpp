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

#include <tencentcloud/wedata/v20210820/model/WorkflowCanvasOplog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

WorkflowCanvasOplog::WorkflowCanvasOplog() :
    m_createTimestampHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_operatorIdHasBeenSet(false),
    m_operatorNameHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowCanvasOplog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTimestamp") && !value["CreateTimestamp"].IsNull())
    {
        if (!value["CreateTimestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOplog.CreateTimestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTimestamp = value["CreateTimestamp"].GetUint64();
        m_createTimestampHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOplog.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("OperatorId") && !value["OperatorId"].IsNull())
    {
        if (!value["OperatorId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOplog.OperatorId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_operatorId = value["OperatorId"].GetUint64();
        m_operatorIdHasBeenSet = true;
    }

    if (value.HasMember("OperatorName") && !value["OperatorName"].IsNull())
    {
        if (!value["OperatorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOplog.OperatorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorName = string(value["OperatorName"].GetString());
        m_operatorNameHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOplog.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowCanvasOplog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTimestamp, allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operatorId, allocator);
    }

    if (m_operatorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorName.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

}


uint64_t WorkflowCanvasOplog::GetCreateTimestamp() const
{
    return m_createTimestamp;
}

void WorkflowCanvasOplog::SetCreateTimestamp(const uint64_t& _createTimestamp)
{
    m_createTimestamp = _createTimestamp;
    m_createTimestampHasBeenSet = true;
}

bool WorkflowCanvasOplog::CreateTimestampHasBeenSet() const
{
    return m_createTimestampHasBeenSet;
}

string WorkflowCanvasOplog::GetWorkflowId() const
{
    return m_workflowId;
}

void WorkflowCanvasOplog::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool WorkflowCanvasOplog::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

uint64_t WorkflowCanvasOplog::GetOperatorId() const
{
    return m_operatorId;
}

void WorkflowCanvasOplog::SetOperatorId(const uint64_t& _operatorId)
{
    m_operatorId = _operatorId;
    m_operatorIdHasBeenSet = true;
}

bool WorkflowCanvasOplog::OperatorIdHasBeenSet() const
{
    return m_operatorIdHasBeenSet;
}

string WorkflowCanvasOplog::GetOperatorName() const
{
    return m_operatorName;
}

void WorkflowCanvasOplog::SetOperatorName(const string& _operatorName)
{
    m_operatorName = _operatorName;
    m_operatorNameHasBeenSet = true;
}

bool WorkflowCanvasOplog::OperatorNameHasBeenSet() const
{
    return m_operatorNameHasBeenSet;
}

string WorkflowCanvasOplog::GetContent() const
{
    return m_content;
}

void WorkflowCanvasOplog::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool WorkflowCanvasOplog::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}


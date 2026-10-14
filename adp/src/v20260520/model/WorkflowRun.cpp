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

#include <tencentcloud/adp/v20260520/model/WorkflowRun.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

WorkflowRun::WorkflowRun() :
    m_workflowRunSummaryHasBeenSet(false),
    m_workflowRunOutputHasBeenSet(false),
    m_workflowRunMetadataHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowRun::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowRunSummary") && !value["WorkflowRunSummary"].IsNull())
    {
        if (!value["WorkflowRunSummary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.WorkflowRunSummary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workflowRunSummary.Deserialize(value["WorkflowRunSummary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workflowRunSummaryHasBeenSet = true;
    }

    if (value.HasMember("WorkflowRunOutput") && !value["WorkflowRunOutput"].IsNull())
    {
        if (!value["WorkflowRunOutput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.WorkflowRunOutput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workflowRunOutput.Deserialize(value["WorkflowRunOutput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workflowRunOutputHasBeenSet = true;
    }

    if (value.HasMember("WorkflowRunMetadata") && !value["WorkflowRunMetadata"].IsNull())
    {
        if (!value["WorkflowRunMetadata"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.WorkflowRunMetadata` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workflowRunMetadata.Deserialize(value["WorkflowRunMetadata"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workflowRunMetadataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowRun::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workflowRunSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowRunSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workflowRunSummary.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_workflowRunOutputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowRunOutput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workflowRunOutput.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_workflowRunMetadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowRunMetadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workflowRunMetadata.ToJsonObject(value[key.c_str()], allocator);
    }

}


WorkflowRunSummary WorkflowRun::GetWorkflowRunSummary() const
{
    return m_workflowRunSummary;
}

void WorkflowRun::SetWorkflowRunSummary(const WorkflowRunSummary& _workflowRunSummary)
{
    m_workflowRunSummary = _workflowRunSummary;
    m_workflowRunSummaryHasBeenSet = true;
}

bool WorkflowRun::WorkflowRunSummaryHasBeenSet() const
{
    return m_workflowRunSummaryHasBeenSet;
}

WorkflowRunOutput WorkflowRun::GetWorkflowRunOutput() const
{
    return m_workflowRunOutput;
}

void WorkflowRun::SetWorkflowRunOutput(const WorkflowRunOutput& _workflowRunOutput)
{
    m_workflowRunOutput = _workflowRunOutput;
    m_workflowRunOutputHasBeenSet = true;
}

bool WorkflowRun::WorkflowRunOutputHasBeenSet() const
{
    return m_workflowRunOutputHasBeenSet;
}

WorkflowRunMetadata WorkflowRun::GetWorkflowRunMetadata() const
{
    return m_workflowRunMetadata;
}

void WorkflowRun::SetWorkflowRunMetadata(const WorkflowRunMetadata& _workflowRunMetadata)
{
    m_workflowRunMetadata = _workflowRunMetadata;
    m_workflowRunMetadataHasBeenSet = true;
}

bool WorkflowRun::WorkflowRunMetadataHasBeenSet() const
{
    return m_workflowRunMetadataHasBeenSet;
}


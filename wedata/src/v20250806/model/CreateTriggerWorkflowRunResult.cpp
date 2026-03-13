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

#include <tencentcloud/wedata/v20250806/model/CreateTriggerWorkflowRunResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateTriggerWorkflowRunResult::CreateTriggerWorkflowRunResult() :
    m_workflowExecutionIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateTriggerWorkflowRunResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowExecutionId") && !value["WorkflowExecutionId"].IsNull())
    {
        if (!value["WorkflowExecutionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTriggerWorkflowRunResult.WorkflowExecutionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowExecutionId = string(value["WorkflowExecutionId"].GetString());
        m_workflowExecutionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateTriggerWorkflowRunResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workflowExecutionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowExecutionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowExecutionId.c_str(), allocator).Move(), allocator);
    }

}


string CreateTriggerWorkflowRunResult::GetWorkflowExecutionId() const
{
    return m_workflowExecutionId;
}

void CreateTriggerWorkflowRunResult::SetWorkflowExecutionId(const string& _workflowExecutionId)
{
    m_workflowExecutionId = _workflowExecutionId;
    m_workflowExecutionIdHasBeenSet = true;
}

bool CreateTriggerWorkflowRunResult::WorkflowExecutionIdHasBeenSet() const
{
    return m_workflowExecutionIdHasBeenSet;
}


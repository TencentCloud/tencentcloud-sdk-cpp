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

#include <tencentcloud/databuddy/v20260715/model/GetWorkflowRunRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

GetWorkflowRunRsp::GetWorkflowRunRsp() :
    m_workflowRunHasBeenSet(false)
{
}

CoreInternalOutcome GetWorkflowRunRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowRun") && !value["WorkflowRun"].IsNull())
    {
        if (!value["WorkflowRun"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowRunRsp.WorkflowRun` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workflowRun.Deserialize(value["WorkflowRun"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workflowRunHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GetWorkflowRunRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workflowRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowRun";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workflowRun.ToJsonObject(value[key.c_str()], allocator);
    }

}


WorkflowRun GetWorkflowRunRsp::GetWorkflowRun() const
{
    return m_workflowRun;
}

void GetWorkflowRunRsp::SetWorkflowRun(const WorkflowRun& _workflowRun)
{
    m_workflowRun = _workflowRun;
    m_workflowRunHasBeenSet = true;
}

bool GetWorkflowRunRsp::WorkflowRunHasBeenSet() const
{
    return m_workflowRunHasBeenSet;
}


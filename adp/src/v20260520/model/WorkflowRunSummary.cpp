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

#include <tencentcloud/adp/v20260520/model/WorkflowRunSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

WorkflowRunSummary::WorkflowRunSummary() :
    m_domainHasBeenSet(false),
    m_workflowRunProfileHasBeenSet(false),
    m_workflowRunResultHasBeenSet(false),
    m_workflowRunTimeHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowRunSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunSummary.Domain` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_domain = value["Domain"].GetUint64();
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("WorkflowRunProfile") && !value["WorkflowRunProfile"].IsNull())
    {
        if (!value["WorkflowRunProfile"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunSummary.WorkflowRunProfile` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workflowRunProfile.Deserialize(value["WorkflowRunProfile"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workflowRunProfileHasBeenSet = true;
    }

    if (value.HasMember("WorkflowRunResult") && !value["WorkflowRunResult"].IsNull())
    {
        if (!value["WorkflowRunResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunSummary.WorkflowRunResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workflowRunResult.Deserialize(value["WorkflowRunResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workflowRunResultHasBeenSet = true;
    }

    if (value.HasMember("WorkflowRunTime") && !value["WorkflowRunTime"].IsNull())
    {
        if (!value["WorkflowRunTime"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunSummary.WorkflowRunTime` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workflowRunTime.Deserialize(value["WorkflowRunTime"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workflowRunTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowRunSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domain, allocator);
    }

    if (m_workflowRunProfileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowRunProfile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workflowRunProfile.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_workflowRunResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowRunResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workflowRunResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_workflowRunTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowRunTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workflowRunTime.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t WorkflowRunSummary::GetDomain() const
{
    return m_domain;
}

void WorkflowRunSummary::SetDomain(const uint64_t& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool WorkflowRunSummary::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

WorkflowRunProfile WorkflowRunSummary::GetWorkflowRunProfile() const
{
    return m_workflowRunProfile;
}

void WorkflowRunSummary::SetWorkflowRunProfile(const WorkflowRunProfile& _workflowRunProfile)
{
    m_workflowRunProfile = _workflowRunProfile;
    m_workflowRunProfileHasBeenSet = true;
}

bool WorkflowRunSummary::WorkflowRunProfileHasBeenSet() const
{
    return m_workflowRunProfileHasBeenSet;
}

WorkflowRunResult WorkflowRunSummary::GetWorkflowRunResult() const
{
    return m_workflowRunResult;
}

void WorkflowRunSummary::SetWorkflowRunResult(const WorkflowRunResult& _workflowRunResult)
{
    m_workflowRunResult = _workflowRunResult;
    m_workflowRunResultHasBeenSet = true;
}

bool WorkflowRunSummary::WorkflowRunResultHasBeenSet() const
{
    return m_workflowRunResultHasBeenSet;
}

WorkflowRunTime WorkflowRunSummary::GetWorkflowRunTime() const
{
    return m_workflowRunTime;
}

void WorkflowRunSummary::SetWorkflowRunTime(const WorkflowRunTime& _workflowRunTime)
{
    m_workflowRunTime = _workflowRunTime;
    m_workflowRunTimeHasBeenSet = true;
}

bool WorkflowRunSummary::WorkflowRunTimeHasBeenSet() const
{
    return m_workflowRunTimeHasBeenSet;
}


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

#include <tencentcloud/wedata/v20250806/model/TriggerTaskLinkBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

TriggerTaskLinkBrief::TriggerTaskLinkBrief() :
    m_linkIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowVersionIdHasBeenSet(false),
    m_upstreamTaskIdHasBeenSet(false),
    m_downstreamTaskIdHasBeenSet(false)
{
}

CoreInternalOutcome TriggerTaskLinkBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LinkId") && !value["LinkId"].IsNull())
    {
        if (!value["LinkId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskLinkBrief.LinkId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linkId = string(value["LinkId"].GetString());
        m_linkIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskLinkBrief.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowVersionId") && !value["WorkflowVersionId"].IsNull())
    {
        if (!value["WorkflowVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskLinkBrief.WorkflowVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowVersionId = string(value["WorkflowVersionId"].GetString());
        m_workflowVersionIdHasBeenSet = true;
    }

    if (value.HasMember("UpstreamTaskId") && !value["UpstreamTaskId"].IsNull())
    {
        if (!value["UpstreamTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskLinkBrief.UpstreamTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamTaskId = string(value["UpstreamTaskId"].GetString());
        m_upstreamTaskIdHasBeenSet = true;
    }

    if (value.HasMember("DownstreamTaskId") && !value["DownstreamTaskId"].IsNull())
    {
        if (!value["DownstreamTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskLinkBrief.DownstreamTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downstreamTaskId = string(value["DownstreamTaskId"].GetString());
        m_downstreamTaskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TriggerTaskLinkBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_linkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_linkId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_downstreamTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownstreamTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downstreamTaskId.c_str(), allocator).Move(), allocator);
    }

}


string TriggerTaskLinkBrief::GetLinkId() const
{
    return m_linkId;
}

void TriggerTaskLinkBrief::SetLinkId(const string& _linkId)
{
    m_linkId = _linkId;
    m_linkIdHasBeenSet = true;
}

bool TriggerTaskLinkBrief::LinkIdHasBeenSet() const
{
    return m_linkIdHasBeenSet;
}

string TriggerTaskLinkBrief::GetWorkflowId() const
{
    return m_workflowId;
}

void TriggerTaskLinkBrief::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool TriggerTaskLinkBrief::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string TriggerTaskLinkBrief::GetWorkflowVersionId() const
{
    return m_workflowVersionId;
}

void TriggerTaskLinkBrief::SetWorkflowVersionId(const string& _workflowVersionId)
{
    m_workflowVersionId = _workflowVersionId;
    m_workflowVersionIdHasBeenSet = true;
}

bool TriggerTaskLinkBrief::WorkflowVersionIdHasBeenSet() const
{
    return m_workflowVersionIdHasBeenSet;
}

string TriggerTaskLinkBrief::GetUpstreamTaskId() const
{
    return m_upstreamTaskId;
}

void TriggerTaskLinkBrief::SetUpstreamTaskId(const string& _upstreamTaskId)
{
    m_upstreamTaskId = _upstreamTaskId;
    m_upstreamTaskIdHasBeenSet = true;
}

bool TriggerTaskLinkBrief::UpstreamTaskIdHasBeenSet() const
{
    return m_upstreamTaskIdHasBeenSet;
}

string TriggerTaskLinkBrief::GetDownstreamTaskId() const
{
    return m_downstreamTaskId;
}

void TriggerTaskLinkBrief::SetDownstreamTaskId(const string& _downstreamTaskId)
{
    m_downstreamTaskId = _downstreamTaskId;
    m_downstreamTaskIdHasBeenSet = true;
}

bool TriggerTaskLinkBrief::DownstreamTaskIdHasBeenSet() const
{
    return m_downstreamTaskIdHasBeenSet;
}


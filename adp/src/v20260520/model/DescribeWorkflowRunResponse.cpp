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

#include <tencentcloud/adp/v20260520/model/DescribeWorkflowRunResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DescribeWorkflowRunResponse::DescribeWorkflowRunResponse() :
    m_workflowRunHasBeenSet(false),
    m_nodeRunListHasBeenSet(false),
    m_subWorkflowNodePathHasBeenSet(false)
{
}

CoreInternalOutcome DescribeWorkflowRunResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("WorkflowRun") && !rsp["WorkflowRun"].IsNull())
    {
        if (!rsp["WorkflowRun"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workflowRun.Deserialize(rsp["WorkflowRun"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workflowRunHasBeenSet = true;
    }

    if (rsp.HasMember("NodeRunList") && !rsp["NodeRunList"].IsNull())
    {
        if (!rsp["NodeRunList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeRunList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NodeRunList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeRun item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodeRunList.push_back(item);
        }
        m_nodeRunListHasBeenSet = true;
    }

    if (rsp.HasMember("SubWorkflowNodePath") && !rsp["SubWorkflowNodePath"].IsNull())
    {
        if (!rsp["SubWorkflowNodePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubWorkflowNodePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subWorkflowNodePath = string(rsp["SubWorkflowNodePath"].GetString());
        m_subWorkflowNodePathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeWorkflowRunResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_workflowRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowRun";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workflowRun.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nodeRunListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeRunList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeRunList.begin(); itr != m_nodeRunList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_subWorkflowNodePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubWorkflowNodePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subWorkflowNodePath.c_str(), allocator).Move(), allocator);
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


WorkflowRun DescribeWorkflowRunResponse::GetWorkflowRun() const
{
    return m_workflowRun;
}

bool DescribeWorkflowRunResponse::WorkflowRunHasBeenSet() const
{
    return m_workflowRunHasBeenSet;
}

vector<NodeRun> DescribeWorkflowRunResponse::GetNodeRunList() const
{
    return m_nodeRunList;
}

bool DescribeWorkflowRunResponse::NodeRunListHasBeenSet() const
{
    return m_nodeRunListHasBeenSet;
}

string DescribeWorkflowRunResponse::GetSubWorkflowNodePath() const
{
    return m_subWorkflowNodePath;
}

bool DescribeWorkflowRunResponse::SubWorkflowNodePathHasBeenSet() const
{
    return m_subWorkflowNodePathHasBeenSet;
}



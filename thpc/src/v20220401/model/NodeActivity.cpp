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

#include <tencentcloud/thpc/v20220401/model/NodeActivity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20220401::Model;
using namespace std;

NodeActivity::NodeActivity() :
    m_nodeInstanceIdHasBeenSet(false),
    m_nodeActivityStatusHasBeenSet(false),
    m_nodeActivityStatusCodeHasBeenSet(false),
    m_nodeActivityStatusReasonHasBeenSet(false)
{
}

CoreInternalOutcome NodeActivity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeInstanceId") && !value["NodeInstanceId"].IsNull())
    {
        if (!value["NodeInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeActivity.NodeInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeInstanceId = string(value["NodeInstanceId"].GetString());
        m_nodeInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("NodeActivityStatus") && !value["NodeActivityStatus"].IsNull())
    {
        if (!value["NodeActivityStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeActivity.NodeActivityStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeActivityStatus = string(value["NodeActivityStatus"].GetString());
        m_nodeActivityStatusHasBeenSet = true;
    }

    if (value.HasMember("NodeActivityStatusCode") && !value["NodeActivityStatusCode"].IsNull())
    {
        if (!value["NodeActivityStatusCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeActivity.NodeActivityStatusCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeActivityStatusCode = string(value["NodeActivityStatusCode"].GetString());
        m_nodeActivityStatusCodeHasBeenSet = true;
    }

    if (value.HasMember("NodeActivityStatusReason") && !value["NodeActivityStatusReason"].IsNull())
    {
        if (!value["NodeActivityStatusReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeActivity.NodeActivityStatusReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeActivityStatusReason = string(value["NodeActivityStatusReason"].GetString());
        m_nodeActivityStatusReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeActivity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeActivityStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeActivityStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeActivityStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeActivityStatusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeActivityStatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeActivityStatusCode.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeActivityStatusReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeActivityStatusReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeActivityStatusReason.c_str(), allocator).Move(), allocator);
    }

}


string NodeActivity::GetNodeInstanceId() const
{
    return m_nodeInstanceId;
}

void NodeActivity::SetNodeInstanceId(const string& _nodeInstanceId)
{
    m_nodeInstanceId = _nodeInstanceId;
    m_nodeInstanceIdHasBeenSet = true;
}

bool NodeActivity::NodeInstanceIdHasBeenSet() const
{
    return m_nodeInstanceIdHasBeenSet;
}

string NodeActivity::GetNodeActivityStatus() const
{
    return m_nodeActivityStatus;
}

void NodeActivity::SetNodeActivityStatus(const string& _nodeActivityStatus)
{
    m_nodeActivityStatus = _nodeActivityStatus;
    m_nodeActivityStatusHasBeenSet = true;
}

bool NodeActivity::NodeActivityStatusHasBeenSet() const
{
    return m_nodeActivityStatusHasBeenSet;
}

string NodeActivity::GetNodeActivityStatusCode() const
{
    return m_nodeActivityStatusCode;
}

void NodeActivity::SetNodeActivityStatusCode(const string& _nodeActivityStatusCode)
{
    m_nodeActivityStatusCode = _nodeActivityStatusCode;
    m_nodeActivityStatusCodeHasBeenSet = true;
}

bool NodeActivity::NodeActivityStatusCodeHasBeenSet() const
{
    return m_nodeActivityStatusCodeHasBeenSet;
}

string NodeActivity::GetNodeActivityStatusReason() const
{
    return m_nodeActivityStatusReason;
}

void NodeActivity::SetNodeActivityStatusReason(const string& _nodeActivityStatusReason)
{
    m_nodeActivityStatusReason = _nodeActivityStatusReason;
    m_nodeActivityStatusReasonHasBeenSet = true;
}

bool NodeActivity::NodeActivityStatusReasonHasBeenSet() const
{
    return m_nodeActivityStatusReasonHasBeenSet;
}


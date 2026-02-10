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

#include <tencentcloud/cdwch/v20200915/model/RestartInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

RestartInstanceRequest::RestartInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_nodeIpListHasBeenSet(false),
    m_rollingRestartHasBeenSet(false)
{
}

string RestartInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIpListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeIpList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodeIpList.begin(); itr != m_nodeIpList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_rollingRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollingRestart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rollingRestart, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RestartInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void RestartInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RestartInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RestartInstanceRequest::GetNodeType() const
{
    return m_nodeType;
}

void RestartInstanceRequest::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool RestartInstanceRequest::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

vector<string> RestartInstanceRequest::GetNodeIpList() const
{
    return m_nodeIpList;
}

void RestartInstanceRequest::SetNodeIpList(const vector<string>& _nodeIpList)
{
    m_nodeIpList = _nodeIpList;
    m_nodeIpListHasBeenSet = true;
}

bool RestartInstanceRequest::NodeIpListHasBeenSet() const
{
    return m_nodeIpListHasBeenSet;
}

bool RestartInstanceRequest::GetRollingRestart() const
{
    return m_rollingRestart;
}

void RestartInstanceRequest::SetRollingRestart(const bool& _rollingRestart)
{
    m_rollingRestart = _rollingRestart;
    m_rollingRestartHasBeenSet = true;
}

bool RestartInstanceRequest::RollingRestartHasBeenSet() const
{
    return m_rollingRestartHasBeenSet;
}



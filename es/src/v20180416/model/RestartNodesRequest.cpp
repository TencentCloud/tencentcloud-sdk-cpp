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

#include <tencentcloud/es/v20180416/model/RestartNodesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

RestartNodesRequest::RestartNodesRequest() :
    m_instanceIdHasBeenSet(false),
    m_nodeNamesHasBeenSet(false),
    m_forceRestartHasBeenSet(false),
    m_restartModeHasBeenSet(false),
    m_isOfflineHasBeenSet(false)
{
}

string RestartNodesRequest::ToJsonString() const
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

    if (m_nodeNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodeNames.begin(); itr != m_nodeNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_forceRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceRestart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceRestart, allocator);
    }

    if (m_restartModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_restartMode.c_str(), allocator).Move(), allocator);
    }

    if (m_isOfflineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOffline";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isOffline, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RestartNodesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void RestartNodesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RestartNodesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> RestartNodesRequest::GetNodeNames() const
{
    return m_nodeNames;
}

void RestartNodesRequest::SetNodeNames(const vector<string>& _nodeNames)
{
    m_nodeNames = _nodeNames;
    m_nodeNamesHasBeenSet = true;
}

bool RestartNodesRequest::NodeNamesHasBeenSet() const
{
    return m_nodeNamesHasBeenSet;
}

bool RestartNodesRequest::GetForceRestart() const
{
    return m_forceRestart;
}

void RestartNodesRequest::SetForceRestart(const bool& _forceRestart)
{
    m_forceRestart = _forceRestart;
    m_forceRestartHasBeenSet = true;
}

bool RestartNodesRequest::ForceRestartHasBeenSet() const
{
    return m_forceRestartHasBeenSet;
}

string RestartNodesRequest::GetRestartMode() const
{
    return m_restartMode;
}

void RestartNodesRequest::SetRestartMode(const string& _restartMode)
{
    m_restartMode = _restartMode;
    m_restartModeHasBeenSet = true;
}

bool RestartNodesRequest::RestartModeHasBeenSet() const
{
    return m_restartModeHasBeenSet;
}

bool RestartNodesRequest::GetIsOffline() const
{
    return m_isOffline;
}

void RestartNodesRequest::SetIsOffline(const bool& _isOffline)
{
    m_isOffline = _isOffline;
    m_isOfflineHasBeenSet = true;
}

bool RestartNodesRequest::IsOfflineHasBeenSet() const
{
    return m_isOfflineHasBeenSet;
}



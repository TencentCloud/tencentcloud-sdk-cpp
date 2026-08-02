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

#include <tencentcloud/dbdc/v20201029/model/ModifyDBCustomNodeAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

ModifyDBCustomNodeAttributesRequest::ModifyDBCustomNodeAttributesRequest() :
    m_nodeIdHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_autoRebootHasBeenSet(false)
{
}

string ModifyDBCustomNodeAttributesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRebootHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoReboot";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoReboot, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDBCustomNodeAttributesRequest::GetNodeId() const
{
    return m_nodeId;
}

void ModifyDBCustomNodeAttributesRequest::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool ModifyDBCustomNodeAttributesRequest::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string ModifyDBCustomNodeAttributesRequest::GetHostName() const
{
    return m_hostName;
}

void ModifyDBCustomNodeAttributesRequest::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool ModifyDBCustomNodeAttributesRequest::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string ModifyDBCustomNodeAttributesRequest::GetNodeName() const
{
    return m_nodeName;
}

void ModifyDBCustomNodeAttributesRequest::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool ModifyDBCustomNodeAttributesRequest::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

bool ModifyDBCustomNodeAttributesRequest::GetAutoReboot() const
{
    return m_autoReboot;
}

void ModifyDBCustomNodeAttributesRequest::SetAutoReboot(const bool& _autoReboot)
{
    m_autoReboot = _autoReboot;
    m_autoRebootHasBeenSet = true;
}

bool ModifyDBCustomNodeAttributesRequest::AutoRebootHasBeenSet() const
{
    return m_autoRebootHasBeenSet;
}



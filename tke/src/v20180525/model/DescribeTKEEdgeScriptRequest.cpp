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

#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeScriptRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DescribeTKEEdgeScriptRequest::DescribeTKEEdgeScriptRequest() :
    m_clusterIdHasBeenSet(false),
    m_interfaceHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_configHasBeenSet(false),
    m_scriptVersionHasBeenSet(false)
{
}

string DescribeTKEEdgeScriptRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_interfaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interface";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_interface.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scriptVersion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTKEEdgeScriptRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeTKEEdgeScriptRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeTKEEdgeScriptRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeTKEEdgeScriptRequest::GetInterface() const
{
    return m_interface;
}

void DescribeTKEEdgeScriptRequest::SetInterface(const string& _interface)
{
    m_interface = _interface;
    m_interfaceHasBeenSet = true;
}

bool DescribeTKEEdgeScriptRequest::InterfaceHasBeenSet() const
{
    return m_interfaceHasBeenSet;
}

string DescribeTKEEdgeScriptRequest::GetNodeName() const
{
    return m_nodeName;
}

void DescribeTKEEdgeScriptRequest::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool DescribeTKEEdgeScriptRequest::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string DescribeTKEEdgeScriptRequest::GetConfig() const
{
    return m_config;
}

void DescribeTKEEdgeScriptRequest::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool DescribeTKEEdgeScriptRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string DescribeTKEEdgeScriptRequest::GetScriptVersion() const
{
    return m_scriptVersion;
}

void DescribeTKEEdgeScriptRequest::SetScriptVersion(const string& _scriptVersion)
{
    m_scriptVersion = _scriptVersion;
    m_scriptVersionHasBeenSet = true;
}

bool DescribeTKEEdgeScriptRequest::ScriptVersionHasBeenSet() const
{
    return m_scriptVersionHasBeenSet;
}



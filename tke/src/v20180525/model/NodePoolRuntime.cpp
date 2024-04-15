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

#include <tencentcloud/tke/v20180525/model/NodePoolRuntime.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

NodePoolRuntime::NodePoolRuntime() :
    m_nodePoolIdHasBeenSet(false),
    m_runtimeTypeHasBeenSet(false),
    m_runtimeVersionHasBeenSet(false),
    m_nodePoolNameHasBeenSet(false)
{
}

CoreInternalOutcome NodePoolRuntime::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodePoolId") && !value["NodePoolId"].IsNull())
    {
        if (!value["NodePoolId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodePoolRuntime.NodePoolId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodePoolId = string(value["NodePoolId"].GetString());
        m_nodePoolIdHasBeenSet = true;
    }

    if (value.HasMember("RuntimeType") && !value["RuntimeType"].IsNull())
    {
        if (!value["RuntimeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodePoolRuntime.RuntimeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeType = string(value["RuntimeType"].GetString());
        m_runtimeTypeHasBeenSet = true;
    }

    if (value.HasMember("RuntimeVersion") && !value["RuntimeVersion"].IsNull())
    {
        if (!value["RuntimeVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodePoolRuntime.RuntimeVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeVersion = string(value["RuntimeVersion"].GetString());
        m_runtimeVersionHasBeenSet = true;
    }

    if (value.HasMember("NodePoolName") && !value["NodePoolName"].IsNull())
    {
        if (!value["NodePoolName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodePoolRuntime.NodePoolName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodePoolName = string(value["NodePoolName"].GetString());
        m_nodePoolNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodePoolRuntime::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodePoolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePoolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodePoolId.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtimeType.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtimeVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_nodePoolNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePoolName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodePoolName.c_str(), allocator).Move(), allocator);
    }

}


string NodePoolRuntime::GetNodePoolId() const
{
    return m_nodePoolId;
}

void NodePoolRuntime::SetNodePoolId(const string& _nodePoolId)
{
    m_nodePoolId = _nodePoolId;
    m_nodePoolIdHasBeenSet = true;
}

bool NodePoolRuntime::NodePoolIdHasBeenSet() const
{
    return m_nodePoolIdHasBeenSet;
}

string NodePoolRuntime::GetRuntimeType() const
{
    return m_runtimeType;
}

void NodePoolRuntime::SetRuntimeType(const string& _runtimeType)
{
    m_runtimeType = _runtimeType;
    m_runtimeTypeHasBeenSet = true;
}

bool NodePoolRuntime::RuntimeTypeHasBeenSet() const
{
    return m_runtimeTypeHasBeenSet;
}

string NodePoolRuntime::GetRuntimeVersion() const
{
    return m_runtimeVersion;
}

void NodePoolRuntime::SetRuntimeVersion(const string& _runtimeVersion)
{
    m_runtimeVersion = _runtimeVersion;
    m_runtimeVersionHasBeenSet = true;
}

bool NodePoolRuntime::RuntimeVersionHasBeenSet() const
{
    return m_runtimeVersionHasBeenSet;
}

string NodePoolRuntime::GetNodePoolName() const
{
    return m_nodePoolName;
}

void NodePoolRuntime::SetNodePoolName(const string& _nodePoolName)
{
    m_nodePoolName = _nodePoolName;
    m_nodePoolNameHasBeenSet = true;
}

bool NodePoolRuntime::NodePoolNameHasBeenSet() const
{
    return m_nodePoolNameHasBeenSet;
}


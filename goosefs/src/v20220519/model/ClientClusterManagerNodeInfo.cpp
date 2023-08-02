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

#include <tencentcloud/goosefs/v20220519/model/ClientClusterManagerNodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

ClientClusterManagerNodeInfo::ClientClusterManagerNodeInfo() :
    m_nodeIpHasBeenSet(false),
    m_nodeInstanceIdHasBeenSet(false),
    m_initialPasswordHasBeenSet(false)
{
}

CoreInternalOutcome ClientClusterManagerNodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeIp") && !value["NodeIp"].IsNull())
    {
        if (!value["NodeIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientClusterManagerNodeInfo.NodeIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeIp = string(value["NodeIp"].GetString());
        m_nodeIpHasBeenSet = true;
    }

    if (value.HasMember("NodeInstanceId") && !value["NodeInstanceId"].IsNull())
    {
        if (!value["NodeInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientClusterManagerNodeInfo.NodeInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeInstanceId = string(value["NodeInstanceId"].GetString());
        m_nodeInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("InitialPassword") && !value["InitialPassword"].IsNull())
    {
        if (!value["InitialPassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientClusterManagerNodeInfo.InitialPassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_initialPassword = string(value["InitialPassword"].GetString());
        m_initialPasswordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClientClusterManagerNodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeIp.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_initialPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitialPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_initialPassword.c_str(), allocator).Move(), allocator);
    }

}


string ClientClusterManagerNodeInfo::GetNodeIp() const
{
    return m_nodeIp;
}

void ClientClusterManagerNodeInfo::SetNodeIp(const string& _nodeIp)
{
    m_nodeIp = _nodeIp;
    m_nodeIpHasBeenSet = true;
}

bool ClientClusterManagerNodeInfo::NodeIpHasBeenSet() const
{
    return m_nodeIpHasBeenSet;
}

string ClientClusterManagerNodeInfo::GetNodeInstanceId() const
{
    return m_nodeInstanceId;
}

void ClientClusterManagerNodeInfo::SetNodeInstanceId(const string& _nodeInstanceId)
{
    m_nodeInstanceId = _nodeInstanceId;
    m_nodeInstanceIdHasBeenSet = true;
}

bool ClientClusterManagerNodeInfo::NodeInstanceIdHasBeenSet() const
{
    return m_nodeInstanceIdHasBeenSet;
}

string ClientClusterManagerNodeInfo::GetInitialPassword() const
{
    return m_initialPassword;
}

void ClientClusterManagerNodeInfo::SetInitialPassword(const string& _initialPassword)
{
    m_initialPassword = _initialPassword;
    m_initialPasswordHasBeenSet = true;
}

bool ClientClusterManagerNodeInfo::InitialPasswordHasBeenSet() const
{
    return m_initialPasswordHasBeenSet;
}


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

#include <tencentcloud/tke/v20180525/model/ScaleInMaster.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ScaleInMaster::ScaleInMaster() :
    m_instanceIdHasBeenSet(false),
    m_nodeRoleHasBeenSet(false),
    m_instanceDeleteModeHasBeenSet(false)
{
}

CoreInternalOutcome ScaleInMaster::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScaleInMaster.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("NodeRole") && !value["NodeRole"].IsNull())
    {
        if (!value["NodeRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScaleInMaster.NodeRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeRole = string(value["NodeRole"].GetString());
        m_nodeRoleHasBeenSet = true;
    }

    if (value.HasMember("InstanceDeleteMode") && !value["InstanceDeleteMode"].IsNull())
    {
        if (!value["InstanceDeleteMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScaleInMaster.InstanceDeleteMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceDeleteMode = string(value["InstanceDeleteMode"].GetString());
        m_instanceDeleteModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScaleInMaster::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeRole.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceDeleteModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDeleteMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceDeleteMode.c_str(), allocator).Move(), allocator);
    }

}


string ScaleInMaster::GetInstanceId() const
{
    return m_instanceId;
}

void ScaleInMaster::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ScaleInMaster::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ScaleInMaster::GetNodeRole() const
{
    return m_nodeRole;
}

void ScaleInMaster::SetNodeRole(const string& _nodeRole)
{
    m_nodeRole = _nodeRole;
    m_nodeRoleHasBeenSet = true;
}

bool ScaleInMaster::NodeRoleHasBeenSet() const
{
    return m_nodeRoleHasBeenSet;
}

string ScaleInMaster::GetInstanceDeleteMode() const
{
    return m_instanceDeleteMode;
}

void ScaleInMaster::SetInstanceDeleteMode(const string& _instanceDeleteMode)
{
    m_instanceDeleteMode = _instanceDeleteMode;
    m_instanceDeleteModeHasBeenSet = true;
}

bool ScaleInMaster::InstanceDeleteModeHasBeenSet() const
{
    return m_instanceDeleteModeHasBeenSet;
}


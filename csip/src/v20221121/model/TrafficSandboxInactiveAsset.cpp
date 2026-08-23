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

#include <tencentcloud/csip/v20221121/model/TrafficSandboxInactiveAsset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TrafficSandboxInactiveAsset::TrafficSandboxInactiveAsset() :
    m_instanceIdHasBeenSet(false),
    m_containerIdHasBeenSet(false),
    m_trafficPluginStateHasBeenSet(false)
{
}

CoreInternalOutcome TrafficSandboxInactiveAsset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxInactiveAsset.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ContainerId") && !value["ContainerId"].IsNull())
    {
        if (!value["ContainerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxInactiveAsset.ContainerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerId = string(value["ContainerId"].GetString());
        m_containerIdHasBeenSet = true;
    }

    if (value.HasMember("TrafficPluginState") && !value["TrafficPluginState"].IsNull())
    {
        if (!value["TrafficPluginState"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxInactiveAsset.TrafficPluginState` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_trafficPluginState.Deserialize(value["TrafficPluginState"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_trafficPluginStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficSandboxInactiveAsset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerId.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficPluginStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficPluginState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_trafficPluginState.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TrafficSandboxInactiveAsset::GetInstanceId() const
{
    return m_instanceId;
}

void TrafficSandboxInactiveAsset::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TrafficSandboxInactiveAsset::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string TrafficSandboxInactiveAsset::GetContainerId() const
{
    return m_containerId;
}

void TrafficSandboxInactiveAsset::SetContainerId(const string& _containerId)
{
    m_containerId = _containerId;
    m_containerIdHasBeenSet = true;
}

bool TrafficSandboxInactiveAsset::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

TrafficPluginState TrafficSandboxInactiveAsset::GetTrafficPluginState() const
{
    return m_trafficPluginState;
}

void TrafficSandboxInactiveAsset::SetTrafficPluginState(const TrafficPluginState& _trafficPluginState)
{
    m_trafficPluginState = _trafficPluginState;
    m_trafficPluginStateHasBeenSet = true;
}

bool TrafficSandboxInactiveAsset::TrafficPluginStateHasBeenSet() const
{
    return m_trafficPluginStateHasBeenSet;
}


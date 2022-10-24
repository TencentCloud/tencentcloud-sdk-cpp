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

#include <tencentcloud/tcm/v20210413/model/IngressGatewayStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

IngressGatewayStatus::IngressGatewayStatus() :
    m_loadBalancerHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_desiredVersionHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

CoreInternalOutcome IngressGatewayStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LoadBalancer") && !value["LoadBalancer"].IsNull())
    {
        if (!value["LoadBalancer"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IngressGatewayStatus.LoadBalancer` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_loadBalancer.Deserialize(value["LoadBalancer"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_loadBalancerHasBeenSet = true;
    }

    if (value.HasMember("CurrentVersion") && !value["CurrentVersion"].IsNull())
    {
        if (!value["CurrentVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IngressGatewayStatus.CurrentVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentVersion = string(value["CurrentVersion"].GetString());
        m_currentVersionHasBeenSet = true;
    }

    if (value.HasMember("DesiredVersion") && !value["DesiredVersion"].IsNull())
    {
        if (!value["DesiredVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IngressGatewayStatus.DesiredVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desiredVersion = string(value["DesiredVersion"].GetString());
        m_desiredVersionHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IngressGatewayStatus.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IngressGatewayStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_loadBalancerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loadBalancer.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_currentVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_desiredVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desiredVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

}


LoadBalancerStatus IngressGatewayStatus::GetLoadBalancer() const
{
    return m_loadBalancer;
}

void IngressGatewayStatus::SetLoadBalancer(const LoadBalancerStatus& _loadBalancer)
{
    m_loadBalancer = _loadBalancer;
    m_loadBalancerHasBeenSet = true;
}

bool IngressGatewayStatus::LoadBalancerHasBeenSet() const
{
    return m_loadBalancerHasBeenSet;
}

string IngressGatewayStatus::GetCurrentVersion() const
{
    return m_currentVersion;
}

void IngressGatewayStatus::SetCurrentVersion(const string& _currentVersion)
{
    m_currentVersion = _currentVersion;
    m_currentVersionHasBeenSet = true;
}

bool IngressGatewayStatus::CurrentVersionHasBeenSet() const
{
    return m_currentVersionHasBeenSet;
}

string IngressGatewayStatus::GetDesiredVersion() const
{
    return m_desiredVersion;
}

void IngressGatewayStatus::SetDesiredVersion(const string& _desiredVersion)
{
    m_desiredVersion = _desiredVersion;
    m_desiredVersionHasBeenSet = true;
}

bool IngressGatewayStatus::DesiredVersionHasBeenSet() const
{
    return m_desiredVersionHasBeenSet;
}

string IngressGatewayStatus::GetState() const
{
    return m_state;
}

void IngressGatewayStatus::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool IngressGatewayStatus::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}


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

#include <tencentcloud/tcm/v20210413/model/EgressGatewayStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

EgressGatewayStatus::EgressGatewayStatus() :
    m_currentVersionHasBeenSet(false),
    m_desiredVersionHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

CoreInternalOutcome EgressGatewayStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CurrentVersion") && !value["CurrentVersion"].IsNull())
    {
        if (!value["CurrentVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EgressGatewayStatus.CurrentVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentVersion = string(value["CurrentVersion"].GetString());
        m_currentVersionHasBeenSet = true;
    }

    if (value.HasMember("DesiredVersion") && !value["DesiredVersion"].IsNull())
    {
        if (!value["DesiredVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EgressGatewayStatus.DesiredVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desiredVersion = string(value["DesiredVersion"].GetString());
        m_desiredVersionHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EgressGatewayStatus.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EgressGatewayStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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


string EgressGatewayStatus::GetCurrentVersion() const
{
    return m_currentVersion;
}

void EgressGatewayStatus::SetCurrentVersion(const string& _currentVersion)
{
    m_currentVersion = _currentVersion;
    m_currentVersionHasBeenSet = true;
}

bool EgressGatewayStatus::CurrentVersionHasBeenSet() const
{
    return m_currentVersionHasBeenSet;
}

string EgressGatewayStatus::GetDesiredVersion() const
{
    return m_desiredVersion;
}

void EgressGatewayStatus::SetDesiredVersion(const string& _desiredVersion)
{
    m_desiredVersion = _desiredVersion;
    m_desiredVersionHasBeenSet = true;
}

bool EgressGatewayStatus::DesiredVersionHasBeenSet() const
{
    return m_desiredVersionHasBeenSet;
}

string EgressGatewayStatus::GetState() const
{
    return m_state;
}

void EgressGatewayStatus::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool EgressGatewayStatus::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}


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

#include <tencentcloud/gse/v20191112/model/FleetUtilization.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

FleetUtilization::FleetUtilization() :
    m_activeGameServerSessionCountHasBeenSet(false),
    m_activeServerProcessCountHasBeenSet(false),
    m_currentPlayerSessionCountHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_maximumPlayerSessionCountHasBeenSet(false)
{
}

CoreInternalOutcome FleetUtilization::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActiveGameServerSessionCount") && !value["ActiveGameServerSessionCount"].IsNull())
    {
        if (!value["ActiveGameServerSessionCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FleetUtilization.ActiveGameServerSessionCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_activeGameServerSessionCount = value["ActiveGameServerSessionCount"].GetUint64();
        m_activeGameServerSessionCountHasBeenSet = true;
    }

    if (value.HasMember("ActiveServerProcessCount") && !value["ActiveServerProcessCount"].IsNull())
    {
        if (!value["ActiveServerProcessCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FleetUtilization.ActiveServerProcessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_activeServerProcessCount = value["ActiveServerProcessCount"].GetUint64();
        m_activeServerProcessCountHasBeenSet = true;
    }

    if (value.HasMember("CurrentPlayerSessionCount") && !value["CurrentPlayerSessionCount"].IsNull())
    {
        if (!value["CurrentPlayerSessionCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FleetUtilization.CurrentPlayerSessionCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_currentPlayerSessionCount = value["CurrentPlayerSessionCount"].GetUint64();
        m_currentPlayerSessionCountHasBeenSet = true;
    }

    if (value.HasMember("FleetId") && !value["FleetId"].IsNull())
    {
        if (!value["FleetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetUtilization.FleetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fleetId = string(value["FleetId"].GetString());
        m_fleetIdHasBeenSet = true;
    }

    if (value.HasMember("MaximumPlayerSessionCount") && !value["MaximumPlayerSessionCount"].IsNull())
    {
        if (!value["MaximumPlayerSessionCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FleetUtilization.MaximumPlayerSessionCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maximumPlayerSessionCount = value["MaximumPlayerSessionCount"].GetUint64();
        m_maximumPlayerSessionCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FleetUtilization::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_activeGameServerSessionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveGameServerSessionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeGameServerSessionCount, allocator);
    }

    if (m_activeServerProcessCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveServerProcessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeServerProcessCount, allocator);
    }

    if (m_currentPlayerSessionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentPlayerSessionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentPlayerSessionCount, allocator);
    }

    if (m_fleetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FleetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fleetId.c_str(), allocator).Move(), allocator);
    }

    if (m_maximumPlayerSessionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaximumPlayerSessionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maximumPlayerSessionCount, allocator);
    }

}


uint64_t FleetUtilization::GetActiveGameServerSessionCount() const
{
    return m_activeGameServerSessionCount;
}

void FleetUtilization::SetActiveGameServerSessionCount(const uint64_t& _activeGameServerSessionCount)
{
    m_activeGameServerSessionCount = _activeGameServerSessionCount;
    m_activeGameServerSessionCountHasBeenSet = true;
}

bool FleetUtilization::ActiveGameServerSessionCountHasBeenSet() const
{
    return m_activeGameServerSessionCountHasBeenSet;
}

uint64_t FleetUtilization::GetActiveServerProcessCount() const
{
    return m_activeServerProcessCount;
}

void FleetUtilization::SetActiveServerProcessCount(const uint64_t& _activeServerProcessCount)
{
    m_activeServerProcessCount = _activeServerProcessCount;
    m_activeServerProcessCountHasBeenSet = true;
}

bool FleetUtilization::ActiveServerProcessCountHasBeenSet() const
{
    return m_activeServerProcessCountHasBeenSet;
}

uint64_t FleetUtilization::GetCurrentPlayerSessionCount() const
{
    return m_currentPlayerSessionCount;
}

void FleetUtilization::SetCurrentPlayerSessionCount(const uint64_t& _currentPlayerSessionCount)
{
    m_currentPlayerSessionCount = _currentPlayerSessionCount;
    m_currentPlayerSessionCountHasBeenSet = true;
}

bool FleetUtilization::CurrentPlayerSessionCountHasBeenSet() const
{
    return m_currentPlayerSessionCountHasBeenSet;
}

string FleetUtilization::GetFleetId() const
{
    return m_fleetId;
}

void FleetUtilization::SetFleetId(const string& _fleetId)
{
    m_fleetId = _fleetId;
    m_fleetIdHasBeenSet = true;
}

bool FleetUtilization::FleetIdHasBeenSet() const
{
    return m_fleetIdHasBeenSet;
}

uint64_t FleetUtilization::GetMaximumPlayerSessionCount() const
{
    return m_maximumPlayerSessionCount;
}

void FleetUtilization::SetMaximumPlayerSessionCount(const uint64_t& _maximumPlayerSessionCount)
{
    m_maximumPlayerSessionCount = _maximumPlayerSessionCount;
    m_maximumPlayerSessionCountHasBeenSet = true;
}

bool FleetUtilization::MaximumPlayerSessionCountHasBeenSet() const
{
    return m_maximumPlayerSessionCountHasBeenSet;
}


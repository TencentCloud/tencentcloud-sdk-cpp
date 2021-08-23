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

#include <tencentcloud/ump/v20200918/model/ProgramStateItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ump::V20200918::Model;
using namespace std;

ProgramStateItem::ProgramStateItem() :
    m_serverIpHasBeenSet(false),
    m_programNameHasBeenSet(false),
    m_onlineCountHasBeenSet(false),
    m_offlineCountHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

CoreInternalOutcome ProgramStateItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServerIp") && !value["ServerIp"].IsNull())
    {
        if (!value["ServerIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramStateItem.ServerIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverIp = string(value["ServerIp"].GetString());
        m_serverIpHasBeenSet = true;
    }

    if (value.HasMember("ProgramName") && !value["ProgramName"].IsNull())
    {
        if (!value["ProgramName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramStateItem.ProgramName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_programName = string(value["ProgramName"].GetString());
        m_programNameHasBeenSet = true;
    }

    if (value.HasMember("OnlineCount") && !value["OnlineCount"].IsNull())
    {
        if (!value["OnlineCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramStateItem.OnlineCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_onlineCount = value["OnlineCount"].GetUint64();
        m_onlineCountHasBeenSet = true;
    }

    if (value.HasMember("OfflineCount") && !value["OfflineCount"].IsNull())
    {
        if (!value["OfflineCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramStateItem.OfflineCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_offlineCount = value["OfflineCount"].GetUint64();
        m_offlineCountHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramStateItem.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProgramStateItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serverIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverIp.c_str(), allocator).Move(), allocator);
    }

    if (m_programNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_programName.c_str(), allocator).Move(), allocator);
    }

    if (m_onlineCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlineCount, allocator);
    }

    if (m_offlineCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offlineCount, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

}


string ProgramStateItem::GetServerIp() const
{
    return m_serverIp;
}

void ProgramStateItem::SetServerIp(const string& _serverIp)
{
    m_serverIp = _serverIp;
    m_serverIpHasBeenSet = true;
}

bool ProgramStateItem::ServerIpHasBeenSet() const
{
    return m_serverIpHasBeenSet;
}

string ProgramStateItem::GetProgramName() const
{
    return m_programName;
}

void ProgramStateItem::SetProgramName(const string& _programName)
{
    m_programName = _programName;
    m_programNameHasBeenSet = true;
}

bool ProgramStateItem::ProgramNameHasBeenSet() const
{
    return m_programNameHasBeenSet;
}

uint64_t ProgramStateItem::GetOnlineCount() const
{
    return m_onlineCount;
}

void ProgramStateItem::SetOnlineCount(const uint64_t& _onlineCount)
{
    m_onlineCount = _onlineCount;
    m_onlineCountHasBeenSet = true;
}

bool ProgramStateItem::OnlineCountHasBeenSet() const
{
    return m_onlineCountHasBeenSet;
}

uint64_t ProgramStateItem::GetOfflineCount() const
{
    return m_offlineCount;
}

void ProgramStateItem::SetOfflineCount(const uint64_t& _offlineCount)
{
    m_offlineCount = _offlineCount;
    m_offlineCountHasBeenSet = true;
}

bool ProgramStateItem::OfflineCountHasBeenSet() const
{
    return m_offlineCountHasBeenSet;
}

int64_t ProgramStateItem::GetState() const
{
    return m_state;
}

void ProgramStateItem::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool ProgramStateItem::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}


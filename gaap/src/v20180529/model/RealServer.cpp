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

#include <tencentcloud/gaap/v20180529/model/RealServer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

RealServer::RealServer() :
    m_realServerIPHasBeenSet(false),
    m_realServerIdHasBeenSet(false),
    m_realServerNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_inBanBlacklistHasBeenSet(false)
{
}

CoreInternalOutcome RealServer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RealServerIP") && !value["RealServerIP"].IsNull())
    {
        if (!value["RealServerIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RealServer.RealServerIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realServerIP = string(value["RealServerIP"].GetString());
        m_realServerIPHasBeenSet = true;
    }

    if (value.HasMember("RealServerId") && !value["RealServerId"].IsNull())
    {
        if (!value["RealServerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RealServer.RealServerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realServerId = string(value["RealServerId"].GetString());
        m_realServerIdHasBeenSet = true;
    }

    if (value.HasMember("RealServerName") && !value["RealServerName"].IsNull())
    {
        if (!value["RealServerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RealServer.RealServerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realServerName = string(value["RealServerName"].GetString());
        m_realServerNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RealServer.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("InBanBlacklist") && !value["InBanBlacklist"].IsNull())
    {
        if (!value["InBanBlacklist"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RealServer.InBanBlacklist` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inBanBlacklist = value["InBanBlacklist"].GetInt64();
        m_inBanBlacklistHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RealServer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_realServerIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realServerIP.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realServerId.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realServerName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_inBanBlacklistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InBanBlacklist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inBanBlacklist, allocator);
    }

}


string RealServer::GetRealServerIP() const
{
    return m_realServerIP;
}

void RealServer::SetRealServerIP(const string& _realServerIP)
{
    m_realServerIP = _realServerIP;
    m_realServerIPHasBeenSet = true;
}

bool RealServer::RealServerIPHasBeenSet() const
{
    return m_realServerIPHasBeenSet;
}

string RealServer::GetRealServerId() const
{
    return m_realServerId;
}

void RealServer::SetRealServerId(const string& _realServerId)
{
    m_realServerId = _realServerId;
    m_realServerIdHasBeenSet = true;
}

bool RealServer::RealServerIdHasBeenSet() const
{
    return m_realServerIdHasBeenSet;
}

string RealServer::GetRealServerName() const
{
    return m_realServerName;
}

void RealServer::SetRealServerName(const string& _realServerName)
{
    m_realServerName = _realServerName;
    m_realServerNameHasBeenSet = true;
}

bool RealServer::RealServerNameHasBeenSet() const
{
    return m_realServerNameHasBeenSet;
}

uint64_t RealServer::GetProjectId() const
{
    return m_projectId;
}

void RealServer::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RealServer::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t RealServer::GetInBanBlacklist() const
{
    return m_inBanBlacklist;
}

void RealServer::SetInBanBlacklist(const int64_t& _inBanBlacklist)
{
    m_inBanBlacklist = _inBanBlacklist;
    m_inBanBlacklistHasBeenSet = true;
}

bool RealServer::InBanBlacklistHasBeenSet() const
{
    return m_inBanBlacklistHasBeenSet;
}


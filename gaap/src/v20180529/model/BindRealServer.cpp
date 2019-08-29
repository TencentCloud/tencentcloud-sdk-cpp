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

#include <tencentcloud/gaap/v20180529/model/BindRealServer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

BindRealServer::BindRealServer() :
    m_realServerIdHasBeenSet(false),
    m_realServerIPHasBeenSet(false),
    m_realServerWeightHasBeenSet(false),
    m_realServerStatusHasBeenSet(false),
    m_realServerPortHasBeenSet(false),
    m_downIPListHasBeenSet(false)
{
}

CoreInternalOutcome BindRealServer::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RealServerId") && !value["RealServerId"].IsNull())
    {
        if (!value["RealServerId"].IsString())
        {
            return CoreInternalOutcome(Error("response `BindRealServer.RealServerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realServerId = string(value["RealServerId"].GetString());
        m_realServerIdHasBeenSet = true;
    }

    if (value.HasMember("RealServerIP") && !value["RealServerIP"].IsNull())
    {
        if (!value["RealServerIP"].IsString())
        {
            return CoreInternalOutcome(Error("response `BindRealServer.RealServerIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realServerIP = string(value["RealServerIP"].GetString());
        m_realServerIPHasBeenSet = true;
    }

    if (value.HasMember("RealServerWeight") && !value["RealServerWeight"].IsNull())
    {
        if (!value["RealServerWeight"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BindRealServer.RealServerWeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_realServerWeight = value["RealServerWeight"].GetInt64();
        m_realServerWeightHasBeenSet = true;
    }

    if (value.HasMember("RealServerStatus") && !value["RealServerStatus"].IsNull())
    {
        if (!value["RealServerStatus"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BindRealServer.RealServerStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_realServerStatus = value["RealServerStatus"].GetInt64();
        m_realServerStatusHasBeenSet = true;
    }

    if (value.HasMember("RealServerPort") && !value["RealServerPort"].IsNull())
    {
        if (!value["RealServerPort"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BindRealServer.RealServerPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_realServerPort = value["RealServerPort"].GetInt64();
        m_realServerPortHasBeenSet = true;
    }

    if (value.HasMember("DownIPList") && !value["DownIPList"].IsNull())
    {
        if (!value["DownIPList"].IsArray())
            return CoreInternalOutcome(Error("response `BindRealServer.DownIPList` is not array type"));

        const Value &tmpValue = value["DownIPList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_downIPList.push_back((*itr).GetString());
        }
        m_downIPListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BindRealServer::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_realServerIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealServerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_realServerId.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerIPHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealServerIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_realServerIP.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerWeightHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealServerWeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realServerWeight, allocator);
    }

    if (m_realServerStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealServerStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realServerStatus, allocator);
    }

    if (m_realServerPortHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealServerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realServerPort, allocator);
    }

    if (m_downIPListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DownIPList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_downIPList.begin(); itr != m_downIPList.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string BindRealServer::GetRealServerId() const
{
    return m_realServerId;
}

void BindRealServer::SetRealServerId(const string& _realServerId)
{
    m_realServerId = _realServerId;
    m_realServerIdHasBeenSet = true;
}

bool BindRealServer::RealServerIdHasBeenSet() const
{
    return m_realServerIdHasBeenSet;
}

string BindRealServer::GetRealServerIP() const
{
    return m_realServerIP;
}

void BindRealServer::SetRealServerIP(const string& _realServerIP)
{
    m_realServerIP = _realServerIP;
    m_realServerIPHasBeenSet = true;
}

bool BindRealServer::RealServerIPHasBeenSet() const
{
    return m_realServerIPHasBeenSet;
}

int64_t BindRealServer::GetRealServerWeight() const
{
    return m_realServerWeight;
}

void BindRealServer::SetRealServerWeight(const int64_t& _realServerWeight)
{
    m_realServerWeight = _realServerWeight;
    m_realServerWeightHasBeenSet = true;
}

bool BindRealServer::RealServerWeightHasBeenSet() const
{
    return m_realServerWeightHasBeenSet;
}

int64_t BindRealServer::GetRealServerStatus() const
{
    return m_realServerStatus;
}

void BindRealServer::SetRealServerStatus(const int64_t& _realServerStatus)
{
    m_realServerStatus = _realServerStatus;
    m_realServerStatusHasBeenSet = true;
}

bool BindRealServer::RealServerStatusHasBeenSet() const
{
    return m_realServerStatusHasBeenSet;
}

int64_t BindRealServer::GetRealServerPort() const
{
    return m_realServerPort;
}

void BindRealServer::SetRealServerPort(const int64_t& _realServerPort)
{
    m_realServerPort = _realServerPort;
    m_realServerPortHasBeenSet = true;
}

bool BindRealServer::RealServerPortHasBeenSet() const
{
    return m_realServerPortHasBeenSet;
}

vector<string> BindRealServer::GetDownIPList() const
{
    return m_downIPList;
}

void BindRealServer::SetDownIPList(const vector<string>& _downIPList)
{
    m_downIPList = _downIPList;
    m_downIPListHasBeenSet = true;
}

bool BindRealServer::DownIPListHasBeenSet() const
{
    return m_downIPListHasBeenSet;
}


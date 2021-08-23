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

#include <tencentcloud/tcaplusdb/v20190823/model/ServerMachineInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

ServerMachineInfo::ServerMachineInfo() :
    m_serverUidHasBeenSet(false),
    m_machineTypeHasBeenSet(false)
{
}

CoreInternalOutcome ServerMachineInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServerUid") && !value["ServerUid"].IsNull())
    {
        if (!value["ServerUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerMachineInfo.ServerUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverUid = string(value["ServerUid"].GetString());
        m_serverUidHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerMachineInfo.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerMachineInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serverUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverUid.c_str(), allocator).Move(), allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

}


string ServerMachineInfo::GetServerUid() const
{
    return m_serverUid;
}

void ServerMachineInfo::SetServerUid(const string& _serverUid)
{
    m_serverUid = _serverUid;
    m_serverUidHasBeenSet = true;
}

bool ServerMachineInfo::ServerUidHasBeenSet() const
{
    return m_serverUidHasBeenSet;
}

string ServerMachineInfo::GetMachineType() const
{
    return m_machineType;
}

void ServerMachineInfo::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool ServerMachineInfo::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}


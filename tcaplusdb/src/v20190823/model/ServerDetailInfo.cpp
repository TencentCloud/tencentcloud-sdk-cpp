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

#include <tencentcloud/tcaplusdb/v20190823/model/ServerDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

ServerDetailInfo::ServerDetailInfo() :
    m_serverUidHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_memoryRateHasBeenSet(false),
    m_diskRateHasBeenSet(false),
    m_readNumHasBeenSet(false),
    m_writeNumHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

CoreInternalOutcome ServerDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServerUid") && !value["ServerUid"].IsNull())
    {
        if (!value["ServerUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerDetailInfo.ServerUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverUid = string(value["ServerUid"].GetString());
        m_serverUidHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerDetailInfo.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (value.HasMember("MemoryRate") && !value["MemoryRate"].IsNull())
    {
        if (!value["MemoryRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerDetailInfo.MemoryRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memoryRate = value["MemoryRate"].GetInt64();
        m_memoryRateHasBeenSet = true;
    }

    if (value.HasMember("DiskRate") && !value["DiskRate"].IsNull())
    {
        if (!value["DiskRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerDetailInfo.DiskRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskRate = value["DiskRate"].GetInt64();
        m_diskRateHasBeenSet = true;
    }

    if (value.HasMember("ReadNum") && !value["ReadNum"].IsNull())
    {
        if (!value["ReadNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerDetailInfo.ReadNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readNum = value["ReadNum"].GetInt64();
        m_readNumHasBeenSet = true;
    }

    if (value.HasMember("WriteNum") && !value["WriteNum"].IsNull())
    {
        if (!value["WriteNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerDetailInfo.WriteNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_writeNum = value["WriteNum"].GetInt64();
        m_writeNumHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerDetailInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_memoryRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryRate, allocator);
    }

    if (m_diskRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskRate, allocator);
    }

    if (m_readNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readNum, allocator);
    }

    if (m_writeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WriteNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_writeNum, allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

}


string ServerDetailInfo::GetServerUid() const
{
    return m_serverUid;
}

void ServerDetailInfo::SetServerUid(const string& _serverUid)
{
    m_serverUid = _serverUid;
    m_serverUidHasBeenSet = true;
}

bool ServerDetailInfo::ServerUidHasBeenSet() const
{
    return m_serverUidHasBeenSet;
}

string ServerDetailInfo::GetMachineType() const
{
    return m_machineType;
}

void ServerDetailInfo::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool ServerDetailInfo::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

int64_t ServerDetailInfo::GetMemoryRate() const
{
    return m_memoryRate;
}

void ServerDetailInfo::SetMemoryRate(const int64_t& _memoryRate)
{
    m_memoryRate = _memoryRate;
    m_memoryRateHasBeenSet = true;
}

bool ServerDetailInfo::MemoryRateHasBeenSet() const
{
    return m_memoryRateHasBeenSet;
}

int64_t ServerDetailInfo::GetDiskRate() const
{
    return m_diskRate;
}

void ServerDetailInfo::SetDiskRate(const int64_t& _diskRate)
{
    m_diskRate = _diskRate;
    m_diskRateHasBeenSet = true;
}

bool ServerDetailInfo::DiskRateHasBeenSet() const
{
    return m_diskRateHasBeenSet;
}

int64_t ServerDetailInfo::GetReadNum() const
{
    return m_readNum;
}

void ServerDetailInfo::SetReadNum(const int64_t& _readNum)
{
    m_readNum = _readNum;
    m_readNumHasBeenSet = true;
}

bool ServerDetailInfo::ReadNumHasBeenSet() const
{
    return m_readNumHasBeenSet;
}

int64_t ServerDetailInfo::GetWriteNum() const
{
    return m_writeNum;
}

void ServerDetailInfo::SetWriteNum(const int64_t& _writeNum)
{
    m_writeNum = _writeNum;
    m_writeNumHasBeenSet = true;
}

bool ServerDetailInfo::WriteNumHasBeenSet() const
{
    return m_writeNumHasBeenSet;
}

string ServerDetailInfo::GetVersion() const
{
    return m_version;
}

void ServerDetailInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ServerDetailInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}


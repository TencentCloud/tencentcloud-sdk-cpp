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

#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

MachineExtraInfo::MachineExtraInfo() :
    m_wanIPHasBeenSet(false),
    m_privateIPHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_networkNameHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_hostNameHasBeenSet(false)
{
}

CoreInternalOutcome MachineExtraInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WanIP") && !value["WanIP"].IsNull())
    {
        if (!value["WanIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineExtraInfo.WanIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanIP = string(value["WanIP"].GetString());
        m_wanIPHasBeenSet = true;
    }

    if (value.HasMember("PrivateIP") && !value["PrivateIP"].IsNull())
    {
        if (!value["PrivateIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineExtraInfo.PrivateIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIP = string(value["PrivateIP"].GetString());
        m_privateIPHasBeenSet = true;
    }

    if (value.HasMember("NetworkType") && !value["NetworkType"].IsNull())
    {
        if (!value["NetworkType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineExtraInfo.NetworkType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_networkType = value["NetworkType"].GetInt64();
        m_networkTypeHasBeenSet = true;
    }

    if (value.HasMember("NetworkName") && !value["NetworkName"].IsNull())
    {
        if (!value["NetworkName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineExtraInfo.NetworkName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkName = string(value["NetworkName"].GetString());
        m_networkNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineExtraInfo.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineExtraInfo.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MachineExtraInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wanIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanIP.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIP.c_str(), allocator).Move(), allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkType, allocator);
    }

    if (m_networkNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

}


string MachineExtraInfo::GetWanIP() const
{
    return m_wanIP;
}

void MachineExtraInfo::SetWanIP(const string& _wanIP)
{
    m_wanIP = _wanIP;
    m_wanIPHasBeenSet = true;
}

bool MachineExtraInfo::WanIPHasBeenSet() const
{
    return m_wanIPHasBeenSet;
}

string MachineExtraInfo::GetPrivateIP() const
{
    return m_privateIP;
}

void MachineExtraInfo::SetPrivateIP(const string& _privateIP)
{
    m_privateIP = _privateIP;
    m_privateIPHasBeenSet = true;
}

bool MachineExtraInfo::PrivateIPHasBeenSet() const
{
    return m_privateIPHasBeenSet;
}

int64_t MachineExtraInfo::GetNetworkType() const
{
    return m_networkType;
}

void MachineExtraInfo::SetNetworkType(const int64_t& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool MachineExtraInfo::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string MachineExtraInfo::GetNetworkName() const
{
    return m_networkName;
}

void MachineExtraInfo::SetNetworkName(const string& _networkName)
{
    m_networkName = _networkName;
    m_networkNameHasBeenSet = true;
}

bool MachineExtraInfo::NetworkNameHasBeenSet() const
{
    return m_networkNameHasBeenSet;
}

string MachineExtraInfo::GetInstanceID() const
{
    return m_instanceID;
}

void MachineExtraInfo::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool MachineExtraInfo::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string MachineExtraInfo::GetHostName() const
{
    return m_hostName;
}

void MachineExtraInfo::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool MachineExtraInfo::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}


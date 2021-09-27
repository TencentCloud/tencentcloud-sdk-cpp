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

#include <tencentcloud/cwp/v20180228/model/AssetWebLocationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AssetWebLocationInfo::AssetWebLocationInfo() :
    m_nameHasBeenSet(false),
    m_portHasBeenSet(false),
    m_protoHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_safeStatusHasBeenSet(false),
    m_userHasBeenSet(false),
    m_mainPathHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome AssetWebLocationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationInfo.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Proto") && !value["Proto"].IsNull())
    {
        if (!value["Proto"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationInfo.Proto` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proto = string(value["Proto"].GetString());
        m_protoHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationInfo.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("SafeStatus") && !value["SafeStatus"].IsNull())
    {
        if (!value["SafeStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationInfo.SafeStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_safeStatus = value["SafeStatus"].GetUint64();
        m_safeStatusHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationInfo.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("MainPath") && !value["MainPath"].IsNull())
    {
        if (!value["MainPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationInfo.MainPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainPath = string(value["MainPath"].GetString());
        m_mainPathHasBeenSet = true;
    }

    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationInfo.Command` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_command = string(value["Command"].GetString());
        m_commandHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationInfo.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetWebLocationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_protoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Proto";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proto.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_safeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SafeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_safeStatus, allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_mainPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainPath.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string AssetWebLocationInfo::GetName() const
{
    return m_name;
}

void AssetWebLocationInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AssetWebLocationInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AssetWebLocationInfo::GetPort() const
{
    return m_port;
}

void AssetWebLocationInfo::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool AssetWebLocationInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string AssetWebLocationInfo::GetProto() const
{
    return m_proto;
}

void AssetWebLocationInfo::SetProto(const string& _proto)
{
    m_proto = _proto;
    m_protoHasBeenSet = true;
}

bool AssetWebLocationInfo::ProtoHasBeenSet() const
{
    return m_protoHasBeenSet;
}

string AssetWebLocationInfo::GetServiceType() const
{
    return m_serviceType;
}

void AssetWebLocationInfo::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool AssetWebLocationInfo::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

uint64_t AssetWebLocationInfo::GetSafeStatus() const
{
    return m_safeStatus;
}

void AssetWebLocationInfo::SetSafeStatus(const uint64_t& _safeStatus)
{
    m_safeStatus = _safeStatus;
    m_safeStatusHasBeenSet = true;
}

bool AssetWebLocationInfo::SafeStatusHasBeenSet() const
{
    return m_safeStatusHasBeenSet;
}

string AssetWebLocationInfo::GetUser() const
{
    return m_user;
}

void AssetWebLocationInfo::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool AssetWebLocationInfo::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string AssetWebLocationInfo::GetMainPath() const
{
    return m_mainPath;
}

void AssetWebLocationInfo::SetMainPath(const string& _mainPath)
{
    m_mainPath = _mainPath;
    m_mainPathHasBeenSet = true;
}

bool AssetWebLocationInfo::MainPathHasBeenSet() const
{
    return m_mainPathHasBeenSet;
}

string AssetWebLocationInfo::GetCommand() const
{
    return m_command;
}

void AssetWebLocationInfo::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool AssetWebLocationInfo::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string AssetWebLocationInfo::GetIp() const
{
    return m_ip;
}

void AssetWebLocationInfo::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool AssetWebLocationInfo::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string AssetWebLocationInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void AssetWebLocationInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AssetWebLocationInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}


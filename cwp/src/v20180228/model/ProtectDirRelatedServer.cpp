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

#include <tencentcloud/cwp/v20180228/model/ProtectDirRelatedServer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ProtectDirRelatedServer::ProtectDirRelatedServer() :
    m_idHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_machineOsHasBeenSet(false),
    m_relateDirNumHasBeenSet(false),
    m_protectStatusHasBeenSet(false),
    m_protectSwitchHasBeenSet(false),
    m_autoRestoreSwitchStatusHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_authorizationHasBeenSet(false),
    m_exceptionHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_exceptionMessageHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false)
{
}

CoreInternalOutcome ProtectDirRelatedServer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirRelatedServer.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirRelatedServer.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirRelatedServer.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("MachineOs") && !value["MachineOs"].IsNull())
    {
        if (!value["MachineOs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirRelatedServer.MachineOs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineOs = string(value["MachineOs"].GetString());
        m_machineOsHasBeenSet = true;
    }

    if (value.HasMember("RelateDirNum") && !value["RelateDirNum"].IsNull())
    {
        if (!value["RelateDirNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirRelatedServer.RelateDirNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_relateDirNum = value["RelateDirNum"].GetUint64();
        m_relateDirNumHasBeenSet = true;
    }

    if (value.HasMember("ProtectStatus") && !value["ProtectStatus"].IsNull())
    {
        if (!value["ProtectStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirRelatedServer.ProtectStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectStatus = value["ProtectStatus"].GetUint64();
        m_protectStatusHasBeenSet = true;
    }

    if (value.HasMember("ProtectSwitch") && !value["ProtectSwitch"].IsNull())
    {
        if (!value["ProtectSwitch"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirRelatedServer.ProtectSwitch` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectSwitch = value["ProtectSwitch"].GetUint64();
        m_protectSwitchHasBeenSet = true;
    }

    if (value.HasMember("AutoRestoreSwitchStatus") && !value["AutoRestoreSwitchStatus"].IsNull())
    {
        if (!value["AutoRestoreSwitchStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirRelatedServer.AutoRestoreSwitchStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRestoreSwitchStatus = value["AutoRestoreSwitchStatus"].GetUint64();
        m_autoRestoreSwitchStatusHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirRelatedServer.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Authorization") && !value["Authorization"].IsNull())
    {
        if (!value["Authorization"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirRelatedServer.Authorization` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_authorization = value["Authorization"].GetBool();
        m_authorizationHasBeenSet = true;
    }

    if (value.HasMember("Exception") && !value["Exception"].IsNull())
    {
        if (!value["Exception"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirRelatedServer.Exception` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exception = value["Exception"].GetUint64();
        m_exceptionHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirRelatedServer.Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("ExceptionMessage") && !value["ExceptionMessage"].IsNull())
    {
        if (!value["ExceptionMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirRelatedServer.ExceptionMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exceptionMessage = string(value["ExceptionMessage"].GetString());
        m_exceptionMessageHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirRelatedServer.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProtectDirRelatedServer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machineOsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineOs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineOs.c_str(), allocator).Move(), allocator);
    }

    if (m_relateDirNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelateDirNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relateDirNum, allocator);
    }

    if (m_protectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectStatus, allocator);
    }

    if (m_protectSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectSwitch, allocator);
    }

    if (m_autoRestoreSwitchStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRestoreSwitchStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRestoreSwitchStatus, allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authorization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authorization, allocator);
    }

    if (m_exceptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exception";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exception, allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_exceptionMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptionMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exceptionMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ProtectDirRelatedServer::GetId() const
{
    return m_id;
}

void ProtectDirRelatedServer::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ProtectDirRelatedServer::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ProtectDirRelatedServer::GetHostName() const
{
    return m_hostName;
}

void ProtectDirRelatedServer::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool ProtectDirRelatedServer::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string ProtectDirRelatedServer::GetHostIp() const
{
    return m_hostIp;
}

void ProtectDirRelatedServer::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool ProtectDirRelatedServer::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string ProtectDirRelatedServer::GetMachineOs() const
{
    return m_machineOs;
}

void ProtectDirRelatedServer::SetMachineOs(const string& _machineOs)
{
    m_machineOs = _machineOs;
    m_machineOsHasBeenSet = true;
}

bool ProtectDirRelatedServer::MachineOsHasBeenSet() const
{
    return m_machineOsHasBeenSet;
}

uint64_t ProtectDirRelatedServer::GetRelateDirNum() const
{
    return m_relateDirNum;
}

void ProtectDirRelatedServer::SetRelateDirNum(const uint64_t& _relateDirNum)
{
    m_relateDirNum = _relateDirNum;
    m_relateDirNumHasBeenSet = true;
}

bool ProtectDirRelatedServer::RelateDirNumHasBeenSet() const
{
    return m_relateDirNumHasBeenSet;
}

uint64_t ProtectDirRelatedServer::GetProtectStatus() const
{
    return m_protectStatus;
}

void ProtectDirRelatedServer::SetProtectStatus(const uint64_t& _protectStatus)
{
    m_protectStatus = _protectStatus;
    m_protectStatusHasBeenSet = true;
}

bool ProtectDirRelatedServer::ProtectStatusHasBeenSet() const
{
    return m_protectStatusHasBeenSet;
}

uint64_t ProtectDirRelatedServer::GetProtectSwitch() const
{
    return m_protectSwitch;
}

void ProtectDirRelatedServer::SetProtectSwitch(const uint64_t& _protectSwitch)
{
    m_protectSwitch = _protectSwitch;
    m_protectSwitchHasBeenSet = true;
}

bool ProtectDirRelatedServer::ProtectSwitchHasBeenSet() const
{
    return m_protectSwitchHasBeenSet;
}

uint64_t ProtectDirRelatedServer::GetAutoRestoreSwitchStatus() const
{
    return m_autoRestoreSwitchStatus;
}

void ProtectDirRelatedServer::SetAutoRestoreSwitchStatus(const uint64_t& _autoRestoreSwitchStatus)
{
    m_autoRestoreSwitchStatus = _autoRestoreSwitchStatus;
    m_autoRestoreSwitchStatusHasBeenSet = true;
}

bool ProtectDirRelatedServer::AutoRestoreSwitchStatusHasBeenSet() const
{
    return m_autoRestoreSwitchStatusHasBeenSet;
}

string ProtectDirRelatedServer::GetQuuid() const
{
    return m_quuid;
}

void ProtectDirRelatedServer::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool ProtectDirRelatedServer::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

bool ProtectDirRelatedServer::GetAuthorization() const
{
    return m_authorization;
}

void ProtectDirRelatedServer::SetAuthorization(const bool& _authorization)
{
    m_authorization = _authorization;
    m_authorizationHasBeenSet = true;
}

bool ProtectDirRelatedServer::AuthorizationHasBeenSet() const
{
    return m_authorizationHasBeenSet;
}

uint64_t ProtectDirRelatedServer::GetException() const
{
    return m_exception;
}

void ProtectDirRelatedServer::SetException(const uint64_t& _exception)
{
    m_exception = _exception;
    m_exceptionHasBeenSet = true;
}

bool ProtectDirRelatedServer::ExceptionHasBeenSet() const
{
    return m_exceptionHasBeenSet;
}

uint64_t ProtectDirRelatedServer::GetProgress() const
{
    return m_progress;
}

void ProtectDirRelatedServer::SetProgress(const uint64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool ProtectDirRelatedServer::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string ProtectDirRelatedServer::GetExceptionMessage() const
{
    return m_exceptionMessage;
}

void ProtectDirRelatedServer::SetExceptionMessage(const string& _exceptionMessage)
{
    m_exceptionMessage = _exceptionMessage;
    m_exceptionMessageHasBeenSet = true;
}

bool ProtectDirRelatedServer::ExceptionMessageHasBeenSet() const
{
    return m_exceptionMessageHasBeenSet;
}

MachineExtraInfo ProtectDirRelatedServer::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void ProtectDirRelatedServer::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool ProtectDirRelatedServer::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}


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

#include <tencentcloud/bm/v20180423/model/UserCmdTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

UserCmdTaskInfo::UserCmdTaskInfo() :
    m_autoIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_runBeginTimeHasBeenSet(false),
    m_runEndTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcCidrBlockHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_subnetCidrBlockHasBeenSet(false),
    m_lanIpHasBeenSet(false),
    m_cmdContentHasBeenSet(false),
    m_cmdParamHasBeenSet(false),
    m_cmdResultHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_lastShellExitHasBeenSet(false)
{
}

CoreInternalOutcome UserCmdTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoId") && !value["AutoId"].IsNull())
    {
        if (!value["AutoId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTaskInfo.AutoId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoId = value["AutoId"].GetUint64();
        m_autoIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("RunBeginTime") && !value["RunBeginTime"].IsNull())
    {
        if (!value["RunBeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTaskInfo.RunBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runBeginTime = string(value["RunBeginTime"].GetString());
        m_runBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("RunEndTime") && !value["RunEndTime"].IsNull())
    {
        if (!value["RunEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTaskInfo.RunEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runEndTime = string(value["RunEndTime"].GetString());
        m_runEndTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTaskInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTaskInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTaskInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTaskInfo.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTaskInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcCidrBlock") && !value["VpcCidrBlock"].IsNull())
    {
        if (!value["VpcCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTaskInfo.VpcCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcCidrBlock = string(value["VpcCidrBlock"].GetString());
        m_vpcCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTaskInfo.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTaskInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetCidrBlock") && !value["SubnetCidrBlock"].IsNull())
    {
        if (!value["SubnetCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTaskInfo.SubnetCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetCidrBlock = string(value["SubnetCidrBlock"].GetString());
        m_subnetCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("LanIp") && !value["LanIp"].IsNull())
    {
        if (!value["LanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTaskInfo.LanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lanIp = string(value["LanIp"].GetString());
        m_lanIpHasBeenSet = true;
    }

    if (value.HasMember("CmdContent") && !value["CmdContent"].IsNull())
    {
        if (!value["CmdContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTaskInfo.CmdContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmdContent = string(value["CmdContent"].GetString());
        m_cmdContentHasBeenSet = true;
    }

    if (value.HasMember("CmdParam") && !value["CmdParam"].IsNull())
    {
        if (!value["CmdParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTaskInfo.CmdParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmdParam = string(value["CmdParam"].GetString());
        m_cmdParamHasBeenSet = true;
    }

    if (value.HasMember("CmdResult") && !value["CmdResult"].IsNull())
    {
        if (!value["CmdResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTaskInfo.CmdResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmdResult = string(value["CmdResult"].GetString());
        m_cmdResultHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTaskInfo.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("LastShellExit") && !value["LastShellExit"].IsNull())
    {
        if (!value["LastShellExit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTaskInfo.LastShellExit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastShellExit = value["LastShellExit"].GetInt64();
        m_lastShellExitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserCmdTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoId, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_runBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunBeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runBeginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_runEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetName.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_lanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmdContent.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmdParam.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmdResult.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_lastShellExitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastShellExit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastShellExit, allocator);
    }

}


uint64_t UserCmdTaskInfo::GetAutoId() const
{
    return m_autoId;
}

void UserCmdTaskInfo::SetAutoId(const uint64_t& _autoId)
{
    m_autoId = _autoId;
    m_autoIdHasBeenSet = true;
}

bool UserCmdTaskInfo::AutoIdHasBeenSet() const
{
    return m_autoIdHasBeenSet;
}

string UserCmdTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void UserCmdTaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool UserCmdTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string UserCmdTaskInfo::GetRunBeginTime() const
{
    return m_runBeginTime;
}

void UserCmdTaskInfo::SetRunBeginTime(const string& _runBeginTime)
{
    m_runBeginTime = _runBeginTime;
    m_runBeginTimeHasBeenSet = true;
}

bool UserCmdTaskInfo::RunBeginTimeHasBeenSet() const
{
    return m_runBeginTimeHasBeenSet;
}

string UserCmdTaskInfo::GetRunEndTime() const
{
    return m_runEndTime;
}

void UserCmdTaskInfo::SetRunEndTime(const string& _runEndTime)
{
    m_runEndTime = _runEndTime;
    m_runEndTimeHasBeenSet = true;
}

bool UserCmdTaskInfo::RunEndTimeHasBeenSet() const
{
    return m_runEndTimeHasBeenSet;
}

int64_t UserCmdTaskInfo::GetStatus() const
{
    return m_status;
}

void UserCmdTaskInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UserCmdTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string UserCmdTaskInfo::GetInstanceName() const
{
    return m_instanceName;
}

void UserCmdTaskInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool UserCmdTaskInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string UserCmdTaskInfo::GetInstanceId() const
{
    return m_instanceId;
}

void UserCmdTaskInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UserCmdTaskInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UserCmdTaskInfo::GetVpcName() const
{
    return m_vpcName;
}

void UserCmdTaskInfo::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool UserCmdTaskInfo::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string UserCmdTaskInfo::GetVpcId() const
{
    return m_vpcId;
}

void UserCmdTaskInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool UserCmdTaskInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string UserCmdTaskInfo::GetVpcCidrBlock() const
{
    return m_vpcCidrBlock;
}

void UserCmdTaskInfo::SetVpcCidrBlock(const string& _vpcCidrBlock)
{
    m_vpcCidrBlock = _vpcCidrBlock;
    m_vpcCidrBlockHasBeenSet = true;
}

bool UserCmdTaskInfo::VpcCidrBlockHasBeenSet() const
{
    return m_vpcCidrBlockHasBeenSet;
}

string UserCmdTaskInfo::GetSubnetName() const
{
    return m_subnetName;
}

void UserCmdTaskInfo::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool UserCmdTaskInfo::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string UserCmdTaskInfo::GetSubnetId() const
{
    return m_subnetId;
}

void UserCmdTaskInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool UserCmdTaskInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string UserCmdTaskInfo::GetSubnetCidrBlock() const
{
    return m_subnetCidrBlock;
}

void UserCmdTaskInfo::SetSubnetCidrBlock(const string& _subnetCidrBlock)
{
    m_subnetCidrBlock = _subnetCidrBlock;
    m_subnetCidrBlockHasBeenSet = true;
}

bool UserCmdTaskInfo::SubnetCidrBlockHasBeenSet() const
{
    return m_subnetCidrBlockHasBeenSet;
}

string UserCmdTaskInfo::GetLanIp() const
{
    return m_lanIp;
}

void UserCmdTaskInfo::SetLanIp(const string& _lanIp)
{
    m_lanIp = _lanIp;
    m_lanIpHasBeenSet = true;
}

bool UserCmdTaskInfo::LanIpHasBeenSet() const
{
    return m_lanIpHasBeenSet;
}

string UserCmdTaskInfo::GetCmdContent() const
{
    return m_cmdContent;
}

void UserCmdTaskInfo::SetCmdContent(const string& _cmdContent)
{
    m_cmdContent = _cmdContent;
    m_cmdContentHasBeenSet = true;
}

bool UserCmdTaskInfo::CmdContentHasBeenSet() const
{
    return m_cmdContentHasBeenSet;
}

string UserCmdTaskInfo::GetCmdParam() const
{
    return m_cmdParam;
}

void UserCmdTaskInfo::SetCmdParam(const string& _cmdParam)
{
    m_cmdParam = _cmdParam;
    m_cmdParamHasBeenSet = true;
}

bool UserCmdTaskInfo::CmdParamHasBeenSet() const
{
    return m_cmdParamHasBeenSet;
}

string UserCmdTaskInfo::GetCmdResult() const
{
    return m_cmdResult;
}

void UserCmdTaskInfo::SetCmdResult(const string& _cmdResult)
{
    m_cmdResult = _cmdResult;
    m_cmdResultHasBeenSet = true;
}

bool UserCmdTaskInfo::CmdResultHasBeenSet() const
{
    return m_cmdResultHasBeenSet;
}

uint64_t UserCmdTaskInfo::GetAppId() const
{
    return m_appId;
}

void UserCmdTaskInfo::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool UserCmdTaskInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t UserCmdTaskInfo::GetLastShellExit() const
{
    return m_lastShellExit;
}

void UserCmdTaskInfo::SetLastShellExit(const int64_t& _lastShellExit)
{
    m_lastShellExit = _lastShellExit;
    m_lastShellExitHasBeenSet = true;
}

bool UserCmdTaskInfo::LastShellExitHasBeenSet() const
{
    return m_lastShellExitHasBeenSet;
}


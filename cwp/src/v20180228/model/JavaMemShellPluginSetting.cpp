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

#include <tencentcloud/cwp/v20180228/model/JavaMemShellPluginSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

JavaMemShellPluginSetting::JavaMemShellPluginSetting() :
    m_quuidHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_javaShellStatusHasBeenSet(false),
    m_exceptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false)
{
}

CoreInternalOutcome JavaMemShellPluginSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellPluginSetting.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellPluginSetting.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellPluginSetting.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("JavaShellStatus") && !value["JavaShellStatus"].IsNull())
    {
        if (!value["JavaShellStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellPluginSetting.JavaShellStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_javaShellStatus = value["JavaShellStatus"].GetUint64();
        m_javaShellStatusHasBeenSet = true;
    }

    if (value.HasMember("Exception") && !value["Exception"].IsNull())
    {
        if (!value["Exception"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellPluginSetting.Exception` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exception = value["Exception"].GetUint64();
        m_exceptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellPluginSetting.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellPluginSetting.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellPluginSetting.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellPluginSetting.MachineExtraInfo` is not object type").SetRequestId(requestId));
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

void JavaMemShellPluginSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_javaShellStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JavaShellStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_javaShellStatus, allocator);
    }

    if (m_exceptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exception";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exception, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
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


string JavaMemShellPluginSetting::GetQuuid() const
{
    return m_quuid;
}

void JavaMemShellPluginSetting::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool JavaMemShellPluginSetting::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string JavaMemShellPluginSetting::GetAlias() const
{
    return m_alias;
}

void JavaMemShellPluginSetting::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool JavaMemShellPluginSetting::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string JavaMemShellPluginSetting::GetHostIp() const
{
    return m_hostIp;
}

void JavaMemShellPluginSetting::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool JavaMemShellPluginSetting::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

uint64_t JavaMemShellPluginSetting::GetJavaShellStatus() const
{
    return m_javaShellStatus;
}

void JavaMemShellPluginSetting::SetJavaShellStatus(const uint64_t& _javaShellStatus)
{
    m_javaShellStatus = _javaShellStatus;
    m_javaShellStatusHasBeenSet = true;
}

bool JavaMemShellPluginSetting::JavaShellStatusHasBeenSet() const
{
    return m_javaShellStatusHasBeenSet;
}

uint64_t JavaMemShellPluginSetting::GetException() const
{
    return m_exception;
}

void JavaMemShellPluginSetting::SetException(const uint64_t& _exception)
{
    m_exception = _exception;
    m_exceptionHasBeenSet = true;
}

bool JavaMemShellPluginSetting::ExceptionHasBeenSet() const
{
    return m_exceptionHasBeenSet;
}

string JavaMemShellPluginSetting::GetCreateTime() const
{
    return m_createTime;
}

void JavaMemShellPluginSetting::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool JavaMemShellPluginSetting::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string JavaMemShellPluginSetting::GetModifyTime() const
{
    return m_modifyTime;
}

void JavaMemShellPluginSetting::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool JavaMemShellPluginSetting::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string JavaMemShellPluginSetting::GetUuid() const
{
    return m_uuid;
}

void JavaMemShellPluginSetting::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool JavaMemShellPluginSetting::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

MachineExtraInfo JavaMemShellPluginSetting::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void JavaMemShellPluginSetting::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool JavaMemShellPluginSetting::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}


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

#include <tencentcloud/yunjing/v20180228/model/PrivilegeRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

PrivilegeRule::PrivilegeRule() :
    m_idHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_processNameHasBeenSet(false),
    m_sModeHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_isGlobalHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_hostipHasBeenSet(false)
{
}

CoreInternalOutcome PrivilegeRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeRule.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeRule.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeRule.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("SMode") && !value["SMode"].IsNull())
    {
        if (!value["SMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeRule.SMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sMode = value["SMode"].GetUint64();
        m_sModeHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeRule.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("IsGlobal") && !value["IsGlobal"].IsNull())
    {
        if (!value["IsGlobal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeRule.IsGlobal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isGlobal = value["IsGlobal"].GetUint64();
        m_isGlobalHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeRule.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeRule.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeRule.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Hostip") && !value["Hostip"].IsNull())
    {
        if (!value["Hostip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeRule.Hostip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostip = string(value["Hostip"].GetString());
        m_hostipHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrivilegeRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processName.c_str(), allocator).Move(), allocator);
    }

    if (m_sModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sMode, allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_isGlobalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGlobal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isGlobal, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
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

    if (m_hostipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hostip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostip.c_str(), allocator).Move(), allocator);
    }

}


uint64_t PrivilegeRule::GetId() const
{
    return m_id;
}

void PrivilegeRule::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool PrivilegeRule::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string PrivilegeRule::GetUuid() const
{
    return m_uuid;
}

void PrivilegeRule::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool PrivilegeRule::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string PrivilegeRule::GetProcessName() const
{
    return m_processName;
}

void PrivilegeRule::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool PrivilegeRule::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

uint64_t PrivilegeRule::GetSMode() const
{
    return m_sMode;
}

void PrivilegeRule::SetSMode(const uint64_t& _sMode)
{
    m_sMode = _sMode;
    m_sModeHasBeenSet = true;
}

bool PrivilegeRule::SModeHasBeenSet() const
{
    return m_sModeHasBeenSet;
}

string PrivilegeRule::GetOperator() const
{
    return m_operator;
}

void PrivilegeRule::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool PrivilegeRule::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

uint64_t PrivilegeRule::GetIsGlobal() const
{
    return m_isGlobal;
}

void PrivilegeRule::SetIsGlobal(const uint64_t& _isGlobal)
{
    m_isGlobal = _isGlobal;
    m_isGlobalHasBeenSet = true;
}

bool PrivilegeRule::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}

uint64_t PrivilegeRule::GetStatus() const
{
    return m_status;
}

void PrivilegeRule::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PrivilegeRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PrivilegeRule::GetCreateTime() const
{
    return m_createTime;
}

void PrivilegeRule::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PrivilegeRule::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string PrivilegeRule::GetModifyTime() const
{
    return m_modifyTime;
}

void PrivilegeRule::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool PrivilegeRule::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string PrivilegeRule::GetHostip() const
{
    return m_hostip;
}

void PrivilegeRule::SetHostip(const string& _hostip)
{
    m_hostip = _hostip;
    m_hostipHasBeenSet = true;
}

bool PrivilegeRule::HostipHasBeenSet() const
{
    return m_hostipHasBeenSet;
}


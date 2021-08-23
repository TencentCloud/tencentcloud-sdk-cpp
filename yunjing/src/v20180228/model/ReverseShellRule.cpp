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

#include <tencentcloud/yunjing/v20180228/model/ReverseShellRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

ReverseShellRule::ReverseShellRule() :
    m_idHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_processNameHasBeenSet(false),
    m_destIpHasBeenSet(false),
    m_destPortHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_isGlobalHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_hostipHasBeenSet(false)
{
}

CoreInternalOutcome ReverseShellRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRule.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRule.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRule.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("DestIp") && !value["DestIp"].IsNull())
    {
        if (!value["DestIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRule.DestIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destIp = string(value["DestIp"].GetString());
        m_destIpHasBeenSet = true;
    }

    if (value.HasMember("DestPort") && !value["DestPort"].IsNull())
    {
        if (!value["DestPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRule.DestPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destPort = string(value["DestPort"].GetString());
        m_destPortHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRule.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("IsGlobal") && !value["IsGlobal"].IsNull())
    {
        if (!value["IsGlobal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRule.IsGlobal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isGlobal = value["IsGlobal"].GetUint64();
        m_isGlobalHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRule.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRule.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRule.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Hostip") && !value["Hostip"].IsNull())
    {
        if (!value["Hostip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRule.Hostip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostip = string(value["Hostip"].GetString());
        m_hostipHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReverseShellRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_destIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destIp.c_str(), allocator).Move(), allocator);
    }

    if (m_destPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destPort.c_str(), allocator).Move(), allocator);
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


uint64_t ReverseShellRule::GetId() const
{
    return m_id;
}

void ReverseShellRule::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ReverseShellRule::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ReverseShellRule::GetUuid() const
{
    return m_uuid;
}

void ReverseShellRule::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool ReverseShellRule::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string ReverseShellRule::GetProcessName() const
{
    return m_processName;
}

void ReverseShellRule::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool ReverseShellRule::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

string ReverseShellRule::GetDestIp() const
{
    return m_destIp;
}

void ReverseShellRule::SetDestIp(const string& _destIp)
{
    m_destIp = _destIp;
    m_destIpHasBeenSet = true;
}

bool ReverseShellRule::DestIpHasBeenSet() const
{
    return m_destIpHasBeenSet;
}

string ReverseShellRule::GetDestPort() const
{
    return m_destPort;
}

void ReverseShellRule::SetDestPort(const string& _destPort)
{
    m_destPort = _destPort;
    m_destPortHasBeenSet = true;
}

bool ReverseShellRule::DestPortHasBeenSet() const
{
    return m_destPortHasBeenSet;
}

string ReverseShellRule::GetOperator() const
{
    return m_operator;
}

void ReverseShellRule::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ReverseShellRule::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

uint64_t ReverseShellRule::GetIsGlobal() const
{
    return m_isGlobal;
}

void ReverseShellRule::SetIsGlobal(const uint64_t& _isGlobal)
{
    m_isGlobal = _isGlobal;
    m_isGlobalHasBeenSet = true;
}

bool ReverseShellRule::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}

uint64_t ReverseShellRule::GetStatus() const
{
    return m_status;
}

void ReverseShellRule::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ReverseShellRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ReverseShellRule::GetCreateTime() const
{
    return m_createTime;
}

void ReverseShellRule::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ReverseShellRule::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ReverseShellRule::GetModifyTime() const
{
    return m_modifyTime;
}

void ReverseShellRule::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool ReverseShellRule::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string ReverseShellRule::GetHostip() const
{
    return m_hostip;
}

void ReverseShellRule::SetHostip(const string& _hostip)
{
    m_hostip = _hostip;
    m_hostipHasBeenSet = true;
}

bool ReverseShellRule::HostipHasBeenSet() const
{
    return m_hostipHasBeenSet;
}


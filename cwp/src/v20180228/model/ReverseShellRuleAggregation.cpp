/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cwp/v20180228/model/ReverseShellRuleAggregation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ReverseShellRuleAggregation::ReverseShellRuleAggregation() :
    m_idHasBeenSet(false),
    m_uuidHostipsHasBeenSet(false),
    m_processNameHasBeenSet(false),
    m_destIpHasBeenSet(false),
    m_destPortHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_isGlobalHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_whiteTypeHasBeenSet(false),
    m_ruleRegexpHasBeenSet(false),
    m_handleHistoryHasBeenSet(false),
    m_groupIDHasBeenSet(false),
    m_machinesNumsHasBeenSet(false)
{
}

CoreInternalOutcome ReverseShellRuleAggregation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRuleAggregation.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("UuidHostips") && !value["UuidHostips"].IsNull())
    {
        if (!value["UuidHostips"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReverseShellRuleAggregation.UuidHostips` is not array type"));

        const rapidjson::Value &tmpValue = value["UuidHostips"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UuidHostip item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_uuidHostips.push_back(item);
        }
        m_uuidHostipsHasBeenSet = true;
    }

    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRuleAggregation.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("DestIp") && !value["DestIp"].IsNull())
    {
        if (!value["DestIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRuleAggregation.DestIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destIp = string(value["DestIp"].GetString());
        m_destIpHasBeenSet = true;
    }

    if (value.HasMember("DestPort") && !value["DestPort"].IsNull())
    {
        if (!value["DestPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRuleAggregation.DestPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destPort = string(value["DestPort"].GetString());
        m_destPortHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRuleAggregation.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("IsGlobal") && !value["IsGlobal"].IsNull())
    {
        if (!value["IsGlobal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRuleAggregation.IsGlobal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isGlobal = value["IsGlobal"].GetUint64();
        m_isGlobalHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRuleAggregation.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRuleAggregation.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRuleAggregation.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("WhiteType") && !value["WhiteType"].IsNull())
    {
        if (!value["WhiteType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRuleAggregation.WhiteType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_whiteType = value["WhiteType"].GetUint64();
        m_whiteTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleRegexp") && !value["RuleRegexp"].IsNull())
    {
        if (!value["RuleRegexp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRuleAggregation.RuleRegexp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleRegexp = string(value["RuleRegexp"].GetString());
        m_ruleRegexpHasBeenSet = true;
    }

    if (value.HasMember("HandleHistory") && !value["HandleHistory"].IsNull())
    {
        if (!value["HandleHistory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRuleAggregation.HandleHistory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_handleHistory = value["HandleHistory"].GetUint64();
        m_handleHistoryHasBeenSet = true;
    }

    if (value.HasMember("GroupID") && !value["GroupID"].IsNull())
    {
        if (!value["GroupID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRuleAggregation.GroupID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupID = string(value["GroupID"].GetString());
        m_groupIDHasBeenSet = true;
    }

    if (value.HasMember("MachinesNums") && !value["MachinesNums"].IsNull())
    {
        if (!value["MachinesNums"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellRuleAggregation.MachinesNums` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machinesNums = string(value["MachinesNums"].GetString());
        m_machinesNumsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReverseShellRuleAggregation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_uuidHostipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UuidHostips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_uuidHostips.begin(); itr != m_uuidHostips.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_whiteTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_whiteType, allocator);
    }

    if (m_ruleRegexpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleRegexp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleRegexp.c_str(), allocator).Move(), allocator);
    }

    if (m_handleHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_handleHistory, allocator);
    }

    if (m_groupIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupID.c_str(), allocator).Move(), allocator);
    }

    if (m_machinesNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachinesNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machinesNums.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ReverseShellRuleAggregation::GetId() const
{
    return m_id;
}

void ReverseShellRuleAggregation::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ReverseShellRuleAggregation::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<UuidHostip> ReverseShellRuleAggregation::GetUuidHostips() const
{
    return m_uuidHostips;
}

void ReverseShellRuleAggregation::SetUuidHostips(const vector<UuidHostip>& _uuidHostips)
{
    m_uuidHostips = _uuidHostips;
    m_uuidHostipsHasBeenSet = true;
}

bool ReverseShellRuleAggregation::UuidHostipsHasBeenSet() const
{
    return m_uuidHostipsHasBeenSet;
}

string ReverseShellRuleAggregation::GetProcessName() const
{
    return m_processName;
}

void ReverseShellRuleAggregation::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool ReverseShellRuleAggregation::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

string ReverseShellRuleAggregation::GetDestIp() const
{
    return m_destIp;
}

void ReverseShellRuleAggregation::SetDestIp(const string& _destIp)
{
    m_destIp = _destIp;
    m_destIpHasBeenSet = true;
}

bool ReverseShellRuleAggregation::DestIpHasBeenSet() const
{
    return m_destIpHasBeenSet;
}

string ReverseShellRuleAggregation::GetDestPort() const
{
    return m_destPort;
}

void ReverseShellRuleAggregation::SetDestPort(const string& _destPort)
{
    m_destPort = _destPort;
    m_destPortHasBeenSet = true;
}

bool ReverseShellRuleAggregation::DestPortHasBeenSet() const
{
    return m_destPortHasBeenSet;
}

string ReverseShellRuleAggregation::GetOperator() const
{
    return m_operator;
}

void ReverseShellRuleAggregation::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ReverseShellRuleAggregation::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

uint64_t ReverseShellRuleAggregation::GetIsGlobal() const
{
    return m_isGlobal;
}

void ReverseShellRuleAggregation::SetIsGlobal(const uint64_t& _isGlobal)
{
    m_isGlobal = _isGlobal;
    m_isGlobalHasBeenSet = true;
}

bool ReverseShellRuleAggregation::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}

uint64_t ReverseShellRuleAggregation::GetStatus() const
{
    return m_status;
}

void ReverseShellRuleAggregation::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ReverseShellRuleAggregation::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ReverseShellRuleAggregation::GetCreateTime() const
{
    return m_createTime;
}

void ReverseShellRuleAggregation::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ReverseShellRuleAggregation::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ReverseShellRuleAggregation::GetModifyTime() const
{
    return m_modifyTime;
}

void ReverseShellRuleAggregation::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool ReverseShellRuleAggregation::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

uint64_t ReverseShellRuleAggregation::GetWhiteType() const
{
    return m_whiteType;
}

void ReverseShellRuleAggregation::SetWhiteType(const uint64_t& _whiteType)
{
    m_whiteType = _whiteType;
    m_whiteTypeHasBeenSet = true;
}

bool ReverseShellRuleAggregation::WhiteTypeHasBeenSet() const
{
    return m_whiteTypeHasBeenSet;
}

string ReverseShellRuleAggregation::GetRuleRegexp() const
{
    return m_ruleRegexp;
}

void ReverseShellRuleAggregation::SetRuleRegexp(const string& _ruleRegexp)
{
    m_ruleRegexp = _ruleRegexp;
    m_ruleRegexpHasBeenSet = true;
}

bool ReverseShellRuleAggregation::RuleRegexpHasBeenSet() const
{
    return m_ruleRegexpHasBeenSet;
}

uint64_t ReverseShellRuleAggregation::GetHandleHistory() const
{
    return m_handleHistory;
}

void ReverseShellRuleAggregation::SetHandleHistory(const uint64_t& _handleHistory)
{
    m_handleHistory = _handleHistory;
    m_handleHistoryHasBeenSet = true;
}

bool ReverseShellRuleAggregation::HandleHistoryHasBeenSet() const
{
    return m_handleHistoryHasBeenSet;
}

string ReverseShellRuleAggregation::GetGroupID() const
{
    return m_groupID;
}

void ReverseShellRuleAggregation::SetGroupID(const string& _groupID)
{
    m_groupID = _groupID;
    m_groupIDHasBeenSet = true;
}

bool ReverseShellRuleAggregation::GroupIDHasBeenSet() const
{
    return m_groupIDHasBeenSet;
}

string ReverseShellRuleAggregation::GetMachinesNums() const
{
    return m_machinesNums;
}

void ReverseShellRuleAggregation::SetMachinesNums(const string& _machinesNums)
{
    m_machinesNums = _machinesNums;
    m_machinesNumsHasBeenSet = true;
}

bool ReverseShellRuleAggregation::MachinesNumsHasBeenSet() const
{
    return m_machinesNumsHasBeenSet;
}


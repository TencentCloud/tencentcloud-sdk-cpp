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

#include <tencentcloud/fwm/v20250611/model/StrategyResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

StrategyResp::StrategyResp() :
    m_strategyIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_ruleCountHasBeenSet(false),
    m_ruleStatusHasBeenSet(false),
    m_receiveAccountHasBeenSet(false),
    m_sequenceHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_errorTypeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_createByHasBeenSet(false),
    m_updateByHasBeenSet(false),
    m_execAreaHasBeenSet(false),
    m_createNameHasBeenSet(false),
    m_updateNameHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome StrategyResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StrategyId") && !value["StrategyId"].IsNull())
    {
        if (!value["StrategyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyResp.StrategyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyId = string(value["StrategyId"].GetString());
        m_strategyIdHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyResp.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyResp.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("RuleCount") && !value["RuleCount"].IsNull())
    {
        if (!value["RuleCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyResp.RuleCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleCount = value["RuleCount"].GetInt64();
        m_ruleCountHasBeenSet = true;
    }

    if (value.HasMember("RuleStatus") && !value["RuleStatus"].IsNull())
    {
        if (!value["RuleStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyResp.RuleStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleStatus = value["RuleStatus"].GetInt64();
        m_ruleStatusHasBeenSet = true;
    }

    if (value.HasMember("ReceiveAccount") && !value["ReceiveAccount"].IsNull())
    {
        if (!value["ReceiveAccount"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StrategyResp.ReceiveAccount` is not array type"));

        const rapidjson::Value &tmpValue = value["ReceiveAccount"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReceiveAccount item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_receiveAccount.push_back(item);
        }
        m_receiveAccountHasBeenSet = true;
    }

    if (value.HasMember("Sequence") && !value["Sequence"].IsNull())
    {
        if (!value["Sequence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyResp.Sequence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sequence = value["Sequence"].GetInt64();
        m_sequenceHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyResp.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }

    if (value.HasMember("ErrorType") && !value["ErrorType"].IsNull())
    {
        if (!value["ErrorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyResp.ErrorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorType = string(value["ErrorType"].GetString());
        m_errorTypeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyResp.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateBy") && !value["CreateBy"].IsNull())
    {
        if (!value["CreateBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyResp.CreateBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createBy = string(value["CreateBy"].GetString());
        m_createByHasBeenSet = true;
    }

    if (value.HasMember("UpdateBy") && !value["UpdateBy"].IsNull())
    {
        if (!value["UpdateBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyResp.UpdateBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateBy = string(value["UpdateBy"].GetString());
        m_updateByHasBeenSet = true;
    }

    if (value.HasMember("ExecArea") && !value["ExecArea"].IsNull())
    {
        if (!value["ExecArea"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyResp.ExecArea` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_execArea = string(value["ExecArea"].GetString());
        m_execAreaHasBeenSet = true;
    }

    if (value.HasMember("CreateName") && !value["CreateName"].IsNull())
    {
        if (!value["CreateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyResp.CreateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createName = string(value["CreateName"].GetString());
        m_createNameHasBeenSet = true;
    }

    if (value.HasMember("UpdateName") && !value["UpdateName"].IsNull())
    {
        if (!value["UpdateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyResp.UpdateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateName = string(value["UpdateName"].GetString());
        m_updateNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyResp.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StrategyResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleCount, allocator);
    }

    if (m_ruleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleStatus, allocator);
    }

    if (m_receiveAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiveAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_receiveAccount.begin(); itr != m_receiveAccount.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sequenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sequence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sequence, allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_errorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorType.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createBy.c_str(), allocator).Move(), allocator);
    }

    if (m_updateByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateBy.c_str(), allocator).Move(), allocator);
    }

    if (m_execAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecArea";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_execArea.c_str(), allocator).Move(), allocator);
    }

    if (m_createNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createName.c_str(), allocator).Move(), allocator);
    }

    if (m_updateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string StrategyResp::GetStrategyId() const
{
    return m_strategyId;
}

void StrategyResp::SetStrategyId(const string& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool StrategyResp::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

string StrategyResp::GetGroupId() const
{
    return m_groupId;
}

void StrategyResp::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool StrategyResp::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string StrategyResp::GetGroupName() const
{
    return m_groupName;
}

void StrategyResp::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool StrategyResp::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t StrategyResp::GetRuleCount() const
{
    return m_ruleCount;
}

void StrategyResp::SetRuleCount(const int64_t& _ruleCount)
{
    m_ruleCount = _ruleCount;
    m_ruleCountHasBeenSet = true;
}

bool StrategyResp::RuleCountHasBeenSet() const
{
    return m_ruleCountHasBeenSet;
}

int64_t StrategyResp::GetRuleStatus() const
{
    return m_ruleStatus;
}

void StrategyResp::SetRuleStatus(const int64_t& _ruleStatus)
{
    m_ruleStatus = _ruleStatus;
    m_ruleStatusHasBeenSet = true;
}

bool StrategyResp::RuleStatusHasBeenSet() const
{
    return m_ruleStatusHasBeenSet;
}

vector<ReceiveAccount> StrategyResp::GetReceiveAccount() const
{
    return m_receiveAccount;
}

void StrategyResp::SetReceiveAccount(const vector<ReceiveAccount>& _receiveAccount)
{
    m_receiveAccount = _receiveAccount;
    m_receiveAccountHasBeenSet = true;
}

bool StrategyResp::ReceiveAccountHasBeenSet() const
{
    return m_receiveAccountHasBeenSet;
}

int64_t StrategyResp::GetSequence() const
{
    return m_sequence;
}

void StrategyResp::SetSequence(const int64_t& _sequence)
{
    m_sequence = _sequence;
    m_sequenceHasBeenSet = true;
}

bool StrategyResp::SequenceHasBeenSet() const
{
    return m_sequenceHasBeenSet;
}

string StrategyResp::GetErrMsg() const
{
    return m_errMsg;
}

void StrategyResp::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool StrategyResp::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

string StrategyResp::GetErrorType() const
{
    return m_errorType;
}

void StrategyResp::SetErrorType(const string& _errorType)
{
    m_errorType = _errorType;
    m_errorTypeHasBeenSet = true;
}

bool StrategyResp::ErrorTypeHasBeenSet() const
{
    return m_errorTypeHasBeenSet;
}

string StrategyResp::GetUpdateTime() const
{
    return m_updateTime;
}

void StrategyResp::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool StrategyResp::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string StrategyResp::GetCreateBy() const
{
    return m_createBy;
}

void StrategyResp::SetCreateBy(const string& _createBy)
{
    m_createBy = _createBy;
    m_createByHasBeenSet = true;
}

bool StrategyResp::CreateByHasBeenSet() const
{
    return m_createByHasBeenSet;
}

string StrategyResp::GetUpdateBy() const
{
    return m_updateBy;
}

void StrategyResp::SetUpdateBy(const string& _updateBy)
{
    m_updateBy = _updateBy;
    m_updateByHasBeenSet = true;
}

bool StrategyResp::UpdateByHasBeenSet() const
{
    return m_updateByHasBeenSet;
}

string StrategyResp::GetExecArea() const
{
    return m_execArea;
}

void StrategyResp::SetExecArea(const string& _execArea)
{
    m_execArea = _execArea;
    m_execAreaHasBeenSet = true;
}

bool StrategyResp::ExecAreaHasBeenSet() const
{
    return m_execAreaHasBeenSet;
}

string StrategyResp::GetCreateName() const
{
    return m_createName;
}

void StrategyResp::SetCreateName(const string& _createName)
{
    m_createName = _createName;
    m_createNameHasBeenSet = true;
}

bool StrategyResp::CreateNameHasBeenSet() const
{
    return m_createNameHasBeenSet;
}

string StrategyResp::GetUpdateName() const
{
    return m_updateName;
}

void StrategyResp::SetUpdateName(const string& _updateName)
{
    m_updateName = _updateName;
    m_updateNameHasBeenSet = true;
}

bool StrategyResp::UpdateNameHasBeenSet() const
{
    return m_updateNameHasBeenSet;
}

string StrategyResp::GetCreateTime() const
{
    return m_createTime;
}

void StrategyResp::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool StrategyResp::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}


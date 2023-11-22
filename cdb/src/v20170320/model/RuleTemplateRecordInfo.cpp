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

#include <tencentcloud/cdb/v20170320/model/RuleTemplateRecordInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

RuleTemplateRecordInfo::RuleTemplateRecordInfo() :
    m_taskIdHasBeenSet(false),
    m_modifyBeforeInfoHasBeenSet(false),
    m_modifyAfterInfoHasBeenSet(false),
    m_affectedInstancesHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome RuleTemplateRecordInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplateRecordInfo.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("ModifyBeforeInfo") && !value["ModifyBeforeInfo"].IsNull())
    {
        if (!value["ModifyBeforeInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplateRecordInfo.ModifyBeforeInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modifyBeforeInfo.Deserialize(value["ModifyBeforeInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modifyBeforeInfoHasBeenSet = true;
    }

    if (value.HasMember("ModifyAfterInfo") && !value["ModifyAfterInfo"].IsNull())
    {
        if (!value["ModifyAfterInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplateRecordInfo.ModifyAfterInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modifyAfterInfo.Deserialize(value["ModifyAfterInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modifyAfterInfoHasBeenSet = true;
    }

    if (value.HasMember("AffectedInstances") && !value["AffectedInstances"].IsNull())
    {
        if (!value["AffectedInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleTemplateRecordInfo.AffectedInstances` is not array type"));

        const rapidjson::Value &tmpValue = value["AffectedInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_affectedInstances.push_back((*itr).GetString());
        }
        m_affectedInstancesHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplateRecordInfo.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplateRecordInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleTemplateRecordInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_modifyBeforeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyBeforeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modifyBeforeInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modifyAfterInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyAfterInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modifyAfterInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_affectedInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_affectedInstances.begin(); itr != m_affectedInstances.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t RuleTemplateRecordInfo::GetTaskId() const
{
    return m_taskId;
}

void RuleTemplateRecordInfo::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool RuleTemplateRecordInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

RuleTemplateInfo RuleTemplateRecordInfo::GetModifyBeforeInfo() const
{
    return m_modifyBeforeInfo;
}

void RuleTemplateRecordInfo::SetModifyBeforeInfo(const RuleTemplateInfo& _modifyBeforeInfo)
{
    m_modifyBeforeInfo = _modifyBeforeInfo;
    m_modifyBeforeInfoHasBeenSet = true;
}

bool RuleTemplateRecordInfo::ModifyBeforeInfoHasBeenSet() const
{
    return m_modifyBeforeInfoHasBeenSet;
}

RuleTemplateInfo RuleTemplateRecordInfo::GetModifyAfterInfo() const
{
    return m_modifyAfterInfo;
}

void RuleTemplateRecordInfo::SetModifyAfterInfo(const RuleTemplateInfo& _modifyAfterInfo)
{
    m_modifyAfterInfo = _modifyAfterInfo;
    m_modifyAfterInfoHasBeenSet = true;
}

bool RuleTemplateRecordInfo::ModifyAfterInfoHasBeenSet() const
{
    return m_modifyAfterInfoHasBeenSet;
}

vector<string> RuleTemplateRecordInfo::GetAffectedInstances() const
{
    return m_affectedInstances;
}

void RuleTemplateRecordInfo::SetAffectedInstances(const vector<string>& _affectedInstances)
{
    m_affectedInstances = _affectedInstances;
    m_affectedInstancesHasBeenSet = true;
}

bool RuleTemplateRecordInfo::AffectedInstancesHasBeenSet() const
{
    return m_affectedInstancesHasBeenSet;
}

string RuleTemplateRecordInfo::GetOperator() const
{
    return m_operator;
}

void RuleTemplateRecordInfo::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool RuleTemplateRecordInfo::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string RuleTemplateRecordInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void RuleTemplateRecordInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RuleTemplateRecordInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}


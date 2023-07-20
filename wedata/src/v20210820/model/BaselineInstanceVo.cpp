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

#include <tencentcloud/wedata/v20210820/model/BaselineInstanceVo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BaselineInstanceVo::BaselineInstanceVo() :
    m_idHasBeenSet(false),
    m_baselineIdHasBeenSet(false),
    m_baselineNameHasBeenSet(false),
    m_baselineTypeHasBeenSet(false),
    m_baselineDataTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_estimatedEndTimeHasBeenSet(false),
    m_baselineInstanceStatusHasBeenSet(false),
    m_inChargeUinHasBeenSet(false),
    m_inChargeNameHasBeenSet(false),
    m_warningMarginHasBeenSet(false),
    m_promiseTimeHasBeenSet(false),
    m_alarmLevelHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_isReadyHasBeenSet(false),
    m_shardKeyHasBeenSet(false),
    m_exceptionalTaskInstancesHasBeenSet(false),
    m_taskInstancesHasBeenSet(false),
    m_criticalStartTimeHasBeenSet(false),
    m_criticalTaskInstancesHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_baselineTaskInstancesHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_userUinHasBeenSet(false)
{
}

CoreInternalOutcome BaselineInstanceVo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("BaselineId") && !value["BaselineId"].IsNull())
    {
        if (!value["BaselineId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.BaselineId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_baselineId = value["BaselineId"].GetInt64();
        m_baselineIdHasBeenSet = true;
    }

    if (value.HasMember("BaselineName") && !value["BaselineName"].IsNull())
    {
        if (!value["BaselineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.BaselineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baselineName = string(value["BaselineName"].GetString());
        m_baselineNameHasBeenSet = true;
    }

    if (value.HasMember("BaselineType") && !value["BaselineType"].IsNull())
    {
        if (!value["BaselineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.BaselineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baselineType = string(value["BaselineType"].GetString());
        m_baselineTypeHasBeenSet = true;
    }

    if (value.HasMember("BaselineDataTime") && !value["BaselineDataTime"].IsNull())
    {
        if (!value["BaselineDataTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.BaselineDataTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baselineDataTime = string(value["BaselineDataTime"].GetString());
        m_baselineDataTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("EstimatedEndTime") && !value["EstimatedEndTime"].IsNull())
    {
        if (!value["EstimatedEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.EstimatedEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_estimatedEndTime = string(value["EstimatedEndTime"].GetString());
        m_estimatedEndTimeHasBeenSet = true;
    }

    if (value.HasMember("BaselineInstanceStatus") && !value["BaselineInstanceStatus"].IsNull())
    {
        if (!value["BaselineInstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.BaselineInstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baselineInstanceStatus = string(value["BaselineInstanceStatus"].GetString());
        m_baselineInstanceStatusHasBeenSet = true;
    }

    if (value.HasMember("InChargeUin") && !value["InChargeUin"].IsNull())
    {
        if (!value["InChargeUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.InChargeUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inChargeUin = string(value["InChargeUin"].GetString());
        m_inChargeUinHasBeenSet = true;
    }

    if (value.HasMember("InChargeName") && !value["InChargeName"].IsNull())
    {
        if (!value["InChargeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.InChargeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inChargeName = string(value["InChargeName"].GetString());
        m_inChargeNameHasBeenSet = true;
    }

    if (value.HasMember("WarningMargin") && !value["WarningMargin"].IsNull())
    {
        if (!value["WarningMargin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.WarningMargin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_warningMargin = value["WarningMargin"].GetInt64();
        m_warningMarginHasBeenSet = true;
    }

    if (value.HasMember("PromiseTime") && !value["PromiseTime"].IsNull())
    {
        if (!value["PromiseTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.PromiseTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promiseTime = string(value["PromiseTime"].GetString());
        m_promiseTimeHasBeenSet = true;
    }

    if (value.HasMember("AlarmLevel") && !value["AlarmLevel"].IsNull())
    {
        if (!value["AlarmLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.AlarmLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmLevel = string(value["AlarmLevel"].GetString());
        m_alarmLevelHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("IsReady") && !value["IsReady"].IsNull())
    {
        if (!value["IsReady"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.IsReady` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isReady = string(value["IsReady"].GetString());
        m_isReadyHasBeenSet = true;
    }

    if (value.HasMember("ShardKey") && !value["ShardKey"].IsNull())
    {
        if (!value["ShardKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.ShardKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardKey = string(value["ShardKey"].GetString());
        m_shardKeyHasBeenSet = true;
    }

    if (value.HasMember("ExceptionalTaskInstances") && !value["ExceptionalTaskInstances"].IsNull())
    {
        if (!value["ExceptionalTaskInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.ExceptionalTaskInstances` is not array type"));

        const rapidjson::Value &tmpValue = value["ExceptionalTaskInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BaselineTaskInstanceDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_exceptionalTaskInstances.push_back(item);
        }
        m_exceptionalTaskInstancesHasBeenSet = true;
    }

    if (value.HasMember("TaskInstances") && !value["TaskInstances"].IsNull())
    {
        if (!value["TaskInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.TaskInstances` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BaselineTaskInstanceDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskInstances.push_back(item);
        }
        m_taskInstancesHasBeenSet = true;
    }

    if (value.HasMember("CriticalStartTime") && !value["CriticalStartTime"].IsNull())
    {
        if (!value["CriticalStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.CriticalStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_criticalStartTime = string(value["CriticalStartTime"].GetString());
        m_criticalStartTimeHasBeenSet = true;
    }

    if (value.HasMember("CriticalTaskInstances") && !value["CriticalTaskInstances"].IsNull())
    {
        if (!value["CriticalTaskInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.CriticalTaskInstances` is not array type"));

        const rapidjson::Value &tmpValue = value["CriticalTaskInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BaselineTaskInstanceDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_criticalTaskInstances.push_back(item);
        }
        m_criticalTaskInstancesHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("BaselineTaskInstances") && !value["BaselineTaskInstances"].IsNull())
    {
        if (!value["BaselineTaskInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.BaselineTaskInstances` is not array type"));

        const rapidjson::Value &tmpValue = value["BaselineTaskInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BaselineTaskInstanceDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_baselineTaskInstances.push_back(item);
        }
        m_baselineTaskInstancesHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("UserUin") && !value["UserUin"].IsNull())
    {
        if (!value["UserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInstanceVo.UserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userUin = string(value["UserUin"].GetString());
        m_userUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineInstanceVo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_baselineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baselineId, allocator);
    }

    if (m_baselineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_baselineName.c_str(), allocator).Move(), allocator);
    }

    if (m_baselineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_baselineType.c_str(), allocator).Move(), allocator);
    }

    if (m_baselineDataTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineDataTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_baselineDataTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_estimatedEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EstimatedEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_estimatedEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_baselineInstanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineInstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_baselineInstanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InChargeUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inChargeUin.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InChargeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inChargeName.c_str(), allocator).Move(), allocator);
    }

    if (m_warningMarginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarningMargin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_warningMargin, allocator);
    }

    if (m_promiseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromiseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promiseTime.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_isReadyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsReady";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isReady.c_str(), allocator).Move(), allocator);
    }

    if (m_shardKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shardKey.c_str(), allocator).Move(), allocator);
    }

    if (m_exceptionalTaskInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptionalTaskInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_exceptionalTaskInstances.begin(); itr != m_exceptionalTaskInstances.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskInstances.begin(); itr != m_taskInstances.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_criticalStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_criticalStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_criticalTaskInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalTaskInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_criticalTaskInstances.begin(); itr != m_criticalTaskInstances.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_baselineTaskInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineTaskInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_baselineTaskInstances.begin(); itr != m_baselineTaskInstances.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_userUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userUin.c_str(), allocator).Move(), allocator);
    }

}


int64_t BaselineInstanceVo::GetId() const
{
    return m_id;
}

void BaselineInstanceVo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BaselineInstanceVo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t BaselineInstanceVo::GetBaselineId() const
{
    return m_baselineId;
}

void BaselineInstanceVo::SetBaselineId(const int64_t& _baselineId)
{
    m_baselineId = _baselineId;
    m_baselineIdHasBeenSet = true;
}

bool BaselineInstanceVo::BaselineIdHasBeenSet() const
{
    return m_baselineIdHasBeenSet;
}

string BaselineInstanceVo::GetBaselineName() const
{
    return m_baselineName;
}

void BaselineInstanceVo::SetBaselineName(const string& _baselineName)
{
    m_baselineName = _baselineName;
    m_baselineNameHasBeenSet = true;
}

bool BaselineInstanceVo::BaselineNameHasBeenSet() const
{
    return m_baselineNameHasBeenSet;
}

string BaselineInstanceVo::GetBaselineType() const
{
    return m_baselineType;
}

void BaselineInstanceVo::SetBaselineType(const string& _baselineType)
{
    m_baselineType = _baselineType;
    m_baselineTypeHasBeenSet = true;
}

bool BaselineInstanceVo::BaselineTypeHasBeenSet() const
{
    return m_baselineTypeHasBeenSet;
}

string BaselineInstanceVo::GetBaselineDataTime() const
{
    return m_baselineDataTime;
}

void BaselineInstanceVo::SetBaselineDataTime(const string& _baselineDataTime)
{
    m_baselineDataTime = _baselineDataTime;
    m_baselineDataTimeHasBeenSet = true;
}

bool BaselineInstanceVo::BaselineDataTimeHasBeenSet() const
{
    return m_baselineDataTimeHasBeenSet;
}

string BaselineInstanceVo::GetCreateTime() const
{
    return m_createTime;
}

void BaselineInstanceVo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BaselineInstanceVo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BaselineInstanceVo::GetEstimatedEndTime() const
{
    return m_estimatedEndTime;
}

void BaselineInstanceVo::SetEstimatedEndTime(const string& _estimatedEndTime)
{
    m_estimatedEndTime = _estimatedEndTime;
    m_estimatedEndTimeHasBeenSet = true;
}

bool BaselineInstanceVo::EstimatedEndTimeHasBeenSet() const
{
    return m_estimatedEndTimeHasBeenSet;
}

string BaselineInstanceVo::GetBaselineInstanceStatus() const
{
    return m_baselineInstanceStatus;
}

void BaselineInstanceVo::SetBaselineInstanceStatus(const string& _baselineInstanceStatus)
{
    m_baselineInstanceStatus = _baselineInstanceStatus;
    m_baselineInstanceStatusHasBeenSet = true;
}

bool BaselineInstanceVo::BaselineInstanceStatusHasBeenSet() const
{
    return m_baselineInstanceStatusHasBeenSet;
}

string BaselineInstanceVo::GetInChargeUin() const
{
    return m_inChargeUin;
}

void BaselineInstanceVo::SetInChargeUin(const string& _inChargeUin)
{
    m_inChargeUin = _inChargeUin;
    m_inChargeUinHasBeenSet = true;
}

bool BaselineInstanceVo::InChargeUinHasBeenSet() const
{
    return m_inChargeUinHasBeenSet;
}

string BaselineInstanceVo::GetInChargeName() const
{
    return m_inChargeName;
}

void BaselineInstanceVo::SetInChargeName(const string& _inChargeName)
{
    m_inChargeName = _inChargeName;
    m_inChargeNameHasBeenSet = true;
}

bool BaselineInstanceVo::InChargeNameHasBeenSet() const
{
    return m_inChargeNameHasBeenSet;
}

int64_t BaselineInstanceVo::GetWarningMargin() const
{
    return m_warningMargin;
}

void BaselineInstanceVo::SetWarningMargin(const int64_t& _warningMargin)
{
    m_warningMargin = _warningMargin;
    m_warningMarginHasBeenSet = true;
}

bool BaselineInstanceVo::WarningMarginHasBeenSet() const
{
    return m_warningMarginHasBeenSet;
}

string BaselineInstanceVo::GetPromiseTime() const
{
    return m_promiseTime;
}

void BaselineInstanceVo::SetPromiseTime(const string& _promiseTime)
{
    m_promiseTime = _promiseTime;
    m_promiseTimeHasBeenSet = true;
}

bool BaselineInstanceVo::PromiseTimeHasBeenSet() const
{
    return m_promiseTimeHasBeenSet;
}

string BaselineInstanceVo::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void BaselineInstanceVo::SetAlarmLevel(const string& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool BaselineInstanceVo::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

string BaselineInstanceVo::GetProjectId() const
{
    return m_projectId;
}

void BaselineInstanceVo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool BaselineInstanceVo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string BaselineInstanceVo::GetIsReady() const
{
    return m_isReady;
}

void BaselineInstanceVo::SetIsReady(const string& _isReady)
{
    m_isReady = _isReady;
    m_isReadyHasBeenSet = true;
}

bool BaselineInstanceVo::IsReadyHasBeenSet() const
{
    return m_isReadyHasBeenSet;
}

string BaselineInstanceVo::GetShardKey() const
{
    return m_shardKey;
}

void BaselineInstanceVo::SetShardKey(const string& _shardKey)
{
    m_shardKey = _shardKey;
    m_shardKeyHasBeenSet = true;
}

bool BaselineInstanceVo::ShardKeyHasBeenSet() const
{
    return m_shardKeyHasBeenSet;
}

vector<BaselineTaskInstanceDto> BaselineInstanceVo::GetExceptionalTaskInstances() const
{
    return m_exceptionalTaskInstances;
}

void BaselineInstanceVo::SetExceptionalTaskInstances(const vector<BaselineTaskInstanceDto>& _exceptionalTaskInstances)
{
    m_exceptionalTaskInstances = _exceptionalTaskInstances;
    m_exceptionalTaskInstancesHasBeenSet = true;
}

bool BaselineInstanceVo::ExceptionalTaskInstancesHasBeenSet() const
{
    return m_exceptionalTaskInstancesHasBeenSet;
}

vector<BaselineTaskInstanceDto> BaselineInstanceVo::GetTaskInstances() const
{
    return m_taskInstances;
}

void BaselineInstanceVo::SetTaskInstances(const vector<BaselineTaskInstanceDto>& _taskInstances)
{
    m_taskInstances = _taskInstances;
    m_taskInstancesHasBeenSet = true;
}

bool BaselineInstanceVo::TaskInstancesHasBeenSet() const
{
    return m_taskInstancesHasBeenSet;
}

string BaselineInstanceVo::GetCriticalStartTime() const
{
    return m_criticalStartTime;
}

void BaselineInstanceVo::SetCriticalStartTime(const string& _criticalStartTime)
{
    m_criticalStartTime = _criticalStartTime;
    m_criticalStartTimeHasBeenSet = true;
}

bool BaselineInstanceVo::CriticalStartTimeHasBeenSet() const
{
    return m_criticalStartTimeHasBeenSet;
}

vector<BaselineTaskInstanceDto> BaselineInstanceVo::GetCriticalTaskInstances() const
{
    return m_criticalTaskInstances;
}

void BaselineInstanceVo::SetCriticalTaskInstances(const vector<BaselineTaskInstanceDto>& _criticalTaskInstances)
{
    m_criticalTaskInstances = _criticalTaskInstances;
    m_criticalTaskInstancesHasBeenSet = true;
}

bool BaselineInstanceVo::CriticalTaskInstancesHasBeenSet() const
{
    return m_criticalTaskInstancesHasBeenSet;
}

string BaselineInstanceVo::GetUpdateTime() const
{
    return m_updateTime;
}

void BaselineInstanceVo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool BaselineInstanceVo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<BaselineTaskInstanceDto> BaselineInstanceVo::GetBaselineTaskInstances() const
{
    return m_baselineTaskInstances;
}

void BaselineInstanceVo::SetBaselineTaskInstances(const vector<BaselineTaskInstanceDto>& _baselineTaskInstances)
{
    m_baselineTaskInstances = _baselineTaskInstances;
    m_baselineTaskInstancesHasBeenSet = true;
}

bool BaselineInstanceVo::BaselineTaskInstancesHasBeenSet() const
{
    return m_baselineTaskInstancesHasBeenSet;
}

string BaselineInstanceVo::GetAppId() const
{
    return m_appId;
}

void BaselineInstanceVo::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool BaselineInstanceVo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string BaselineInstanceVo::GetOwnerUin() const
{
    return m_ownerUin;
}

void BaselineInstanceVo::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool BaselineInstanceVo::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string BaselineInstanceVo::GetUserUin() const
{
    return m_userUin;
}

void BaselineInstanceVo::SetUserUin(const string& _userUin)
{
    m_userUin = _userUin;
    m_userUinHasBeenSet = true;
}

bool BaselineInstanceVo::UserUinHasBeenSet() const
{
    return m_userUinHasBeenSet;
}


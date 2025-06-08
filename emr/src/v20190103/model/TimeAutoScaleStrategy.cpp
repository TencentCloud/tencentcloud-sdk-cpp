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

#include <tencentcloud/emr/v20190103/model/TimeAutoScaleStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

TimeAutoScaleStrategy::TimeAutoScaleStrategy() :
    m_strategyNameHasBeenSet(false),
    m_intervalTimeHasBeenSet(false),
    m_scaleActionHasBeenSet(false),
    m_scaleNumHasBeenSet(false),
    m_strategyStatusHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_retryValidTimeHasBeenSet(false),
    m_repeatStrategyHasBeenSet(false),
    m_strategyIdHasBeenSet(false),
    m_graceDownFlagHasBeenSet(false),
    m_graceDownTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_configGroupAssignedHasBeenSet(false),
    m_measureMethodHasBeenSet(false),
    m_terminatePolicyHasBeenSet(false),
    m_maxUseHasBeenSet(false),
    m_softDeployInfoHasBeenSet(false),
    m_serviceNodeInfoHasBeenSet(false),
    m_compensateFlagHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_graceDownLabelHasBeenSet(false)
{
}

CoreInternalOutcome TimeAutoScaleStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StrategyName") && !value["StrategyName"].IsNull())
    {
        if (!value["StrategyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeAutoScaleStrategy.StrategyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyName = string(value["StrategyName"].GetString());
        m_strategyNameHasBeenSet = true;
    }

    if (value.HasMember("IntervalTime") && !value["IntervalTime"].IsNull())
    {
        if (!value["IntervalTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeAutoScaleStrategy.IntervalTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalTime = value["IntervalTime"].GetUint64();
        m_intervalTimeHasBeenSet = true;
    }

    if (value.HasMember("ScaleAction") && !value["ScaleAction"].IsNull())
    {
        if (!value["ScaleAction"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeAutoScaleStrategy.ScaleAction` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scaleAction = value["ScaleAction"].GetUint64();
        m_scaleActionHasBeenSet = true;
    }

    if (value.HasMember("ScaleNum") && !value["ScaleNum"].IsNull())
    {
        if (!value["ScaleNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeAutoScaleStrategy.ScaleNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scaleNum = value["ScaleNum"].GetUint64();
        m_scaleNumHasBeenSet = true;
    }

    if (value.HasMember("StrategyStatus") && !value["StrategyStatus"].IsNull())
    {
        if (!value["StrategyStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeAutoScaleStrategy.StrategyStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyStatus = value["StrategyStatus"].GetUint64();
        m_strategyStatusHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeAutoScaleStrategy.Priority` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetUint64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("RetryValidTime") && !value["RetryValidTime"].IsNull())
    {
        if (!value["RetryValidTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeAutoScaleStrategy.RetryValidTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retryValidTime = value["RetryValidTime"].GetUint64();
        m_retryValidTimeHasBeenSet = true;
    }

    if (value.HasMember("RepeatStrategy") && !value["RepeatStrategy"].IsNull())
    {
        if (!value["RepeatStrategy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TimeAutoScaleStrategy.RepeatStrategy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_repeatStrategy.Deserialize(value["RepeatStrategy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_repeatStrategyHasBeenSet = true;
    }

    if (value.HasMember("StrategyId") && !value["StrategyId"].IsNull())
    {
        if (!value["StrategyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeAutoScaleStrategy.StrategyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyId = value["StrategyId"].GetUint64();
        m_strategyIdHasBeenSet = true;
    }

    if (value.HasMember("GraceDownFlag") && !value["GraceDownFlag"].IsNull())
    {
        if (!value["GraceDownFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TimeAutoScaleStrategy.GraceDownFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_graceDownFlag = value["GraceDownFlag"].GetBool();
        m_graceDownFlagHasBeenSet = true;
    }

    if (value.HasMember("GraceDownTime") && !value["GraceDownTime"].IsNull())
    {
        if (!value["GraceDownTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeAutoScaleStrategy.GraceDownTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_graceDownTime = value["GraceDownTime"].GetInt64();
        m_graceDownTimeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TimeAutoScaleStrategy.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("ConfigGroupAssigned") && !value["ConfigGroupAssigned"].IsNull())
    {
        if (!value["ConfigGroupAssigned"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeAutoScaleStrategy.ConfigGroupAssigned` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configGroupAssigned = string(value["ConfigGroupAssigned"].GetString());
        m_configGroupAssignedHasBeenSet = true;
    }

    if (value.HasMember("MeasureMethod") && !value["MeasureMethod"].IsNull())
    {
        if (!value["MeasureMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeAutoScaleStrategy.MeasureMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_measureMethod = string(value["MeasureMethod"].GetString());
        m_measureMethodHasBeenSet = true;
    }

    if (value.HasMember("TerminatePolicy") && !value["TerminatePolicy"].IsNull())
    {
        if (!value["TerminatePolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeAutoScaleStrategy.TerminatePolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_terminatePolicy = string(value["TerminatePolicy"].GetString());
        m_terminatePolicyHasBeenSet = true;
    }

    if (value.HasMember("MaxUse") && !value["MaxUse"].IsNull())
    {
        if (!value["MaxUse"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeAutoScaleStrategy.MaxUse` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxUse = value["MaxUse"].GetInt64();
        m_maxUseHasBeenSet = true;
    }

    if (value.HasMember("SoftDeployInfo") && !value["SoftDeployInfo"].IsNull())
    {
        if (!value["SoftDeployInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TimeAutoScaleStrategy.SoftDeployInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["SoftDeployInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_softDeployInfo.push_back((*itr).GetInt64());
        }
        m_softDeployInfoHasBeenSet = true;
    }

    if (value.HasMember("ServiceNodeInfo") && !value["ServiceNodeInfo"].IsNull())
    {
        if (!value["ServiceNodeInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TimeAutoScaleStrategy.ServiceNodeInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceNodeInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_serviceNodeInfo.push_back((*itr).GetInt64());
        }
        m_serviceNodeInfoHasBeenSet = true;
    }

    if (value.HasMember("CompensateFlag") && !value["CompensateFlag"].IsNull())
    {
        if (!value["CompensateFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeAutoScaleStrategy.CompensateFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_compensateFlag = value["CompensateFlag"].GetInt64();
        m_compensateFlagHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeAutoScaleStrategy.GroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetInt64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GraceDownLabel") && !value["GraceDownLabel"].IsNull())
    {
        if (!value["GraceDownLabel"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TimeAutoScaleStrategy.GraceDownLabel` is not array type"));

        const rapidjson::Value &tmpValue = value["GraceDownLabel"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TkeLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_graceDownLabel.push_back(item);
        }
        m_graceDownLabelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimeAutoScaleStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_strategyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyName.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intervalTime, allocator);
    }

    if (m_scaleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scaleAction, allocator);
    }

    if (m_scaleNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scaleNum, allocator);
    }

    if (m_strategyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyStatus, allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_retryValidTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryValidTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryValidTime, allocator);
    }

    if (m_repeatStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepeatStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_repeatStrategy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyId, allocator);
    }

    if (m_graceDownFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GraceDownFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_graceDownFlag, allocator);
    }

    if (m_graceDownTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GraceDownTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_graceDownTime, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_configGroupAssignedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigGroupAssigned";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configGroupAssigned.c_str(), allocator).Move(), allocator);
    }

    if (m_measureMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MeasureMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_measureMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_terminatePolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerminatePolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_terminatePolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_maxUseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxUse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxUse, allocator);
    }

    if (m_softDeployInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoftDeployInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_softDeployInfo.begin(); itr != m_softDeployInfo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_serviceNodeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceNodeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_serviceNodeInfo.begin(); itr != m_serviceNodeInfo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_compensateFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompensateFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_compensateFlag, allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_graceDownLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GraceDownLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_graceDownLabel.begin(); itr != m_graceDownLabel.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TimeAutoScaleStrategy::GetStrategyName() const
{
    return m_strategyName;
}

void TimeAutoScaleStrategy::SetStrategyName(const string& _strategyName)
{
    m_strategyName = _strategyName;
    m_strategyNameHasBeenSet = true;
}

bool TimeAutoScaleStrategy::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

uint64_t TimeAutoScaleStrategy::GetIntervalTime() const
{
    return m_intervalTime;
}

void TimeAutoScaleStrategy::SetIntervalTime(const uint64_t& _intervalTime)
{
    m_intervalTime = _intervalTime;
    m_intervalTimeHasBeenSet = true;
}

bool TimeAutoScaleStrategy::IntervalTimeHasBeenSet() const
{
    return m_intervalTimeHasBeenSet;
}

uint64_t TimeAutoScaleStrategy::GetScaleAction() const
{
    return m_scaleAction;
}

void TimeAutoScaleStrategy::SetScaleAction(const uint64_t& _scaleAction)
{
    m_scaleAction = _scaleAction;
    m_scaleActionHasBeenSet = true;
}

bool TimeAutoScaleStrategy::ScaleActionHasBeenSet() const
{
    return m_scaleActionHasBeenSet;
}

uint64_t TimeAutoScaleStrategy::GetScaleNum() const
{
    return m_scaleNum;
}

void TimeAutoScaleStrategy::SetScaleNum(const uint64_t& _scaleNum)
{
    m_scaleNum = _scaleNum;
    m_scaleNumHasBeenSet = true;
}

bool TimeAutoScaleStrategy::ScaleNumHasBeenSet() const
{
    return m_scaleNumHasBeenSet;
}

uint64_t TimeAutoScaleStrategy::GetStrategyStatus() const
{
    return m_strategyStatus;
}

void TimeAutoScaleStrategy::SetStrategyStatus(const uint64_t& _strategyStatus)
{
    m_strategyStatus = _strategyStatus;
    m_strategyStatusHasBeenSet = true;
}

bool TimeAutoScaleStrategy::StrategyStatusHasBeenSet() const
{
    return m_strategyStatusHasBeenSet;
}

uint64_t TimeAutoScaleStrategy::GetPriority() const
{
    return m_priority;
}

void TimeAutoScaleStrategy::SetPriority(const uint64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool TimeAutoScaleStrategy::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

uint64_t TimeAutoScaleStrategy::GetRetryValidTime() const
{
    return m_retryValidTime;
}

void TimeAutoScaleStrategy::SetRetryValidTime(const uint64_t& _retryValidTime)
{
    m_retryValidTime = _retryValidTime;
    m_retryValidTimeHasBeenSet = true;
}

bool TimeAutoScaleStrategy::RetryValidTimeHasBeenSet() const
{
    return m_retryValidTimeHasBeenSet;
}

RepeatStrategy TimeAutoScaleStrategy::GetRepeatStrategy() const
{
    return m_repeatStrategy;
}

void TimeAutoScaleStrategy::SetRepeatStrategy(const RepeatStrategy& _repeatStrategy)
{
    m_repeatStrategy = _repeatStrategy;
    m_repeatStrategyHasBeenSet = true;
}

bool TimeAutoScaleStrategy::RepeatStrategyHasBeenSet() const
{
    return m_repeatStrategyHasBeenSet;
}

uint64_t TimeAutoScaleStrategy::GetStrategyId() const
{
    return m_strategyId;
}

void TimeAutoScaleStrategy::SetStrategyId(const uint64_t& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool TimeAutoScaleStrategy::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

bool TimeAutoScaleStrategy::GetGraceDownFlag() const
{
    return m_graceDownFlag;
}

void TimeAutoScaleStrategy::SetGraceDownFlag(const bool& _graceDownFlag)
{
    m_graceDownFlag = _graceDownFlag;
    m_graceDownFlagHasBeenSet = true;
}

bool TimeAutoScaleStrategy::GraceDownFlagHasBeenSet() const
{
    return m_graceDownFlagHasBeenSet;
}

int64_t TimeAutoScaleStrategy::GetGraceDownTime() const
{
    return m_graceDownTime;
}

void TimeAutoScaleStrategy::SetGraceDownTime(const int64_t& _graceDownTime)
{
    m_graceDownTime = _graceDownTime;
    m_graceDownTimeHasBeenSet = true;
}

bool TimeAutoScaleStrategy::GraceDownTimeHasBeenSet() const
{
    return m_graceDownTimeHasBeenSet;
}

vector<Tag> TimeAutoScaleStrategy::GetTags() const
{
    return m_tags;
}

void TimeAutoScaleStrategy::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool TimeAutoScaleStrategy::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string TimeAutoScaleStrategy::GetConfigGroupAssigned() const
{
    return m_configGroupAssigned;
}

void TimeAutoScaleStrategy::SetConfigGroupAssigned(const string& _configGroupAssigned)
{
    m_configGroupAssigned = _configGroupAssigned;
    m_configGroupAssignedHasBeenSet = true;
}

bool TimeAutoScaleStrategy::ConfigGroupAssignedHasBeenSet() const
{
    return m_configGroupAssignedHasBeenSet;
}

string TimeAutoScaleStrategy::GetMeasureMethod() const
{
    return m_measureMethod;
}

void TimeAutoScaleStrategy::SetMeasureMethod(const string& _measureMethod)
{
    m_measureMethod = _measureMethod;
    m_measureMethodHasBeenSet = true;
}

bool TimeAutoScaleStrategy::MeasureMethodHasBeenSet() const
{
    return m_measureMethodHasBeenSet;
}

string TimeAutoScaleStrategy::GetTerminatePolicy() const
{
    return m_terminatePolicy;
}

void TimeAutoScaleStrategy::SetTerminatePolicy(const string& _terminatePolicy)
{
    m_terminatePolicy = _terminatePolicy;
    m_terminatePolicyHasBeenSet = true;
}

bool TimeAutoScaleStrategy::TerminatePolicyHasBeenSet() const
{
    return m_terminatePolicyHasBeenSet;
}

int64_t TimeAutoScaleStrategy::GetMaxUse() const
{
    return m_maxUse;
}

void TimeAutoScaleStrategy::SetMaxUse(const int64_t& _maxUse)
{
    m_maxUse = _maxUse;
    m_maxUseHasBeenSet = true;
}

bool TimeAutoScaleStrategy::MaxUseHasBeenSet() const
{
    return m_maxUseHasBeenSet;
}

vector<int64_t> TimeAutoScaleStrategy::GetSoftDeployInfo() const
{
    return m_softDeployInfo;
}

void TimeAutoScaleStrategy::SetSoftDeployInfo(const vector<int64_t>& _softDeployInfo)
{
    m_softDeployInfo = _softDeployInfo;
    m_softDeployInfoHasBeenSet = true;
}

bool TimeAutoScaleStrategy::SoftDeployInfoHasBeenSet() const
{
    return m_softDeployInfoHasBeenSet;
}

vector<int64_t> TimeAutoScaleStrategy::GetServiceNodeInfo() const
{
    return m_serviceNodeInfo;
}

void TimeAutoScaleStrategy::SetServiceNodeInfo(const vector<int64_t>& _serviceNodeInfo)
{
    m_serviceNodeInfo = _serviceNodeInfo;
    m_serviceNodeInfoHasBeenSet = true;
}

bool TimeAutoScaleStrategy::ServiceNodeInfoHasBeenSet() const
{
    return m_serviceNodeInfoHasBeenSet;
}

int64_t TimeAutoScaleStrategy::GetCompensateFlag() const
{
    return m_compensateFlag;
}

void TimeAutoScaleStrategy::SetCompensateFlag(const int64_t& _compensateFlag)
{
    m_compensateFlag = _compensateFlag;
    m_compensateFlagHasBeenSet = true;
}

bool TimeAutoScaleStrategy::CompensateFlagHasBeenSet() const
{
    return m_compensateFlagHasBeenSet;
}

int64_t TimeAutoScaleStrategy::GetGroupId() const
{
    return m_groupId;
}

void TimeAutoScaleStrategy::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool TimeAutoScaleStrategy::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

vector<TkeLabel> TimeAutoScaleStrategy::GetGraceDownLabel() const
{
    return m_graceDownLabel;
}

void TimeAutoScaleStrategy::SetGraceDownLabel(const vector<TkeLabel>& _graceDownLabel)
{
    m_graceDownLabel = _graceDownLabel;
    m_graceDownLabelHasBeenSet = true;
}

bool TimeAutoScaleStrategy::GraceDownLabelHasBeenSet() const
{
    return m_graceDownLabelHasBeenSet;
}


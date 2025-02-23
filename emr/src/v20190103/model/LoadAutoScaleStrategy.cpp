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

#include <tencentcloud/emr/v20190103/model/LoadAutoScaleStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

LoadAutoScaleStrategy::LoadAutoScaleStrategy() :
    m_strategyIdHasBeenSet(false),
    m_strategyNameHasBeenSet(false),
    m_calmDownTimeHasBeenSet(false),
    m_scaleActionHasBeenSet(false),
    m_scaleNumHasBeenSet(false),
    m_processMethodHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_strategyStatusHasBeenSet(false),
    m_yarnNodeLabelHasBeenSet(false),
    m_periodValidHasBeenSet(false),
    m_graceDownFlagHasBeenSet(false),
    m_graceDownTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_configGroupAssignedHasBeenSet(false),
    m_measureMethodHasBeenSet(false),
    m_softDeployDescHasBeenSet(false),
    m_serviceNodeDescHasBeenSet(false),
    m_serviceNodeInfoHasBeenSet(false),
    m_softDeployInfoHasBeenSet(false),
    m_loadMetricsConditionsHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_softHasBeenSet(false)
{
}

CoreInternalOutcome LoadAutoScaleStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StrategyId") && !value["StrategyId"].IsNull())
    {
        if (!value["StrategyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadAutoScaleStrategy.StrategyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyId = value["StrategyId"].GetInt64();
        m_strategyIdHasBeenSet = true;
    }

    if (value.HasMember("StrategyName") && !value["StrategyName"].IsNull())
    {
        if (!value["StrategyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadAutoScaleStrategy.StrategyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyName = string(value["StrategyName"].GetString());
        m_strategyNameHasBeenSet = true;
    }

    if (value.HasMember("CalmDownTime") && !value["CalmDownTime"].IsNull())
    {
        if (!value["CalmDownTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadAutoScaleStrategy.CalmDownTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_calmDownTime = value["CalmDownTime"].GetInt64();
        m_calmDownTimeHasBeenSet = true;
    }

    if (value.HasMember("ScaleAction") && !value["ScaleAction"].IsNull())
    {
        if (!value["ScaleAction"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadAutoScaleStrategy.ScaleAction` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scaleAction = value["ScaleAction"].GetInt64();
        m_scaleActionHasBeenSet = true;
    }

    if (value.HasMember("ScaleNum") && !value["ScaleNum"].IsNull())
    {
        if (!value["ScaleNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadAutoScaleStrategy.ScaleNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scaleNum = value["ScaleNum"].GetInt64();
        m_scaleNumHasBeenSet = true;
    }

    if (value.HasMember("ProcessMethod") && !value["ProcessMethod"].IsNull())
    {
        if (!value["ProcessMethod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadAutoScaleStrategy.ProcessMethod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_processMethod = value["ProcessMethod"].GetInt64();
        m_processMethodHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadAutoScaleStrategy.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("StrategyStatus") && !value["StrategyStatus"].IsNull())
    {
        if (!value["StrategyStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadAutoScaleStrategy.StrategyStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyStatus = value["StrategyStatus"].GetInt64();
        m_strategyStatusHasBeenSet = true;
    }

    if (value.HasMember("YarnNodeLabel") && !value["YarnNodeLabel"].IsNull())
    {
        if (!value["YarnNodeLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadAutoScaleStrategy.YarnNodeLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yarnNodeLabel = string(value["YarnNodeLabel"].GetString());
        m_yarnNodeLabelHasBeenSet = true;
    }

    if (value.HasMember("PeriodValid") && !value["PeriodValid"].IsNull())
    {
        if (!value["PeriodValid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadAutoScaleStrategy.PeriodValid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodValid = string(value["PeriodValid"].GetString());
        m_periodValidHasBeenSet = true;
    }

    if (value.HasMember("GraceDownFlag") && !value["GraceDownFlag"].IsNull())
    {
        if (!value["GraceDownFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LoadAutoScaleStrategy.GraceDownFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_graceDownFlag = value["GraceDownFlag"].GetBool();
        m_graceDownFlagHasBeenSet = true;
    }

    if (value.HasMember("GraceDownTime") && !value["GraceDownTime"].IsNull())
    {
        if (!value["GraceDownTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadAutoScaleStrategy.GraceDownTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_graceDownTime = value["GraceDownTime"].GetInt64();
        m_graceDownTimeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadAutoScaleStrategy.Tags` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `LoadAutoScaleStrategy.ConfigGroupAssigned` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configGroupAssigned = string(value["ConfigGroupAssigned"].GetString());
        m_configGroupAssignedHasBeenSet = true;
    }

    if (value.HasMember("MeasureMethod") && !value["MeasureMethod"].IsNull())
    {
        if (!value["MeasureMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadAutoScaleStrategy.MeasureMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_measureMethod = string(value["MeasureMethod"].GetString());
        m_measureMethodHasBeenSet = true;
    }

    if (value.HasMember("SoftDeployDesc") && !value["SoftDeployDesc"].IsNull())
    {
        if (!value["SoftDeployDesc"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadAutoScaleStrategy.SoftDeployDesc` is not array type"));

        const rapidjson::Value &tmpValue = value["SoftDeployDesc"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_softDeployDesc.push_back((*itr).GetString());
        }
        m_softDeployDescHasBeenSet = true;
    }

    if (value.HasMember("ServiceNodeDesc") && !value["ServiceNodeDesc"].IsNull())
    {
        if (!value["ServiceNodeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadAutoScaleStrategy.ServiceNodeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceNodeDesc = string(value["ServiceNodeDesc"].GetString());
        m_serviceNodeDescHasBeenSet = true;
    }

    if (value.HasMember("ServiceNodeInfo") && !value["ServiceNodeInfo"].IsNull())
    {
        if (!value["ServiceNodeInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadAutoScaleStrategy.ServiceNodeInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceNodeInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_serviceNodeInfo.push_back((*itr).GetInt64());
        }
        m_serviceNodeInfoHasBeenSet = true;
    }

    if (value.HasMember("SoftDeployInfo") && !value["SoftDeployInfo"].IsNull())
    {
        if (!value["SoftDeployInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadAutoScaleStrategy.SoftDeployInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["SoftDeployInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_softDeployInfo.push_back((*itr).GetInt64());
        }
        m_softDeployInfoHasBeenSet = true;
    }

    if (value.HasMember("LoadMetricsConditions") && !value["LoadMetricsConditions"].IsNull())
    {
        if (!value["LoadMetricsConditions"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LoadAutoScaleStrategy.LoadMetricsConditions` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_loadMetricsConditions.Deserialize(value["LoadMetricsConditions"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_loadMetricsConditionsHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadAutoScaleStrategy.GroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetInt64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("Soft") && !value["Soft"].IsNull())
    {
        if (!value["Soft"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadAutoScaleStrategy.Soft` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_soft = string(value["Soft"].GetString());
        m_softHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoadAutoScaleStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyId, allocator);
    }

    if (m_strategyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyName.c_str(), allocator).Move(), allocator);
    }

    if (m_calmDownTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalmDownTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_calmDownTime, allocator);
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

    if (m_processMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processMethod, allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_strategyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyStatus, allocator);
    }

    if (m_yarnNodeLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YarnNodeLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_yarnNodeLabel.c_str(), allocator).Move(), allocator);
    }

    if (m_periodValidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodValid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_periodValid.c_str(), allocator).Move(), allocator);
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

    if (m_softDeployDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoftDeployDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_softDeployDesc.begin(); itr != m_softDeployDesc.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_serviceNodeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceNodeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceNodeDesc.c_str(), allocator).Move(), allocator);
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

    if (m_loadMetricsConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadMetricsConditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loadMetricsConditions.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_softHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Soft";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_soft.c_str(), allocator).Move(), allocator);
    }

}


int64_t LoadAutoScaleStrategy::GetStrategyId() const
{
    return m_strategyId;
}

void LoadAutoScaleStrategy::SetStrategyId(const int64_t& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool LoadAutoScaleStrategy::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

string LoadAutoScaleStrategy::GetStrategyName() const
{
    return m_strategyName;
}

void LoadAutoScaleStrategy::SetStrategyName(const string& _strategyName)
{
    m_strategyName = _strategyName;
    m_strategyNameHasBeenSet = true;
}

bool LoadAutoScaleStrategy::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

int64_t LoadAutoScaleStrategy::GetCalmDownTime() const
{
    return m_calmDownTime;
}

void LoadAutoScaleStrategy::SetCalmDownTime(const int64_t& _calmDownTime)
{
    m_calmDownTime = _calmDownTime;
    m_calmDownTimeHasBeenSet = true;
}

bool LoadAutoScaleStrategy::CalmDownTimeHasBeenSet() const
{
    return m_calmDownTimeHasBeenSet;
}

int64_t LoadAutoScaleStrategy::GetScaleAction() const
{
    return m_scaleAction;
}

void LoadAutoScaleStrategy::SetScaleAction(const int64_t& _scaleAction)
{
    m_scaleAction = _scaleAction;
    m_scaleActionHasBeenSet = true;
}

bool LoadAutoScaleStrategy::ScaleActionHasBeenSet() const
{
    return m_scaleActionHasBeenSet;
}

int64_t LoadAutoScaleStrategy::GetScaleNum() const
{
    return m_scaleNum;
}

void LoadAutoScaleStrategy::SetScaleNum(const int64_t& _scaleNum)
{
    m_scaleNum = _scaleNum;
    m_scaleNumHasBeenSet = true;
}

bool LoadAutoScaleStrategy::ScaleNumHasBeenSet() const
{
    return m_scaleNumHasBeenSet;
}

int64_t LoadAutoScaleStrategy::GetProcessMethod() const
{
    return m_processMethod;
}

void LoadAutoScaleStrategy::SetProcessMethod(const int64_t& _processMethod)
{
    m_processMethod = _processMethod;
    m_processMethodHasBeenSet = true;
}

bool LoadAutoScaleStrategy::ProcessMethodHasBeenSet() const
{
    return m_processMethodHasBeenSet;
}

int64_t LoadAutoScaleStrategy::GetPriority() const
{
    return m_priority;
}

void LoadAutoScaleStrategy::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool LoadAutoScaleStrategy::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

int64_t LoadAutoScaleStrategy::GetStrategyStatus() const
{
    return m_strategyStatus;
}

void LoadAutoScaleStrategy::SetStrategyStatus(const int64_t& _strategyStatus)
{
    m_strategyStatus = _strategyStatus;
    m_strategyStatusHasBeenSet = true;
}

bool LoadAutoScaleStrategy::StrategyStatusHasBeenSet() const
{
    return m_strategyStatusHasBeenSet;
}

string LoadAutoScaleStrategy::GetYarnNodeLabel() const
{
    return m_yarnNodeLabel;
}

void LoadAutoScaleStrategy::SetYarnNodeLabel(const string& _yarnNodeLabel)
{
    m_yarnNodeLabel = _yarnNodeLabel;
    m_yarnNodeLabelHasBeenSet = true;
}

bool LoadAutoScaleStrategy::YarnNodeLabelHasBeenSet() const
{
    return m_yarnNodeLabelHasBeenSet;
}

string LoadAutoScaleStrategy::GetPeriodValid() const
{
    return m_periodValid;
}

void LoadAutoScaleStrategy::SetPeriodValid(const string& _periodValid)
{
    m_periodValid = _periodValid;
    m_periodValidHasBeenSet = true;
}

bool LoadAutoScaleStrategy::PeriodValidHasBeenSet() const
{
    return m_periodValidHasBeenSet;
}

bool LoadAutoScaleStrategy::GetGraceDownFlag() const
{
    return m_graceDownFlag;
}

void LoadAutoScaleStrategy::SetGraceDownFlag(const bool& _graceDownFlag)
{
    m_graceDownFlag = _graceDownFlag;
    m_graceDownFlagHasBeenSet = true;
}

bool LoadAutoScaleStrategy::GraceDownFlagHasBeenSet() const
{
    return m_graceDownFlagHasBeenSet;
}

int64_t LoadAutoScaleStrategy::GetGraceDownTime() const
{
    return m_graceDownTime;
}

void LoadAutoScaleStrategy::SetGraceDownTime(const int64_t& _graceDownTime)
{
    m_graceDownTime = _graceDownTime;
    m_graceDownTimeHasBeenSet = true;
}

bool LoadAutoScaleStrategy::GraceDownTimeHasBeenSet() const
{
    return m_graceDownTimeHasBeenSet;
}

vector<Tag> LoadAutoScaleStrategy::GetTags() const
{
    return m_tags;
}

void LoadAutoScaleStrategy::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool LoadAutoScaleStrategy::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string LoadAutoScaleStrategy::GetConfigGroupAssigned() const
{
    return m_configGroupAssigned;
}

void LoadAutoScaleStrategy::SetConfigGroupAssigned(const string& _configGroupAssigned)
{
    m_configGroupAssigned = _configGroupAssigned;
    m_configGroupAssignedHasBeenSet = true;
}

bool LoadAutoScaleStrategy::ConfigGroupAssignedHasBeenSet() const
{
    return m_configGroupAssignedHasBeenSet;
}

string LoadAutoScaleStrategy::GetMeasureMethod() const
{
    return m_measureMethod;
}

void LoadAutoScaleStrategy::SetMeasureMethod(const string& _measureMethod)
{
    m_measureMethod = _measureMethod;
    m_measureMethodHasBeenSet = true;
}

bool LoadAutoScaleStrategy::MeasureMethodHasBeenSet() const
{
    return m_measureMethodHasBeenSet;
}

vector<string> LoadAutoScaleStrategy::GetSoftDeployDesc() const
{
    return m_softDeployDesc;
}

void LoadAutoScaleStrategy::SetSoftDeployDesc(const vector<string>& _softDeployDesc)
{
    m_softDeployDesc = _softDeployDesc;
    m_softDeployDescHasBeenSet = true;
}

bool LoadAutoScaleStrategy::SoftDeployDescHasBeenSet() const
{
    return m_softDeployDescHasBeenSet;
}

string LoadAutoScaleStrategy::GetServiceNodeDesc() const
{
    return m_serviceNodeDesc;
}

void LoadAutoScaleStrategy::SetServiceNodeDesc(const string& _serviceNodeDesc)
{
    m_serviceNodeDesc = _serviceNodeDesc;
    m_serviceNodeDescHasBeenSet = true;
}

bool LoadAutoScaleStrategy::ServiceNodeDescHasBeenSet() const
{
    return m_serviceNodeDescHasBeenSet;
}

vector<int64_t> LoadAutoScaleStrategy::GetServiceNodeInfo() const
{
    return m_serviceNodeInfo;
}

void LoadAutoScaleStrategy::SetServiceNodeInfo(const vector<int64_t>& _serviceNodeInfo)
{
    m_serviceNodeInfo = _serviceNodeInfo;
    m_serviceNodeInfoHasBeenSet = true;
}

bool LoadAutoScaleStrategy::ServiceNodeInfoHasBeenSet() const
{
    return m_serviceNodeInfoHasBeenSet;
}

vector<int64_t> LoadAutoScaleStrategy::GetSoftDeployInfo() const
{
    return m_softDeployInfo;
}

void LoadAutoScaleStrategy::SetSoftDeployInfo(const vector<int64_t>& _softDeployInfo)
{
    m_softDeployInfo = _softDeployInfo;
    m_softDeployInfoHasBeenSet = true;
}

bool LoadAutoScaleStrategy::SoftDeployInfoHasBeenSet() const
{
    return m_softDeployInfoHasBeenSet;
}

LoadMetricsConditions LoadAutoScaleStrategy::GetLoadMetricsConditions() const
{
    return m_loadMetricsConditions;
}

void LoadAutoScaleStrategy::SetLoadMetricsConditions(const LoadMetricsConditions& _loadMetricsConditions)
{
    m_loadMetricsConditions = _loadMetricsConditions;
    m_loadMetricsConditionsHasBeenSet = true;
}

bool LoadAutoScaleStrategy::LoadMetricsConditionsHasBeenSet() const
{
    return m_loadMetricsConditionsHasBeenSet;
}

int64_t LoadAutoScaleStrategy::GetGroupId() const
{
    return m_groupId;
}

void LoadAutoScaleStrategy::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool LoadAutoScaleStrategy::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string LoadAutoScaleStrategy::GetSoft() const
{
    return m_soft;
}

void LoadAutoScaleStrategy::SetSoft(const string& _soft)
{
    m_soft = _soft;
    m_softHasBeenSet = true;
}

bool LoadAutoScaleStrategy::SoftHasBeenSet() const
{
    return m_softHasBeenSet;
}


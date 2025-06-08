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

#include <tencentcloud/emr/v20190103/model/AutoScaleResourceConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

AutoScaleResourceConf::AutoScaleResourceConf() :
    m_idHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_scaleLowerBoundHasBeenSet(false),
    m_scaleUpperBoundHasBeenSet(false),
    m_strategyTypeHasBeenSet(false),
    m_nextTimeCanScaleHasBeenSet(false),
    m_graceDownFlagHasBeenSet(false),
    m_hardwareTypeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_postPayPercentMinHasBeenSet(false),
    m_changeToPodHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_yarnNodeLabelHasBeenSet(false),
    m_groupStatusHasBeenSet(false),
    m_parallelHasBeenSet(false),
    m_enableMNodeHasBeenSet(false),
    m_extraAdvanceAttrsHasBeenSet(false)
{
}

CoreInternalOutcome AutoScaleResourceConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleResourceConf.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleResourceConf.ClusterId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = value["ClusterId"].GetInt64();
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ScaleLowerBound") && !value["ScaleLowerBound"].IsNull())
    {
        if (!value["ScaleLowerBound"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleResourceConf.ScaleLowerBound` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scaleLowerBound = value["ScaleLowerBound"].GetInt64();
        m_scaleLowerBoundHasBeenSet = true;
    }

    if (value.HasMember("ScaleUpperBound") && !value["ScaleUpperBound"].IsNull())
    {
        if (!value["ScaleUpperBound"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleResourceConf.ScaleUpperBound` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scaleUpperBound = value["ScaleUpperBound"].GetInt64();
        m_scaleUpperBoundHasBeenSet = true;
    }

    if (value.HasMember("StrategyType") && !value["StrategyType"].IsNull())
    {
        if (!value["StrategyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleResourceConf.StrategyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyType = value["StrategyType"].GetInt64();
        m_strategyTypeHasBeenSet = true;
    }

    if (value.HasMember("NextTimeCanScale") && !value["NextTimeCanScale"].IsNull())
    {
        if (!value["NextTimeCanScale"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleResourceConf.NextTimeCanScale` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nextTimeCanScale = value["NextTimeCanScale"].GetUint64();
        m_nextTimeCanScaleHasBeenSet = true;
    }

    if (value.HasMember("GraceDownFlag") && !value["GraceDownFlag"].IsNull())
    {
        if (!value["GraceDownFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleResourceConf.GraceDownFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_graceDownFlag = value["GraceDownFlag"].GetBool();
        m_graceDownFlagHasBeenSet = true;
    }

    if (value.HasMember("HardwareType") && !value["HardwareType"].IsNull())
    {
        if (!value["HardwareType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleResourceConf.HardwareType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hardwareType = string(value["HardwareType"].GetString());
        m_hardwareTypeHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleResourceConf.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("PostPayPercentMin") && !value["PostPayPercentMin"].IsNull())
    {
        if (!value["PostPayPercentMin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleResourceConf.PostPayPercentMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_postPayPercentMin = value["PostPayPercentMin"].GetInt64();
        m_postPayPercentMinHasBeenSet = true;
    }

    if (value.HasMember("ChangeToPod") && !value["ChangeToPod"].IsNull())
    {
        if (!value["ChangeToPod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleResourceConf.ChangeToPod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_changeToPod = value["ChangeToPod"].GetInt64();
        m_changeToPodHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleResourceConf.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("YarnNodeLabel") && !value["YarnNodeLabel"].IsNull())
    {
        if (!value["YarnNodeLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleResourceConf.YarnNodeLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yarnNodeLabel = string(value["YarnNodeLabel"].GetString());
        m_yarnNodeLabelHasBeenSet = true;
    }

    if (value.HasMember("GroupStatus") && !value["GroupStatus"].IsNull())
    {
        if (!value["GroupStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleResourceConf.GroupStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupStatus = value["GroupStatus"].GetInt64();
        m_groupStatusHasBeenSet = true;
    }

    if (value.HasMember("Parallel") && !value["Parallel"].IsNull())
    {
        if (!value["Parallel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleResourceConf.Parallel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_parallel = value["Parallel"].GetInt64();
        m_parallelHasBeenSet = true;
    }

    if (value.HasMember("EnableMNode") && !value["EnableMNode"].IsNull())
    {
        if (!value["EnableMNode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleResourceConf.EnableMNode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableMNode = value["EnableMNode"].GetInt64();
        m_enableMNodeHasBeenSet = true;
    }

    if (value.HasMember("ExtraAdvanceAttrs") && !value["ExtraAdvanceAttrs"].IsNull())
    {
        if (!value["ExtraAdvanceAttrs"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleResourceConf.ExtraAdvanceAttrs` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extraAdvanceAttrs.Deserialize(value["ExtraAdvanceAttrs"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extraAdvanceAttrsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoScaleResourceConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterId, allocator);
    }

    if (m_scaleLowerBoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleLowerBound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scaleLowerBound, allocator);
    }

    if (m_scaleUpperBoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleUpperBound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scaleUpperBound, allocator);
    }

    if (m_strategyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyType, allocator);
    }

    if (m_nextTimeCanScaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextTimeCanScale";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nextTimeCanScale, allocator);
    }

    if (m_graceDownFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GraceDownFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_graceDownFlag, allocator);
    }

    if (m_hardwareTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HardwareType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hardwareType.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_postPayPercentMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostPayPercentMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_postPayPercentMin, allocator);
    }

    if (m_changeToPodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangeToPod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_changeToPod, allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_yarnNodeLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YarnNodeLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_yarnNodeLabel.c_str(), allocator).Move(), allocator);
    }

    if (m_groupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupStatus, allocator);
    }

    if (m_parallelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parallel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parallel, allocator);
    }

    if (m_enableMNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMNode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableMNode, allocator);
    }

    if (m_extraAdvanceAttrsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraAdvanceAttrs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extraAdvanceAttrs.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t AutoScaleResourceConf::GetId() const
{
    return m_id;
}

void AutoScaleResourceConf::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AutoScaleResourceConf::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t AutoScaleResourceConf::GetClusterId() const
{
    return m_clusterId;
}

void AutoScaleResourceConf::SetClusterId(const int64_t& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool AutoScaleResourceConf::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t AutoScaleResourceConf::GetScaleLowerBound() const
{
    return m_scaleLowerBound;
}

void AutoScaleResourceConf::SetScaleLowerBound(const int64_t& _scaleLowerBound)
{
    m_scaleLowerBound = _scaleLowerBound;
    m_scaleLowerBoundHasBeenSet = true;
}

bool AutoScaleResourceConf::ScaleLowerBoundHasBeenSet() const
{
    return m_scaleLowerBoundHasBeenSet;
}

int64_t AutoScaleResourceConf::GetScaleUpperBound() const
{
    return m_scaleUpperBound;
}

void AutoScaleResourceConf::SetScaleUpperBound(const int64_t& _scaleUpperBound)
{
    m_scaleUpperBound = _scaleUpperBound;
    m_scaleUpperBoundHasBeenSet = true;
}

bool AutoScaleResourceConf::ScaleUpperBoundHasBeenSet() const
{
    return m_scaleUpperBoundHasBeenSet;
}

int64_t AutoScaleResourceConf::GetStrategyType() const
{
    return m_strategyType;
}

void AutoScaleResourceConf::SetStrategyType(const int64_t& _strategyType)
{
    m_strategyType = _strategyType;
    m_strategyTypeHasBeenSet = true;
}

bool AutoScaleResourceConf::StrategyTypeHasBeenSet() const
{
    return m_strategyTypeHasBeenSet;
}

uint64_t AutoScaleResourceConf::GetNextTimeCanScale() const
{
    return m_nextTimeCanScale;
}

void AutoScaleResourceConf::SetNextTimeCanScale(const uint64_t& _nextTimeCanScale)
{
    m_nextTimeCanScale = _nextTimeCanScale;
    m_nextTimeCanScaleHasBeenSet = true;
}

bool AutoScaleResourceConf::NextTimeCanScaleHasBeenSet() const
{
    return m_nextTimeCanScaleHasBeenSet;
}

bool AutoScaleResourceConf::GetGraceDownFlag() const
{
    return m_graceDownFlag;
}

void AutoScaleResourceConf::SetGraceDownFlag(const bool& _graceDownFlag)
{
    m_graceDownFlag = _graceDownFlag;
    m_graceDownFlagHasBeenSet = true;
}

bool AutoScaleResourceConf::GraceDownFlagHasBeenSet() const
{
    return m_graceDownFlagHasBeenSet;
}

string AutoScaleResourceConf::GetHardwareType() const
{
    return m_hardwareType;
}

void AutoScaleResourceConf::SetHardwareType(const string& _hardwareType)
{
    m_hardwareType = _hardwareType;
    m_hardwareTypeHasBeenSet = true;
}

bool AutoScaleResourceConf::HardwareTypeHasBeenSet() const
{
    return m_hardwareTypeHasBeenSet;
}

string AutoScaleResourceConf::GetPayMode() const
{
    return m_payMode;
}

void AutoScaleResourceConf::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool AutoScaleResourceConf::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t AutoScaleResourceConf::GetPostPayPercentMin() const
{
    return m_postPayPercentMin;
}

void AutoScaleResourceConf::SetPostPayPercentMin(const int64_t& _postPayPercentMin)
{
    m_postPayPercentMin = _postPayPercentMin;
    m_postPayPercentMinHasBeenSet = true;
}

bool AutoScaleResourceConf::PostPayPercentMinHasBeenSet() const
{
    return m_postPayPercentMinHasBeenSet;
}

int64_t AutoScaleResourceConf::GetChangeToPod() const
{
    return m_changeToPod;
}

void AutoScaleResourceConf::SetChangeToPod(const int64_t& _changeToPod)
{
    m_changeToPod = _changeToPod;
    m_changeToPodHasBeenSet = true;
}

bool AutoScaleResourceConf::ChangeToPodHasBeenSet() const
{
    return m_changeToPodHasBeenSet;
}

string AutoScaleResourceConf::GetGroupName() const
{
    return m_groupName;
}

void AutoScaleResourceConf::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool AutoScaleResourceConf::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string AutoScaleResourceConf::GetYarnNodeLabel() const
{
    return m_yarnNodeLabel;
}

void AutoScaleResourceConf::SetYarnNodeLabel(const string& _yarnNodeLabel)
{
    m_yarnNodeLabel = _yarnNodeLabel;
    m_yarnNodeLabelHasBeenSet = true;
}

bool AutoScaleResourceConf::YarnNodeLabelHasBeenSet() const
{
    return m_yarnNodeLabelHasBeenSet;
}

int64_t AutoScaleResourceConf::GetGroupStatus() const
{
    return m_groupStatus;
}

void AutoScaleResourceConf::SetGroupStatus(const int64_t& _groupStatus)
{
    m_groupStatus = _groupStatus;
    m_groupStatusHasBeenSet = true;
}

bool AutoScaleResourceConf::GroupStatusHasBeenSet() const
{
    return m_groupStatusHasBeenSet;
}

int64_t AutoScaleResourceConf::GetParallel() const
{
    return m_parallel;
}

void AutoScaleResourceConf::SetParallel(const int64_t& _parallel)
{
    m_parallel = _parallel;
    m_parallelHasBeenSet = true;
}

bool AutoScaleResourceConf::ParallelHasBeenSet() const
{
    return m_parallelHasBeenSet;
}

int64_t AutoScaleResourceConf::GetEnableMNode() const
{
    return m_enableMNode;
}

void AutoScaleResourceConf::SetEnableMNode(const int64_t& _enableMNode)
{
    m_enableMNode = _enableMNode;
    m_enableMNodeHasBeenSet = true;
}

bool AutoScaleResourceConf::EnableMNodeHasBeenSet() const
{
    return m_enableMNodeHasBeenSet;
}

AutoScaleGroupAdvanceAttrs AutoScaleResourceConf::GetExtraAdvanceAttrs() const
{
    return m_extraAdvanceAttrs;
}

void AutoScaleResourceConf::SetExtraAdvanceAttrs(const AutoScaleGroupAdvanceAttrs& _extraAdvanceAttrs)
{
    m_extraAdvanceAttrs = _extraAdvanceAttrs;
    m_extraAdvanceAttrsHasBeenSet = true;
}

bool AutoScaleResourceConf::ExtraAdvanceAttrsHasBeenSet() const
{
    return m_extraAdvanceAttrsHasBeenSet;
}


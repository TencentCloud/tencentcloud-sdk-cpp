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
    m_graceDownFlagHasBeenSet(false)
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


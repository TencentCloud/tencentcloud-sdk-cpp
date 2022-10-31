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

#include <tencentcloud/dts/v20211206/model/MigrateDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

MigrateDetailInfo::MigrateDetailInfo() :
    m_stepAllHasBeenSet(false),
    m_stepNowHasBeenSet(false),
    m_masterSlaveDistanceHasBeenSet(false),
    m_secondsBehindMasterHasBeenSet(false),
    m_stepInfoHasBeenSet(false)
{
}

CoreInternalOutcome MigrateDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StepAll") && !value["StepAll"].IsNull())
    {
        if (!value["StepAll"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateDetailInfo.StepAll` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stepAll = value["StepAll"].GetUint64();
        m_stepAllHasBeenSet = true;
    }

    if (value.HasMember("StepNow") && !value["StepNow"].IsNull())
    {
        if (!value["StepNow"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateDetailInfo.StepNow` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stepNow = value["StepNow"].GetUint64();
        m_stepNowHasBeenSet = true;
    }

    if (value.HasMember("MasterSlaveDistance") && !value["MasterSlaveDistance"].IsNull())
    {
        if (!value["MasterSlaveDistance"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateDetailInfo.MasterSlaveDistance` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_masterSlaveDistance = value["MasterSlaveDistance"].GetInt64();
        m_masterSlaveDistanceHasBeenSet = true;
    }

    if (value.HasMember("SecondsBehindMaster") && !value["SecondsBehindMaster"].IsNull())
    {
        if (!value["SecondsBehindMaster"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateDetailInfo.SecondsBehindMaster` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_secondsBehindMaster = value["SecondsBehindMaster"].GetInt64();
        m_secondsBehindMasterHasBeenSet = true;
    }

    if (value.HasMember("StepInfo") && !value["StepInfo"].IsNull())
    {
        if (!value["StepInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MigrateDetailInfo.StepInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["StepInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StepDetailInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_stepInfo.push_back(item);
        }
        m_stepInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MigrateDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stepAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stepAll, allocator);
    }

    if (m_stepNowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepNow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stepNow, allocator);
    }

    if (m_masterSlaveDistanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterSlaveDistance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_masterSlaveDistance, allocator);
    }

    if (m_secondsBehindMasterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondsBehindMaster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_secondsBehindMaster, allocator);
    }

    if (m_stepInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_stepInfo.begin(); itr != m_stepInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t MigrateDetailInfo::GetStepAll() const
{
    return m_stepAll;
}

void MigrateDetailInfo::SetStepAll(const uint64_t& _stepAll)
{
    m_stepAll = _stepAll;
    m_stepAllHasBeenSet = true;
}

bool MigrateDetailInfo::StepAllHasBeenSet() const
{
    return m_stepAllHasBeenSet;
}

uint64_t MigrateDetailInfo::GetStepNow() const
{
    return m_stepNow;
}

void MigrateDetailInfo::SetStepNow(const uint64_t& _stepNow)
{
    m_stepNow = _stepNow;
    m_stepNowHasBeenSet = true;
}

bool MigrateDetailInfo::StepNowHasBeenSet() const
{
    return m_stepNowHasBeenSet;
}

int64_t MigrateDetailInfo::GetMasterSlaveDistance() const
{
    return m_masterSlaveDistance;
}

void MigrateDetailInfo::SetMasterSlaveDistance(const int64_t& _masterSlaveDistance)
{
    m_masterSlaveDistance = _masterSlaveDistance;
    m_masterSlaveDistanceHasBeenSet = true;
}

bool MigrateDetailInfo::MasterSlaveDistanceHasBeenSet() const
{
    return m_masterSlaveDistanceHasBeenSet;
}

int64_t MigrateDetailInfo::GetSecondsBehindMaster() const
{
    return m_secondsBehindMaster;
}

void MigrateDetailInfo::SetSecondsBehindMaster(const int64_t& _secondsBehindMaster)
{
    m_secondsBehindMaster = _secondsBehindMaster;
    m_secondsBehindMasterHasBeenSet = true;
}

bool MigrateDetailInfo::SecondsBehindMasterHasBeenSet() const
{
    return m_secondsBehindMasterHasBeenSet;
}

vector<StepDetailInfo> MigrateDetailInfo::GetStepInfo() const
{
    return m_stepInfo;
}

void MigrateDetailInfo::SetStepInfo(const vector<StepDetailInfo>& _stepInfo)
{
    m_stepInfo = _stepInfo;
    m_stepInfoHasBeenSet = true;
}

bool MigrateDetailInfo::StepInfoHasBeenSet() const
{
    return m_stepInfoHasBeenSet;
}


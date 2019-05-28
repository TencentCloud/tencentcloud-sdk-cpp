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

#include <tencentcloud/dts/v20180330/model/SyncDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20180330::Model;
using namespace rapidjson;
using namespace std;

SyncDetailInfo::SyncDetailInfo() :
    m_stepAllHasBeenSet(false),
    m_stepNowHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_currentStepProgressHasBeenSet(false),
    m_masterSlaveDistanceHasBeenSet(false),
    m_secondsBehindMasterHasBeenSet(false),
    m_stepInfoHasBeenSet(false)
{
}

CoreInternalOutcome SyncDetailInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("StepAll") && !value["StepAll"].IsNull())
    {
        if (!value["StepAll"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SyncDetailInfo.StepAll` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stepAll = value["StepAll"].GetInt64();
        m_stepAllHasBeenSet = true;
    }

    if (value.HasMember("StepNow") && !value["StepNow"].IsNull())
    {
        if (!value["StepNow"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SyncDetailInfo.StepNow` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stepNow = value["StepNow"].GetInt64();
        m_stepNowHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsString())
        {
            return CoreInternalOutcome(Error("response `SyncDetailInfo.Progress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_progress = string(value["Progress"].GetString());
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("CurrentStepProgress") && !value["CurrentStepProgress"].IsNull())
    {
        if (!value["CurrentStepProgress"].IsString())
        {
            return CoreInternalOutcome(Error("response `SyncDetailInfo.CurrentStepProgress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentStepProgress = string(value["CurrentStepProgress"].GetString());
        m_currentStepProgressHasBeenSet = true;
    }

    if (value.HasMember("MasterSlaveDistance") && !value["MasterSlaveDistance"].IsNull())
    {
        if (!value["MasterSlaveDistance"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SyncDetailInfo.MasterSlaveDistance` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_masterSlaveDistance = value["MasterSlaveDistance"].GetInt64();
        m_masterSlaveDistanceHasBeenSet = true;
    }

    if (value.HasMember("SecondsBehindMaster") && !value["SecondsBehindMaster"].IsNull())
    {
        if (!value["SecondsBehindMaster"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SyncDetailInfo.SecondsBehindMaster` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_secondsBehindMaster = value["SecondsBehindMaster"].GetInt64();
        m_secondsBehindMasterHasBeenSet = true;
    }

    if (value.HasMember("StepInfo") && !value["StepInfo"].IsNull())
    {
        if (!value["StepInfo"].IsArray())
            return CoreInternalOutcome(Error("response `SyncDetailInfo.StepInfo` is not array type"));

        const Value &tmpValue = value["StepInfo"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SyncStepDetailInfo item;
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

void SyncDetailInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_stepAllHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StepAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stepAll, allocator);
    }

    if (m_stepNowHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StepNow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stepNow, allocator);
    }

    if (m_progressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_progress.c_str(), allocator).Move(), allocator);
    }

    if (m_currentStepProgressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CurrentStepProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_currentStepProgress.c_str(), allocator).Move(), allocator);
    }

    if (m_masterSlaveDistanceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MasterSlaveDistance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_masterSlaveDistance, allocator);
    }

    if (m_secondsBehindMasterHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecondsBehindMaster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_secondsBehindMaster, allocator);
    }

    if (m_stepInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StepInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_stepInfo.begin(); itr != m_stepInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t SyncDetailInfo::GetStepAll() const
{
    return m_stepAll;
}

void SyncDetailInfo::SetStepAll(const int64_t& _stepAll)
{
    m_stepAll = _stepAll;
    m_stepAllHasBeenSet = true;
}

bool SyncDetailInfo::StepAllHasBeenSet() const
{
    return m_stepAllHasBeenSet;
}

int64_t SyncDetailInfo::GetStepNow() const
{
    return m_stepNow;
}

void SyncDetailInfo::SetStepNow(const int64_t& _stepNow)
{
    m_stepNow = _stepNow;
    m_stepNowHasBeenSet = true;
}

bool SyncDetailInfo::StepNowHasBeenSet() const
{
    return m_stepNowHasBeenSet;
}

string SyncDetailInfo::GetProgress() const
{
    return m_progress;
}

void SyncDetailInfo::SetProgress(const string& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool SyncDetailInfo::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string SyncDetailInfo::GetCurrentStepProgress() const
{
    return m_currentStepProgress;
}

void SyncDetailInfo::SetCurrentStepProgress(const string& _currentStepProgress)
{
    m_currentStepProgress = _currentStepProgress;
    m_currentStepProgressHasBeenSet = true;
}

bool SyncDetailInfo::CurrentStepProgressHasBeenSet() const
{
    return m_currentStepProgressHasBeenSet;
}

int64_t SyncDetailInfo::GetMasterSlaveDistance() const
{
    return m_masterSlaveDistance;
}

void SyncDetailInfo::SetMasterSlaveDistance(const int64_t& _masterSlaveDistance)
{
    m_masterSlaveDistance = _masterSlaveDistance;
    m_masterSlaveDistanceHasBeenSet = true;
}

bool SyncDetailInfo::MasterSlaveDistanceHasBeenSet() const
{
    return m_masterSlaveDistanceHasBeenSet;
}

int64_t SyncDetailInfo::GetSecondsBehindMaster() const
{
    return m_secondsBehindMaster;
}

void SyncDetailInfo::SetSecondsBehindMaster(const int64_t& _secondsBehindMaster)
{
    m_secondsBehindMaster = _secondsBehindMaster;
    m_secondsBehindMasterHasBeenSet = true;
}

bool SyncDetailInfo::SecondsBehindMasterHasBeenSet() const
{
    return m_secondsBehindMasterHasBeenSet;
}

vector<SyncStepDetailInfo> SyncDetailInfo::GetStepInfo() const
{
    return m_stepInfo;
}

void SyncDetailInfo::SetStepInfo(const vector<SyncStepDetailInfo>& _stepInfo)
{
    m_stepInfo = _stepInfo;
    m_stepInfoHasBeenSet = true;
}

bool SyncDetailInfo::StepInfoHasBeenSet() const
{
    return m_stepInfoHasBeenSet;
}


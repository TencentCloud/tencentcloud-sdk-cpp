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

#include <tencentcloud/dts/v20211206/model/SyncDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

SyncDetailInfo::SyncDetailInfo() :
    m_stepAllHasBeenSet(false),
    m_stepNowHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_currentStepProgressHasBeenSet(false),
    m_masterSlaveDistanceHasBeenSet(false),
    m_secondsBehindMasterHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_stepInfosHasBeenSet(false),
    m_causeOfCompareDisableHasBeenSet(false),
    m_errInfoHasBeenSet(false)
{
}

CoreInternalOutcome SyncDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StepAll") && !value["StepAll"].IsNull())
    {
        if (!value["StepAll"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SyncDetailInfo.StepAll` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stepAll = value["StepAll"].GetUint64();
        m_stepAllHasBeenSet = true;
    }

    if (value.HasMember("StepNow") && !value["StepNow"].IsNull())
    {
        if (!value["StepNow"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SyncDetailInfo.StepNow` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stepNow = value["StepNow"].GetUint64();
        m_stepNowHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SyncDetailInfo.Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("CurrentStepProgress") && !value["CurrentStepProgress"].IsNull())
    {
        if (!value["CurrentStepProgress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SyncDetailInfo.CurrentStepProgress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentStepProgress = value["CurrentStepProgress"].GetInt64();
        m_currentStepProgressHasBeenSet = true;
    }

    if (value.HasMember("MasterSlaveDistance") && !value["MasterSlaveDistance"].IsNull())
    {
        if (!value["MasterSlaveDistance"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SyncDetailInfo.MasterSlaveDistance` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_masterSlaveDistance = value["MasterSlaveDistance"].GetInt64();
        m_masterSlaveDistanceHasBeenSet = true;
    }

    if (value.HasMember("SecondsBehindMaster") && !value["SecondsBehindMaster"].IsNull())
    {
        if (!value["SecondsBehindMaster"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SyncDetailInfo.SecondsBehindMaster` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_secondsBehindMaster = value["SecondsBehindMaster"].GetInt64();
        m_secondsBehindMasterHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncDetailInfo.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("StepInfos") && !value["StepInfos"].IsNull())
    {
        if (!value["StepInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SyncDetailInfo.StepInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["StepInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StepInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_stepInfos.push_back(item);
        }
        m_stepInfosHasBeenSet = true;
    }

    if (value.HasMember("CauseOfCompareDisable") && !value["CauseOfCompareDisable"].IsNull())
    {
        if (!value["CauseOfCompareDisable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncDetailInfo.CauseOfCompareDisable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_causeOfCompareDisable = string(value["CauseOfCompareDisable"].GetString());
        m_causeOfCompareDisableHasBeenSet = true;
    }

    if (value.HasMember("ErrInfo") && !value["ErrInfo"].IsNull())
    {
        if (!value["ErrInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SyncDetailInfo.ErrInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_errInfo.Deserialize(value["ErrInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SyncDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_currentStepProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentStepProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentStepProgress, allocator);
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

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_stepInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_stepInfos.begin(); itr != m_stepInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_causeOfCompareDisableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CauseOfCompareDisable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_causeOfCompareDisable.c_str(), allocator).Move(), allocator);
    }

    if (m_errInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_errInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t SyncDetailInfo::GetStepAll() const
{
    return m_stepAll;
}

void SyncDetailInfo::SetStepAll(const uint64_t& _stepAll)
{
    m_stepAll = _stepAll;
    m_stepAllHasBeenSet = true;
}

bool SyncDetailInfo::StepAllHasBeenSet() const
{
    return m_stepAllHasBeenSet;
}

uint64_t SyncDetailInfo::GetStepNow() const
{
    return m_stepNow;
}

void SyncDetailInfo::SetStepNow(const uint64_t& _stepNow)
{
    m_stepNow = _stepNow;
    m_stepNowHasBeenSet = true;
}

bool SyncDetailInfo::StepNowHasBeenSet() const
{
    return m_stepNowHasBeenSet;
}

int64_t SyncDetailInfo::GetProgress() const
{
    return m_progress;
}

void SyncDetailInfo::SetProgress(const int64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool SyncDetailInfo::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

int64_t SyncDetailInfo::GetCurrentStepProgress() const
{
    return m_currentStepProgress;
}

void SyncDetailInfo::SetCurrentStepProgress(const int64_t& _currentStepProgress)
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

string SyncDetailInfo::GetMessage() const
{
    return m_message;
}

void SyncDetailInfo::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool SyncDetailInfo::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

vector<StepInfo> SyncDetailInfo::GetStepInfos() const
{
    return m_stepInfos;
}

void SyncDetailInfo::SetStepInfos(const vector<StepInfo>& _stepInfos)
{
    m_stepInfos = _stepInfos;
    m_stepInfosHasBeenSet = true;
}

bool SyncDetailInfo::StepInfosHasBeenSet() const
{
    return m_stepInfosHasBeenSet;
}

string SyncDetailInfo::GetCauseOfCompareDisable() const
{
    return m_causeOfCompareDisable;
}

void SyncDetailInfo::SetCauseOfCompareDisable(const string& _causeOfCompareDisable)
{
    m_causeOfCompareDisable = _causeOfCompareDisable;
    m_causeOfCompareDisableHasBeenSet = true;
}

bool SyncDetailInfo::CauseOfCompareDisableHasBeenSet() const
{
    return m_causeOfCompareDisableHasBeenSet;
}

ErrInfo SyncDetailInfo::GetErrInfo() const
{
    return m_errInfo;
}

void SyncDetailInfo::SetErrInfo(const ErrInfo& _errInfo)
{
    m_errInfo = _errInfo;
    m_errInfoHasBeenSet = true;
}

bool SyncDetailInfo::ErrInfoHasBeenSet() const
{
    return m_errInfoHasBeenSet;
}


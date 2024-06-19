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

#include <tencentcloud/cynosdb/v20190107/model/RollbackProcessInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

RollbackProcessInfo::RollbackProcessInfo() :
    m_isVipSwitchableHasBeenSet(false),
    m_vipSwitchableTimeHasBeenSet(false),
    m_exchangeInstanceInfoListHasBeenSet(false),
    m_exchangeRoGroupInfoListHasBeenSet(false),
    m_currentStepHasBeenSet(false),
    m_currentStepProgressHasBeenSet(false),
    m_currentStepRemainingTimeHasBeenSet(false)
{
}

CoreInternalOutcome RollbackProcessInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsVipSwitchable") && !value["IsVipSwitchable"].IsNull())
    {
        if (!value["IsVipSwitchable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackProcessInfo.IsVipSwitchable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isVipSwitchable = value["IsVipSwitchable"].GetBool();
        m_isVipSwitchableHasBeenSet = true;
    }

    if (value.HasMember("VipSwitchableTime") && !value["VipSwitchableTime"].IsNull())
    {
        if (!value["VipSwitchableTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackProcessInfo.VipSwitchableTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vipSwitchableTime = string(value["VipSwitchableTime"].GetString());
        m_vipSwitchableTimeHasBeenSet = true;
    }

    if (value.HasMember("ExchangeInstanceInfoList") && !value["ExchangeInstanceInfoList"].IsNull())
    {
        if (!value["ExchangeInstanceInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RollbackProcessInfo.ExchangeInstanceInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["ExchangeInstanceInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExchangeInstanceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_exchangeInstanceInfoList.push_back(item);
        }
        m_exchangeInstanceInfoListHasBeenSet = true;
    }

    if (value.HasMember("ExchangeRoGroupInfoList") && !value["ExchangeRoGroupInfoList"].IsNull())
    {
        if (!value["ExchangeRoGroupInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RollbackProcessInfo.ExchangeRoGroupInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["ExchangeRoGroupInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExchangeRoGroupInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_exchangeRoGroupInfoList.push_back(item);
        }
        m_exchangeRoGroupInfoListHasBeenSet = true;
    }

    if (value.HasMember("CurrentStep") && !value["CurrentStep"].IsNull())
    {
        if (!value["CurrentStep"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackProcessInfo.CurrentStep` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentStep = string(value["CurrentStep"].GetString());
        m_currentStepHasBeenSet = true;
    }

    if (value.HasMember("CurrentStepProgress") && !value["CurrentStepProgress"].IsNull())
    {
        if (!value["CurrentStepProgress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackProcessInfo.CurrentStepProgress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentStepProgress = value["CurrentStepProgress"].GetInt64();
        m_currentStepProgressHasBeenSet = true;
    }

    if (value.HasMember("CurrentStepRemainingTime") && !value["CurrentStepRemainingTime"].IsNull())
    {
        if (!value["CurrentStepRemainingTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackProcessInfo.CurrentStepRemainingTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentStepRemainingTime = string(value["CurrentStepRemainingTime"].GetString());
        m_currentStepRemainingTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RollbackProcessInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isVipSwitchableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsVipSwitchable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isVipSwitchable, allocator);
    }

    if (m_vipSwitchableTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipSwitchableTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vipSwitchableTime.c_str(), allocator).Move(), allocator);
    }

    if (m_exchangeInstanceInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExchangeInstanceInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_exchangeInstanceInfoList.begin(); itr != m_exchangeInstanceInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_exchangeRoGroupInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExchangeRoGroupInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_exchangeRoGroupInfoList.begin(); itr != m_exchangeRoGroupInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_currentStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentStep.c_str(), allocator).Move(), allocator);
    }

    if (m_currentStepProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentStepProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentStepProgress, allocator);
    }

    if (m_currentStepRemainingTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentStepRemainingTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentStepRemainingTime.c_str(), allocator).Move(), allocator);
    }

}


bool RollbackProcessInfo::GetIsVipSwitchable() const
{
    return m_isVipSwitchable;
}

void RollbackProcessInfo::SetIsVipSwitchable(const bool& _isVipSwitchable)
{
    m_isVipSwitchable = _isVipSwitchable;
    m_isVipSwitchableHasBeenSet = true;
}

bool RollbackProcessInfo::IsVipSwitchableHasBeenSet() const
{
    return m_isVipSwitchableHasBeenSet;
}

string RollbackProcessInfo::GetVipSwitchableTime() const
{
    return m_vipSwitchableTime;
}

void RollbackProcessInfo::SetVipSwitchableTime(const string& _vipSwitchableTime)
{
    m_vipSwitchableTime = _vipSwitchableTime;
    m_vipSwitchableTimeHasBeenSet = true;
}

bool RollbackProcessInfo::VipSwitchableTimeHasBeenSet() const
{
    return m_vipSwitchableTimeHasBeenSet;
}

vector<ExchangeInstanceInfo> RollbackProcessInfo::GetExchangeInstanceInfoList() const
{
    return m_exchangeInstanceInfoList;
}

void RollbackProcessInfo::SetExchangeInstanceInfoList(const vector<ExchangeInstanceInfo>& _exchangeInstanceInfoList)
{
    m_exchangeInstanceInfoList = _exchangeInstanceInfoList;
    m_exchangeInstanceInfoListHasBeenSet = true;
}

bool RollbackProcessInfo::ExchangeInstanceInfoListHasBeenSet() const
{
    return m_exchangeInstanceInfoListHasBeenSet;
}

vector<ExchangeRoGroupInfo> RollbackProcessInfo::GetExchangeRoGroupInfoList() const
{
    return m_exchangeRoGroupInfoList;
}

void RollbackProcessInfo::SetExchangeRoGroupInfoList(const vector<ExchangeRoGroupInfo>& _exchangeRoGroupInfoList)
{
    m_exchangeRoGroupInfoList = _exchangeRoGroupInfoList;
    m_exchangeRoGroupInfoListHasBeenSet = true;
}

bool RollbackProcessInfo::ExchangeRoGroupInfoListHasBeenSet() const
{
    return m_exchangeRoGroupInfoListHasBeenSet;
}

string RollbackProcessInfo::GetCurrentStep() const
{
    return m_currentStep;
}

void RollbackProcessInfo::SetCurrentStep(const string& _currentStep)
{
    m_currentStep = _currentStep;
    m_currentStepHasBeenSet = true;
}

bool RollbackProcessInfo::CurrentStepHasBeenSet() const
{
    return m_currentStepHasBeenSet;
}

int64_t RollbackProcessInfo::GetCurrentStepProgress() const
{
    return m_currentStepProgress;
}

void RollbackProcessInfo::SetCurrentStepProgress(const int64_t& _currentStepProgress)
{
    m_currentStepProgress = _currentStepProgress;
    m_currentStepProgressHasBeenSet = true;
}

bool RollbackProcessInfo::CurrentStepProgressHasBeenSet() const
{
    return m_currentStepProgressHasBeenSet;
}

string RollbackProcessInfo::GetCurrentStepRemainingTime() const
{
    return m_currentStepRemainingTime;
}

void RollbackProcessInfo::SetCurrentStepRemainingTime(const string& _currentStepRemainingTime)
{
    m_currentStepRemainingTime = _currentStepRemainingTime;
    m_currentStepRemainingTimeHasBeenSet = true;
}

bool RollbackProcessInfo::CurrentStepRemainingTimeHasBeenSet() const
{
    return m_currentStepRemainingTimeHasBeenSet;
}


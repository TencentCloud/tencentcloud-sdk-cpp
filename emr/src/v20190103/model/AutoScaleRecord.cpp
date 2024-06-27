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

#include <tencentcloud/emr/v20190103/model/AutoScaleRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

AutoScaleRecord::AutoScaleRecord() :
    m_strategyNameHasBeenSet(false),
    m_scaleActionHasBeenSet(false),
    m_actionStatusHasBeenSet(false),
    m_actionTimeHasBeenSet(false),
    m_scaleInfoHasBeenSet(false),
    m_expectScaleNumHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_strategyTypeHasBeenSet(false),
    m_specInfoHasBeenSet(false),
    m_compensateFlagHasBeenSet(false),
    m_compensateCountHasBeenSet(false),
    m_retryCountHasBeenSet(false),
    m_retryInfoHasBeenSet(false),
    m_retryEnReasonHasBeenSet(false),
    m_retryReasonHasBeenSet(false)
{
}

CoreInternalOutcome AutoScaleRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StrategyName") && !value["StrategyName"].IsNull())
    {
        if (!value["StrategyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleRecord.StrategyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyName = string(value["StrategyName"].GetString());
        m_strategyNameHasBeenSet = true;
    }

    if (value.HasMember("ScaleAction") && !value["ScaleAction"].IsNull())
    {
        if (!value["ScaleAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleRecord.ScaleAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scaleAction = string(value["ScaleAction"].GetString());
        m_scaleActionHasBeenSet = true;
    }

    if (value.HasMember("ActionStatus") && !value["ActionStatus"].IsNull())
    {
        if (!value["ActionStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleRecord.ActionStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionStatus = string(value["ActionStatus"].GetString());
        m_actionStatusHasBeenSet = true;
    }

    if (value.HasMember("ActionTime") && !value["ActionTime"].IsNull())
    {
        if (!value["ActionTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleRecord.ActionTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionTime = string(value["ActionTime"].GetString());
        m_actionTimeHasBeenSet = true;
    }

    if (value.HasMember("ScaleInfo") && !value["ScaleInfo"].IsNull())
    {
        if (!value["ScaleInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleRecord.ScaleInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scaleInfo = string(value["ScaleInfo"].GetString());
        m_scaleInfoHasBeenSet = true;
    }

    if (value.HasMember("ExpectScaleNum") && !value["ExpectScaleNum"].IsNull())
    {
        if (!value["ExpectScaleNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleRecord.ExpectScaleNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expectScaleNum = value["ExpectScaleNum"].GetInt64();
        m_expectScaleNumHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleRecord.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("StrategyType") && !value["StrategyType"].IsNull())
    {
        if (!value["StrategyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleRecord.StrategyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyType = value["StrategyType"].GetInt64();
        m_strategyTypeHasBeenSet = true;
    }

    if (value.HasMember("SpecInfo") && !value["SpecInfo"].IsNull())
    {
        if (!value["SpecInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleRecord.SpecInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specInfo = string(value["SpecInfo"].GetString());
        m_specInfoHasBeenSet = true;
    }

    if (value.HasMember("CompensateFlag") && !value["CompensateFlag"].IsNull())
    {
        if (!value["CompensateFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleRecord.CompensateFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_compensateFlag = value["CompensateFlag"].GetInt64();
        m_compensateFlagHasBeenSet = true;
    }

    if (value.HasMember("CompensateCount") && !value["CompensateCount"].IsNull())
    {
        if (!value["CompensateCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleRecord.CompensateCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_compensateCount = value["CompensateCount"].GetInt64();
        m_compensateCountHasBeenSet = true;
    }

    if (value.HasMember("RetryCount") && !value["RetryCount"].IsNull())
    {
        if (!value["RetryCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleRecord.RetryCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retryCount = value["RetryCount"].GetUint64();
        m_retryCountHasBeenSet = true;
    }

    if (value.HasMember("RetryInfo") && !value["RetryInfo"].IsNull())
    {
        if (!value["RetryInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleRecord.RetryInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_retryInfo = string(value["RetryInfo"].GetString());
        m_retryInfoHasBeenSet = true;
    }

    if (value.HasMember("RetryEnReason") && !value["RetryEnReason"].IsNull())
    {
        if (!value["RetryEnReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleRecord.RetryEnReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_retryEnReason = string(value["RetryEnReason"].GetString());
        m_retryEnReasonHasBeenSet = true;
    }

    if (value.HasMember("RetryReason") && !value["RetryReason"].IsNull())
    {
        if (!value["RetryReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleRecord.RetryReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_retryReason = string(value["RetryReason"].GetString());
        m_retryReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoScaleRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_strategyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyName.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scaleAction.c_str(), allocator).Move(), allocator);
    }

    if (m_actionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scaleInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_expectScaleNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectScaleNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expectScaleNum, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyType, allocator);
    }

    if (m_specInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_compensateFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompensateFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_compensateFlag, allocator);
    }

    if (m_compensateCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompensateCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_compensateCount, allocator);
    }

    if (m_retryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryCount, allocator);
    }

    if (m_retryInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_retryInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_retryEnReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryEnReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_retryEnReason.c_str(), allocator).Move(), allocator);
    }

    if (m_retryReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_retryReason.c_str(), allocator).Move(), allocator);
    }

}


string AutoScaleRecord::GetStrategyName() const
{
    return m_strategyName;
}

void AutoScaleRecord::SetStrategyName(const string& _strategyName)
{
    m_strategyName = _strategyName;
    m_strategyNameHasBeenSet = true;
}

bool AutoScaleRecord::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

string AutoScaleRecord::GetScaleAction() const
{
    return m_scaleAction;
}

void AutoScaleRecord::SetScaleAction(const string& _scaleAction)
{
    m_scaleAction = _scaleAction;
    m_scaleActionHasBeenSet = true;
}

bool AutoScaleRecord::ScaleActionHasBeenSet() const
{
    return m_scaleActionHasBeenSet;
}

string AutoScaleRecord::GetActionStatus() const
{
    return m_actionStatus;
}

void AutoScaleRecord::SetActionStatus(const string& _actionStatus)
{
    m_actionStatus = _actionStatus;
    m_actionStatusHasBeenSet = true;
}

bool AutoScaleRecord::ActionStatusHasBeenSet() const
{
    return m_actionStatusHasBeenSet;
}

string AutoScaleRecord::GetActionTime() const
{
    return m_actionTime;
}

void AutoScaleRecord::SetActionTime(const string& _actionTime)
{
    m_actionTime = _actionTime;
    m_actionTimeHasBeenSet = true;
}

bool AutoScaleRecord::ActionTimeHasBeenSet() const
{
    return m_actionTimeHasBeenSet;
}

string AutoScaleRecord::GetScaleInfo() const
{
    return m_scaleInfo;
}

void AutoScaleRecord::SetScaleInfo(const string& _scaleInfo)
{
    m_scaleInfo = _scaleInfo;
    m_scaleInfoHasBeenSet = true;
}

bool AutoScaleRecord::ScaleInfoHasBeenSet() const
{
    return m_scaleInfoHasBeenSet;
}

int64_t AutoScaleRecord::GetExpectScaleNum() const
{
    return m_expectScaleNum;
}

void AutoScaleRecord::SetExpectScaleNum(const int64_t& _expectScaleNum)
{
    m_expectScaleNum = _expectScaleNum;
    m_expectScaleNumHasBeenSet = true;
}

bool AutoScaleRecord::ExpectScaleNumHasBeenSet() const
{
    return m_expectScaleNumHasBeenSet;
}

string AutoScaleRecord::GetEndTime() const
{
    return m_endTime;
}

void AutoScaleRecord::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool AutoScaleRecord::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t AutoScaleRecord::GetStrategyType() const
{
    return m_strategyType;
}

void AutoScaleRecord::SetStrategyType(const int64_t& _strategyType)
{
    m_strategyType = _strategyType;
    m_strategyTypeHasBeenSet = true;
}

bool AutoScaleRecord::StrategyTypeHasBeenSet() const
{
    return m_strategyTypeHasBeenSet;
}

string AutoScaleRecord::GetSpecInfo() const
{
    return m_specInfo;
}

void AutoScaleRecord::SetSpecInfo(const string& _specInfo)
{
    m_specInfo = _specInfo;
    m_specInfoHasBeenSet = true;
}

bool AutoScaleRecord::SpecInfoHasBeenSet() const
{
    return m_specInfoHasBeenSet;
}

int64_t AutoScaleRecord::GetCompensateFlag() const
{
    return m_compensateFlag;
}

void AutoScaleRecord::SetCompensateFlag(const int64_t& _compensateFlag)
{
    m_compensateFlag = _compensateFlag;
    m_compensateFlagHasBeenSet = true;
}

bool AutoScaleRecord::CompensateFlagHasBeenSet() const
{
    return m_compensateFlagHasBeenSet;
}

int64_t AutoScaleRecord::GetCompensateCount() const
{
    return m_compensateCount;
}

void AutoScaleRecord::SetCompensateCount(const int64_t& _compensateCount)
{
    m_compensateCount = _compensateCount;
    m_compensateCountHasBeenSet = true;
}

bool AutoScaleRecord::CompensateCountHasBeenSet() const
{
    return m_compensateCountHasBeenSet;
}

uint64_t AutoScaleRecord::GetRetryCount() const
{
    return m_retryCount;
}

void AutoScaleRecord::SetRetryCount(const uint64_t& _retryCount)
{
    m_retryCount = _retryCount;
    m_retryCountHasBeenSet = true;
}

bool AutoScaleRecord::RetryCountHasBeenSet() const
{
    return m_retryCountHasBeenSet;
}

string AutoScaleRecord::GetRetryInfo() const
{
    return m_retryInfo;
}

void AutoScaleRecord::SetRetryInfo(const string& _retryInfo)
{
    m_retryInfo = _retryInfo;
    m_retryInfoHasBeenSet = true;
}

bool AutoScaleRecord::RetryInfoHasBeenSet() const
{
    return m_retryInfoHasBeenSet;
}

string AutoScaleRecord::GetRetryEnReason() const
{
    return m_retryEnReason;
}

void AutoScaleRecord::SetRetryEnReason(const string& _retryEnReason)
{
    m_retryEnReason = _retryEnReason;
    m_retryEnReasonHasBeenSet = true;
}

bool AutoScaleRecord::RetryEnReasonHasBeenSet() const
{
    return m_retryEnReasonHasBeenSet;
}

string AutoScaleRecord::GetRetryReason() const
{
    return m_retryReason;
}

void AutoScaleRecord::SetRetryReason(const string& _retryReason)
{
    m_retryReason = _retryReason;
    m_retryReasonHasBeenSet = true;
}

bool AutoScaleRecord::RetryReasonHasBeenSet() const
{
    return m_retryReasonHasBeenSet;
}


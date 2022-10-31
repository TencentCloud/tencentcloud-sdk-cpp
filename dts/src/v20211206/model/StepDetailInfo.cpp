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

#include <tencentcloud/dts/v20211206/model/StepDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

StepDetailInfo::StepDetailInfo() :
    m_stepNoHasBeenSet(false),
    m_stepNameHasBeenSet(false),
    m_stepIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_stepMessageHasBeenSet(false),
    m_percentHasBeenSet(false),
    m_errorsHasBeenSet(false),
    m_warningsHasBeenSet(false)
{
}

CoreInternalOutcome StepDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StepNo") && !value["StepNo"].IsNull())
    {
        if (!value["StepNo"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StepDetailInfo.StepNo` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stepNo = value["StepNo"].GetUint64();
        m_stepNoHasBeenSet = true;
    }

    if (value.HasMember("StepName") && !value["StepName"].IsNull())
    {
        if (!value["StepName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StepDetailInfo.StepName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stepName = string(value["StepName"].GetString());
        m_stepNameHasBeenSet = true;
    }

    if (value.HasMember("StepId") && !value["StepId"].IsNull())
    {
        if (!value["StepId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StepDetailInfo.StepId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stepId = string(value["StepId"].GetString());
        m_stepIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StepDetailInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StepDetailInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("StepMessage") && !value["StepMessage"].IsNull())
    {
        if (!value["StepMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StepDetailInfo.StepMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stepMessage = string(value["StepMessage"].GetString());
        m_stepMessageHasBeenSet = true;
    }

    if (value.HasMember("Percent") && !value["Percent"].IsNull())
    {
        if (!value["Percent"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StepDetailInfo.Percent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_percent = value["Percent"].GetUint64();
        m_percentHasBeenSet = true;
    }

    if (value.HasMember("Errors") && !value["Errors"].IsNull())
    {
        if (!value["Errors"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StepDetailInfo.Errors` is not array type"));

        const rapidjson::Value &tmpValue = value["Errors"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProcessStepTip item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_errors.push_back(item);
        }
        m_errorsHasBeenSet = true;
    }

    if (value.HasMember("Warnings") && !value["Warnings"].IsNull())
    {
        if (!value["Warnings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StepDetailInfo.Warnings` is not array type"));

        const rapidjson::Value &tmpValue = value["Warnings"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProcessStepTip item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_warnings.push_back(item);
        }
        m_warningsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StepDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stepNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stepNo, allocator);
    }

    if (m_stepNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stepName.c_str(), allocator).Move(), allocator);
    }

    if (m_stepIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stepId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stepMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stepMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
    }

    if (m_errorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Errors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_errors.begin(); itr != m_errors.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_warningsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Warnings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_warnings.begin(); itr != m_warnings.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t StepDetailInfo::GetStepNo() const
{
    return m_stepNo;
}

void StepDetailInfo::SetStepNo(const uint64_t& _stepNo)
{
    m_stepNo = _stepNo;
    m_stepNoHasBeenSet = true;
}

bool StepDetailInfo::StepNoHasBeenSet() const
{
    return m_stepNoHasBeenSet;
}

string StepDetailInfo::GetStepName() const
{
    return m_stepName;
}

void StepDetailInfo::SetStepName(const string& _stepName)
{
    m_stepName = _stepName;
    m_stepNameHasBeenSet = true;
}

bool StepDetailInfo::StepNameHasBeenSet() const
{
    return m_stepNameHasBeenSet;
}

string StepDetailInfo::GetStepId() const
{
    return m_stepId;
}

void StepDetailInfo::SetStepId(const string& _stepId)
{
    m_stepId = _stepId;
    m_stepIdHasBeenSet = true;
}

bool StepDetailInfo::StepIdHasBeenSet() const
{
    return m_stepIdHasBeenSet;
}

string StepDetailInfo::GetStatus() const
{
    return m_status;
}

void StepDetailInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool StepDetailInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string StepDetailInfo::GetStartTime() const
{
    return m_startTime;
}

void StepDetailInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool StepDetailInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string StepDetailInfo::GetStepMessage() const
{
    return m_stepMessage;
}

void StepDetailInfo::SetStepMessage(const string& _stepMessage)
{
    m_stepMessage = _stepMessage;
    m_stepMessageHasBeenSet = true;
}

bool StepDetailInfo::StepMessageHasBeenSet() const
{
    return m_stepMessageHasBeenSet;
}

uint64_t StepDetailInfo::GetPercent() const
{
    return m_percent;
}

void StepDetailInfo::SetPercent(const uint64_t& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool StepDetailInfo::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

vector<ProcessStepTip> StepDetailInfo::GetErrors() const
{
    return m_errors;
}

void StepDetailInfo::SetErrors(const vector<ProcessStepTip>& _errors)
{
    m_errors = _errors;
    m_errorsHasBeenSet = true;
}

bool StepDetailInfo::ErrorsHasBeenSet() const
{
    return m_errorsHasBeenSet;
}

vector<ProcessStepTip> StepDetailInfo::GetWarnings() const
{
    return m_warnings;
}

void StepDetailInfo::SetWarnings(const vector<ProcessStepTip>& _warnings)
{
    m_warnings = _warnings;
    m_warningsHasBeenSet = true;
}

bool StepDetailInfo::WarningsHasBeenSet() const
{
    return m_warningsHasBeenSet;
}


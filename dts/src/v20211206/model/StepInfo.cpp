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

#include <tencentcloud/dts/v20211206/model/StepInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

StepInfo::StepInfo() :
    m_stepNoHasBeenSet(false),
    m_stepNameHasBeenSet(false),
    m_stepIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_errorsHasBeenSet(false),
    m_warningsHasBeenSet(false),
    m_progressHasBeenSet(false)
{
}

CoreInternalOutcome StepInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StepNo") && !value["StepNo"].IsNull())
    {
        if (!value["StepNo"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StepInfo.StepNo` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stepNo = value["StepNo"].GetUint64();
        m_stepNoHasBeenSet = true;
    }

    if (value.HasMember("StepName") && !value["StepName"].IsNull())
    {
        if (!value["StepName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StepInfo.StepName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stepName = string(value["StepName"].GetString());
        m_stepNameHasBeenSet = true;
    }

    if (value.HasMember("StepId") && !value["StepId"].IsNull())
    {
        if (!value["StepId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StepInfo.StepId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stepId = string(value["StepId"].GetString());
        m_stepIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StepInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StepInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Errors") && !value["Errors"].IsNull())
    {
        if (!value["Errors"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StepInfo.Errors` is not array type"));

        const rapidjson::Value &tmpValue = value["Errors"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StepTip item;
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
            return CoreInternalOutcome(Core::Error("response `StepInfo.Warnings` is not array type"));

        const rapidjson::Value &tmpValue = value["Warnings"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StepTip item;
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

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StepInfo.Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StepInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

}


uint64_t StepInfo::GetStepNo() const
{
    return m_stepNo;
}

void StepInfo::SetStepNo(const uint64_t& _stepNo)
{
    m_stepNo = _stepNo;
    m_stepNoHasBeenSet = true;
}

bool StepInfo::StepNoHasBeenSet() const
{
    return m_stepNoHasBeenSet;
}

string StepInfo::GetStepName() const
{
    return m_stepName;
}

void StepInfo::SetStepName(const string& _stepName)
{
    m_stepName = _stepName;
    m_stepNameHasBeenSet = true;
}

bool StepInfo::StepNameHasBeenSet() const
{
    return m_stepNameHasBeenSet;
}

string StepInfo::GetStepId() const
{
    return m_stepId;
}

void StepInfo::SetStepId(const string& _stepId)
{
    m_stepId = _stepId;
    m_stepIdHasBeenSet = true;
}

bool StepInfo::StepIdHasBeenSet() const
{
    return m_stepIdHasBeenSet;
}

string StepInfo::GetStatus() const
{
    return m_status;
}

void StepInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool StepInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string StepInfo::GetStartTime() const
{
    return m_startTime;
}

void StepInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool StepInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

vector<StepTip> StepInfo::GetErrors() const
{
    return m_errors;
}

void StepInfo::SetErrors(const vector<StepTip>& _errors)
{
    m_errors = _errors;
    m_errorsHasBeenSet = true;
}

bool StepInfo::ErrorsHasBeenSet() const
{
    return m_errorsHasBeenSet;
}

vector<StepTip> StepInfo::GetWarnings() const
{
    return m_warnings;
}

void StepInfo::SetWarnings(const vector<StepTip>& _warnings)
{
    m_warnings = _warnings;
    m_warningsHasBeenSet = true;
}

bool StepInfo::WarningsHasBeenSet() const
{
    return m_warningsHasBeenSet;
}

int64_t StepInfo::GetProgress() const
{
    return m_progress;
}

void StepInfo::SetProgress(const int64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool StepInfo::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}


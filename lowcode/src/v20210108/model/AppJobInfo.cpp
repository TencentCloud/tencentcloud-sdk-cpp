/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/lowcode/v20210108/model/AppJobInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

AppJobInfo::AppJobInfo() :
    m_statusHasBeenSet(false),
    m_stepHasBeenSet(false),
    m_idHasBeenSet(false),
    m_totalStepHasBeenSet(false),
    m_stepDescHasBeenSet(false),
    m_errMsgHasBeenSet(false)
{
}

CoreInternalOutcome AppJobInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppJobInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Step") && !value["Step"].IsNull())
    {
        if (!value["Step"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppJobInfo.Step` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_step = value["Step"].GetInt64();
        m_stepHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppJobInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("TotalStep") && !value["TotalStep"].IsNull())
    {
        if (!value["TotalStep"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppJobInfo.TotalStep` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalStep = value["TotalStep"].GetInt64();
        m_totalStepHasBeenSet = true;
    }

    if (value.HasMember("StepDesc") && !value["StepDesc"].IsNull())
    {
        if (!value["StepDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppJobInfo.StepDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stepDesc = string(value["StepDesc"].GetString());
        m_stepDescHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppJobInfo.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppJobInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_stepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Step";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_step, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_totalStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalStep, allocator);
    }

    if (m_stepDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stepDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

}


int64_t AppJobInfo::GetStatus() const
{
    return m_status;
}

void AppJobInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AppJobInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t AppJobInfo::GetStep() const
{
    return m_step;
}

void AppJobInfo::SetStep(const int64_t& _step)
{
    m_step = _step;
    m_stepHasBeenSet = true;
}

bool AppJobInfo::StepHasBeenSet() const
{
    return m_stepHasBeenSet;
}

int64_t AppJobInfo::GetId() const
{
    return m_id;
}

void AppJobInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AppJobInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t AppJobInfo::GetTotalStep() const
{
    return m_totalStep;
}

void AppJobInfo::SetTotalStep(const int64_t& _totalStep)
{
    m_totalStep = _totalStep;
    m_totalStepHasBeenSet = true;
}

bool AppJobInfo::TotalStepHasBeenSet() const
{
    return m_totalStepHasBeenSet;
}

string AppJobInfo::GetStepDesc() const
{
    return m_stepDesc;
}

void AppJobInfo::SetStepDesc(const string& _stepDesc)
{
    m_stepDesc = _stepDesc;
    m_stepDescHasBeenSet = true;
}

bool AppJobInfo::StepDescHasBeenSet() const
{
    return m_stepDescHasBeenSet;
}

string AppJobInfo::GetErrMsg() const
{
    return m_errMsg;
}

void AppJobInfo::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool AppJobInfo::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}


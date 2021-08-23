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

#include <tencentcloud/tcaplusdb/v20190823/model/ApplyResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

ApplyResult::ApplyResult() :
    m_applicationIdHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_applicationStatusHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

CoreInternalOutcome ApplyResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyResult.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyResult.ApplicationType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = value["ApplicationType"].GetInt64();
        m_applicationTypeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationStatus") && !value["ApplicationStatus"].IsNull())
    {
        if (!value["ApplicationStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyResult.ApplicationStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applicationStatus = value["ApplicationStatus"].GetInt64();
        m_applicationStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyResult.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyResult.Error` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_error.Deserialize(value["Error"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplyResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applicationType, allocator);
    }

    if (m_applicationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applicationStatus, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_error.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ApplyResult::GetApplicationId() const
{
    return m_applicationId;
}

void ApplyResult::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ApplyResult::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

int64_t ApplyResult::GetApplicationType() const
{
    return m_applicationType;
}

void ApplyResult::SetApplicationType(const int64_t& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool ApplyResult::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

int64_t ApplyResult::GetApplicationStatus() const
{
    return m_applicationStatus;
}

void ApplyResult::SetApplicationStatus(const int64_t& _applicationStatus)
{
    m_applicationStatus = _applicationStatus;
    m_applicationStatusHasBeenSet = true;
}

bool ApplyResult::ApplicationStatusHasBeenSet() const
{
    return m_applicationStatusHasBeenSet;
}

string ApplyResult::GetTaskId() const
{
    return m_taskId;
}

void ApplyResult::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ApplyResult::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

ErrorInfo ApplyResult::GetError() const
{
    return m_error;
}

void ApplyResult::SetError(const ErrorInfo& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool ApplyResult::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}


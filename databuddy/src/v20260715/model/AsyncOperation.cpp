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

#include <tencentcloud/databuddy/v20260715/model/AsyncOperation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

AsyncOperation::AsyncOperation() :
    m_isAsyncHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_operationIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome AsyncOperation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsAsync") && !value["IsAsync"].IsNull())
    {
        if (!value["IsAsync"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncOperation.IsAsync` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAsync = value["IsAsync"].GetBool();
        m_isAsyncHasBeenSet = true;
    }

    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncOperation.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("OperationId") && !value["OperationId"].IsNull())
    {
        if (!value["OperationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncOperation.OperationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationId = string(value["OperationId"].GetString());
        m_operationIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncOperation.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AsyncOperation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isAsyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAsync";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAsync, allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_operationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


bool AsyncOperation::GetIsAsync() const
{
    return m_isAsync;
}

void AsyncOperation::SetIsAsync(const bool& _isAsync)
{
    m_isAsync = _isAsync;
    m_isAsyncHasBeenSet = true;
}

bool AsyncOperation::IsAsyncHasBeenSet() const
{
    return m_isAsyncHasBeenSet;
}

string AsyncOperation::GetJobId() const
{
    return m_jobId;
}

void AsyncOperation::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool AsyncOperation::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string AsyncOperation::GetOperationId() const
{
    return m_operationId;
}

void AsyncOperation::SetOperationId(const string& _operationId)
{
    m_operationId = _operationId;
    m_operationIdHasBeenSet = true;
}

bool AsyncOperation::OperationIdHasBeenSet() const
{
    return m_operationIdHasBeenSet;
}

int64_t AsyncOperation::GetStatus() const
{
    return m_status;
}

void AsyncOperation::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AsyncOperation::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


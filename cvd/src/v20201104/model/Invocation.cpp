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

#include <tencentcloud/cvd/v20201104/model/Invocation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

Invocation::Invocation() :
    m_invokeIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_exitCodeHasBeenSet(false)
{
}

CoreInternalOutcome Invocation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InvokeId") && !value["InvokeId"].IsNull())
    {
        if (!value["InvokeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.InvokeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invokeId = string(value["InvokeId"].GetString());
        m_invokeIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Output") && !value["Output"].IsNull())
    {
        if (!value["Output"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.Output` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_output.Deserialize(value["Output"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputHasBeenSet = true;
    }

    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.ErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = string(value["ErrorCode"].GetString());
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorInfo") && !value["ErrorInfo"].IsNull())
    {
        if (!value["ErrorInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.ErrorInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorInfo = string(value["ErrorInfo"].GetString());
        m_errorInfoHasBeenSet = true;
    }

    if (value.HasMember("ExitCode") && !value["ExitCode"].IsNull())
    {
        if (!value["ExitCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.ExitCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exitCode = value["ExitCode"].GetInt64();
        m_exitCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Invocation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_invokeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invokeId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_output.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_errorInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_exitCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExitCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exitCode, allocator);
    }

}


string Invocation::GetInvokeId() const
{
    return m_invokeId;
}

void Invocation::SetInvokeId(const string& _invokeId)
{
    m_invokeId = _invokeId;
    m_invokeIdHasBeenSet = true;
}

bool Invocation::InvokeIdHasBeenSet() const
{
    return m_invokeIdHasBeenSet;
}

string Invocation::GetStatus() const
{
    return m_status;
}

void Invocation::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Invocation::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

InvocationOutput Invocation::GetOutput() const
{
    return m_output;
}

void Invocation::SetOutput(const InvocationOutput& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool Invocation::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

string Invocation::GetErrorCode() const
{
    return m_errorCode;
}

void Invocation::SetErrorCode(const string& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool Invocation::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string Invocation::GetErrorInfo() const
{
    return m_errorInfo;
}

void Invocation::SetErrorInfo(const string& _errorInfo)
{
    m_errorInfo = _errorInfo;
    m_errorInfoHasBeenSet = true;
}

bool Invocation::ErrorInfoHasBeenSet() const
{
    return m_errorInfoHasBeenSet;
}

int64_t Invocation::GetExitCode() const
{
    return m_exitCode;
}

void Invocation::SetExitCode(const int64_t& _exitCode)
{
    m_exitCode = _exitCode;
    m_exitCodeHasBeenSet = true;
}

bool Invocation::ExitCodeHasBeenSet() const
{
    return m_exitCodeHasBeenSet;
}


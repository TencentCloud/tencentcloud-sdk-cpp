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

#include <tencentcloud/cvd/v20201104/model/InvocationDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

InvocationDetail::InvocationDetail() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_invokeIdHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_exitCodeHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorInfoHasBeenSet(false)
{
}

CoreInternalOutcome InvocationDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationDetail.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationDetail.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("InvokeId") && !value["InvokeId"].IsNull())
    {
        if (!value["InvokeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationDetail.InvokeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invokeId = string(value["InvokeId"].GetString());
        m_invokeIdHasBeenSet = true;
    }

    if (value.HasMember("Output") && !value["Output"].IsNull())
    {
        if (!value["Output"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationDetail.Output` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_output = string(value["Output"].GetString());
        m_outputHasBeenSet = true;
    }

    if (value.HasMember("ExitCode") && !value["ExitCode"].IsNull())
    {
        if (!value["ExitCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationDetail.ExitCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exitCode = value["ExitCode"].GetInt64();
        m_exitCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationDetail.ErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = string(value["ErrorCode"].GetString());
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorInfo") && !value["ErrorInfo"].IsNull())
    {
        if (!value["ErrorInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationDetail.ErrorInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorInfo = string(value["ErrorInfo"].GetString());
        m_errorInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InvocationDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_invokeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invokeId.c_str(), allocator).Move(), allocator);
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_output.c_str(), allocator).Move(), allocator);
    }

    if (m_exitCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExitCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exitCode, allocator);
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

}


string InvocationDetail::GetInstanceId() const
{
    return m_instanceId;
}

void InvocationDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InvocationDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InvocationDetail::GetInstanceName() const
{
    return m_instanceName;
}

void InvocationDetail::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InvocationDetail::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string InvocationDetail::GetRegion() const
{
    return m_region;
}

void InvocationDetail::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool InvocationDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string InvocationDetail::GetStatus() const
{
    return m_status;
}

void InvocationDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InvocationDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string InvocationDetail::GetInvokeId() const
{
    return m_invokeId;
}

void InvocationDetail::SetInvokeId(const string& _invokeId)
{
    m_invokeId = _invokeId;
    m_invokeIdHasBeenSet = true;
}

bool InvocationDetail::InvokeIdHasBeenSet() const
{
    return m_invokeIdHasBeenSet;
}

string InvocationDetail::GetOutput() const
{
    return m_output;
}

void InvocationDetail::SetOutput(const string& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool InvocationDetail::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

int64_t InvocationDetail::GetExitCode() const
{
    return m_exitCode;
}

void InvocationDetail::SetExitCode(const int64_t& _exitCode)
{
    m_exitCode = _exitCode;
    m_exitCodeHasBeenSet = true;
}

bool InvocationDetail::ExitCodeHasBeenSet() const
{
    return m_exitCodeHasBeenSet;
}

string InvocationDetail::GetErrorCode() const
{
    return m_errorCode;
}

void InvocationDetail::SetErrorCode(const string& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool InvocationDetail::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string InvocationDetail::GetErrorInfo() const
{
    return m_errorInfo;
}

void InvocationDetail::SetErrorInfo(const string& _errorInfo)
{
    m_errorInfo = _errorInfo;
    m_errorInfoHasBeenSet = true;
}

bool InvocationDetail::ErrorInfoHasBeenSet() const
{
    return m_errorInfoHasBeenSet;
}


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

#include <tencentcloud/cwp/v20180228/model/VulDefencePluginDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

VulDefencePluginDetail::VulDefencePluginDetail() :
    m_pidHasBeenSet(false),
    m_mainClassHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errorLogHasBeenSet(false),
    m_injectLogHasBeenSet(false)
{
}

CoreInternalOutcome VulDefencePluginDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefencePluginDetail.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("MainClass") && !value["MainClass"].IsNull())
    {
        if (!value["MainClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefencePluginDetail.MainClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainClass = string(value["MainClass"].GetString());
        m_mainClassHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefencePluginDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrorLog") && !value["ErrorLog"].IsNull())
    {
        if (!value["ErrorLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefencePluginDetail.ErrorLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorLog = string(value["ErrorLog"].GetString());
        m_errorLogHasBeenSet = true;
    }

    if (value.HasMember("InjectLog") && !value["InjectLog"].IsNull())
    {
        if (!value["InjectLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefencePluginDetail.InjectLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_injectLog = string(value["InjectLog"].GetString());
        m_injectLogHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulDefencePluginDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

    if (m_mainClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainClass.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_errorLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorLog.c_str(), allocator).Move(), allocator);
    }

    if (m_injectLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InjectLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_injectLog.c_str(), allocator).Move(), allocator);
    }

}


int64_t VulDefencePluginDetail::GetPid() const
{
    return m_pid;
}

void VulDefencePluginDetail::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool VulDefencePluginDetail::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string VulDefencePluginDetail::GetMainClass() const
{
    return m_mainClass;
}

void VulDefencePluginDetail::SetMainClass(const string& _mainClass)
{
    m_mainClass = _mainClass;
    m_mainClassHasBeenSet = true;
}

bool VulDefencePluginDetail::MainClassHasBeenSet() const
{
    return m_mainClassHasBeenSet;
}

int64_t VulDefencePluginDetail::GetStatus() const
{
    return m_status;
}

void VulDefencePluginDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VulDefencePluginDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string VulDefencePluginDetail::GetErrorLog() const
{
    return m_errorLog;
}

void VulDefencePluginDetail::SetErrorLog(const string& _errorLog)
{
    m_errorLog = _errorLog;
    m_errorLogHasBeenSet = true;
}

bool VulDefencePluginDetail::ErrorLogHasBeenSet() const
{
    return m_errorLogHasBeenSet;
}

string VulDefencePluginDetail::GetInjectLog() const
{
    return m_injectLog;
}

void VulDefencePluginDetail::SetInjectLog(const string& _injectLog)
{
    m_injectLog = _injectLog;
    m_injectLogHasBeenSet = true;
}

bool VulDefencePluginDetail::InjectLogHasBeenSet() const
{
    return m_injectLogHasBeenSet;
}


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

#include <tencentcloud/cwp/v20180228/model/RaspLicensePlugin.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RaspLicensePlugin::RaspLicensePlugin() :
    m_pIDHasBeenSet(false),
    m_mainClassHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errorLogHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_injectTimeHasBeenSet(false)
{
}

CoreInternalOutcome RaspLicensePlugin::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PID") && !value["PID"].IsNull())
    {
        if (!value["PID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicensePlugin.PID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pID = value["PID"].GetUint64();
        m_pIDHasBeenSet = true;
    }

    if (value.HasMember("MainClass") && !value["MainClass"].IsNull())
    {
        if (!value["MainClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicensePlugin.MainClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainClass = string(value["MainClass"].GetString());
        m_mainClassHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicensePlugin.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrorLog") && !value["ErrorLog"].IsNull())
    {
        if (!value["ErrorLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicensePlugin.ErrorLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorLog = string(value["ErrorLog"].GetString());
        m_errorLogHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicensePlugin.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("InjectTime") && !value["InjectTime"].IsNull())
    {
        if (!value["InjectTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicensePlugin.InjectTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_injectTime = string(value["InjectTime"].GetString());
        m_injectTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RaspLicensePlugin::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pID, allocator);
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

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_injectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InjectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_injectTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RaspLicensePlugin::GetPID() const
{
    return m_pID;
}

void RaspLicensePlugin::SetPID(const uint64_t& _pID)
{
    m_pID = _pID;
    m_pIDHasBeenSet = true;
}

bool RaspLicensePlugin::PIDHasBeenSet() const
{
    return m_pIDHasBeenSet;
}

string RaspLicensePlugin::GetMainClass() const
{
    return m_mainClass;
}

void RaspLicensePlugin::SetMainClass(const string& _mainClass)
{
    m_mainClass = _mainClass;
    m_mainClassHasBeenSet = true;
}

bool RaspLicensePlugin::MainClassHasBeenSet() const
{
    return m_mainClassHasBeenSet;
}

uint64_t RaspLicensePlugin::GetStatus() const
{
    return m_status;
}

void RaspLicensePlugin::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RaspLicensePlugin::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RaspLicensePlugin::GetErrorLog() const
{
    return m_errorLog;
}

void RaspLicensePlugin::SetErrorLog(const string& _errorLog)
{
    m_errorLog = _errorLog;
    m_errorLogHasBeenSet = true;
}

bool RaspLicensePlugin::ErrorLogHasBeenSet() const
{
    return m_errorLogHasBeenSet;
}

string RaspLicensePlugin::GetReason() const
{
    return m_reason;
}

void RaspLicensePlugin::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool RaspLicensePlugin::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string RaspLicensePlugin::GetInjectTime() const
{
    return m_injectTime;
}

void RaspLicensePlugin::SetInjectTime(const string& _injectTime)
{
    m_injectTime = _injectTime;
    m_injectTimeHasBeenSet = true;
}

bool RaspLicensePlugin::InjectTimeHasBeenSet() const
{
    return m_injectTimeHasBeenSet;
}


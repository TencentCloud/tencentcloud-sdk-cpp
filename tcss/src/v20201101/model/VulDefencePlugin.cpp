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

#include <tencentcloud/tcss/v20201101/model/VulDefencePlugin.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

VulDefencePlugin::VulDefencePlugin() :
    m_pIDHasBeenSet(false),
    m_mainClassHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errorLogHasBeenSet(false)
{
}

CoreInternalOutcome VulDefencePlugin::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PID") && !value["PID"].IsNull())
    {
        if (!value["PID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefencePlugin.PID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pID = value["PID"].GetInt64();
        m_pIDHasBeenSet = true;
    }

    if (value.HasMember("MainClass") && !value["MainClass"].IsNull())
    {
        if (!value["MainClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefencePlugin.MainClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainClass = string(value["MainClass"].GetString());
        m_mainClassHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefencePlugin.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrorLog") && !value["ErrorLog"].IsNull())
    {
        if (!value["ErrorLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefencePlugin.ErrorLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorLog = string(value["ErrorLog"].GetString());
        m_errorLogHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulDefencePlugin::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_errorLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorLog.c_str(), allocator).Move(), allocator);
    }

}


int64_t VulDefencePlugin::GetPID() const
{
    return m_pID;
}

void VulDefencePlugin::SetPID(const int64_t& _pID)
{
    m_pID = _pID;
    m_pIDHasBeenSet = true;
}

bool VulDefencePlugin::PIDHasBeenSet() const
{
    return m_pIDHasBeenSet;
}

string VulDefencePlugin::GetMainClass() const
{
    return m_mainClass;
}

void VulDefencePlugin::SetMainClass(const string& _mainClass)
{
    m_mainClass = _mainClass;
    m_mainClassHasBeenSet = true;
}

bool VulDefencePlugin::MainClassHasBeenSet() const
{
    return m_mainClassHasBeenSet;
}

string VulDefencePlugin::GetStatus() const
{
    return m_status;
}

void VulDefencePlugin::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VulDefencePlugin::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string VulDefencePlugin::GetErrorLog() const
{
    return m_errorLog;
}

void VulDefencePlugin::SetErrorLog(const string& _errorLog)
{
    m_errorLog = _errorLog;
    m_errorLogHasBeenSet = true;
}

bool VulDefencePlugin::ErrorLogHasBeenSet() const
{
    return m_errorLogHasBeenSet;
}


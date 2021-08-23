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

#include <tencentcloud/cme/v20191029/model/StreamConnectProjectInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

StreamConnectProjectInfo::StreamConnectProjectInfo() :
    m_statusHasBeenSet(false),
    m_currentInputEndpointHasBeenSet(false),
    m_currentStartTimeHasBeenSet(false),
    m_currentStopTimeHasBeenSet(false),
    m_lastStopTimeHasBeenSet(false),
    m_mainInputHasBeenSet(false),
    m_backupInputHasBeenSet(false),
    m_outputSetHasBeenSet(false)
{
}

CoreInternalOutcome StreamConnectProjectInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamConnectProjectInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CurrentInputEndpoint") && !value["CurrentInputEndpoint"].IsNull())
    {
        if (!value["CurrentInputEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamConnectProjectInfo.CurrentInputEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentInputEndpoint = string(value["CurrentInputEndpoint"].GetString());
        m_currentInputEndpointHasBeenSet = true;
    }

    if (value.HasMember("CurrentStartTime") && !value["CurrentStartTime"].IsNull())
    {
        if (!value["CurrentStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamConnectProjectInfo.CurrentStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentStartTime = string(value["CurrentStartTime"].GetString());
        m_currentStartTimeHasBeenSet = true;
    }

    if (value.HasMember("CurrentStopTime") && !value["CurrentStopTime"].IsNull())
    {
        if (!value["CurrentStopTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamConnectProjectInfo.CurrentStopTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentStopTime = string(value["CurrentStopTime"].GetString());
        m_currentStopTimeHasBeenSet = true;
    }

    if (value.HasMember("LastStopTime") && !value["LastStopTime"].IsNull())
    {
        if (!value["LastStopTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamConnectProjectInfo.LastStopTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastStopTime = string(value["LastStopTime"].GetString());
        m_lastStopTimeHasBeenSet = true;
    }

    if (value.HasMember("MainInput") && !value["MainInput"].IsNull())
    {
        if (!value["MainInput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StreamConnectProjectInfo.MainInput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mainInput.Deserialize(value["MainInput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mainInputHasBeenSet = true;
    }

    if (value.HasMember("BackupInput") && !value["BackupInput"].IsNull())
    {
        if (!value["BackupInput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StreamConnectProjectInfo.BackupInput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backupInput.Deserialize(value["BackupInput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backupInputHasBeenSet = true;
    }

    if (value.HasMember("OutputSet") && !value["OutputSet"].IsNull())
    {
        if (!value["OutputSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StreamConnectProjectInfo.OutputSet` is not array type"));

        const rapidjson::Value &tmpValue = value["OutputSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StreamConnectOutputInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outputSet.push_back(item);
        }
        m_outputSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StreamConnectProjectInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_currentInputEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentInputEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentInputEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_currentStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_currentStopTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentStopTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentStopTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastStopTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastStopTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastStopTime.c_str(), allocator).Move(), allocator);
    }

    if (m_mainInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mainInput.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backupInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupInput.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputSet.begin(); itr != m_outputSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string StreamConnectProjectInfo::GetStatus() const
{
    return m_status;
}

void StreamConnectProjectInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool StreamConnectProjectInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string StreamConnectProjectInfo::GetCurrentInputEndpoint() const
{
    return m_currentInputEndpoint;
}

void StreamConnectProjectInfo::SetCurrentInputEndpoint(const string& _currentInputEndpoint)
{
    m_currentInputEndpoint = _currentInputEndpoint;
    m_currentInputEndpointHasBeenSet = true;
}

bool StreamConnectProjectInfo::CurrentInputEndpointHasBeenSet() const
{
    return m_currentInputEndpointHasBeenSet;
}

string StreamConnectProjectInfo::GetCurrentStartTime() const
{
    return m_currentStartTime;
}

void StreamConnectProjectInfo::SetCurrentStartTime(const string& _currentStartTime)
{
    m_currentStartTime = _currentStartTime;
    m_currentStartTimeHasBeenSet = true;
}

bool StreamConnectProjectInfo::CurrentStartTimeHasBeenSet() const
{
    return m_currentStartTimeHasBeenSet;
}

string StreamConnectProjectInfo::GetCurrentStopTime() const
{
    return m_currentStopTime;
}

void StreamConnectProjectInfo::SetCurrentStopTime(const string& _currentStopTime)
{
    m_currentStopTime = _currentStopTime;
    m_currentStopTimeHasBeenSet = true;
}

bool StreamConnectProjectInfo::CurrentStopTimeHasBeenSet() const
{
    return m_currentStopTimeHasBeenSet;
}

string StreamConnectProjectInfo::GetLastStopTime() const
{
    return m_lastStopTime;
}

void StreamConnectProjectInfo::SetLastStopTime(const string& _lastStopTime)
{
    m_lastStopTime = _lastStopTime;
    m_lastStopTimeHasBeenSet = true;
}

bool StreamConnectProjectInfo::LastStopTimeHasBeenSet() const
{
    return m_lastStopTimeHasBeenSet;
}

StreamInputInfo StreamConnectProjectInfo::GetMainInput() const
{
    return m_mainInput;
}

void StreamConnectProjectInfo::SetMainInput(const StreamInputInfo& _mainInput)
{
    m_mainInput = _mainInput;
    m_mainInputHasBeenSet = true;
}

bool StreamConnectProjectInfo::MainInputHasBeenSet() const
{
    return m_mainInputHasBeenSet;
}

StreamInputInfo StreamConnectProjectInfo::GetBackupInput() const
{
    return m_backupInput;
}

void StreamConnectProjectInfo::SetBackupInput(const StreamInputInfo& _backupInput)
{
    m_backupInput = _backupInput;
    m_backupInputHasBeenSet = true;
}

bool StreamConnectProjectInfo::BackupInputHasBeenSet() const
{
    return m_backupInputHasBeenSet;
}

vector<StreamConnectOutputInfo> StreamConnectProjectInfo::GetOutputSet() const
{
    return m_outputSet;
}

void StreamConnectProjectInfo::SetOutputSet(const vector<StreamConnectOutputInfo>& _outputSet)
{
    m_outputSet = _outputSet;
    m_outputSetHasBeenSet = true;
}

bool StreamConnectProjectInfo::OutputSetHasBeenSet() const
{
    return m_outputSetHasBeenSet;
}


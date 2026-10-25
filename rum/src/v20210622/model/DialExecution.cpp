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

#include <tencentcloud/rum/v20210622/model/DialExecution.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DialExecution::DialExecution() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskSessionIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_deviceHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_targetIpsHasBeenSet(false),
    m_targetIpGeoHasBeenSet(false),
    m_successHasBeenSet(false),
    m_notProbedHasBeenSet(false),
    m_avgDurationHasBeenSet(false),
    m_hasMTRHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

CoreInternalOutcome DialExecution::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialExecution.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialExecution.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskSessionId") && !value["TaskSessionId"].IsNull())
    {
        if (!value["TaskSessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialExecution.TaskSessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskSessionId = string(value["TaskSessionId"].GetString());
        m_taskSessionIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DialExecution.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialExecution.Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(value["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("AppVersion") && !value["AppVersion"].IsNull())
    {
        if (!value["AppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialExecution.AppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVersion = string(value["AppVersion"].GetString());
        m_appVersionHasBeenSet = true;
    }

    if (value.HasMember("Device") && !value["Device"].IsNull())
    {
        if (!value["Device"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialExecution.Device` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_device = string(value["Device"].GetString());
        m_deviceHasBeenSet = true;
    }

    if (value.HasMember("NetType") && !value["NetType"].IsNull())
    {
        if (!value["NetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialExecution.NetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netType = string(value["NetType"].GetString());
        m_netTypeHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialExecution.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialExecution.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("TargetIps") && !value["TargetIps"].IsNull())
    {
        if (!value["TargetIps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DialExecution.TargetIps` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetIps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_targetIps.push_back((*itr).GetString());
        }
        m_targetIpsHasBeenSet = true;
    }

    if (value.HasMember("TargetIpGeo") && !value["TargetIpGeo"].IsNull())
    {
        if (!value["TargetIpGeo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DialExecution.TargetIpGeo` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetIpGeo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DialTargetIpGeo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_targetIpGeo.push_back(item);
        }
        m_targetIpGeoHasBeenSet = true;
    }

    if (value.HasMember("Success") && !value["Success"].IsNull())
    {
        if (!value["Success"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DialExecution.Success` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_success = value["Success"].GetBool();
        m_successHasBeenSet = true;
    }

    if (value.HasMember("NotProbed") && !value["NotProbed"].IsNull())
    {
        if (!value["NotProbed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DialExecution.NotProbed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_notProbed = value["NotProbed"].GetBool();
        m_notProbedHasBeenSet = true;
    }

    if (value.HasMember("AvgDuration") && !value["AvgDuration"].IsNull())
    {
        if (!value["AvgDuration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DialExecution.AvgDuration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgDuration = value["AvgDuration"].GetDouble();
        m_avgDurationHasBeenSet = true;
    }

    if (value.HasMember("HasMTR") && !value["HasMTR"].IsNull())
    {
        if (!value["HasMTR"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DialExecution.HasMTR` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasMTR = value["HasMTR"].GetBool();
        m_hasMTRHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialExecution.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DialExecution::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskSessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskSessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskSessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Device";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_device.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netType.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_targetIpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetIps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetIps.begin(); itr != m_targetIps.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_targetIpGeoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetIpGeo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targetIpGeo.begin(); itr != m_targetIpGeo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_successHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Success";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_success, allocator);
    }

    if (m_notProbedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotProbed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notProbed, allocator);
    }

    if (m_avgDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgDuration, allocator);
    }

    if (m_hasMTRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasMTR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasMTR, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

}


string DialExecution::GetTaskId() const
{
    return m_taskId;
}

void DialExecution::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DialExecution::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DialExecution::GetTaskName() const
{
    return m_taskName;
}

void DialExecution::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool DialExecution::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string DialExecution::GetTaskSessionId() const
{
    return m_taskSessionId;
}

void DialExecution::SetTaskSessionId(const string& _taskSessionId)
{
    m_taskSessionId = _taskSessionId;
    m_taskSessionIdHasBeenSet = true;
}

bool DialExecution::TaskSessionIdHasBeenSet() const
{
    return m_taskSessionIdHasBeenSet;
}

int64_t DialExecution::GetStartTime() const
{
    return m_startTime;
}

void DialExecution::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DialExecution::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DialExecution::GetPlatform() const
{
    return m_platform;
}

void DialExecution::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DialExecution::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DialExecution::GetAppVersion() const
{
    return m_appVersion;
}

void DialExecution::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool DialExecution::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string DialExecution::GetDevice() const
{
    return m_device;
}

void DialExecution::SetDevice(const string& _device)
{
    m_device = _device;
    m_deviceHasBeenSet = true;
}

bool DialExecution::DeviceHasBeenSet() const
{
    return m_deviceHasBeenSet;
}

string DialExecution::GetNetType() const
{
    return m_netType;
}

void DialExecution::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool DialExecution::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string DialExecution::GetOperator() const
{
    return m_operator;
}

void DialExecution::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DialExecution::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string DialExecution::GetRegion() const
{
    return m_region;
}

void DialExecution::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DialExecution::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<string> DialExecution::GetTargetIps() const
{
    return m_targetIps;
}

void DialExecution::SetTargetIps(const vector<string>& _targetIps)
{
    m_targetIps = _targetIps;
    m_targetIpsHasBeenSet = true;
}

bool DialExecution::TargetIpsHasBeenSet() const
{
    return m_targetIpsHasBeenSet;
}

vector<DialTargetIpGeo> DialExecution::GetTargetIpGeo() const
{
    return m_targetIpGeo;
}

void DialExecution::SetTargetIpGeo(const vector<DialTargetIpGeo>& _targetIpGeo)
{
    m_targetIpGeo = _targetIpGeo;
    m_targetIpGeoHasBeenSet = true;
}

bool DialExecution::TargetIpGeoHasBeenSet() const
{
    return m_targetIpGeoHasBeenSet;
}

bool DialExecution::GetSuccess() const
{
    return m_success;
}

void DialExecution::SetSuccess(const bool& _success)
{
    m_success = _success;
    m_successHasBeenSet = true;
}

bool DialExecution::SuccessHasBeenSet() const
{
    return m_successHasBeenSet;
}

bool DialExecution::GetNotProbed() const
{
    return m_notProbed;
}

void DialExecution::SetNotProbed(const bool& _notProbed)
{
    m_notProbed = _notProbed;
    m_notProbedHasBeenSet = true;
}

bool DialExecution::NotProbedHasBeenSet() const
{
    return m_notProbedHasBeenSet;
}

double DialExecution::GetAvgDuration() const
{
    return m_avgDuration;
}

void DialExecution::SetAvgDuration(const double& _avgDuration)
{
    m_avgDuration = _avgDuration;
    m_avgDurationHasBeenSet = true;
}

bool DialExecution::AvgDurationHasBeenSet() const
{
    return m_avgDurationHasBeenSet;
}

bool DialExecution::GetHasMTR() const
{
    return m_hasMTR;
}

void DialExecution::SetHasMTR(const bool& _hasMTR)
{
    m_hasMTR = _hasMTR;
    m_hasMTRHasBeenSet = true;
}

bool DialExecution::HasMTRHasBeenSet() const
{
    return m_hasMTRHasBeenSet;
}

string DialExecution::GetSessionId() const
{
    return m_sessionId;
}

void DialExecution::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool DialExecution::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}


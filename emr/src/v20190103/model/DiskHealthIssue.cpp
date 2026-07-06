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

#include <tencentcloud/emr/v20190103/model/DiskHealthIssue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DiskHealthIssue::DiskHealthIssue() :
    m_diskIdHasBeenSet(false),
    m_mountDirHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_checkTypeHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_detectSourceHasBeenSet(false),
    m_firstDetectTimeHasBeenSet(false),
    m_lastDetectTimeHasBeenSet(false),
    m_detectDetailHasBeenSet(false)
{
}

CoreInternalOutcome DiskHealthIssue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskId") && !value["DiskId"].IsNull())
    {
        if (!value["DiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskHealthIssue.DiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskId = string(value["DiskId"].GetString());
        m_diskIdHasBeenSet = true;
    }

    if (value.HasMember("MountDir") && !value["MountDir"].IsNull())
    {
        if (!value["MountDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskHealthIssue.MountDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountDir = string(value["MountDir"].GetString());
        m_mountDirHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskHealthIssue.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("CheckType") && !value["CheckType"].IsNull())
    {
        if (!value["CheckType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskHealthIssue.CheckType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkType = value["CheckType"].GetInt64();
        m_checkTypeHasBeenSet = true;
    }

    if (value.HasMember("Severity") && !value["Severity"].IsNull())
    {
        if (!value["Severity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskHealthIssue.Severity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_severity = value["Severity"].GetInt64();
        m_severityHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskHealthIssue.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("DetectSource") && !value["DetectSource"].IsNull())
    {
        if (!value["DetectSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskHealthIssue.DetectSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectSource = string(value["DetectSource"].GetString());
        m_detectSourceHasBeenSet = true;
    }

    if (value.HasMember("FirstDetectTime") && !value["FirstDetectTime"].IsNull())
    {
        if (!value["FirstDetectTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskHealthIssue.FirstDetectTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstDetectTime = string(value["FirstDetectTime"].GetString());
        m_firstDetectTimeHasBeenSet = true;
    }

    if (value.HasMember("LastDetectTime") && !value["LastDetectTime"].IsNull())
    {
        if (!value["LastDetectTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskHealthIssue.LastDetectTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastDetectTime = string(value["LastDetectTime"].GetString());
        m_lastDetectTimeHasBeenSet = true;
    }

    if (value.HasMember("DetectDetail") && !value["DetectDetail"].IsNull())
    {
        if (!value["DetectDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskHealthIssue.DetectDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectDetail = string(value["DetectDetail"].GetString());
        m_detectDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiskHealthIssue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskId.c_str(), allocator).Move(), allocator);
    }

    if (m_mountDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountDir.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_checkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkType, allocator);
    }

    if (m_severityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Severity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_severity, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_detectSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectSource.c_str(), allocator).Move(), allocator);
    }

    if (m_firstDetectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstDetectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstDetectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastDetectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastDetectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastDetectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_detectDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectDetail.c_str(), allocator).Move(), allocator);
    }

}


string DiskHealthIssue::GetDiskId() const
{
    return m_diskId;
}

void DiskHealthIssue::SetDiskId(const string& _diskId)
{
    m_diskId = _diskId;
    m_diskIdHasBeenSet = true;
}

bool DiskHealthIssue::DiskIdHasBeenSet() const
{
    return m_diskIdHasBeenSet;
}

string DiskHealthIssue::GetMountDir() const
{
    return m_mountDir;
}

void DiskHealthIssue::SetMountDir(const string& _mountDir)
{
    m_mountDir = _mountDir;
    m_mountDirHasBeenSet = true;
}

bool DiskHealthIssue::MountDirHasBeenSet() const
{
    return m_mountDirHasBeenSet;
}

string DiskHealthIssue::GetDeviceName() const
{
    return m_deviceName;
}

void DiskHealthIssue::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DiskHealthIssue::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

int64_t DiskHealthIssue::GetCheckType() const
{
    return m_checkType;
}

void DiskHealthIssue::SetCheckType(const int64_t& _checkType)
{
    m_checkType = _checkType;
    m_checkTypeHasBeenSet = true;
}

bool DiskHealthIssue::CheckTypeHasBeenSet() const
{
    return m_checkTypeHasBeenSet;
}

int64_t DiskHealthIssue::GetSeverity() const
{
    return m_severity;
}

void DiskHealthIssue::SetSeverity(const int64_t& _severity)
{
    m_severity = _severity;
    m_severityHasBeenSet = true;
}

bool DiskHealthIssue::SeverityHasBeenSet() const
{
    return m_severityHasBeenSet;
}

int64_t DiskHealthIssue::GetState() const
{
    return m_state;
}

void DiskHealthIssue::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DiskHealthIssue::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string DiskHealthIssue::GetDetectSource() const
{
    return m_detectSource;
}

void DiskHealthIssue::SetDetectSource(const string& _detectSource)
{
    m_detectSource = _detectSource;
    m_detectSourceHasBeenSet = true;
}

bool DiskHealthIssue::DetectSourceHasBeenSet() const
{
    return m_detectSourceHasBeenSet;
}

string DiskHealthIssue::GetFirstDetectTime() const
{
    return m_firstDetectTime;
}

void DiskHealthIssue::SetFirstDetectTime(const string& _firstDetectTime)
{
    m_firstDetectTime = _firstDetectTime;
    m_firstDetectTimeHasBeenSet = true;
}

bool DiskHealthIssue::FirstDetectTimeHasBeenSet() const
{
    return m_firstDetectTimeHasBeenSet;
}

string DiskHealthIssue::GetLastDetectTime() const
{
    return m_lastDetectTime;
}

void DiskHealthIssue::SetLastDetectTime(const string& _lastDetectTime)
{
    m_lastDetectTime = _lastDetectTime;
    m_lastDetectTimeHasBeenSet = true;
}

bool DiskHealthIssue::LastDetectTimeHasBeenSet() const
{
    return m_lastDetectTimeHasBeenSet;
}

string DiskHealthIssue::GetDetectDetail() const
{
    return m_detectDetail;
}

void DiskHealthIssue::SetDetectDetail(const string& _detectDetail)
{
    m_detectDetail = _detectDetail;
    m_detectDetailHasBeenSet = true;
}

bool DiskHealthIssue::DetectDetailHasBeenSet() const
{
    return m_detectDetailHasBeenSet;
}


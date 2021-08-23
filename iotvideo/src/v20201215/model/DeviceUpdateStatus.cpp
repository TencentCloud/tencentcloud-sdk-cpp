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

#include <tencentcloud/iotvideo/v20201215/model/DeviceUpdateStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace std;

DeviceUpdateStatus::DeviceUpdateStatus() :
    m_deviceNameHasBeenSet(false),
    m_lastProcessTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_retcodeHasBeenSet(false),
    m_dstVersionHasBeenSet(false),
    m_percentHasBeenSet(false),
    m_oriVersionHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

CoreInternalOutcome DeviceUpdateStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceUpdateStatus.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("LastProcessTime") && !value["LastProcessTime"].IsNull())
    {
        if (!value["LastProcessTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceUpdateStatus.LastProcessTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastProcessTime = value["LastProcessTime"].GetUint64();
        m_lastProcessTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceUpdateStatus.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceUpdateStatus.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }

    if (value.HasMember("Retcode") && !value["Retcode"].IsNull())
    {
        if (!value["Retcode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceUpdateStatus.Retcode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retcode = value["Retcode"].GetInt64();
        m_retcodeHasBeenSet = true;
    }

    if (value.HasMember("DstVersion") && !value["DstVersion"].IsNull())
    {
        if (!value["DstVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceUpdateStatus.DstVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstVersion = string(value["DstVersion"].GetString());
        m_dstVersionHasBeenSet = true;
    }

    if (value.HasMember("Percent") && !value["Percent"].IsNull())
    {
        if (!value["Percent"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceUpdateStatus.Percent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_percent = value["Percent"].GetUint64();
        m_percentHasBeenSet = true;
    }

    if (value.HasMember("OriVersion") && !value["OriVersion"].IsNull())
    {
        if (!value["OriVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceUpdateStatus.OriVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oriVersion = string(value["OriVersion"].GetString());
        m_oriVersionHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceUpdateStatus.TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceUpdateStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_lastProcessTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastProcessTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastProcessTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_retcodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Retcode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retcode, allocator);
    }

    if (m_dstVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
    }

    if (m_oriVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oriVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

}


string DeviceUpdateStatus::GetDeviceName() const
{
    return m_deviceName;
}

void DeviceUpdateStatus::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DeviceUpdateStatus::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

uint64_t DeviceUpdateStatus::GetLastProcessTime() const
{
    return m_lastProcessTime;
}

void DeviceUpdateStatus::SetLastProcessTime(const uint64_t& _lastProcessTime)
{
    m_lastProcessTime = _lastProcessTime;
    m_lastProcessTimeHasBeenSet = true;
}

bool DeviceUpdateStatus::LastProcessTimeHasBeenSet() const
{
    return m_lastProcessTimeHasBeenSet;
}

uint64_t DeviceUpdateStatus::GetStatus() const
{
    return m_status;
}

void DeviceUpdateStatus::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DeviceUpdateStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DeviceUpdateStatus::GetErrMsg() const
{
    return m_errMsg;
}

void DeviceUpdateStatus::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool DeviceUpdateStatus::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

int64_t DeviceUpdateStatus::GetRetcode() const
{
    return m_retcode;
}

void DeviceUpdateStatus::SetRetcode(const int64_t& _retcode)
{
    m_retcode = _retcode;
    m_retcodeHasBeenSet = true;
}

bool DeviceUpdateStatus::RetcodeHasBeenSet() const
{
    return m_retcodeHasBeenSet;
}

string DeviceUpdateStatus::GetDstVersion() const
{
    return m_dstVersion;
}

void DeviceUpdateStatus::SetDstVersion(const string& _dstVersion)
{
    m_dstVersion = _dstVersion;
    m_dstVersionHasBeenSet = true;
}

bool DeviceUpdateStatus::DstVersionHasBeenSet() const
{
    return m_dstVersionHasBeenSet;
}

uint64_t DeviceUpdateStatus::GetPercent() const
{
    return m_percent;
}

void DeviceUpdateStatus::SetPercent(const uint64_t& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool DeviceUpdateStatus::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

string DeviceUpdateStatus::GetOriVersion() const
{
    return m_oriVersion;
}

void DeviceUpdateStatus::SetOriVersion(const string& _oriVersion)
{
    m_oriVersion = _oriVersion;
    m_oriVersionHasBeenSet = true;
}

bool DeviceUpdateStatus::OriVersionHasBeenSet() const
{
    return m_oriVersionHasBeenSet;
}

uint64_t DeviceUpdateStatus::GetTaskId() const
{
    return m_taskId;
}

void DeviceUpdateStatus::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DeviceUpdateStatus::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}


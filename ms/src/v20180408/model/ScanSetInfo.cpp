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

#include <tencentcloud/ms/v20180408/model/ScanSetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace rapidjson;
using namespace std;

ScanSetInfo::ScanSetInfo() :
    m_taskStatusHasBeenSet(false),
    m_appDetailInfoHasBeenSet(false),
    m_virusInfoHasBeenSet(false),
    m_vulInfoHasBeenSet(false),
    m_adInfoHasBeenSet(false),
    m_taskTimeHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_statusRefHasBeenSet(false),
    m_permissionInfoHasBeenSet(false),
    m_sensitiveInfoHasBeenSet(false)
{
}

CoreInternalOutcome ScanSetInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ScanSetInfo.TaskStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = value["TaskStatus"].GetUint64();
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("AppDetailInfo") && !value["AppDetailInfo"].IsNull())
    {
        if (!value["AppDetailInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ScanSetInfo.AppDetailInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_appDetailInfo.Deserialize(value["AppDetailInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_appDetailInfoHasBeenSet = true;
    }

    if (value.HasMember("VirusInfo") && !value["VirusInfo"].IsNull())
    {
        if (!value["VirusInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ScanSetInfo.VirusInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_virusInfo.Deserialize(value["VirusInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_virusInfoHasBeenSet = true;
    }

    if (value.HasMember("VulInfo") && !value["VulInfo"].IsNull())
    {
        if (!value["VulInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ScanSetInfo.VulInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vulInfo.Deserialize(value["VulInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vulInfoHasBeenSet = true;
    }

    if (value.HasMember("AdInfo") && !value["AdInfo"].IsNull())
    {
        if (!value["AdInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ScanSetInfo.AdInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_adInfo.Deserialize(value["AdInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_adInfoHasBeenSet = true;
    }

    if (value.HasMember("TaskTime") && !value["TaskTime"].IsNull())
    {
        if (!value["TaskTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ScanSetInfo.TaskTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskTime = value["TaskTime"].GetUint64();
        m_taskTimeHasBeenSet = true;
    }

    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ScanSetInfo.StatusCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = value["StatusCode"].GetUint64();
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScanSetInfo.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("StatusRef") && !value["StatusRef"].IsNull())
    {
        if (!value["StatusRef"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScanSetInfo.StatusRef` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusRef = string(value["StatusRef"].GetString());
        m_statusRefHasBeenSet = true;
    }

    if (value.HasMember("PermissionInfo") && !value["PermissionInfo"].IsNull())
    {
        if (!value["PermissionInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ScanSetInfo.PermissionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_permissionInfo.Deserialize(value["PermissionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_permissionInfoHasBeenSet = true;
    }

    if (value.HasMember("SensitiveInfo") && !value["SensitiveInfo"].IsNull())
    {
        if (!value["SensitiveInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ScanSetInfo.SensitiveInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sensitiveInfo.Deserialize(value["SensitiveInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sensitiveInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScanSetInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_taskStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskStatus, allocator);
    }

    if (m_appDetailInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppDetailInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_appDetailInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_virusInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VirusInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_virusInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vulInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VulInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_vulInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_adInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AdInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_adInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskTime, allocator);
    }

    if (m_statusCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusCode, allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_statusRefHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StatusRef";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_statusRef.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PermissionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_permissionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sensitiveInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SensitiveInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_sensitiveInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t ScanSetInfo::GetTaskStatus() const
{
    return m_taskStatus;
}

void ScanSetInfo::SetTaskStatus(const uint64_t& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool ScanSetInfo::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

AppDetailInfo ScanSetInfo::GetAppDetailInfo() const
{
    return m_appDetailInfo;
}

void ScanSetInfo::SetAppDetailInfo(const AppDetailInfo& _appDetailInfo)
{
    m_appDetailInfo = _appDetailInfo;
    m_appDetailInfoHasBeenSet = true;
}

bool ScanSetInfo::AppDetailInfoHasBeenSet() const
{
    return m_appDetailInfoHasBeenSet;
}

VirusInfo ScanSetInfo::GetVirusInfo() const
{
    return m_virusInfo;
}

void ScanSetInfo::SetVirusInfo(const VirusInfo& _virusInfo)
{
    m_virusInfo = _virusInfo;
    m_virusInfoHasBeenSet = true;
}

bool ScanSetInfo::VirusInfoHasBeenSet() const
{
    return m_virusInfoHasBeenSet;
}

VulInfo ScanSetInfo::GetVulInfo() const
{
    return m_vulInfo;
}

void ScanSetInfo::SetVulInfo(const VulInfo& _vulInfo)
{
    m_vulInfo = _vulInfo;
    m_vulInfoHasBeenSet = true;
}

bool ScanSetInfo::VulInfoHasBeenSet() const
{
    return m_vulInfoHasBeenSet;
}

AdInfo ScanSetInfo::GetAdInfo() const
{
    return m_adInfo;
}

void ScanSetInfo::SetAdInfo(const AdInfo& _adInfo)
{
    m_adInfo = _adInfo;
    m_adInfoHasBeenSet = true;
}

bool ScanSetInfo::AdInfoHasBeenSet() const
{
    return m_adInfoHasBeenSet;
}

uint64_t ScanSetInfo::GetTaskTime() const
{
    return m_taskTime;
}

void ScanSetInfo::SetTaskTime(const uint64_t& _taskTime)
{
    m_taskTime = _taskTime;
    m_taskTimeHasBeenSet = true;
}

bool ScanSetInfo::TaskTimeHasBeenSet() const
{
    return m_taskTimeHasBeenSet;
}

uint64_t ScanSetInfo::GetStatusCode() const
{
    return m_statusCode;
}

void ScanSetInfo::SetStatusCode(const uint64_t& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool ScanSetInfo::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string ScanSetInfo::GetStatusDesc() const
{
    return m_statusDesc;
}

void ScanSetInfo::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool ScanSetInfo::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string ScanSetInfo::GetStatusRef() const
{
    return m_statusRef;
}

void ScanSetInfo::SetStatusRef(const string& _statusRef)
{
    m_statusRef = _statusRef;
    m_statusRefHasBeenSet = true;
}

bool ScanSetInfo::StatusRefHasBeenSet() const
{
    return m_statusRefHasBeenSet;
}

ScanPermissionList ScanSetInfo::GetPermissionInfo() const
{
    return m_permissionInfo;
}

void ScanSetInfo::SetPermissionInfo(const ScanPermissionList& _permissionInfo)
{
    m_permissionInfo = _permissionInfo;
    m_permissionInfoHasBeenSet = true;
}

bool ScanSetInfo::PermissionInfoHasBeenSet() const
{
    return m_permissionInfoHasBeenSet;
}

ScanSensitiveList ScanSetInfo::GetSensitiveInfo() const
{
    return m_sensitiveInfo;
}

void ScanSetInfo::SetSensitiveInfo(const ScanSensitiveList& _sensitiveInfo)
{
    m_sensitiveInfo = _sensitiveInfo;
    m_sensitiveInfoHasBeenSet = true;
}

bool ScanSetInfo::SensitiveInfoHasBeenSet() const
{
    return m_sensitiveInfoHasBeenSet;
}


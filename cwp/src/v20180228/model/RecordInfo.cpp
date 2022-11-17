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

#include <tencentcloud/cwp/v20180228/model/RecordInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RecordInfo::RecordInfo() :
    m_hostIPHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_offlineTimeHasBeenSet(false),
    m_uninstallTimeHasBeenSet(false),
    m_uninstallCmdHasBeenSet(false),
    m_uuidHasBeenSet(false)
{
}

CoreInternalOutcome RecordInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostIP") && !value["HostIP"].IsNull())
    {
        if (!value["HostIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.HostIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIP = string(value["HostIP"].GetString());
        m_hostIPHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("OfflineTime") && !value["OfflineTime"].IsNull())
    {
        if (!value["OfflineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.OfflineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offlineTime = string(value["OfflineTime"].GetString());
        m_offlineTimeHasBeenSet = true;
    }

    if (value.HasMember("UninstallTime") && !value["UninstallTime"].IsNull())
    {
        if (!value["UninstallTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.UninstallTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uninstallTime = string(value["UninstallTime"].GetString());
        m_uninstallTimeHasBeenSet = true;
    }

    if (value.HasMember("UninstallCmd") && !value["UninstallCmd"].IsNull())
    {
        if (!value["UninstallCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.UninstallCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uninstallCmd = string(value["UninstallCmd"].GetString());
        m_uninstallCmdHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIP.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_offlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_uninstallTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UninstallTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uninstallTime.c_str(), allocator).Move(), allocator);
    }

    if (m_uninstallCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UninstallCmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uninstallCmd.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

}


string RecordInfo::GetHostIP() const
{
    return m_hostIP;
}

void RecordInfo::SetHostIP(const string& _hostIP)
{
    m_hostIP = _hostIP;
    m_hostIPHasBeenSet = true;
}

bool RecordInfo::HostIPHasBeenSet() const
{
    return m_hostIPHasBeenSet;
}

string RecordInfo::GetInstanceID() const
{
    return m_instanceID;
}

void RecordInfo::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool RecordInfo::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string RecordInfo::GetOfflineTime() const
{
    return m_offlineTime;
}

void RecordInfo::SetOfflineTime(const string& _offlineTime)
{
    m_offlineTime = _offlineTime;
    m_offlineTimeHasBeenSet = true;
}

bool RecordInfo::OfflineTimeHasBeenSet() const
{
    return m_offlineTimeHasBeenSet;
}

string RecordInfo::GetUninstallTime() const
{
    return m_uninstallTime;
}

void RecordInfo::SetUninstallTime(const string& _uninstallTime)
{
    m_uninstallTime = _uninstallTime;
    m_uninstallTimeHasBeenSet = true;
}

bool RecordInfo::UninstallTimeHasBeenSet() const
{
    return m_uninstallTimeHasBeenSet;
}

string RecordInfo::GetUninstallCmd() const
{
    return m_uninstallCmd;
}

void RecordInfo::SetUninstallCmd(const string& _uninstallCmd)
{
    m_uninstallCmd = _uninstallCmd;
    m_uninstallCmdHasBeenSet = true;
}

bool RecordInfo::UninstallCmdHasBeenSet() const
{
    return m_uninstallCmdHasBeenSet;
}

string RecordInfo::GetUuid() const
{
    return m_uuid;
}

void RecordInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool RecordInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}


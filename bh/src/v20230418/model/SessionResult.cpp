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

#include <tencentcloud/bh/v20230418/model/SessionResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

SessionResult::SessionResult() :
    m_userNameHasBeenSet(false),
    m_realNameHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_fromIpHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_countHasBeenSet(false),
    m_dangerCountHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_idHasBeenSet(false),
    m_apCodeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_appAssetKindHasBeenSet(false),
    m_appAssetUrlHasBeenSet(false),
    m_replayTypeHasBeenSet(false),
    m_deviceKindHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_workloadHasBeenSet(false),
    m_podNameHasBeenSet(false)
{
}

CoreInternalOutcome SessionResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("RealName") && !value["RealName"].IsNull())
    {
        if (!value["RealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.RealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realName = string(value["RealName"].GetString());
        m_realNameHasBeenSet = true;
    }

    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.Account` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_account = string(value["Account"].GetString());
        m_accountHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("FromIp") && !value["FromIp"].IsNull())
    {
        if (!value["FromIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.FromIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromIp = string(value["FromIp"].GetString());
        m_fromIpHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("DangerCount") && !value["DangerCount"].IsNull())
    {
        if (!value["DangerCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.DangerCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dangerCount = value["DangerCount"].GetUint64();
        m_dangerCountHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ApCode") && !value["ApCode"].IsNull())
    {
        if (!value["ApCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.ApCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apCode = string(value["ApCode"].GetString());
        m_apCodeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("AppAssetKind") && !value["AppAssetKind"].IsNull())
    {
        if (!value["AppAssetKind"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.AppAssetKind` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appAssetKind = value["AppAssetKind"].GetUint64();
        m_appAssetKindHasBeenSet = true;
    }

    if (value.HasMember("AppAssetUrl") && !value["AppAssetUrl"].IsNull())
    {
        if (!value["AppAssetUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.AppAssetUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appAssetUrl = string(value["AppAssetUrl"].GetString());
        m_appAssetUrlHasBeenSet = true;
    }

    if (value.HasMember("ReplayType") && !value["ReplayType"].IsNull())
    {
        if (!value["ReplayType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.ReplayType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_replayType = value["ReplayType"].GetUint64();
        m_replayTypeHasBeenSet = true;
    }

    if (value.HasMember("DeviceKind") && !value["DeviceKind"].IsNull())
    {
        if (!value["DeviceKind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.DeviceKind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceKind = string(value["DeviceKind"].GetString());
        m_deviceKindHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Workload") && !value["Workload"].IsNull())
    {
        if (!value["Workload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.Workload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workload = string(value["Workload"].GetString());
        m_workloadHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResult.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SessionResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_realNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realName.c_str(), allocator).Move(), allocator);
    }

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_account.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_fromIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fromIp.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_dangerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DangerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dangerCount, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_apCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apCode.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_appAssetKindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppAssetKind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appAssetKind, allocator);
    }

    if (m_appAssetUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppAssetUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appAssetUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_replayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replayType, allocator);
    }

    if (m_deviceKindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceKind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceKind.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Workload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workload.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

}


string SessionResult::GetUserName() const
{
    return m_userName;
}

void SessionResult::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool SessionResult::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string SessionResult::GetRealName() const
{
    return m_realName;
}

void SessionResult::SetRealName(const string& _realName)
{
    m_realName = _realName;
    m_realNameHasBeenSet = true;
}

bool SessionResult::RealNameHasBeenSet() const
{
    return m_realNameHasBeenSet;
}

string SessionResult::GetAccount() const
{
    return m_account;
}

void SessionResult::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool SessionResult::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string SessionResult::GetStartTime() const
{
    return m_startTime;
}

void SessionResult::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SessionResult::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string SessionResult::GetEndTime() const
{
    return m_endTime;
}

void SessionResult::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SessionResult::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t SessionResult::GetSize() const
{
    return m_size;
}

void SessionResult::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool SessionResult::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string SessionResult::GetInstanceId() const
{
    return m_instanceId;
}

void SessionResult::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SessionResult::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SessionResult::GetDeviceName() const
{
    return m_deviceName;
}

void SessionResult::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool SessionResult::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string SessionResult::GetPrivateIp() const
{
    return m_privateIp;
}

void SessionResult::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool SessionResult::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string SessionResult::GetPublicIp() const
{
    return m_publicIp;
}

void SessionResult::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool SessionResult::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string SessionResult::GetFromIp() const
{
    return m_fromIp;
}

void SessionResult::SetFromIp(const string& _fromIp)
{
    m_fromIp = _fromIp;
    m_fromIpHasBeenSet = true;
}

bool SessionResult::FromIpHasBeenSet() const
{
    return m_fromIpHasBeenSet;
}

double SessionResult::GetDuration() const
{
    return m_duration;
}

void SessionResult::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool SessionResult::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

uint64_t SessionResult::GetCount() const
{
    return m_count;
}

void SessionResult::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool SessionResult::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

uint64_t SessionResult::GetDangerCount() const
{
    return m_dangerCount;
}

void SessionResult::SetDangerCount(const uint64_t& _dangerCount)
{
    m_dangerCount = _dangerCount;
    m_dangerCountHasBeenSet = true;
}

bool SessionResult::DangerCountHasBeenSet() const
{
    return m_dangerCountHasBeenSet;
}

uint64_t SessionResult::GetStatus() const
{
    return m_status;
}

void SessionResult::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SessionResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SessionResult::GetId() const
{
    return m_id;
}

void SessionResult::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SessionResult::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string SessionResult::GetApCode() const
{
    return m_apCode;
}

void SessionResult::SetApCode(const string& _apCode)
{
    m_apCode = _apCode;
    m_apCodeHasBeenSet = true;
}

bool SessionResult::ApCodeHasBeenSet() const
{
    return m_apCodeHasBeenSet;
}

string SessionResult::GetProtocol() const
{
    return m_protocol;
}

void SessionResult::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool SessionResult::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

uint64_t SessionResult::GetAppAssetKind() const
{
    return m_appAssetKind;
}

void SessionResult::SetAppAssetKind(const uint64_t& _appAssetKind)
{
    m_appAssetKind = _appAssetKind;
    m_appAssetKindHasBeenSet = true;
}

bool SessionResult::AppAssetKindHasBeenSet() const
{
    return m_appAssetKindHasBeenSet;
}

string SessionResult::GetAppAssetUrl() const
{
    return m_appAssetUrl;
}

void SessionResult::SetAppAssetUrl(const string& _appAssetUrl)
{
    m_appAssetUrl = _appAssetUrl;
    m_appAssetUrlHasBeenSet = true;
}

bool SessionResult::AppAssetUrlHasBeenSet() const
{
    return m_appAssetUrlHasBeenSet;
}

uint64_t SessionResult::GetReplayType() const
{
    return m_replayType;
}

void SessionResult::SetReplayType(const uint64_t& _replayType)
{
    m_replayType = _replayType;
    m_replayTypeHasBeenSet = true;
}

bool SessionResult::ReplayTypeHasBeenSet() const
{
    return m_replayTypeHasBeenSet;
}

string SessionResult::GetDeviceKind() const
{
    return m_deviceKind;
}

void SessionResult::SetDeviceKind(const string& _deviceKind)
{
    m_deviceKind = _deviceKind;
    m_deviceKindHasBeenSet = true;
}

bool SessionResult::DeviceKindHasBeenSet() const
{
    return m_deviceKindHasBeenSet;
}

string SessionResult::GetNamespace() const
{
    return m_namespace;
}

void SessionResult::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool SessionResult::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string SessionResult::GetWorkload() const
{
    return m_workload;
}

void SessionResult::SetWorkload(const string& _workload)
{
    m_workload = _workload;
    m_workloadHasBeenSet = true;
}

bool SessionResult::WorkloadHasBeenSet() const
{
    return m_workloadHasBeenSet;
}

string SessionResult::GetPodName() const
{
    return m_podName;
}

void SessionResult::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool SessionResult::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}


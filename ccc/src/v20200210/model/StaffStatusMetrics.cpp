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

#include <tencentcloud/ccc/v20200210/model/StaffStatusMetrics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

StaffStatusMetrics::StaffStatusMetrics() :
    m_emailHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusExtraHasBeenSet(false),
    m_onlineDurationHasBeenSet(false),
    m_freeDurationHasBeenSet(false),
    m_busyDurationHasBeenSet(false),
    m_notReadyDurationHasBeenSet(false),
    m_restDurationHasBeenSet(false),
    m_afterCallWorkDurationHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_reserveRestHasBeenSet(false),
    m_reserveNotReadyHasBeenSet(false),
    m_useMobileAcceptHasBeenSet(false),
    m_useMobileCallOutHasBeenSet(false),
    m_lastOnlineTimestampHasBeenSet(false),
    m_lastStatusTimestampHasBeenSet(false),
    m_clientInfoHasBeenSet(false)
{
}

CoreInternalOutcome StaffStatusMetrics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatusMetrics.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatusMetrics.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusExtra") && !value["StatusExtra"].IsNull())
    {
        if (!value["StatusExtra"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatusMetrics.StatusExtra` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_statusExtra.Deserialize(value["StatusExtra"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statusExtraHasBeenSet = true;
    }

    if (value.HasMember("OnlineDuration") && !value["OnlineDuration"].IsNull())
    {
        if (!value["OnlineDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatusMetrics.OnlineDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_onlineDuration = value["OnlineDuration"].GetInt64();
        m_onlineDurationHasBeenSet = true;
    }

    if (value.HasMember("FreeDuration") && !value["FreeDuration"].IsNull())
    {
        if (!value["FreeDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatusMetrics.FreeDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_freeDuration = value["FreeDuration"].GetInt64();
        m_freeDurationHasBeenSet = true;
    }

    if (value.HasMember("BusyDuration") && !value["BusyDuration"].IsNull())
    {
        if (!value["BusyDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatusMetrics.BusyDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_busyDuration = value["BusyDuration"].GetInt64();
        m_busyDurationHasBeenSet = true;
    }

    if (value.HasMember("NotReadyDuration") && !value["NotReadyDuration"].IsNull())
    {
        if (!value["NotReadyDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatusMetrics.NotReadyDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notReadyDuration = value["NotReadyDuration"].GetInt64();
        m_notReadyDurationHasBeenSet = true;
    }

    if (value.HasMember("RestDuration") && !value["RestDuration"].IsNull())
    {
        if (!value["RestDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatusMetrics.RestDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_restDuration = value["RestDuration"].GetInt64();
        m_restDurationHasBeenSet = true;
    }

    if (value.HasMember("AfterCallWorkDuration") && !value["AfterCallWorkDuration"].IsNull())
    {
        if (!value["AfterCallWorkDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatusMetrics.AfterCallWorkDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_afterCallWorkDuration = value["AfterCallWorkDuration"].GetInt64();
        m_afterCallWorkDurationHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatusMetrics.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("ReserveRest") && !value["ReserveRest"].IsNull())
    {
        if (!value["ReserveRest"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatusMetrics.ReserveRest` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_reserveRest = value["ReserveRest"].GetBool();
        m_reserveRestHasBeenSet = true;
    }

    if (value.HasMember("ReserveNotReady") && !value["ReserveNotReady"].IsNull())
    {
        if (!value["ReserveNotReady"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatusMetrics.ReserveNotReady` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_reserveNotReady = value["ReserveNotReady"].GetBool();
        m_reserveNotReadyHasBeenSet = true;
    }

    if (value.HasMember("UseMobileAccept") && !value["UseMobileAccept"].IsNull())
    {
        if (!value["UseMobileAccept"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatusMetrics.UseMobileAccept` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_useMobileAccept = value["UseMobileAccept"].GetInt64();
        m_useMobileAcceptHasBeenSet = true;
    }

    if (value.HasMember("UseMobileCallOut") && !value["UseMobileCallOut"].IsNull())
    {
        if (!value["UseMobileCallOut"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatusMetrics.UseMobileCallOut` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useMobileCallOut = value["UseMobileCallOut"].GetBool();
        m_useMobileCallOutHasBeenSet = true;
    }

    if (value.HasMember("LastOnlineTimestamp") && !value["LastOnlineTimestamp"].IsNull())
    {
        if (!value["LastOnlineTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatusMetrics.LastOnlineTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastOnlineTimestamp = value["LastOnlineTimestamp"].GetInt64();
        m_lastOnlineTimestampHasBeenSet = true;
    }

    if (value.HasMember("LastStatusTimestamp") && !value["LastStatusTimestamp"].IsNull())
    {
        if (!value["LastStatusTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatusMetrics.LastStatusTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastStatusTimestamp = value["LastStatusTimestamp"].GetInt64();
        m_lastStatusTimestampHasBeenSet = true;
    }

    if (value.HasMember("ClientInfo") && !value["ClientInfo"].IsNull())
    {
        if (!value["ClientInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StaffStatusMetrics.ClientInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ClientInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClientInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clientInfo.push_back(item);
        }
        m_clientInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StaffStatusMetrics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_statusExtraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusExtra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_statusExtra.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_onlineDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlineDuration, allocator);
    }

    if (m_freeDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freeDuration, allocator);
    }

    if (m_busyDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusyDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_busyDuration, allocator);
    }

    if (m_notReadyDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotReadyDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notReadyDuration, allocator);
    }

    if (m_restDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restDuration, allocator);
    }

    if (m_afterCallWorkDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AfterCallWorkDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_afterCallWorkDuration, allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_reserveRestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReserveRest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reserveRest, allocator);
    }

    if (m_reserveNotReadyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReserveNotReady";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reserveNotReady, allocator);
    }

    if (m_useMobileAcceptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseMobileAccept";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useMobileAccept, allocator);
    }

    if (m_useMobileCallOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseMobileCallOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useMobileCallOut, allocator);
    }

    if (m_lastOnlineTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastOnlineTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastOnlineTimestamp, allocator);
    }

    if (m_lastStatusTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastStatusTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastStatusTimestamp, allocator);
    }

    if (m_clientInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clientInfo.begin(); itr != m_clientInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string StaffStatusMetrics::GetEmail() const
{
    return m_email;
}

void StaffStatusMetrics::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool StaffStatusMetrics::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string StaffStatusMetrics::GetStatus() const
{
    return m_status;
}

void StaffStatusMetrics::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool StaffStatusMetrics::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

StaffStatusExtra StaffStatusMetrics::GetStatusExtra() const
{
    return m_statusExtra;
}

void StaffStatusMetrics::SetStatusExtra(const StaffStatusExtra& _statusExtra)
{
    m_statusExtra = _statusExtra;
    m_statusExtraHasBeenSet = true;
}

bool StaffStatusMetrics::StatusExtraHasBeenSet() const
{
    return m_statusExtraHasBeenSet;
}

int64_t StaffStatusMetrics::GetOnlineDuration() const
{
    return m_onlineDuration;
}

void StaffStatusMetrics::SetOnlineDuration(const int64_t& _onlineDuration)
{
    m_onlineDuration = _onlineDuration;
    m_onlineDurationHasBeenSet = true;
}

bool StaffStatusMetrics::OnlineDurationHasBeenSet() const
{
    return m_onlineDurationHasBeenSet;
}

int64_t StaffStatusMetrics::GetFreeDuration() const
{
    return m_freeDuration;
}

void StaffStatusMetrics::SetFreeDuration(const int64_t& _freeDuration)
{
    m_freeDuration = _freeDuration;
    m_freeDurationHasBeenSet = true;
}

bool StaffStatusMetrics::FreeDurationHasBeenSet() const
{
    return m_freeDurationHasBeenSet;
}

int64_t StaffStatusMetrics::GetBusyDuration() const
{
    return m_busyDuration;
}

void StaffStatusMetrics::SetBusyDuration(const int64_t& _busyDuration)
{
    m_busyDuration = _busyDuration;
    m_busyDurationHasBeenSet = true;
}

bool StaffStatusMetrics::BusyDurationHasBeenSet() const
{
    return m_busyDurationHasBeenSet;
}

int64_t StaffStatusMetrics::GetNotReadyDuration() const
{
    return m_notReadyDuration;
}

void StaffStatusMetrics::SetNotReadyDuration(const int64_t& _notReadyDuration)
{
    m_notReadyDuration = _notReadyDuration;
    m_notReadyDurationHasBeenSet = true;
}

bool StaffStatusMetrics::NotReadyDurationHasBeenSet() const
{
    return m_notReadyDurationHasBeenSet;
}

int64_t StaffStatusMetrics::GetRestDuration() const
{
    return m_restDuration;
}

void StaffStatusMetrics::SetRestDuration(const int64_t& _restDuration)
{
    m_restDuration = _restDuration;
    m_restDurationHasBeenSet = true;
}

bool StaffStatusMetrics::RestDurationHasBeenSet() const
{
    return m_restDurationHasBeenSet;
}

int64_t StaffStatusMetrics::GetAfterCallWorkDuration() const
{
    return m_afterCallWorkDuration;
}

void StaffStatusMetrics::SetAfterCallWorkDuration(const int64_t& _afterCallWorkDuration)
{
    m_afterCallWorkDuration = _afterCallWorkDuration;
    m_afterCallWorkDurationHasBeenSet = true;
}

bool StaffStatusMetrics::AfterCallWorkDurationHasBeenSet() const
{
    return m_afterCallWorkDurationHasBeenSet;
}

string StaffStatusMetrics::GetReason() const
{
    return m_reason;
}

void StaffStatusMetrics::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool StaffStatusMetrics::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

bool StaffStatusMetrics::GetReserveRest() const
{
    return m_reserveRest;
}

void StaffStatusMetrics::SetReserveRest(const bool& _reserveRest)
{
    m_reserveRest = _reserveRest;
    m_reserveRestHasBeenSet = true;
}

bool StaffStatusMetrics::ReserveRestHasBeenSet() const
{
    return m_reserveRestHasBeenSet;
}

bool StaffStatusMetrics::GetReserveNotReady() const
{
    return m_reserveNotReady;
}

void StaffStatusMetrics::SetReserveNotReady(const bool& _reserveNotReady)
{
    m_reserveNotReady = _reserveNotReady;
    m_reserveNotReadyHasBeenSet = true;
}

bool StaffStatusMetrics::ReserveNotReadyHasBeenSet() const
{
    return m_reserveNotReadyHasBeenSet;
}

int64_t StaffStatusMetrics::GetUseMobileAccept() const
{
    return m_useMobileAccept;
}

void StaffStatusMetrics::SetUseMobileAccept(const int64_t& _useMobileAccept)
{
    m_useMobileAccept = _useMobileAccept;
    m_useMobileAcceptHasBeenSet = true;
}

bool StaffStatusMetrics::UseMobileAcceptHasBeenSet() const
{
    return m_useMobileAcceptHasBeenSet;
}

bool StaffStatusMetrics::GetUseMobileCallOut() const
{
    return m_useMobileCallOut;
}

void StaffStatusMetrics::SetUseMobileCallOut(const bool& _useMobileCallOut)
{
    m_useMobileCallOut = _useMobileCallOut;
    m_useMobileCallOutHasBeenSet = true;
}

bool StaffStatusMetrics::UseMobileCallOutHasBeenSet() const
{
    return m_useMobileCallOutHasBeenSet;
}

int64_t StaffStatusMetrics::GetLastOnlineTimestamp() const
{
    return m_lastOnlineTimestamp;
}

void StaffStatusMetrics::SetLastOnlineTimestamp(const int64_t& _lastOnlineTimestamp)
{
    m_lastOnlineTimestamp = _lastOnlineTimestamp;
    m_lastOnlineTimestampHasBeenSet = true;
}

bool StaffStatusMetrics::LastOnlineTimestampHasBeenSet() const
{
    return m_lastOnlineTimestampHasBeenSet;
}

int64_t StaffStatusMetrics::GetLastStatusTimestamp() const
{
    return m_lastStatusTimestamp;
}

void StaffStatusMetrics::SetLastStatusTimestamp(const int64_t& _lastStatusTimestamp)
{
    m_lastStatusTimestamp = _lastStatusTimestamp;
    m_lastStatusTimestampHasBeenSet = true;
}

bool StaffStatusMetrics::LastStatusTimestampHasBeenSet() const
{
    return m_lastStatusTimestampHasBeenSet;
}

vector<ClientInfo> StaffStatusMetrics::GetClientInfo() const
{
    return m_clientInfo;
}

void StaffStatusMetrics::SetClientInfo(const vector<ClientInfo>& _clientInfo)
{
    m_clientInfo = _clientInfo;
    m_clientInfoHasBeenSet = true;
}

bool StaffStatusMetrics::ClientInfoHasBeenSet() const
{
    return m_clientInfoHasBeenSet;
}


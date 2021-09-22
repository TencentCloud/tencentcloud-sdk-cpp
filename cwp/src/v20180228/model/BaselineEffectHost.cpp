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

#include <tencentcloud/cwp/v20180228/model/BaselineEffectHost.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BaselineEffectHost::BaselineEffectHost() :
    m_passCountHasBeenSet(false),
    m_failCountHasBeenSet(false),
    m_firstScanTimeHasBeenSet(false),
    m_lastScanTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_aliasNameHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_maxStatusHasBeenSet(false)
{
}

CoreInternalOutcome BaselineEffectHost::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PassCount") && !value["PassCount"].IsNull())
    {
        if (!value["PassCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineEffectHost.PassCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_passCount = value["PassCount"].GetUint64();
        m_passCountHasBeenSet = true;
    }

    if (value.HasMember("FailCount") && !value["FailCount"].IsNull())
    {
        if (!value["FailCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineEffectHost.FailCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failCount = value["FailCount"].GetUint64();
        m_failCountHasBeenSet = true;
    }

    if (value.HasMember("FirstScanTime") && !value["FirstScanTime"].IsNull())
    {
        if (!value["FirstScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineEffectHost.FirstScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstScanTime = string(value["FirstScanTime"].GetString());
        m_firstScanTimeHasBeenSet = true;
    }

    if (value.HasMember("LastScanTime") && !value["LastScanTime"].IsNull())
    {
        if (!value["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineEffectHost.LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(value["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineEffectHost.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineEffectHost.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineEffectHost.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("AliasName") && !value["AliasName"].IsNull())
    {
        if (!value["AliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineEffectHost.AliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasName = string(value["AliasName"].GetString());
        m_aliasNameHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineEffectHost.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("MaxStatus") && !value["MaxStatus"].IsNull())
    {
        if (!value["MaxStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineEffectHost.MaxStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStatus = value["MaxStatus"].GetUint64();
        m_maxStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineEffectHost::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_passCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passCount, allocator);
    }

    if (m_failCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failCount, allocator);
    }

    if (m_firstScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasName.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_maxStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStatus, allocator);
    }

}


uint64_t BaselineEffectHost::GetPassCount() const
{
    return m_passCount;
}

void BaselineEffectHost::SetPassCount(const uint64_t& _passCount)
{
    m_passCount = _passCount;
    m_passCountHasBeenSet = true;
}

bool BaselineEffectHost::PassCountHasBeenSet() const
{
    return m_passCountHasBeenSet;
}

uint64_t BaselineEffectHost::GetFailCount() const
{
    return m_failCount;
}

void BaselineEffectHost::SetFailCount(const uint64_t& _failCount)
{
    m_failCount = _failCount;
    m_failCountHasBeenSet = true;
}

bool BaselineEffectHost::FailCountHasBeenSet() const
{
    return m_failCountHasBeenSet;
}

string BaselineEffectHost::GetFirstScanTime() const
{
    return m_firstScanTime;
}

void BaselineEffectHost::SetFirstScanTime(const string& _firstScanTime)
{
    m_firstScanTime = _firstScanTime;
    m_firstScanTimeHasBeenSet = true;
}

bool BaselineEffectHost::FirstScanTimeHasBeenSet() const
{
    return m_firstScanTimeHasBeenSet;
}

string BaselineEffectHost::GetLastScanTime() const
{
    return m_lastScanTime;
}

void BaselineEffectHost::SetLastScanTime(const string& _lastScanTime)
{
    m_lastScanTime = _lastScanTime;
    m_lastScanTimeHasBeenSet = true;
}

bool BaselineEffectHost::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

uint64_t BaselineEffectHost::GetStatus() const
{
    return m_status;
}

void BaselineEffectHost::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BaselineEffectHost::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BaselineEffectHost::GetQuuid() const
{
    return m_quuid;
}

void BaselineEffectHost::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool BaselineEffectHost::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string BaselineEffectHost::GetHostIp() const
{
    return m_hostIp;
}

void BaselineEffectHost::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool BaselineEffectHost::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string BaselineEffectHost::GetAliasName() const
{
    return m_aliasName;
}

void BaselineEffectHost::SetAliasName(const string& _aliasName)
{
    m_aliasName = _aliasName;
    m_aliasNameHasBeenSet = true;
}

bool BaselineEffectHost::AliasNameHasBeenSet() const
{
    return m_aliasNameHasBeenSet;
}

string BaselineEffectHost::GetUuid() const
{
    return m_uuid;
}

void BaselineEffectHost::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool BaselineEffectHost::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

uint64_t BaselineEffectHost::GetMaxStatus() const
{
    return m_maxStatus;
}

void BaselineEffectHost::SetMaxStatus(const uint64_t& _maxStatus)
{
    m_maxStatus = _maxStatus;
    m_maxStatusHasBeenSet = true;
}

bool BaselineEffectHost::MaxStatusHasBeenSet() const
{
    return m_maxStatusHasBeenSet;
}


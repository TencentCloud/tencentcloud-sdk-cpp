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

#include <tencentcloud/antiddos/v20200309/model/L7RuleHealth.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

L7RuleHealth::L7RuleHealth() :
    m_statusHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_aliveNumHasBeenSet(false),
    m_kickNumHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_protocolFlagHasBeenSet(false),
    m_passiveEnableHasBeenSet(false),
    m_blockInterHasBeenSet(false),
    m_failedCountInterHasBeenSet(false),
    m_failedThresholdHasBeenSet(false),
    m_passiveStatusCodeHasBeenSet(false),
    m_passiveStatusHasBeenSet(false)
{
}

CoreInternalOutcome L7RuleHealth::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L7RuleHealth.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L7RuleHealth.Enable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetUint64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7RuleHealth.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7RuleHealth.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L7RuleHealth.Interval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetUint64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("AliveNum") && !value["AliveNum"].IsNull())
    {
        if (!value["AliveNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L7RuleHealth.AliveNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aliveNum = value["AliveNum"].GetUint64();
        m_aliveNumHasBeenSet = true;
    }

    if (value.HasMember("KickNum") && !value["KickNum"].IsNull())
    {
        if (!value["KickNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L7RuleHealth.KickNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_kickNum = value["KickNum"].GetUint64();
        m_kickNumHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7RuleHealth.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L7RuleHealth.StatusCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = value["StatusCode"].GetUint64();
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("ProtocolFlag") && !value["ProtocolFlag"].IsNull())
    {
        if (!value["ProtocolFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L7RuleHealth.ProtocolFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protocolFlag = value["ProtocolFlag"].GetUint64();
        m_protocolFlagHasBeenSet = true;
    }

    if (value.HasMember("PassiveEnable") && !value["PassiveEnable"].IsNull())
    {
        if (!value["PassiveEnable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L7RuleHealth.PassiveEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_passiveEnable = value["PassiveEnable"].GetUint64();
        m_passiveEnableHasBeenSet = true;
    }

    if (value.HasMember("BlockInter") && !value["BlockInter"].IsNull())
    {
        if (!value["BlockInter"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L7RuleHealth.BlockInter` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_blockInter = value["BlockInter"].GetUint64();
        m_blockInterHasBeenSet = true;
    }

    if (value.HasMember("FailedCountInter") && !value["FailedCountInter"].IsNull())
    {
        if (!value["FailedCountInter"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L7RuleHealth.FailedCountInter` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failedCountInter = value["FailedCountInter"].GetUint64();
        m_failedCountInterHasBeenSet = true;
    }

    if (value.HasMember("FailedThreshold") && !value["FailedThreshold"].IsNull())
    {
        if (!value["FailedThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L7RuleHealth.FailedThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failedThreshold = value["FailedThreshold"].GetUint64();
        m_failedThresholdHasBeenSet = true;
    }

    if (value.HasMember("PassiveStatusCode") && !value["PassiveStatusCode"].IsNull())
    {
        if (!value["PassiveStatusCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L7RuleHealth.PassiveStatusCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_passiveStatusCode = value["PassiveStatusCode"].GetUint64();
        m_passiveStatusCodeHasBeenSet = true;
    }

    if (value.HasMember("PassiveStatus") && !value["PassiveStatus"].IsNull())
    {
        if (!value["PassiveStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L7RuleHealth.PassiveStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_passiveStatus = value["PassiveStatus"].GetUint64();
        m_passiveStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void L7RuleHealth::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

    if (m_aliveNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliveNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aliveNum, allocator);
    }

    if (m_kickNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KickNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kickNum, allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusCode, allocator);
    }

    if (m_protocolFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protocolFlag, allocator);
    }

    if (m_passiveEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassiveEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passiveEnable, allocator);
    }

    if (m_blockInterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockInter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockInter, allocator);
    }

    if (m_failedCountInterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedCountInter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedCountInter, allocator);
    }

    if (m_failedThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedThreshold, allocator);
    }

    if (m_passiveStatusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassiveStatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passiveStatusCode, allocator);
    }

    if (m_passiveStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassiveStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passiveStatus, allocator);
    }

}


uint64_t L7RuleHealth::GetStatus() const
{
    return m_status;
}

void L7RuleHealth::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool L7RuleHealth::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t L7RuleHealth::GetEnable() const
{
    return m_enable;
}

void L7RuleHealth::SetEnable(const uint64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool L7RuleHealth::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string L7RuleHealth::GetRuleId() const
{
    return m_ruleId;
}

void L7RuleHealth::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool L7RuleHealth::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string L7RuleHealth::GetUrl() const
{
    return m_url;
}

void L7RuleHealth::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool L7RuleHealth::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

uint64_t L7RuleHealth::GetInterval() const
{
    return m_interval;
}

void L7RuleHealth::SetInterval(const uint64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool L7RuleHealth::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

uint64_t L7RuleHealth::GetAliveNum() const
{
    return m_aliveNum;
}

void L7RuleHealth::SetAliveNum(const uint64_t& _aliveNum)
{
    m_aliveNum = _aliveNum;
    m_aliveNumHasBeenSet = true;
}

bool L7RuleHealth::AliveNumHasBeenSet() const
{
    return m_aliveNumHasBeenSet;
}

uint64_t L7RuleHealth::GetKickNum() const
{
    return m_kickNum;
}

void L7RuleHealth::SetKickNum(const uint64_t& _kickNum)
{
    m_kickNum = _kickNum;
    m_kickNumHasBeenSet = true;
}

bool L7RuleHealth::KickNumHasBeenSet() const
{
    return m_kickNumHasBeenSet;
}

string L7RuleHealth::GetMethod() const
{
    return m_method;
}

void L7RuleHealth::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool L7RuleHealth::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

uint64_t L7RuleHealth::GetStatusCode() const
{
    return m_statusCode;
}

void L7RuleHealth::SetStatusCode(const uint64_t& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool L7RuleHealth::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

uint64_t L7RuleHealth::GetProtocolFlag() const
{
    return m_protocolFlag;
}

void L7RuleHealth::SetProtocolFlag(const uint64_t& _protocolFlag)
{
    m_protocolFlag = _protocolFlag;
    m_protocolFlagHasBeenSet = true;
}

bool L7RuleHealth::ProtocolFlagHasBeenSet() const
{
    return m_protocolFlagHasBeenSet;
}

uint64_t L7RuleHealth::GetPassiveEnable() const
{
    return m_passiveEnable;
}

void L7RuleHealth::SetPassiveEnable(const uint64_t& _passiveEnable)
{
    m_passiveEnable = _passiveEnable;
    m_passiveEnableHasBeenSet = true;
}

bool L7RuleHealth::PassiveEnableHasBeenSet() const
{
    return m_passiveEnableHasBeenSet;
}

uint64_t L7RuleHealth::GetBlockInter() const
{
    return m_blockInter;
}

void L7RuleHealth::SetBlockInter(const uint64_t& _blockInter)
{
    m_blockInter = _blockInter;
    m_blockInterHasBeenSet = true;
}

bool L7RuleHealth::BlockInterHasBeenSet() const
{
    return m_blockInterHasBeenSet;
}

uint64_t L7RuleHealth::GetFailedCountInter() const
{
    return m_failedCountInter;
}

void L7RuleHealth::SetFailedCountInter(const uint64_t& _failedCountInter)
{
    m_failedCountInter = _failedCountInter;
    m_failedCountInterHasBeenSet = true;
}

bool L7RuleHealth::FailedCountInterHasBeenSet() const
{
    return m_failedCountInterHasBeenSet;
}

uint64_t L7RuleHealth::GetFailedThreshold() const
{
    return m_failedThreshold;
}

void L7RuleHealth::SetFailedThreshold(const uint64_t& _failedThreshold)
{
    m_failedThreshold = _failedThreshold;
    m_failedThresholdHasBeenSet = true;
}

bool L7RuleHealth::FailedThresholdHasBeenSet() const
{
    return m_failedThresholdHasBeenSet;
}

uint64_t L7RuleHealth::GetPassiveStatusCode() const
{
    return m_passiveStatusCode;
}

void L7RuleHealth::SetPassiveStatusCode(const uint64_t& _passiveStatusCode)
{
    m_passiveStatusCode = _passiveStatusCode;
    m_passiveStatusCodeHasBeenSet = true;
}

bool L7RuleHealth::PassiveStatusCodeHasBeenSet() const
{
    return m_passiveStatusCodeHasBeenSet;
}

uint64_t L7RuleHealth::GetPassiveStatus() const
{
    return m_passiveStatus;
}

void L7RuleHealth::SetPassiveStatus(const uint64_t& _passiveStatus)
{
    m_passiveStatus = _passiveStatus;
    m_passiveStatusHasBeenSet = true;
}

bool L7RuleHealth::PassiveStatusHasBeenSet() const
{
    return m_passiveStatusHasBeenSet;
}


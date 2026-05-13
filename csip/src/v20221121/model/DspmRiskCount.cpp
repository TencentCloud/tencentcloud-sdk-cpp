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

#include <tencentcloud/csip/v20221121/model/DspmRiskCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmRiskCount::DspmRiskCount() :
    m_unprocessedRiskHasBeenSet(false),
    m_configurationRiskHasBeenSet(false),
    m_baselineDeviationHasBeenSet(false),
    m_leakDetectionHasBeenSet(false),
    m_sQLBehaviorAnomalyHasBeenSet(false),
    m_permissionAnomalyHasBeenSet(false),
    m_loginBehaviorAnomalyHasBeenSet(false),
    m_attackSurfaceRiskHasBeenSet(false),
    m_accountSensitiveOperationHasBeenSet(false),
    m_unprocessedAlarmHasBeenSet(false),
    m_numOfNewAlarmEventHasBeenSet(false),
    m_numOfNewConfigRiskHasBeenSet(false)
{
}

CoreInternalOutcome DspmRiskCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UnprocessedRisk") && !value["UnprocessedRisk"].IsNull())
    {
        if (!value["UnprocessedRisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskCount.UnprocessedRisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unprocessedRisk = value["UnprocessedRisk"].GetInt64();
        m_unprocessedRiskHasBeenSet = true;
    }

    if (value.HasMember("ConfigurationRisk") && !value["ConfigurationRisk"].IsNull())
    {
        if (!value["ConfigurationRisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskCount.ConfigurationRisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_configurationRisk = value["ConfigurationRisk"].GetInt64();
        m_configurationRiskHasBeenSet = true;
    }

    if (value.HasMember("BaselineDeviation") && !value["BaselineDeviation"].IsNull())
    {
        if (!value["BaselineDeviation"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskCount.BaselineDeviation` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_baselineDeviation = value["BaselineDeviation"].GetInt64();
        m_baselineDeviationHasBeenSet = true;
    }

    if (value.HasMember("LeakDetection") && !value["LeakDetection"].IsNull())
    {
        if (!value["LeakDetection"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskCount.LeakDetection` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_leakDetection = value["LeakDetection"].GetInt64();
        m_leakDetectionHasBeenSet = true;
    }

    if (value.HasMember("SQLBehaviorAnomaly") && !value["SQLBehaviorAnomaly"].IsNull())
    {
        if (!value["SQLBehaviorAnomaly"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskCount.SQLBehaviorAnomaly` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sQLBehaviorAnomaly = value["SQLBehaviorAnomaly"].GetInt64();
        m_sQLBehaviorAnomalyHasBeenSet = true;
    }

    if (value.HasMember("PermissionAnomaly") && !value["PermissionAnomaly"].IsNull())
    {
        if (!value["PermissionAnomaly"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskCount.PermissionAnomaly` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_permissionAnomaly = value["PermissionAnomaly"].GetInt64();
        m_permissionAnomalyHasBeenSet = true;
    }

    if (value.HasMember("LoginBehaviorAnomaly") && !value["LoginBehaviorAnomaly"].IsNull())
    {
        if (!value["LoginBehaviorAnomaly"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskCount.LoginBehaviorAnomaly` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loginBehaviorAnomaly = value["LoginBehaviorAnomaly"].GetInt64();
        m_loginBehaviorAnomalyHasBeenSet = true;
    }

    if (value.HasMember("AttackSurfaceRisk") && !value["AttackSurfaceRisk"].IsNull())
    {
        if (!value["AttackSurfaceRisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskCount.AttackSurfaceRisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackSurfaceRisk = value["AttackSurfaceRisk"].GetInt64();
        m_attackSurfaceRiskHasBeenSet = true;
    }

    if (value.HasMember("AccountSensitiveOperation") && !value["AccountSensitiveOperation"].IsNull())
    {
        if (!value["AccountSensitiveOperation"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskCount.AccountSensitiveOperation` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountSensitiveOperation = value["AccountSensitiveOperation"].GetInt64();
        m_accountSensitiveOperationHasBeenSet = true;
    }

    if (value.HasMember("UnprocessedAlarm") && !value["UnprocessedAlarm"].IsNull())
    {
        if (!value["UnprocessedAlarm"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskCount.UnprocessedAlarm` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unprocessedAlarm = value["UnprocessedAlarm"].GetInt64();
        m_unprocessedAlarmHasBeenSet = true;
    }

    if (value.HasMember("NumOfNewAlarmEvent") && !value["NumOfNewAlarmEvent"].IsNull())
    {
        if (!value["NumOfNewAlarmEvent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskCount.NumOfNewAlarmEvent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_numOfNewAlarmEvent = value["NumOfNewAlarmEvent"].GetInt64();
        m_numOfNewAlarmEventHasBeenSet = true;
    }

    if (value.HasMember("NumOfNewConfigRisk") && !value["NumOfNewConfigRisk"].IsNull())
    {
        if (!value["NumOfNewConfigRisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskCount.NumOfNewConfigRisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_numOfNewConfigRisk = value["NumOfNewConfigRisk"].GetInt64();
        m_numOfNewConfigRiskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmRiskCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_unprocessedRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnprocessedRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unprocessedRisk, allocator);
    }

    if (m_configurationRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigurationRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configurationRisk, allocator);
    }

    if (m_baselineDeviationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineDeviation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baselineDeviation, allocator);
    }

    if (m_leakDetectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeakDetection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leakDetection, allocator);
    }

    if (m_sQLBehaviorAnomalyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQLBehaviorAnomaly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sQLBehaviorAnomaly, allocator);
    }

    if (m_permissionAnomalyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionAnomaly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_permissionAnomaly, allocator);
    }

    if (m_loginBehaviorAnomalyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginBehaviorAnomaly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loginBehaviorAnomaly, allocator);
    }

    if (m_attackSurfaceRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackSurfaceRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackSurfaceRisk, allocator);
    }

    if (m_accountSensitiveOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountSensitiveOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountSensitiveOperation, allocator);
    }

    if (m_unprocessedAlarmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnprocessedAlarm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unprocessedAlarm, allocator);
    }

    if (m_numOfNewAlarmEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumOfNewAlarmEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numOfNewAlarmEvent, allocator);
    }

    if (m_numOfNewConfigRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumOfNewConfigRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numOfNewConfigRisk, allocator);
    }

}


int64_t DspmRiskCount::GetUnprocessedRisk() const
{
    return m_unprocessedRisk;
}

void DspmRiskCount::SetUnprocessedRisk(const int64_t& _unprocessedRisk)
{
    m_unprocessedRisk = _unprocessedRisk;
    m_unprocessedRiskHasBeenSet = true;
}

bool DspmRiskCount::UnprocessedRiskHasBeenSet() const
{
    return m_unprocessedRiskHasBeenSet;
}

int64_t DspmRiskCount::GetConfigurationRisk() const
{
    return m_configurationRisk;
}

void DspmRiskCount::SetConfigurationRisk(const int64_t& _configurationRisk)
{
    m_configurationRisk = _configurationRisk;
    m_configurationRiskHasBeenSet = true;
}

bool DspmRiskCount::ConfigurationRiskHasBeenSet() const
{
    return m_configurationRiskHasBeenSet;
}

int64_t DspmRiskCount::GetBaselineDeviation() const
{
    return m_baselineDeviation;
}

void DspmRiskCount::SetBaselineDeviation(const int64_t& _baselineDeviation)
{
    m_baselineDeviation = _baselineDeviation;
    m_baselineDeviationHasBeenSet = true;
}

bool DspmRiskCount::BaselineDeviationHasBeenSet() const
{
    return m_baselineDeviationHasBeenSet;
}

int64_t DspmRiskCount::GetLeakDetection() const
{
    return m_leakDetection;
}

void DspmRiskCount::SetLeakDetection(const int64_t& _leakDetection)
{
    m_leakDetection = _leakDetection;
    m_leakDetectionHasBeenSet = true;
}

bool DspmRiskCount::LeakDetectionHasBeenSet() const
{
    return m_leakDetectionHasBeenSet;
}

int64_t DspmRiskCount::GetSQLBehaviorAnomaly() const
{
    return m_sQLBehaviorAnomaly;
}

void DspmRiskCount::SetSQLBehaviorAnomaly(const int64_t& _sQLBehaviorAnomaly)
{
    m_sQLBehaviorAnomaly = _sQLBehaviorAnomaly;
    m_sQLBehaviorAnomalyHasBeenSet = true;
}

bool DspmRiskCount::SQLBehaviorAnomalyHasBeenSet() const
{
    return m_sQLBehaviorAnomalyHasBeenSet;
}

int64_t DspmRiskCount::GetPermissionAnomaly() const
{
    return m_permissionAnomaly;
}

void DspmRiskCount::SetPermissionAnomaly(const int64_t& _permissionAnomaly)
{
    m_permissionAnomaly = _permissionAnomaly;
    m_permissionAnomalyHasBeenSet = true;
}

bool DspmRiskCount::PermissionAnomalyHasBeenSet() const
{
    return m_permissionAnomalyHasBeenSet;
}

int64_t DspmRiskCount::GetLoginBehaviorAnomaly() const
{
    return m_loginBehaviorAnomaly;
}

void DspmRiskCount::SetLoginBehaviorAnomaly(const int64_t& _loginBehaviorAnomaly)
{
    m_loginBehaviorAnomaly = _loginBehaviorAnomaly;
    m_loginBehaviorAnomalyHasBeenSet = true;
}

bool DspmRiskCount::LoginBehaviorAnomalyHasBeenSet() const
{
    return m_loginBehaviorAnomalyHasBeenSet;
}

int64_t DspmRiskCount::GetAttackSurfaceRisk() const
{
    return m_attackSurfaceRisk;
}

void DspmRiskCount::SetAttackSurfaceRisk(const int64_t& _attackSurfaceRisk)
{
    m_attackSurfaceRisk = _attackSurfaceRisk;
    m_attackSurfaceRiskHasBeenSet = true;
}

bool DspmRiskCount::AttackSurfaceRiskHasBeenSet() const
{
    return m_attackSurfaceRiskHasBeenSet;
}

int64_t DspmRiskCount::GetAccountSensitiveOperation() const
{
    return m_accountSensitiveOperation;
}

void DspmRiskCount::SetAccountSensitiveOperation(const int64_t& _accountSensitiveOperation)
{
    m_accountSensitiveOperation = _accountSensitiveOperation;
    m_accountSensitiveOperationHasBeenSet = true;
}

bool DspmRiskCount::AccountSensitiveOperationHasBeenSet() const
{
    return m_accountSensitiveOperationHasBeenSet;
}

int64_t DspmRiskCount::GetUnprocessedAlarm() const
{
    return m_unprocessedAlarm;
}

void DspmRiskCount::SetUnprocessedAlarm(const int64_t& _unprocessedAlarm)
{
    m_unprocessedAlarm = _unprocessedAlarm;
    m_unprocessedAlarmHasBeenSet = true;
}

bool DspmRiskCount::UnprocessedAlarmHasBeenSet() const
{
    return m_unprocessedAlarmHasBeenSet;
}

int64_t DspmRiskCount::GetNumOfNewAlarmEvent() const
{
    return m_numOfNewAlarmEvent;
}

void DspmRiskCount::SetNumOfNewAlarmEvent(const int64_t& _numOfNewAlarmEvent)
{
    m_numOfNewAlarmEvent = _numOfNewAlarmEvent;
    m_numOfNewAlarmEventHasBeenSet = true;
}

bool DspmRiskCount::NumOfNewAlarmEventHasBeenSet() const
{
    return m_numOfNewAlarmEventHasBeenSet;
}

int64_t DspmRiskCount::GetNumOfNewConfigRisk() const
{
    return m_numOfNewConfigRisk;
}

void DspmRiskCount::SetNumOfNewConfigRisk(const int64_t& _numOfNewConfigRisk)
{
    m_numOfNewConfigRisk = _numOfNewConfigRisk;
    m_numOfNewConfigRiskHasBeenSet = true;
}

bool DspmRiskCount::NumOfNewConfigRiskHasBeenSet() const
{
    return m_numOfNewConfigRiskHasBeenSet;
}


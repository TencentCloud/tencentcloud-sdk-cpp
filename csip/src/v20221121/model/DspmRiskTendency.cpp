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

#include <tencentcloud/csip/v20221121/model/DspmRiskTendency.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmRiskTendency::DspmRiskTendency() :
    m_dateHasBeenSet(false),
    m_uncontrolledAccountHasBeenSet(false),
    m_configurationRiskHasBeenSet(false),
    m_baselineRiskHasBeenSet(false),
    m_leakDetectionRiskHasBeenSet(false),
    m_sQLBehaviorAnomalyHasBeenSet(false),
    m_permissionAnomalyHasBeenSet(false),
    m_loginBehaviorAnomalyHasBeenSet(false),
    m_attackSurfaceRiskHasBeenSet(false),
    m_accountSensitiveOperationHasBeenSet(false)
{
}

CoreInternalOutcome DspmRiskTendency::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskTendency.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("UncontrolledAccount") && !value["UncontrolledAccount"].IsNull())
    {
        if (!value["UncontrolledAccount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskTendency.UncontrolledAccount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uncontrolledAccount = value["UncontrolledAccount"].GetInt64();
        m_uncontrolledAccountHasBeenSet = true;
    }

    if (value.HasMember("ConfigurationRisk") && !value["ConfigurationRisk"].IsNull())
    {
        if (!value["ConfigurationRisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskTendency.ConfigurationRisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_configurationRisk = value["ConfigurationRisk"].GetInt64();
        m_configurationRiskHasBeenSet = true;
    }

    if (value.HasMember("BaselineRisk") && !value["BaselineRisk"].IsNull())
    {
        if (!value["BaselineRisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskTendency.BaselineRisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_baselineRisk = value["BaselineRisk"].GetInt64();
        m_baselineRiskHasBeenSet = true;
    }

    if (value.HasMember("LeakDetectionRisk") && !value["LeakDetectionRisk"].IsNull())
    {
        if (!value["LeakDetectionRisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskTendency.LeakDetectionRisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_leakDetectionRisk = value["LeakDetectionRisk"].GetInt64();
        m_leakDetectionRiskHasBeenSet = true;
    }

    if (value.HasMember("SQLBehaviorAnomaly") && !value["SQLBehaviorAnomaly"].IsNull())
    {
        if (!value["SQLBehaviorAnomaly"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskTendency.SQLBehaviorAnomaly` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sQLBehaviorAnomaly = value["SQLBehaviorAnomaly"].GetInt64();
        m_sQLBehaviorAnomalyHasBeenSet = true;
    }

    if (value.HasMember("PermissionAnomaly") && !value["PermissionAnomaly"].IsNull())
    {
        if (!value["PermissionAnomaly"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskTendency.PermissionAnomaly` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_permissionAnomaly = value["PermissionAnomaly"].GetInt64();
        m_permissionAnomalyHasBeenSet = true;
    }

    if (value.HasMember("LoginBehaviorAnomaly") && !value["LoginBehaviorAnomaly"].IsNull())
    {
        if (!value["LoginBehaviorAnomaly"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskTendency.LoginBehaviorAnomaly` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loginBehaviorAnomaly = value["LoginBehaviorAnomaly"].GetInt64();
        m_loginBehaviorAnomalyHasBeenSet = true;
    }

    if (value.HasMember("AttackSurfaceRisk") && !value["AttackSurfaceRisk"].IsNull())
    {
        if (!value["AttackSurfaceRisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskTendency.AttackSurfaceRisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackSurfaceRisk = value["AttackSurfaceRisk"].GetInt64();
        m_attackSurfaceRiskHasBeenSet = true;
    }

    if (value.HasMember("AccountSensitiveOperation") && !value["AccountSensitiveOperation"].IsNull())
    {
        if (!value["AccountSensitiveOperation"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskTendency.AccountSensitiveOperation` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountSensitiveOperation = value["AccountSensitiveOperation"].GetInt64();
        m_accountSensitiveOperationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmRiskTendency::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_uncontrolledAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UncontrolledAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uncontrolledAccount, allocator);
    }

    if (m_configurationRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigurationRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configurationRisk, allocator);
    }

    if (m_baselineRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baselineRisk, allocator);
    }

    if (m_leakDetectionRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeakDetectionRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leakDetectionRisk, allocator);
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

}


string DspmRiskTendency::GetDate() const
{
    return m_date;
}

void DspmRiskTendency::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool DspmRiskTendency::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

int64_t DspmRiskTendency::GetUncontrolledAccount() const
{
    return m_uncontrolledAccount;
}

void DspmRiskTendency::SetUncontrolledAccount(const int64_t& _uncontrolledAccount)
{
    m_uncontrolledAccount = _uncontrolledAccount;
    m_uncontrolledAccountHasBeenSet = true;
}

bool DspmRiskTendency::UncontrolledAccountHasBeenSet() const
{
    return m_uncontrolledAccountHasBeenSet;
}

int64_t DspmRiskTendency::GetConfigurationRisk() const
{
    return m_configurationRisk;
}

void DspmRiskTendency::SetConfigurationRisk(const int64_t& _configurationRisk)
{
    m_configurationRisk = _configurationRisk;
    m_configurationRiskHasBeenSet = true;
}

bool DspmRiskTendency::ConfigurationRiskHasBeenSet() const
{
    return m_configurationRiskHasBeenSet;
}

int64_t DspmRiskTendency::GetBaselineRisk() const
{
    return m_baselineRisk;
}

void DspmRiskTendency::SetBaselineRisk(const int64_t& _baselineRisk)
{
    m_baselineRisk = _baselineRisk;
    m_baselineRiskHasBeenSet = true;
}

bool DspmRiskTendency::BaselineRiskHasBeenSet() const
{
    return m_baselineRiskHasBeenSet;
}

int64_t DspmRiskTendency::GetLeakDetectionRisk() const
{
    return m_leakDetectionRisk;
}

void DspmRiskTendency::SetLeakDetectionRisk(const int64_t& _leakDetectionRisk)
{
    m_leakDetectionRisk = _leakDetectionRisk;
    m_leakDetectionRiskHasBeenSet = true;
}

bool DspmRiskTendency::LeakDetectionRiskHasBeenSet() const
{
    return m_leakDetectionRiskHasBeenSet;
}

int64_t DspmRiskTendency::GetSQLBehaviorAnomaly() const
{
    return m_sQLBehaviorAnomaly;
}

void DspmRiskTendency::SetSQLBehaviorAnomaly(const int64_t& _sQLBehaviorAnomaly)
{
    m_sQLBehaviorAnomaly = _sQLBehaviorAnomaly;
    m_sQLBehaviorAnomalyHasBeenSet = true;
}

bool DspmRiskTendency::SQLBehaviorAnomalyHasBeenSet() const
{
    return m_sQLBehaviorAnomalyHasBeenSet;
}

int64_t DspmRiskTendency::GetPermissionAnomaly() const
{
    return m_permissionAnomaly;
}

void DspmRiskTendency::SetPermissionAnomaly(const int64_t& _permissionAnomaly)
{
    m_permissionAnomaly = _permissionAnomaly;
    m_permissionAnomalyHasBeenSet = true;
}

bool DspmRiskTendency::PermissionAnomalyHasBeenSet() const
{
    return m_permissionAnomalyHasBeenSet;
}

int64_t DspmRiskTendency::GetLoginBehaviorAnomaly() const
{
    return m_loginBehaviorAnomaly;
}

void DspmRiskTendency::SetLoginBehaviorAnomaly(const int64_t& _loginBehaviorAnomaly)
{
    m_loginBehaviorAnomaly = _loginBehaviorAnomaly;
    m_loginBehaviorAnomalyHasBeenSet = true;
}

bool DspmRiskTendency::LoginBehaviorAnomalyHasBeenSet() const
{
    return m_loginBehaviorAnomalyHasBeenSet;
}

int64_t DspmRiskTendency::GetAttackSurfaceRisk() const
{
    return m_attackSurfaceRisk;
}

void DspmRiskTendency::SetAttackSurfaceRisk(const int64_t& _attackSurfaceRisk)
{
    m_attackSurfaceRisk = _attackSurfaceRisk;
    m_attackSurfaceRiskHasBeenSet = true;
}

bool DspmRiskTendency::AttackSurfaceRiskHasBeenSet() const
{
    return m_attackSurfaceRiskHasBeenSet;
}

int64_t DspmRiskTendency::GetAccountSensitiveOperation() const
{
    return m_accountSensitiveOperation;
}

void DspmRiskTendency::SetAccountSensitiveOperation(const int64_t& _accountSensitiveOperation)
{
    m_accountSensitiveOperation = _accountSensitiveOperation;
    m_accountSensitiveOperationHasBeenSet = true;
}

bool DspmRiskTendency::AccountSensitiveOperationHasBeenSet() const
{
    return m_accountSensitiveOperationHasBeenSet;
}


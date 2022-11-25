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

#include <tencentcloud/tcss/v20201101/model/K8sApiAbnormalRuleScopeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

K8sApiAbnormalRuleScopeInfo::K8sApiAbnormalRuleScopeInfo() :
    m_scopeHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isDeleteHasBeenSet(false)
{
}

CoreInternalOutcome K8sApiAbnormalRuleScopeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalRuleScopeInfo.Scope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scope = string(value["Scope"].GetString());
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalRuleScopeInfo.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalRuleScopeInfo.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalRuleScopeInfo.Status` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetBool();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsDelete") && !value["IsDelete"].IsNull())
    {
        if (!value["IsDelete"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalRuleScopeInfo.IsDelete` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDelete = value["IsDelete"].GetBool();
        m_isDeleteHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void K8sApiAbnormalRuleScopeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_isDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDelete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDelete, allocator);
    }

}


string K8sApiAbnormalRuleScopeInfo::GetScope() const
{
    return m_scope;
}

void K8sApiAbnormalRuleScopeInfo::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool K8sApiAbnormalRuleScopeInfo::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

string K8sApiAbnormalRuleScopeInfo::GetAction() const
{
    return m_action;
}

void K8sApiAbnormalRuleScopeInfo::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool K8sApiAbnormalRuleScopeInfo::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string K8sApiAbnormalRuleScopeInfo::GetRiskLevel() const
{
    return m_riskLevel;
}

void K8sApiAbnormalRuleScopeInfo::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool K8sApiAbnormalRuleScopeInfo::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

bool K8sApiAbnormalRuleScopeInfo::GetStatus() const
{
    return m_status;
}

void K8sApiAbnormalRuleScopeInfo::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool K8sApiAbnormalRuleScopeInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool K8sApiAbnormalRuleScopeInfo::GetIsDelete() const
{
    return m_isDelete;
}

void K8sApiAbnormalRuleScopeInfo::SetIsDelete(const bool& _isDelete)
{
    m_isDelete = _isDelete;
    m_isDeleteHasBeenSet = true;
}

bool K8sApiAbnormalRuleScopeInfo::IsDeleteHasBeenSet() const
{
    return m_isDeleteHasBeenSet;
}


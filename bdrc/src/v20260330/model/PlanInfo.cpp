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

#include <tencentcloud/bdrc/v20260330/model/PlanInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

PlanInfo::PlanInfo() :
    m_planIdHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_planNameHasBeenSet(false),
    m_backupPathsHasBeenSet(false),
    m_includeFileTypesHasBeenSet(false),
    m_excludePatternsHasBeenSet(false),
    m_excludeSystemDirectoriesHasBeenSet(false),
    m_vaultIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_aspIdHasBeenSet(false),
    m_aspNameHasBeenSet(false),
    m_aspPolicyHasBeenSet(false),
    m_lastExecuteTimeHasBeenSet(false),
    m_nextTriggerTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastTriggerErrorHasBeenSet(false),
    m_backupCountHasBeenSet(false),
    m_flowControlSettingsHasBeenSet(false)
{
}

CoreInternalOutcome PlanInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlanId") && !value["PlanId"].IsNull())
    {
        if (!value["PlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.PlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planId = string(value["PlanId"].GetString());
        m_planIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceIds") && !value["ResourceIds"].IsNull())
    {
        if (!value["ResourceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PlanInfo.ResourceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resourceIds.push_back((*itr).GetString());
        }
        m_resourceIdsHasBeenSet = true;
    }

    if (value.HasMember("PlanName") && !value["PlanName"].IsNull())
    {
        if (!value["PlanName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.PlanName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planName = string(value["PlanName"].GetString());
        m_planNameHasBeenSet = true;
    }

    if (value.HasMember("BackupPaths") && !value["BackupPaths"].IsNull())
    {
        if (!value["BackupPaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PlanInfo.BackupPaths` is not array type"));

        const rapidjson::Value &tmpValue = value["BackupPaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_backupPaths.push_back((*itr).GetString());
        }
        m_backupPathsHasBeenSet = true;
    }

    if (value.HasMember("IncludeFileTypes") && !value["IncludeFileTypes"].IsNull())
    {
        if (!value["IncludeFileTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PlanInfo.IncludeFileTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["IncludeFileTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_includeFileTypes.push_back((*itr).GetString());
        }
        m_includeFileTypesHasBeenSet = true;
    }

    if (value.HasMember("ExcludePatterns") && !value["ExcludePatterns"].IsNull())
    {
        if (!value["ExcludePatterns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PlanInfo.ExcludePatterns` is not array type"));

        const rapidjson::Value &tmpValue = value["ExcludePatterns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludePatterns.push_back((*itr).GetString());
        }
        m_excludePatternsHasBeenSet = true;
    }

    if (value.HasMember("ExcludeSystemDirectories") && !value["ExcludeSystemDirectories"].IsNull())
    {
        if (!value["ExcludeSystemDirectories"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.ExcludeSystemDirectories` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_excludeSystemDirectories = value["ExcludeSystemDirectories"].GetBool();
        m_excludeSystemDirectoriesHasBeenSet = true;
    }

    if (value.HasMember("VaultId") && !value["VaultId"].IsNull())
    {
        if (!value["VaultId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.VaultId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vaultId = string(value["VaultId"].GetString());
        m_vaultIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AspId") && !value["AspId"].IsNull())
    {
        if (!value["AspId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.AspId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aspId = string(value["AspId"].GetString());
        m_aspIdHasBeenSet = true;
    }

    if (value.HasMember("AspName") && !value["AspName"].IsNull())
    {
        if (!value["AspName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.AspName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aspName = string(value["AspName"].GetString());
        m_aspNameHasBeenSet = true;
    }

    if (value.HasMember("AspPolicy") && !value["AspPolicy"].IsNull())
    {
        if (!value["AspPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.AspPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aspPolicy.Deserialize(value["AspPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aspPolicyHasBeenSet = true;
    }

    if (value.HasMember("LastExecuteTime") && !value["LastExecuteTime"].IsNull())
    {
        if (!value["LastExecuteTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.LastExecuteTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastExecuteTime = string(value["LastExecuteTime"].GetString());
        m_lastExecuteTimeHasBeenSet = true;
    }

    if (value.HasMember("NextTriggerTime") && !value["NextTriggerTime"].IsNull())
    {
        if (!value["NextTriggerTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.NextTriggerTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextTriggerTime = string(value["NextTriggerTime"].GetString());
        m_nextTriggerTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("LastTriggerError") && !value["LastTriggerError"].IsNull())
    {
        if (!value["LastTriggerError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.LastTriggerError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTriggerError = string(value["LastTriggerError"].GetString());
        m_lastTriggerErrorHasBeenSet = true;
    }

    if (value.HasMember("BackupCount") && !value["BackupCount"].IsNull())
    {
        if (!value["BackupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.BackupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupCount = value["BackupCount"].GetInt64();
        m_backupCountHasBeenSet = true;
    }

    if (value.HasMember("FlowControlSettings") && !value["FlowControlSettings"].IsNull())
    {
        if (!value["FlowControlSettings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PlanInfo.FlowControlSettings` is not array type"));

        const rapidjson::Value &tmpValue = value["FlowControlSettings"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlowControlRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_flowControlSettings.push_back(item);
        }
        m_flowControlSettingsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlanInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_planId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIds.begin(); itr != m_resourceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_planNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_planName.c_str(), allocator).Move(), allocator);
    }

    if (m_backupPathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backupPaths.begin(); itr != m_backupPaths.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_includeFileTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeFileTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_includeFileTypes.begin(); itr != m_includeFileTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludePatternsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludePatterns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludePatterns.begin(); itr != m_excludePatterns.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludeSystemDirectoriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeSystemDirectories";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_excludeSystemDirectories, allocator);
    }

    if (m_vaultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vaultId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_aspIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AspId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aspId.c_str(), allocator).Move(), allocator);
    }

    if (m_aspNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AspName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aspName.c_str(), allocator).Move(), allocator);
    }

    if (m_aspPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AspPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aspPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lastExecuteTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastExecuteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastExecuteTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nextTriggerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextTriggerTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextTriggerTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastTriggerErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTriggerError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTriggerError.c_str(), allocator).Move(), allocator);
    }

    if (m_backupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupCount, allocator);
    }

    if (m_flowControlSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowControlSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowControlSettings.begin(); itr != m_flowControlSettings.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string PlanInfo::GetPlanId() const
{
    return m_planId;
}

void PlanInfo::SetPlanId(const string& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool PlanInfo::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

vector<string> PlanInfo::GetResourceIds() const
{
    return m_resourceIds;
}

void PlanInfo::SetResourceIds(const vector<string>& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool PlanInfo::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

string PlanInfo::GetPlanName() const
{
    return m_planName;
}

void PlanInfo::SetPlanName(const string& _planName)
{
    m_planName = _planName;
    m_planNameHasBeenSet = true;
}

bool PlanInfo::PlanNameHasBeenSet() const
{
    return m_planNameHasBeenSet;
}

vector<string> PlanInfo::GetBackupPaths() const
{
    return m_backupPaths;
}

void PlanInfo::SetBackupPaths(const vector<string>& _backupPaths)
{
    m_backupPaths = _backupPaths;
    m_backupPathsHasBeenSet = true;
}

bool PlanInfo::BackupPathsHasBeenSet() const
{
    return m_backupPathsHasBeenSet;
}

vector<string> PlanInfo::GetIncludeFileTypes() const
{
    return m_includeFileTypes;
}

void PlanInfo::SetIncludeFileTypes(const vector<string>& _includeFileTypes)
{
    m_includeFileTypes = _includeFileTypes;
    m_includeFileTypesHasBeenSet = true;
}

bool PlanInfo::IncludeFileTypesHasBeenSet() const
{
    return m_includeFileTypesHasBeenSet;
}

vector<string> PlanInfo::GetExcludePatterns() const
{
    return m_excludePatterns;
}

void PlanInfo::SetExcludePatterns(const vector<string>& _excludePatterns)
{
    m_excludePatterns = _excludePatterns;
    m_excludePatternsHasBeenSet = true;
}

bool PlanInfo::ExcludePatternsHasBeenSet() const
{
    return m_excludePatternsHasBeenSet;
}

bool PlanInfo::GetExcludeSystemDirectories() const
{
    return m_excludeSystemDirectories;
}

void PlanInfo::SetExcludeSystemDirectories(const bool& _excludeSystemDirectories)
{
    m_excludeSystemDirectories = _excludeSystemDirectories;
    m_excludeSystemDirectoriesHasBeenSet = true;
}

bool PlanInfo::ExcludeSystemDirectoriesHasBeenSet() const
{
    return m_excludeSystemDirectoriesHasBeenSet;
}

string PlanInfo::GetVaultId() const
{
    return m_vaultId;
}

void PlanInfo::SetVaultId(const string& _vaultId)
{
    m_vaultId = _vaultId;
    m_vaultIdHasBeenSet = true;
}

bool PlanInfo::VaultIdHasBeenSet() const
{
    return m_vaultIdHasBeenSet;
}

string PlanInfo::GetStatus() const
{
    return m_status;
}

void PlanInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PlanInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PlanInfo::GetAspId() const
{
    return m_aspId;
}

void PlanInfo::SetAspId(const string& _aspId)
{
    m_aspId = _aspId;
    m_aspIdHasBeenSet = true;
}

bool PlanInfo::AspIdHasBeenSet() const
{
    return m_aspIdHasBeenSet;
}

string PlanInfo::GetAspName() const
{
    return m_aspName;
}

void PlanInfo::SetAspName(const string& _aspName)
{
    m_aspName = _aspName;
    m_aspNameHasBeenSet = true;
}

bool PlanInfo::AspNameHasBeenSet() const
{
    return m_aspNameHasBeenSet;
}

AspInfo PlanInfo::GetAspPolicy() const
{
    return m_aspPolicy;
}

void PlanInfo::SetAspPolicy(const AspInfo& _aspPolicy)
{
    m_aspPolicy = _aspPolicy;
    m_aspPolicyHasBeenSet = true;
}

bool PlanInfo::AspPolicyHasBeenSet() const
{
    return m_aspPolicyHasBeenSet;
}

string PlanInfo::GetLastExecuteTime() const
{
    return m_lastExecuteTime;
}

void PlanInfo::SetLastExecuteTime(const string& _lastExecuteTime)
{
    m_lastExecuteTime = _lastExecuteTime;
    m_lastExecuteTimeHasBeenSet = true;
}

bool PlanInfo::LastExecuteTimeHasBeenSet() const
{
    return m_lastExecuteTimeHasBeenSet;
}

string PlanInfo::GetNextTriggerTime() const
{
    return m_nextTriggerTime;
}

void PlanInfo::SetNextTriggerTime(const string& _nextTriggerTime)
{
    m_nextTriggerTime = _nextTriggerTime;
    m_nextTriggerTimeHasBeenSet = true;
}

bool PlanInfo::NextTriggerTimeHasBeenSet() const
{
    return m_nextTriggerTimeHasBeenSet;
}

string PlanInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void PlanInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool PlanInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string PlanInfo::GetLastTriggerError() const
{
    return m_lastTriggerError;
}

void PlanInfo::SetLastTriggerError(const string& _lastTriggerError)
{
    m_lastTriggerError = _lastTriggerError;
    m_lastTriggerErrorHasBeenSet = true;
}

bool PlanInfo::LastTriggerErrorHasBeenSet() const
{
    return m_lastTriggerErrorHasBeenSet;
}

int64_t PlanInfo::GetBackupCount() const
{
    return m_backupCount;
}

void PlanInfo::SetBackupCount(const int64_t& _backupCount)
{
    m_backupCount = _backupCount;
    m_backupCountHasBeenSet = true;
}

bool PlanInfo::BackupCountHasBeenSet() const
{
    return m_backupCountHasBeenSet;
}

vector<FlowControlRule> PlanInfo::GetFlowControlSettings() const
{
    return m_flowControlSettings;
}

void PlanInfo::SetFlowControlSettings(const vector<FlowControlRule>& _flowControlSettings)
{
    m_flowControlSettings = _flowControlSettings;
    m_flowControlSettingsHasBeenSet = true;
}

bool PlanInfo::FlowControlSettingsHasBeenSet() const
{
    return m_flowControlSettingsHasBeenSet;
}


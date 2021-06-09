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

#include <tencentcloud/tione/v20191022/model/UpdateNotebookInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

UpdateNotebookInstanceRequest::UpdateNotebookInstanceRequest() :
    m_notebookInstanceNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_rootAccessHasBeenSet(false),
    m_volumeSizeInGBHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_lifecycleScriptsNameHasBeenSet(false),
    m_disassociateLifecycleScriptHasBeenSet(false),
    m_defaultCodeRepositoryHasBeenSet(false),
    m_additionalCodeRepositoriesHasBeenSet(false),
    m_disassociateDefaultCodeRepositoryHasBeenSet(false),
    m_disassociateAdditionalCodeRepositoriesHasBeenSet(false),
    m_clsAccessHasBeenSet(false),
    m_autoStoppingHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false),
    m_clsConfigHasBeenSet(false)
{
}

string UpdateNotebookInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_notebookInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotebookInstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notebookInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_roleArnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleArn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleArn.c_str(), allocator).Move(), allocator);
    }

    if (m_rootAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rootAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeSizeInGBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeSizeInGB";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_volumeSizeInGB, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_lifecycleScriptsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecycleScriptsName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lifecycleScriptsName.c_str(), allocator).Move(), allocator);
    }

    if (m_disassociateLifecycleScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisassociateLifecycleScript";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disassociateLifecycleScript, allocator);
    }

    if (m_defaultCodeRepositoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultCodeRepository";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_defaultCodeRepository.c_str(), allocator).Move(), allocator);
    }

    if (m_additionalCodeRepositoriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdditionalCodeRepositories";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_additionalCodeRepositories.begin(); itr != m_additionalCodeRepositories.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_disassociateDefaultCodeRepositoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisassociateDefaultCodeRepository";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disassociateDefaultCodeRepository, allocator);
    }

    if (m_disassociateAdditionalCodeRepositoriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisassociateAdditionalCodeRepositories";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disassociateAdditionalCodeRepositories, allocator);
    }

    if (m_clsAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clsAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_autoStoppingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoStopping";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoStopping.c_str(), allocator).Move(), allocator);
    }

    if (m_stoppingConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoppingCondition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_stoppingCondition.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clsConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clsConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateNotebookInstanceRequest::GetNotebookInstanceName() const
{
    return m_notebookInstanceName;
}

void UpdateNotebookInstanceRequest::SetNotebookInstanceName(const string& _notebookInstanceName)
{
    m_notebookInstanceName = _notebookInstanceName;
    m_notebookInstanceNameHasBeenSet = true;
}

bool UpdateNotebookInstanceRequest::NotebookInstanceNameHasBeenSet() const
{
    return m_notebookInstanceNameHasBeenSet;
}

string UpdateNotebookInstanceRequest::GetRoleArn() const
{
    return m_roleArn;
}

void UpdateNotebookInstanceRequest::SetRoleArn(const string& _roleArn)
{
    m_roleArn = _roleArn;
    m_roleArnHasBeenSet = true;
}

bool UpdateNotebookInstanceRequest::RoleArnHasBeenSet() const
{
    return m_roleArnHasBeenSet;
}

string UpdateNotebookInstanceRequest::GetRootAccess() const
{
    return m_rootAccess;
}

void UpdateNotebookInstanceRequest::SetRootAccess(const string& _rootAccess)
{
    m_rootAccess = _rootAccess;
    m_rootAccessHasBeenSet = true;
}

bool UpdateNotebookInstanceRequest::RootAccessHasBeenSet() const
{
    return m_rootAccessHasBeenSet;
}

uint64_t UpdateNotebookInstanceRequest::GetVolumeSizeInGB() const
{
    return m_volumeSizeInGB;
}

void UpdateNotebookInstanceRequest::SetVolumeSizeInGB(const uint64_t& _volumeSizeInGB)
{
    m_volumeSizeInGB = _volumeSizeInGB;
    m_volumeSizeInGBHasBeenSet = true;
}

bool UpdateNotebookInstanceRequest::VolumeSizeInGBHasBeenSet() const
{
    return m_volumeSizeInGBHasBeenSet;
}

string UpdateNotebookInstanceRequest::GetInstanceType() const
{
    return m_instanceType;
}

void UpdateNotebookInstanceRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool UpdateNotebookInstanceRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string UpdateNotebookInstanceRequest::GetLifecycleScriptsName() const
{
    return m_lifecycleScriptsName;
}

void UpdateNotebookInstanceRequest::SetLifecycleScriptsName(const string& _lifecycleScriptsName)
{
    m_lifecycleScriptsName = _lifecycleScriptsName;
    m_lifecycleScriptsNameHasBeenSet = true;
}

bool UpdateNotebookInstanceRequest::LifecycleScriptsNameHasBeenSet() const
{
    return m_lifecycleScriptsNameHasBeenSet;
}

bool UpdateNotebookInstanceRequest::GetDisassociateLifecycleScript() const
{
    return m_disassociateLifecycleScript;
}

void UpdateNotebookInstanceRequest::SetDisassociateLifecycleScript(const bool& _disassociateLifecycleScript)
{
    m_disassociateLifecycleScript = _disassociateLifecycleScript;
    m_disassociateLifecycleScriptHasBeenSet = true;
}

bool UpdateNotebookInstanceRequest::DisassociateLifecycleScriptHasBeenSet() const
{
    return m_disassociateLifecycleScriptHasBeenSet;
}

string UpdateNotebookInstanceRequest::GetDefaultCodeRepository() const
{
    return m_defaultCodeRepository;
}

void UpdateNotebookInstanceRequest::SetDefaultCodeRepository(const string& _defaultCodeRepository)
{
    m_defaultCodeRepository = _defaultCodeRepository;
    m_defaultCodeRepositoryHasBeenSet = true;
}

bool UpdateNotebookInstanceRequest::DefaultCodeRepositoryHasBeenSet() const
{
    return m_defaultCodeRepositoryHasBeenSet;
}

vector<string> UpdateNotebookInstanceRequest::GetAdditionalCodeRepositories() const
{
    return m_additionalCodeRepositories;
}

void UpdateNotebookInstanceRequest::SetAdditionalCodeRepositories(const vector<string>& _additionalCodeRepositories)
{
    m_additionalCodeRepositories = _additionalCodeRepositories;
    m_additionalCodeRepositoriesHasBeenSet = true;
}

bool UpdateNotebookInstanceRequest::AdditionalCodeRepositoriesHasBeenSet() const
{
    return m_additionalCodeRepositoriesHasBeenSet;
}

bool UpdateNotebookInstanceRequest::GetDisassociateDefaultCodeRepository() const
{
    return m_disassociateDefaultCodeRepository;
}

void UpdateNotebookInstanceRequest::SetDisassociateDefaultCodeRepository(const bool& _disassociateDefaultCodeRepository)
{
    m_disassociateDefaultCodeRepository = _disassociateDefaultCodeRepository;
    m_disassociateDefaultCodeRepositoryHasBeenSet = true;
}

bool UpdateNotebookInstanceRequest::DisassociateDefaultCodeRepositoryHasBeenSet() const
{
    return m_disassociateDefaultCodeRepositoryHasBeenSet;
}

bool UpdateNotebookInstanceRequest::GetDisassociateAdditionalCodeRepositories() const
{
    return m_disassociateAdditionalCodeRepositories;
}

void UpdateNotebookInstanceRequest::SetDisassociateAdditionalCodeRepositories(const bool& _disassociateAdditionalCodeRepositories)
{
    m_disassociateAdditionalCodeRepositories = _disassociateAdditionalCodeRepositories;
    m_disassociateAdditionalCodeRepositoriesHasBeenSet = true;
}

bool UpdateNotebookInstanceRequest::DisassociateAdditionalCodeRepositoriesHasBeenSet() const
{
    return m_disassociateAdditionalCodeRepositoriesHasBeenSet;
}

string UpdateNotebookInstanceRequest::GetClsAccess() const
{
    return m_clsAccess;
}

void UpdateNotebookInstanceRequest::SetClsAccess(const string& _clsAccess)
{
    m_clsAccess = _clsAccess;
    m_clsAccessHasBeenSet = true;
}

bool UpdateNotebookInstanceRequest::ClsAccessHasBeenSet() const
{
    return m_clsAccessHasBeenSet;
}

string UpdateNotebookInstanceRequest::GetAutoStopping() const
{
    return m_autoStopping;
}

void UpdateNotebookInstanceRequest::SetAutoStopping(const string& _autoStopping)
{
    m_autoStopping = _autoStopping;
    m_autoStoppingHasBeenSet = true;
}

bool UpdateNotebookInstanceRequest::AutoStoppingHasBeenSet() const
{
    return m_autoStoppingHasBeenSet;
}

StoppingCondition UpdateNotebookInstanceRequest::GetStoppingCondition() const
{
    return m_stoppingCondition;
}

void UpdateNotebookInstanceRequest::SetStoppingCondition(const StoppingCondition& _stoppingCondition)
{
    m_stoppingCondition = _stoppingCondition;
    m_stoppingConditionHasBeenSet = true;
}

bool UpdateNotebookInstanceRequest::StoppingConditionHasBeenSet() const
{
    return m_stoppingConditionHasBeenSet;
}

ClsConfig UpdateNotebookInstanceRequest::GetClsConfig() const
{
    return m_clsConfig;
}

void UpdateNotebookInstanceRequest::SetClsConfig(const ClsConfig& _clsConfig)
{
    m_clsConfig = _clsConfig;
    m_clsConfigHasBeenSet = true;
}

bool UpdateNotebookInstanceRequest::ClsConfigHasBeenSet() const
{
    return m_clsConfigHasBeenSet;
}



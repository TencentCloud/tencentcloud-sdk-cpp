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

#include <tencentcloud/tione/v20191022/model/CreateNotebookInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

CreateNotebookInstanceRequest::CreateNotebookInstanceRequest() :
    m_notebookInstanceNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_volumeSizeInGBHasBeenSet(false),
    m_directInternetAccessHasBeenSet(false),
    m_rootAccessHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_lifecycleScriptsNameHasBeenSet(false),
    m_defaultCodeRepositoryHasBeenSet(false),
    m_additionalCodeRepositoriesHasBeenSet(false),
    m_clsAccessHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false),
    m_autoStoppingHasBeenSet(false),
    m_clsConfigHasBeenSet(false)
{
}

string CreateNotebookInstanceRequest::ToJsonString() const
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

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeSizeInGBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeSizeInGB";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_volumeSizeInGB, allocator);
    }

    if (m_directInternetAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectInternetAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_directInternetAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_rootAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rootAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_lifecycleScriptsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecycleScriptsName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lifecycleScriptsName.c_str(), allocator).Move(), allocator);
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

    if (m_clsAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clsAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_stoppingConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoppingCondition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_stoppingCondition.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_autoStoppingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoStopping";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoStopping.c_str(), allocator).Move(), allocator);
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


string CreateNotebookInstanceRequest::GetNotebookInstanceName() const
{
    return m_notebookInstanceName;
}

void CreateNotebookInstanceRequest::SetNotebookInstanceName(const string& _notebookInstanceName)
{
    m_notebookInstanceName = _notebookInstanceName;
    m_notebookInstanceNameHasBeenSet = true;
}

bool CreateNotebookInstanceRequest::NotebookInstanceNameHasBeenSet() const
{
    return m_notebookInstanceNameHasBeenSet;
}

string CreateNotebookInstanceRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateNotebookInstanceRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateNotebookInstanceRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

uint64_t CreateNotebookInstanceRequest::GetVolumeSizeInGB() const
{
    return m_volumeSizeInGB;
}

void CreateNotebookInstanceRequest::SetVolumeSizeInGB(const uint64_t& _volumeSizeInGB)
{
    m_volumeSizeInGB = _volumeSizeInGB;
    m_volumeSizeInGBHasBeenSet = true;
}

bool CreateNotebookInstanceRequest::VolumeSizeInGBHasBeenSet() const
{
    return m_volumeSizeInGBHasBeenSet;
}

string CreateNotebookInstanceRequest::GetDirectInternetAccess() const
{
    return m_directInternetAccess;
}

void CreateNotebookInstanceRequest::SetDirectInternetAccess(const string& _directInternetAccess)
{
    m_directInternetAccess = _directInternetAccess;
    m_directInternetAccessHasBeenSet = true;
}

bool CreateNotebookInstanceRequest::DirectInternetAccessHasBeenSet() const
{
    return m_directInternetAccessHasBeenSet;
}

string CreateNotebookInstanceRequest::GetRootAccess() const
{
    return m_rootAccess;
}

void CreateNotebookInstanceRequest::SetRootAccess(const string& _rootAccess)
{
    m_rootAccess = _rootAccess;
    m_rootAccessHasBeenSet = true;
}

bool CreateNotebookInstanceRequest::RootAccessHasBeenSet() const
{
    return m_rootAccessHasBeenSet;
}

string CreateNotebookInstanceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateNotebookInstanceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateNotebookInstanceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateNotebookInstanceRequest::GetLifecycleScriptsName() const
{
    return m_lifecycleScriptsName;
}

void CreateNotebookInstanceRequest::SetLifecycleScriptsName(const string& _lifecycleScriptsName)
{
    m_lifecycleScriptsName = _lifecycleScriptsName;
    m_lifecycleScriptsNameHasBeenSet = true;
}

bool CreateNotebookInstanceRequest::LifecycleScriptsNameHasBeenSet() const
{
    return m_lifecycleScriptsNameHasBeenSet;
}

string CreateNotebookInstanceRequest::GetDefaultCodeRepository() const
{
    return m_defaultCodeRepository;
}

void CreateNotebookInstanceRequest::SetDefaultCodeRepository(const string& _defaultCodeRepository)
{
    m_defaultCodeRepository = _defaultCodeRepository;
    m_defaultCodeRepositoryHasBeenSet = true;
}

bool CreateNotebookInstanceRequest::DefaultCodeRepositoryHasBeenSet() const
{
    return m_defaultCodeRepositoryHasBeenSet;
}

vector<string> CreateNotebookInstanceRequest::GetAdditionalCodeRepositories() const
{
    return m_additionalCodeRepositories;
}

void CreateNotebookInstanceRequest::SetAdditionalCodeRepositories(const vector<string>& _additionalCodeRepositories)
{
    m_additionalCodeRepositories = _additionalCodeRepositories;
    m_additionalCodeRepositoriesHasBeenSet = true;
}

bool CreateNotebookInstanceRequest::AdditionalCodeRepositoriesHasBeenSet() const
{
    return m_additionalCodeRepositoriesHasBeenSet;
}

string CreateNotebookInstanceRequest::GetClsAccess() const
{
    return m_clsAccess;
}

void CreateNotebookInstanceRequest::SetClsAccess(const string& _clsAccess)
{
    m_clsAccess = _clsAccess;
    m_clsAccessHasBeenSet = true;
}

bool CreateNotebookInstanceRequest::ClsAccessHasBeenSet() const
{
    return m_clsAccessHasBeenSet;
}

StoppingCondition CreateNotebookInstanceRequest::GetStoppingCondition() const
{
    return m_stoppingCondition;
}

void CreateNotebookInstanceRequest::SetStoppingCondition(const StoppingCondition& _stoppingCondition)
{
    m_stoppingCondition = _stoppingCondition;
    m_stoppingConditionHasBeenSet = true;
}

bool CreateNotebookInstanceRequest::StoppingConditionHasBeenSet() const
{
    return m_stoppingConditionHasBeenSet;
}

string CreateNotebookInstanceRequest::GetAutoStopping() const
{
    return m_autoStopping;
}

void CreateNotebookInstanceRequest::SetAutoStopping(const string& _autoStopping)
{
    m_autoStopping = _autoStopping;
    m_autoStoppingHasBeenSet = true;
}

bool CreateNotebookInstanceRequest::AutoStoppingHasBeenSet() const
{
    return m_autoStoppingHasBeenSet;
}

ClsConfig CreateNotebookInstanceRequest::GetClsConfig() const
{
    return m_clsConfig;
}

void CreateNotebookInstanceRequest::SetClsConfig(const ClsConfig& _clsConfig)
{
    m_clsConfig = _clsConfig;
    m_clsConfigHasBeenSet = true;
}

bool CreateNotebookInstanceRequest::ClsConfigHasBeenSet() const
{
    return m_clsConfigHasBeenSet;
}



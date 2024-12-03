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

#include <tencentcloud/tsf/v20180326/model/CreateApplicationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

CreateApplicationRequest::CreateApplicationRequest() :
    m_applicationNameHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_microserviceTypeHasBeenSet(false),
    m_applicationDescHasBeenSet(false),
    m_applicationLogConfigHasBeenSet(false),
    m_applicationResourceTypeHasBeenSet(false),
    m_applicationRuntimeTypeHasBeenSet(false),
    m_programIdHasBeenSet(false),
    m_serviceConfigListHasBeenSet(false),
    m_ignoreCreateImageRepositoryHasBeenSet(false),
    m_programIdListHasBeenSet(false),
    m_apmInstanceIdHasBeenSet(false),
    m_programLanguageHasBeenSet(false),
    m_frameworkTypeHasBeenSet(false),
    m_serviceGovernanceConfigHasBeenSet(false),
    m_createSameNameImageRepositoryHasBeenSet(false)
{
}

string CreateApplicationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationType.c_str(), allocator).Move(), allocator);
    }

    if (m_microserviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroserviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_microserviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationLogConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationLogConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationLogConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationResourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationRuntimeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationRuntimeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationRuntimeType.c_str(), allocator).Move(), allocator);
    }

    if (m_programIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_programId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceConfigListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceConfigList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceConfigList.begin(); itr != m_serviceConfigList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_ignoreCreateImageRepositoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreCreateImageRepository";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ignoreCreateImageRepository, allocator);
    }

    if (m_programIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_programIdList.begin(); itr != m_programIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_apmInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApmInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apmInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_programLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_programLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_frameworkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameworkType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_frameworkType.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceGovernanceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceGovernanceConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceGovernanceConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_createSameNameImageRepositoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateSameNameImageRepository";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_createSameNameImageRepository, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateApplicationRequest::GetApplicationName() const
{
    return m_applicationName;
}

void CreateApplicationRequest::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool CreateApplicationRequest::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string CreateApplicationRequest::GetApplicationType() const
{
    return m_applicationType;
}

void CreateApplicationRequest::SetApplicationType(const string& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool CreateApplicationRequest::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

string CreateApplicationRequest::GetMicroserviceType() const
{
    return m_microserviceType;
}

void CreateApplicationRequest::SetMicroserviceType(const string& _microserviceType)
{
    m_microserviceType = _microserviceType;
    m_microserviceTypeHasBeenSet = true;
}

bool CreateApplicationRequest::MicroserviceTypeHasBeenSet() const
{
    return m_microserviceTypeHasBeenSet;
}

string CreateApplicationRequest::GetApplicationDesc() const
{
    return m_applicationDesc;
}

void CreateApplicationRequest::SetApplicationDesc(const string& _applicationDesc)
{
    m_applicationDesc = _applicationDesc;
    m_applicationDescHasBeenSet = true;
}

bool CreateApplicationRequest::ApplicationDescHasBeenSet() const
{
    return m_applicationDescHasBeenSet;
}

string CreateApplicationRequest::GetApplicationLogConfig() const
{
    return m_applicationLogConfig;
}

void CreateApplicationRequest::SetApplicationLogConfig(const string& _applicationLogConfig)
{
    m_applicationLogConfig = _applicationLogConfig;
    m_applicationLogConfigHasBeenSet = true;
}

bool CreateApplicationRequest::ApplicationLogConfigHasBeenSet() const
{
    return m_applicationLogConfigHasBeenSet;
}

string CreateApplicationRequest::GetApplicationResourceType() const
{
    return m_applicationResourceType;
}

void CreateApplicationRequest::SetApplicationResourceType(const string& _applicationResourceType)
{
    m_applicationResourceType = _applicationResourceType;
    m_applicationResourceTypeHasBeenSet = true;
}

bool CreateApplicationRequest::ApplicationResourceTypeHasBeenSet() const
{
    return m_applicationResourceTypeHasBeenSet;
}

string CreateApplicationRequest::GetApplicationRuntimeType() const
{
    return m_applicationRuntimeType;
}

void CreateApplicationRequest::SetApplicationRuntimeType(const string& _applicationRuntimeType)
{
    m_applicationRuntimeType = _applicationRuntimeType;
    m_applicationRuntimeTypeHasBeenSet = true;
}

bool CreateApplicationRequest::ApplicationRuntimeTypeHasBeenSet() const
{
    return m_applicationRuntimeTypeHasBeenSet;
}

string CreateApplicationRequest::GetProgramId() const
{
    return m_programId;
}

void CreateApplicationRequest::SetProgramId(const string& _programId)
{
    m_programId = _programId;
    m_programIdHasBeenSet = true;
}

bool CreateApplicationRequest::ProgramIdHasBeenSet() const
{
    return m_programIdHasBeenSet;
}

vector<ServiceConfig> CreateApplicationRequest::GetServiceConfigList() const
{
    return m_serviceConfigList;
}

void CreateApplicationRequest::SetServiceConfigList(const vector<ServiceConfig>& _serviceConfigList)
{
    m_serviceConfigList = _serviceConfigList;
    m_serviceConfigListHasBeenSet = true;
}

bool CreateApplicationRequest::ServiceConfigListHasBeenSet() const
{
    return m_serviceConfigListHasBeenSet;
}

bool CreateApplicationRequest::GetIgnoreCreateImageRepository() const
{
    return m_ignoreCreateImageRepository;
}

void CreateApplicationRequest::SetIgnoreCreateImageRepository(const bool& _ignoreCreateImageRepository)
{
    m_ignoreCreateImageRepository = _ignoreCreateImageRepository;
    m_ignoreCreateImageRepositoryHasBeenSet = true;
}

bool CreateApplicationRequest::IgnoreCreateImageRepositoryHasBeenSet() const
{
    return m_ignoreCreateImageRepositoryHasBeenSet;
}

vector<string> CreateApplicationRequest::GetProgramIdList() const
{
    return m_programIdList;
}

void CreateApplicationRequest::SetProgramIdList(const vector<string>& _programIdList)
{
    m_programIdList = _programIdList;
    m_programIdListHasBeenSet = true;
}

bool CreateApplicationRequest::ProgramIdListHasBeenSet() const
{
    return m_programIdListHasBeenSet;
}

string CreateApplicationRequest::GetApmInstanceId() const
{
    return m_apmInstanceId;
}

void CreateApplicationRequest::SetApmInstanceId(const string& _apmInstanceId)
{
    m_apmInstanceId = _apmInstanceId;
    m_apmInstanceIdHasBeenSet = true;
}

bool CreateApplicationRequest::ApmInstanceIdHasBeenSet() const
{
    return m_apmInstanceIdHasBeenSet;
}

string CreateApplicationRequest::GetProgramLanguage() const
{
    return m_programLanguage;
}

void CreateApplicationRequest::SetProgramLanguage(const string& _programLanguage)
{
    m_programLanguage = _programLanguage;
    m_programLanguageHasBeenSet = true;
}

bool CreateApplicationRequest::ProgramLanguageHasBeenSet() const
{
    return m_programLanguageHasBeenSet;
}

string CreateApplicationRequest::GetFrameworkType() const
{
    return m_frameworkType;
}

void CreateApplicationRequest::SetFrameworkType(const string& _frameworkType)
{
    m_frameworkType = _frameworkType;
    m_frameworkTypeHasBeenSet = true;
}

bool CreateApplicationRequest::FrameworkTypeHasBeenSet() const
{
    return m_frameworkTypeHasBeenSet;
}

ServiceGovernanceConfig CreateApplicationRequest::GetServiceGovernanceConfig() const
{
    return m_serviceGovernanceConfig;
}

void CreateApplicationRequest::SetServiceGovernanceConfig(const ServiceGovernanceConfig& _serviceGovernanceConfig)
{
    m_serviceGovernanceConfig = _serviceGovernanceConfig;
    m_serviceGovernanceConfigHasBeenSet = true;
}

bool CreateApplicationRequest::ServiceGovernanceConfigHasBeenSet() const
{
    return m_serviceGovernanceConfigHasBeenSet;
}

bool CreateApplicationRequest::GetCreateSameNameImageRepository() const
{
    return m_createSameNameImageRepository;
}

void CreateApplicationRequest::SetCreateSameNameImageRepository(const bool& _createSameNameImageRepository)
{
    m_createSameNameImageRepository = _createSameNameImageRepository;
    m_createSameNameImageRepositoryHasBeenSet = true;
}

bool CreateApplicationRequest::CreateSameNameImageRepositoryHasBeenSet() const
{
    return m_createSameNameImageRepositoryHasBeenSet;
}



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

#include <tencentcloud/tsf/v20180326/model/ModifyApplicationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ModifyApplicationRequest::ModifyApplicationRequest() :
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_applicationDescHasBeenSet(false),
    m_applicationRemarkNameHasBeenSet(false),
    m_serviceConfigListHasBeenSet(false),
    m_microserviceTypeHasBeenSet(false),
    m_serviceGovernanceConfigHasBeenSet(false),
    m_frameworkTypeHasBeenSet(false)
{
}

string ModifyApplicationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationRemarkNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationRemarkName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationRemarkName.c_str(), allocator).Move(), allocator);
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

    if (m_microserviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroserviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_microserviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceGovernanceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceGovernanceConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceGovernanceConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_frameworkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameworkType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_frameworkType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyApplicationRequest::GetApplicationId() const
{
    return m_applicationId;
}

void ModifyApplicationRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ModifyApplicationRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string ModifyApplicationRequest::GetApplicationName() const
{
    return m_applicationName;
}

void ModifyApplicationRequest::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool ModifyApplicationRequest::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string ModifyApplicationRequest::GetApplicationDesc() const
{
    return m_applicationDesc;
}

void ModifyApplicationRequest::SetApplicationDesc(const string& _applicationDesc)
{
    m_applicationDesc = _applicationDesc;
    m_applicationDescHasBeenSet = true;
}

bool ModifyApplicationRequest::ApplicationDescHasBeenSet() const
{
    return m_applicationDescHasBeenSet;
}

string ModifyApplicationRequest::GetApplicationRemarkName() const
{
    return m_applicationRemarkName;
}

void ModifyApplicationRequest::SetApplicationRemarkName(const string& _applicationRemarkName)
{
    m_applicationRemarkName = _applicationRemarkName;
    m_applicationRemarkNameHasBeenSet = true;
}

bool ModifyApplicationRequest::ApplicationRemarkNameHasBeenSet() const
{
    return m_applicationRemarkNameHasBeenSet;
}

vector<ServiceConfig> ModifyApplicationRequest::GetServiceConfigList() const
{
    return m_serviceConfigList;
}

void ModifyApplicationRequest::SetServiceConfigList(const vector<ServiceConfig>& _serviceConfigList)
{
    m_serviceConfigList = _serviceConfigList;
    m_serviceConfigListHasBeenSet = true;
}

bool ModifyApplicationRequest::ServiceConfigListHasBeenSet() const
{
    return m_serviceConfigListHasBeenSet;
}

string ModifyApplicationRequest::GetMicroserviceType() const
{
    return m_microserviceType;
}

void ModifyApplicationRequest::SetMicroserviceType(const string& _microserviceType)
{
    m_microserviceType = _microserviceType;
    m_microserviceTypeHasBeenSet = true;
}

bool ModifyApplicationRequest::MicroserviceTypeHasBeenSet() const
{
    return m_microserviceTypeHasBeenSet;
}

ServiceGovernanceConfig ModifyApplicationRequest::GetServiceGovernanceConfig() const
{
    return m_serviceGovernanceConfig;
}

void ModifyApplicationRequest::SetServiceGovernanceConfig(const ServiceGovernanceConfig& _serviceGovernanceConfig)
{
    m_serviceGovernanceConfig = _serviceGovernanceConfig;
    m_serviceGovernanceConfigHasBeenSet = true;
}

bool ModifyApplicationRequest::ServiceGovernanceConfigHasBeenSet() const
{
    return m_serviceGovernanceConfigHasBeenSet;
}

string ModifyApplicationRequest::GetFrameworkType() const
{
    return m_frameworkType;
}

void ModifyApplicationRequest::SetFrameworkType(const string& _frameworkType)
{
    m_frameworkType = _frameworkType;
    m_frameworkTypeHasBeenSet = true;
}

bool ModifyApplicationRequest::FrameworkTypeHasBeenSet() const
{
    return m_frameworkTypeHasBeenSet;
}



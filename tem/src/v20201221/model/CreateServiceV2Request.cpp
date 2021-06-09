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

#include <tencentcloud/tem/v20201221/model/CreateServiceV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20201221::Model;
using namespace std;

CreateServiceV2Request::CreateServiceV2Request() :
    m_serviceNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_useDefaultImageServiceHasBeenSet(false),
    m_repoTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_repoServerHasBeenSet(false),
    m_repoNameHasBeenSet(false),
    m_sourceChannelHasBeenSet(false),
    m_subnetListHasBeenSet(false),
    m_codingLanguageHasBeenSet(false),
    m_deployModeHasBeenSet(false)
{
}

string CreateServiceV2Request::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_useDefaultImageServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseDefaultImageService";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_useDefaultImageService, allocator);
    }

    if (m_repoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_repoType, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_repoServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoServer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repoServer.c_str(), allocator).Move(), allocator);
    }

    if (m_repoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repoName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceChannel, allocator);
    }

    if (m_subnetListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetList.begin(); itr != m_subnetList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_codingLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodingLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_codingLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_deployModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deployMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateServiceV2Request::GetServiceName() const
{
    return m_serviceName;
}

void CreateServiceV2Request::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool CreateServiceV2Request::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string CreateServiceV2Request::GetDescription() const
{
    return m_description;
}

void CreateServiceV2Request::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateServiceV2Request::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t CreateServiceV2Request::GetUseDefaultImageService() const
{
    return m_useDefaultImageService;
}

void CreateServiceV2Request::SetUseDefaultImageService(const int64_t& _useDefaultImageService)
{
    m_useDefaultImageService = _useDefaultImageService;
    m_useDefaultImageServiceHasBeenSet = true;
}

bool CreateServiceV2Request::UseDefaultImageServiceHasBeenSet() const
{
    return m_useDefaultImageServiceHasBeenSet;
}

int64_t CreateServiceV2Request::GetRepoType() const
{
    return m_repoType;
}

void CreateServiceV2Request::SetRepoType(const int64_t& _repoType)
{
    m_repoType = _repoType;
    m_repoTypeHasBeenSet = true;
}

bool CreateServiceV2Request::RepoTypeHasBeenSet() const
{
    return m_repoTypeHasBeenSet;
}

string CreateServiceV2Request::GetInstanceId() const
{
    return m_instanceId;
}

void CreateServiceV2Request::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateServiceV2Request::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateServiceV2Request::GetRepoServer() const
{
    return m_repoServer;
}

void CreateServiceV2Request::SetRepoServer(const string& _repoServer)
{
    m_repoServer = _repoServer;
    m_repoServerHasBeenSet = true;
}

bool CreateServiceV2Request::RepoServerHasBeenSet() const
{
    return m_repoServerHasBeenSet;
}

string CreateServiceV2Request::GetRepoName() const
{
    return m_repoName;
}

void CreateServiceV2Request::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool CreateServiceV2Request::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

int64_t CreateServiceV2Request::GetSourceChannel() const
{
    return m_sourceChannel;
}

void CreateServiceV2Request::SetSourceChannel(const int64_t& _sourceChannel)
{
    m_sourceChannel = _sourceChannel;
    m_sourceChannelHasBeenSet = true;
}

bool CreateServiceV2Request::SourceChannelHasBeenSet() const
{
    return m_sourceChannelHasBeenSet;
}

vector<string> CreateServiceV2Request::GetSubnetList() const
{
    return m_subnetList;
}

void CreateServiceV2Request::SetSubnetList(const vector<string>& _subnetList)
{
    m_subnetList = _subnetList;
    m_subnetListHasBeenSet = true;
}

bool CreateServiceV2Request::SubnetListHasBeenSet() const
{
    return m_subnetListHasBeenSet;
}

string CreateServiceV2Request::GetCodingLanguage() const
{
    return m_codingLanguage;
}

void CreateServiceV2Request::SetCodingLanguage(const string& _codingLanguage)
{
    m_codingLanguage = _codingLanguage;
    m_codingLanguageHasBeenSet = true;
}

bool CreateServiceV2Request::CodingLanguageHasBeenSet() const
{
    return m_codingLanguageHasBeenSet;
}

string CreateServiceV2Request::GetDeployMode() const
{
    return m_deployMode;
}

void CreateServiceV2Request::SetDeployMode(const string& _deployMode)
{
    m_deployMode = _deployMode;
    m_deployModeHasBeenSet = true;
}

bool CreateServiceV2Request::DeployModeHasBeenSet() const
{
    return m_deployModeHasBeenSet;
}



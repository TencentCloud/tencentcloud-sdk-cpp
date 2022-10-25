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

#include <tencentcloud/tem/v20210701/model/CreateApplicationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

CreateApplicationRequest::CreateApplicationRequest() :
    m_applicationNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_useDefaultImageServiceHasBeenSet(false),
    m_repoTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_repoServerHasBeenSet(false),
    m_repoNameHasBeenSet(false),
    m_sourceChannelHasBeenSet(false),
    m_subnetListHasBeenSet(false),
    m_codingLanguageHasBeenSet(false),
    m_deployModeHasBeenSet(false),
    m_enableTracingHasBeenSet(false),
    m_useDefaultImageServiceParametersHasBeenSet(false),
    m_tagsHasBeenSet(false)
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

    if (m_enableTracingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableTracing";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableTracing, allocator);
    }

    if (m_useDefaultImageServiceParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseDefaultImageServiceParameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_useDefaultImageServiceParameters.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

string CreateApplicationRequest::GetDescription() const
{
    return m_description;
}

void CreateApplicationRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateApplicationRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t CreateApplicationRequest::GetUseDefaultImageService() const
{
    return m_useDefaultImageService;
}

void CreateApplicationRequest::SetUseDefaultImageService(const int64_t& _useDefaultImageService)
{
    m_useDefaultImageService = _useDefaultImageService;
    m_useDefaultImageServiceHasBeenSet = true;
}

bool CreateApplicationRequest::UseDefaultImageServiceHasBeenSet() const
{
    return m_useDefaultImageServiceHasBeenSet;
}

int64_t CreateApplicationRequest::GetRepoType() const
{
    return m_repoType;
}

void CreateApplicationRequest::SetRepoType(const int64_t& _repoType)
{
    m_repoType = _repoType;
    m_repoTypeHasBeenSet = true;
}

bool CreateApplicationRequest::RepoTypeHasBeenSet() const
{
    return m_repoTypeHasBeenSet;
}

string CreateApplicationRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateApplicationRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateApplicationRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateApplicationRequest::GetRepoServer() const
{
    return m_repoServer;
}

void CreateApplicationRequest::SetRepoServer(const string& _repoServer)
{
    m_repoServer = _repoServer;
    m_repoServerHasBeenSet = true;
}

bool CreateApplicationRequest::RepoServerHasBeenSet() const
{
    return m_repoServerHasBeenSet;
}

string CreateApplicationRequest::GetRepoName() const
{
    return m_repoName;
}

void CreateApplicationRequest::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool CreateApplicationRequest::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

int64_t CreateApplicationRequest::GetSourceChannel() const
{
    return m_sourceChannel;
}

void CreateApplicationRequest::SetSourceChannel(const int64_t& _sourceChannel)
{
    m_sourceChannel = _sourceChannel;
    m_sourceChannelHasBeenSet = true;
}

bool CreateApplicationRequest::SourceChannelHasBeenSet() const
{
    return m_sourceChannelHasBeenSet;
}

vector<string> CreateApplicationRequest::GetSubnetList() const
{
    return m_subnetList;
}

void CreateApplicationRequest::SetSubnetList(const vector<string>& _subnetList)
{
    m_subnetList = _subnetList;
    m_subnetListHasBeenSet = true;
}

bool CreateApplicationRequest::SubnetListHasBeenSet() const
{
    return m_subnetListHasBeenSet;
}

string CreateApplicationRequest::GetCodingLanguage() const
{
    return m_codingLanguage;
}

void CreateApplicationRequest::SetCodingLanguage(const string& _codingLanguage)
{
    m_codingLanguage = _codingLanguage;
    m_codingLanguageHasBeenSet = true;
}

bool CreateApplicationRequest::CodingLanguageHasBeenSet() const
{
    return m_codingLanguageHasBeenSet;
}

string CreateApplicationRequest::GetDeployMode() const
{
    return m_deployMode;
}

void CreateApplicationRequest::SetDeployMode(const string& _deployMode)
{
    m_deployMode = _deployMode;
    m_deployModeHasBeenSet = true;
}

bool CreateApplicationRequest::DeployModeHasBeenSet() const
{
    return m_deployModeHasBeenSet;
}

int64_t CreateApplicationRequest::GetEnableTracing() const
{
    return m_enableTracing;
}

void CreateApplicationRequest::SetEnableTracing(const int64_t& _enableTracing)
{
    m_enableTracing = _enableTracing;
    m_enableTracingHasBeenSet = true;
}

bool CreateApplicationRequest::EnableTracingHasBeenSet() const
{
    return m_enableTracingHasBeenSet;
}

UseDefaultRepoParameters CreateApplicationRequest::GetUseDefaultImageServiceParameters() const
{
    return m_useDefaultImageServiceParameters;
}

void CreateApplicationRequest::SetUseDefaultImageServiceParameters(const UseDefaultRepoParameters& _useDefaultImageServiceParameters)
{
    m_useDefaultImageServiceParameters = _useDefaultImageServiceParameters;
    m_useDefaultImageServiceParametersHasBeenSet = true;
}

bool CreateApplicationRequest::UseDefaultImageServiceParametersHasBeenSet() const
{
    return m_useDefaultImageServiceParametersHasBeenSet;
}

vector<Tag> CreateApplicationRequest::GetTags() const
{
    return m_tags;
}

void CreateApplicationRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateApplicationRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}



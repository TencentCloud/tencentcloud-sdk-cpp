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

#include <tencentcloud/tke/v20180525/model/UpdateEKSContainerInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

UpdateEKSContainerInstanceRequest::UpdateEKSContainerInstanceRequest() :
    m_eksCiIdHasBeenSet(false),
    m_restartPolicyHasBeenSet(false),
    m_eksCiVolumeHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_initContainersHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_imageRegistryCredentialsHasBeenSet(false)
{
}

string UpdateEKSContainerInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_eksCiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EksCiId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eksCiId.c_str(), allocator).Move(), allocator);
    }

    if (m_restartPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_restartPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_eksCiVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EksCiVolume";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eksCiVolume.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_containersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Containers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_containers.begin(); itr != m_containers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_initContainersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitContainers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_initContainers.begin(); itr != m_initContainers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_imageRegistryCredentialsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRegistryCredentials";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imageRegistryCredentials.begin(); itr != m_imageRegistryCredentials.end(); ++itr, ++i)
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


string UpdateEKSContainerInstanceRequest::GetEksCiId() const
{
    return m_eksCiId;
}

void UpdateEKSContainerInstanceRequest::SetEksCiId(const string& _eksCiId)
{
    m_eksCiId = _eksCiId;
    m_eksCiIdHasBeenSet = true;
}

bool UpdateEKSContainerInstanceRequest::EksCiIdHasBeenSet() const
{
    return m_eksCiIdHasBeenSet;
}

string UpdateEKSContainerInstanceRequest::GetRestartPolicy() const
{
    return m_restartPolicy;
}

void UpdateEKSContainerInstanceRequest::SetRestartPolicy(const string& _restartPolicy)
{
    m_restartPolicy = _restartPolicy;
    m_restartPolicyHasBeenSet = true;
}

bool UpdateEKSContainerInstanceRequest::RestartPolicyHasBeenSet() const
{
    return m_restartPolicyHasBeenSet;
}

EksCiVolume UpdateEKSContainerInstanceRequest::GetEksCiVolume() const
{
    return m_eksCiVolume;
}

void UpdateEKSContainerInstanceRequest::SetEksCiVolume(const EksCiVolume& _eksCiVolume)
{
    m_eksCiVolume = _eksCiVolume;
    m_eksCiVolumeHasBeenSet = true;
}

bool UpdateEKSContainerInstanceRequest::EksCiVolumeHasBeenSet() const
{
    return m_eksCiVolumeHasBeenSet;
}

vector<Container> UpdateEKSContainerInstanceRequest::GetContainers() const
{
    return m_containers;
}

void UpdateEKSContainerInstanceRequest::SetContainers(const vector<Container>& _containers)
{
    m_containers = _containers;
    m_containersHasBeenSet = true;
}

bool UpdateEKSContainerInstanceRequest::ContainersHasBeenSet() const
{
    return m_containersHasBeenSet;
}

vector<Container> UpdateEKSContainerInstanceRequest::GetInitContainers() const
{
    return m_initContainers;
}

void UpdateEKSContainerInstanceRequest::SetInitContainers(const vector<Container>& _initContainers)
{
    m_initContainers = _initContainers;
    m_initContainersHasBeenSet = true;
}

bool UpdateEKSContainerInstanceRequest::InitContainersHasBeenSet() const
{
    return m_initContainersHasBeenSet;
}

string UpdateEKSContainerInstanceRequest::GetName() const
{
    return m_name;
}

void UpdateEKSContainerInstanceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateEKSContainerInstanceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<ImageRegistryCredential> UpdateEKSContainerInstanceRequest::GetImageRegistryCredentials() const
{
    return m_imageRegistryCredentials;
}

void UpdateEKSContainerInstanceRequest::SetImageRegistryCredentials(const vector<ImageRegistryCredential>& _imageRegistryCredentials)
{
    m_imageRegistryCredentials = _imageRegistryCredentials;
    m_imageRegistryCredentialsHasBeenSet = true;
}

bool UpdateEKSContainerInstanceRequest::ImageRegistryCredentialsHasBeenSet() const
{
    return m_imageRegistryCredentialsHasBeenSet;
}



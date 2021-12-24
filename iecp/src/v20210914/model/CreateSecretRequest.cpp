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

#include <tencentcloud/iecp/v20210914/model/CreateSecretRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

CreateSecretRequest::CreateSecretRequest() :
    m_edgeUnitIDHasBeenSet(false),
    m_secretNameHasBeenSet(false),
    m_secretNamespaceHasBeenSet(false),
    m_secretTypeHasBeenSet(false),
    m_dockerConfigJsonHasBeenSet(false),
    m_cloudDataHasBeenSet(false),
    m_dockerConfigHasBeenSet(false)
{
}

string CreateSecretRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_edgeUnitIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeUnitID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_edgeUnitID, allocator);
    }

    if (m_secretNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretName.c_str(), allocator).Move(), allocator);
    }

    if (m_secretNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretNamespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_secretTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretType.c_str(), allocator).Move(), allocator);
    }

    if (m_dockerConfigJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DockerConfigJson";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dockerConfigJson.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cloudData.begin(); itr != m_cloudData.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_dockerConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DockerConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dockerConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateSecretRequest::GetEdgeUnitID() const
{
    return m_edgeUnitID;
}

void CreateSecretRequest::SetEdgeUnitID(const uint64_t& _edgeUnitID)
{
    m_edgeUnitID = _edgeUnitID;
    m_edgeUnitIDHasBeenSet = true;
}

bool CreateSecretRequest::EdgeUnitIDHasBeenSet() const
{
    return m_edgeUnitIDHasBeenSet;
}

string CreateSecretRequest::GetSecretName() const
{
    return m_secretName;
}

void CreateSecretRequest::SetSecretName(const string& _secretName)
{
    m_secretName = _secretName;
    m_secretNameHasBeenSet = true;
}

bool CreateSecretRequest::SecretNameHasBeenSet() const
{
    return m_secretNameHasBeenSet;
}

string CreateSecretRequest::GetSecretNamespace() const
{
    return m_secretNamespace;
}

void CreateSecretRequest::SetSecretNamespace(const string& _secretNamespace)
{
    m_secretNamespace = _secretNamespace;
    m_secretNamespaceHasBeenSet = true;
}

bool CreateSecretRequest::SecretNamespaceHasBeenSet() const
{
    return m_secretNamespaceHasBeenSet;
}

string CreateSecretRequest::GetSecretType() const
{
    return m_secretType;
}

void CreateSecretRequest::SetSecretType(const string& _secretType)
{
    m_secretType = _secretType;
    m_secretTypeHasBeenSet = true;
}

bool CreateSecretRequest::SecretTypeHasBeenSet() const
{
    return m_secretTypeHasBeenSet;
}

string CreateSecretRequest::GetDockerConfigJson() const
{
    return m_dockerConfigJson;
}

void CreateSecretRequest::SetDockerConfigJson(const string& _dockerConfigJson)
{
    m_dockerConfigJson = _dockerConfigJson;
    m_dockerConfigJsonHasBeenSet = true;
}

bool CreateSecretRequest::DockerConfigJsonHasBeenSet() const
{
    return m_dockerConfigJsonHasBeenSet;
}

vector<KeyValueObj> CreateSecretRequest::GetCloudData() const
{
    return m_cloudData;
}

void CreateSecretRequest::SetCloudData(const vector<KeyValueObj>& _cloudData)
{
    m_cloudData = _cloudData;
    m_cloudDataHasBeenSet = true;
}

bool CreateSecretRequest::CloudDataHasBeenSet() const
{
    return m_cloudDataHasBeenSet;
}

DockerConfig CreateSecretRequest::GetDockerConfig() const
{
    return m_dockerConfig;
}

void CreateSecretRequest::SetDockerConfig(const DockerConfig& _dockerConfig)
{
    m_dockerConfig = _dockerConfig;
    m_dockerConfigHasBeenSet = true;
}

bool CreateSecretRequest::DockerConfigHasBeenSet() const
{
    return m_dockerConfigHasBeenSet;
}



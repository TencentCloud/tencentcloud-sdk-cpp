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

#include <tencentcloud/tcb/v20180608/model/CreateAIModelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CreateAIModelRequest::CreateAIModelRequest() :
    m_envIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_baseUrlHasBeenSet(false),
    m_modelsHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_secretHasBeenSet(false)
{
}

string CreateAIModelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_baseUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_baseUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_modelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Models";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_models.begin(); itr != m_models.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_secretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Secret";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_secret.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAIModelRequest::GetEnvId() const
{
    return m_envId;
}

void CreateAIModelRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool CreateAIModelRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string CreateAIModelRequest::GetGroupName() const
{
    return m_groupName;
}

void CreateAIModelRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool CreateAIModelRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string CreateAIModelRequest::GetBaseUrl() const
{
    return m_baseUrl;
}

void CreateAIModelRequest::SetBaseUrl(const string& _baseUrl)
{
    m_baseUrl = _baseUrl;
    m_baseUrlHasBeenSet = true;
}

bool CreateAIModelRequest::BaseUrlHasBeenSet() const
{
    return m_baseUrlHasBeenSet;
}

vector<AIModel> CreateAIModelRequest::GetModels() const
{
    return m_models;
}

void CreateAIModelRequest::SetModels(const vector<AIModel>& _models)
{
    m_models = _models;
    m_modelsHasBeenSet = true;
}

bool CreateAIModelRequest::ModelsHasBeenSet() const
{
    return m_modelsHasBeenSet;
}

string CreateAIModelRequest::GetRemark() const
{
    return m_remark;
}

void CreateAIModelRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateAIModelRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t CreateAIModelRequest::GetStatus() const
{
    return m_status;
}

void CreateAIModelRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateAIModelRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

AIModelSecret CreateAIModelRequest::GetSecret() const
{
    return m_secret;
}

void CreateAIModelRequest::SetSecret(const AIModelSecret& _secret)
{
    m_secret = _secret;
    m_secretHasBeenSet = true;
}

bool CreateAIModelRequest::SecretHasBeenSet() const
{
    return m_secretHasBeenSet;
}



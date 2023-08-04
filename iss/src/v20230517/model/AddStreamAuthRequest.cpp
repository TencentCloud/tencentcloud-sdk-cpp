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

#include <tencentcloud/iss/v20230517/model/AddStreamAuthRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

AddStreamAuthRequest::AddStreamAuthRequest() :
    m_idHasBeenSet(false),
    m_pullStateHasBeenSet(false),
    m_pullSecretHasBeenSet(false),
    m_pullExpiredHasBeenSet(false),
    m_pushStateHasBeenSet(false),
    m_pushSecretHasBeenSet(false),
    m_pushExpiredHasBeenSet(false)
{
}

string AddStreamAuthRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_pullStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PullState";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pullState, allocator);
    }

    if (m_pullSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PullSecret";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pullSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_pullExpiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PullExpired";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pullExpired, allocator);
    }

    if (m_pushStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushState";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pushState, allocator);
    }

    if (m_pushSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushSecret";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pushSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_pushExpiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushExpired";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pushExpired, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddStreamAuthRequest::GetId() const
{
    return m_id;
}

void AddStreamAuthRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AddStreamAuthRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t AddStreamAuthRequest::GetPullState() const
{
    return m_pullState;
}

void AddStreamAuthRequest::SetPullState(const int64_t& _pullState)
{
    m_pullState = _pullState;
    m_pullStateHasBeenSet = true;
}

bool AddStreamAuthRequest::PullStateHasBeenSet() const
{
    return m_pullStateHasBeenSet;
}

string AddStreamAuthRequest::GetPullSecret() const
{
    return m_pullSecret;
}

void AddStreamAuthRequest::SetPullSecret(const string& _pullSecret)
{
    m_pullSecret = _pullSecret;
    m_pullSecretHasBeenSet = true;
}

bool AddStreamAuthRequest::PullSecretHasBeenSet() const
{
    return m_pullSecretHasBeenSet;
}

int64_t AddStreamAuthRequest::GetPullExpired() const
{
    return m_pullExpired;
}

void AddStreamAuthRequest::SetPullExpired(const int64_t& _pullExpired)
{
    m_pullExpired = _pullExpired;
    m_pullExpiredHasBeenSet = true;
}

bool AddStreamAuthRequest::PullExpiredHasBeenSet() const
{
    return m_pullExpiredHasBeenSet;
}

int64_t AddStreamAuthRequest::GetPushState() const
{
    return m_pushState;
}

void AddStreamAuthRequest::SetPushState(const int64_t& _pushState)
{
    m_pushState = _pushState;
    m_pushStateHasBeenSet = true;
}

bool AddStreamAuthRequest::PushStateHasBeenSet() const
{
    return m_pushStateHasBeenSet;
}

string AddStreamAuthRequest::GetPushSecret() const
{
    return m_pushSecret;
}

void AddStreamAuthRequest::SetPushSecret(const string& _pushSecret)
{
    m_pushSecret = _pushSecret;
    m_pushSecretHasBeenSet = true;
}

bool AddStreamAuthRequest::PushSecretHasBeenSet() const
{
    return m_pushSecretHasBeenSet;
}

int64_t AddStreamAuthRequest::GetPushExpired() const
{
    return m_pushExpired;
}

void AddStreamAuthRequest::SetPushExpired(const int64_t& _pushExpired)
{
    m_pushExpired = _pushExpired;
    m_pushExpiredHasBeenSet = true;
}

bool AddStreamAuthRequest::PushExpiredHasBeenSet() const
{
    return m_pushExpiredHasBeenSet;
}



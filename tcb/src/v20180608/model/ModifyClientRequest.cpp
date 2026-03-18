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

#include <tencentcloud/tcb/v20180608/model/ModifyClientRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

ModifyClientRequest::ModifyClientRequest() :
    m_envIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_refreshTokenExpiresInHasBeenSet(false),
    m_maxDeviceHasBeenSet(false),
    m_accessTokenExpiresInHasBeenSet(false)
{
}

string ModifyClientRequest::ToJsonString() const
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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_refreshTokenExpiresInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefreshTokenExpiresIn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_refreshTokenExpiresIn, allocator);
    }

    if (m_maxDeviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDevice";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxDevice, allocator);
    }

    if (m_accessTokenExpiresInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessTokenExpiresIn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_accessTokenExpiresIn, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyClientRequest::GetEnvId() const
{
    return m_envId;
}

void ModifyClientRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool ModifyClientRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string ModifyClientRequest::GetId() const
{
    return m_id;
}

void ModifyClientRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyClientRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t ModifyClientRequest::GetRefreshTokenExpiresIn() const
{
    return m_refreshTokenExpiresIn;
}

void ModifyClientRequest::SetRefreshTokenExpiresIn(const int64_t& _refreshTokenExpiresIn)
{
    m_refreshTokenExpiresIn = _refreshTokenExpiresIn;
    m_refreshTokenExpiresInHasBeenSet = true;
}

bool ModifyClientRequest::RefreshTokenExpiresInHasBeenSet() const
{
    return m_refreshTokenExpiresInHasBeenSet;
}

int64_t ModifyClientRequest::GetMaxDevice() const
{
    return m_maxDevice;
}

void ModifyClientRequest::SetMaxDevice(const int64_t& _maxDevice)
{
    m_maxDevice = _maxDevice;
    m_maxDeviceHasBeenSet = true;
}

bool ModifyClientRequest::MaxDeviceHasBeenSet() const
{
    return m_maxDeviceHasBeenSet;
}

int64_t ModifyClientRequest::GetAccessTokenExpiresIn() const
{
    return m_accessTokenExpiresIn;
}

void ModifyClientRequest::SetAccessTokenExpiresIn(const int64_t& _accessTokenExpiresIn)
{
    m_accessTokenExpiresIn = _accessTokenExpiresIn;
    m_accessTokenExpiresInHasBeenSet = true;
}

bool ModifyClientRequest::AccessTokenExpiresInHasBeenSet() const
{
    return m_accessTokenExpiresInHasBeenSet;
}



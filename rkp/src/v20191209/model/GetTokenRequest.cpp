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

#include <tencentcloud/rkp/v20191209/model/GetTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rkp::V20191209::Model;
using namespace std;

GetTokenRequest::GetTokenRequest() :
    m_businessIdHasBeenSet(false),
    m_sceneHasBeenSet(false),
    m_businessUserIdHasBeenSet(false),
    m_appClientIpHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_oldTokenHasBeenSet(false)
{
}

string GetTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_businessId, allocator);
    }

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scene, allocator);
    }

    if (m_businessUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_appClientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppClientIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appClientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_oldTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t GetTokenRequest::GetBusinessId() const
{
    return m_businessId;
}

void GetTokenRequest::SetBusinessId(const int64_t& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool GetTokenRequest::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

int64_t GetTokenRequest::GetScene() const
{
    return m_scene;
}

void GetTokenRequest::SetScene(const int64_t& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool GetTokenRequest::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

string GetTokenRequest::GetBusinessUserId() const
{
    return m_businessUserId;
}

void GetTokenRequest::SetBusinessUserId(const string& _businessUserId)
{
    m_businessUserId = _businessUserId;
    m_businessUserIdHasBeenSet = true;
}

bool GetTokenRequest::BusinessUserIdHasBeenSet() const
{
    return m_businessUserIdHasBeenSet;
}

string GetTokenRequest::GetAppClientIp() const
{
    return m_appClientIp;
}

void GetTokenRequest::SetAppClientIp(const string& _appClientIp)
{
    m_appClientIp = _appClientIp;
    m_appClientIpHasBeenSet = true;
}

bool GetTokenRequest::AppClientIpHasBeenSet() const
{
    return m_appClientIpHasBeenSet;
}

int64_t GetTokenRequest::GetExpireTime() const
{
    return m_expireTime;
}

void GetTokenRequest::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool GetTokenRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string GetTokenRequest::GetOldToken() const
{
    return m_oldToken;
}

void GetTokenRequest::SetOldToken(const string& _oldToken)
{
    m_oldToken = _oldToken;
    m_oldTokenHasBeenSet = true;
}

bool GetTokenRequest::OldTokenHasBeenSet() const
{
    return m_oldTokenHasBeenSet;
}



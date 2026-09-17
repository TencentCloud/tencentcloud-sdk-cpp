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

#include <tencentcloud/tcb/v20180608/model/CreatePlatformEnvRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CreatePlatformEnvRequest::CreatePlatformEnvRequest() :
    m_aliasHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_reqKeyHasBeenSet(false)
{
}

string CreatePlatformEnvRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_reqKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reqKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePlatformEnvRequest::GetAlias() const
{
    return m_alias;
}

void CreatePlatformEnvRequest::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool CreatePlatformEnvRequest::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string CreatePlatformEnvRequest::GetPlatformId() const
{
    return m_platformId;
}

void CreatePlatformEnvRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool CreatePlatformEnvRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string CreatePlatformEnvRequest::GetReqKey() const
{
    return m_reqKey;
}

void CreatePlatformEnvRequest::SetReqKey(const string& _reqKey)
{
    m_reqKey = _reqKey;
    m_reqKeyHasBeenSet = true;
}

bool CreatePlatformEnvRequest::ReqKeyHasBeenSet() const
{
    return m_reqKeyHasBeenSet;
}



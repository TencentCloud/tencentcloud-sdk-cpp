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

#include <tencentcloud/iotvideo/v20191126/model/CreateUsrTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

CreateUsrTokenRequest::CreateUsrTokenRequest() :
    m_accessIdHasBeenSet(false),
    m_uniqueIdHasBeenSet(false),
    m_ttlMinutesHasBeenSet(false),
    m_oldAccessTokenHasBeenSet(false)
{
}

string CreateUsrTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniqueId.c_str(), allocator).Move(), allocator);
    }

    if (m_ttlMinutesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TtlMinutes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ttlMinutes, allocator);
    }

    if (m_oldAccessTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldAccessToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldAccessToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateUsrTokenRequest::GetAccessId() const
{
    return m_accessId;
}

void CreateUsrTokenRequest::SetAccessId(const string& _accessId)
{
    m_accessId = _accessId;
    m_accessIdHasBeenSet = true;
}

bool CreateUsrTokenRequest::AccessIdHasBeenSet() const
{
    return m_accessIdHasBeenSet;
}

string CreateUsrTokenRequest::GetUniqueId() const
{
    return m_uniqueId;
}

void CreateUsrTokenRequest::SetUniqueId(const string& _uniqueId)
{
    m_uniqueId = _uniqueId;
    m_uniqueIdHasBeenSet = true;
}

bool CreateUsrTokenRequest::UniqueIdHasBeenSet() const
{
    return m_uniqueIdHasBeenSet;
}

uint64_t CreateUsrTokenRequest::GetTtlMinutes() const
{
    return m_ttlMinutes;
}

void CreateUsrTokenRequest::SetTtlMinutes(const uint64_t& _ttlMinutes)
{
    m_ttlMinutes = _ttlMinutes;
    m_ttlMinutesHasBeenSet = true;
}

bool CreateUsrTokenRequest::TtlMinutesHasBeenSet() const
{
    return m_ttlMinutesHasBeenSet;
}

string CreateUsrTokenRequest::GetOldAccessToken() const
{
    return m_oldAccessToken;
}

void CreateUsrTokenRequest::SetOldAccessToken(const string& _oldAccessToken)
{
    m_oldAccessToken = _oldAccessToken;
    m_oldAccessTokenHasBeenSet = true;
}

bool CreateUsrTokenRequest::OldAccessTokenHasBeenSet() const
{
    return m_oldAccessTokenHasBeenSet;
}



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

#include <tencentcloud/iotvideo/v20191126/model/CreateAnonymousAccessTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

CreateAnonymousAccessTokenRequest::CreateAnonymousAccessTokenRequest() :
    m_ttlMinutesHasBeenSet(false),
    m_tidHasBeenSet(false),
    m_oldAccessTokenHasBeenSet(false)
{
}

string CreateAnonymousAccessTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ttlMinutesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TtlMinutes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ttlMinutes, allocator);
    }

    if (m_tidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tid.c_str(), allocator).Move(), allocator);
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


int64_t CreateAnonymousAccessTokenRequest::GetTtlMinutes() const
{
    return m_ttlMinutes;
}

void CreateAnonymousAccessTokenRequest::SetTtlMinutes(const int64_t& _ttlMinutes)
{
    m_ttlMinutes = _ttlMinutes;
    m_ttlMinutesHasBeenSet = true;
}

bool CreateAnonymousAccessTokenRequest::TtlMinutesHasBeenSet() const
{
    return m_ttlMinutesHasBeenSet;
}

string CreateAnonymousAccessTokenRequest::GetTid() const
{
    return m_tid;
}

void CreateAnonymousAccessTokenRequest::SetTid(const string& _tid)
{
    m_tid = _tid;
    m_tidHasBeenSet = true;
}

bool CreateAnonymousAccessTokenRequest::TidHasBeenSet() const
{
    return m_tidHasBeenSet;
}

string CreateAnonymousAccessTokenRequest::GetOldAccessToken() const
{
    return m_oldAccessToken;
}

void CreateAnonymousAccessTokenRequest::SetOldAccessToken(const string& _oldAccessToken)
{
    m_oldAccessToken = _oldAccessToken;
    m_oldAccessTokenHasBeenSet = true;
}

bool CreateAnonymousAccessTokenRequest::OldAccessTokenHasBeenSet() const
{
    return m_oldAccessTokenHasBeenSet;
}



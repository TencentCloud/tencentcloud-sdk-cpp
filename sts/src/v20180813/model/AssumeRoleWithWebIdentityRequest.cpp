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

#include <tencentcloud/sts/v20180813/model/AssumeRoleWithWebIdentityRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sts::V20180813::Model;
using namespace std;

AssumeRoleWithWebIdentityRequest::AssumeRoleWithWebIdentityRequest() :
    m_providerIdHasBeenSet(false),
    m_webIdentityTokenHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_roleSessionNameHasBeenSet(false),
    m_durationSecondsHasBeenSet(false)
{
}

string AssumeRoleWithWebIdentityRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_providerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProviderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_providerId.c_str(), allocator).Move(), allocator);
    }

    if (m_webIdentityTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebIdentityToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_webIdentityToken.c_str(), allocator).Move(), allocator);
    }

    if (m_roleArnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleArn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleArn.c_str(), allocator).Move(), allocator);
    }

    if (m_roleSessionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleSessionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleSessionName.c_str(), allocator).Move(), allocator);
    }

    if (m_durationSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_durationSeconds, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AssumeRoleWithWebIdentityRequest::GetProviderId() const
{
    return m_providerId;
}

void AssumeRoleWithWebIdentityRequest::SetProviderId(const string& _providerId)
{
    m_providerId = _providerId;
    m_providerIdHasBeenSet = true;
}

bool AssumeRoleWithWebIdentityRequest::ProviderIdHasBeenSet() const
{
    return m_providerIdHasBeenSet;
}

string AssumeRoleWithWebIdentityRequest::GetWebIdentityToken() const
{
    return m_webIdentityToken;
}

void AssumeRoleWithWebIdentityRequest::SetWebIdentityToken(const string& _webIdentityToken)
{
    m_webIdentityToken = _webIdentityToken;
    m_webIdentityTokenHasBeenSet = true;
}

bool AssumeRoleWithWebIdentityRequest::WebIdentityTokenHasBeenSet() const
{
    return m_webIdentityTokenHasBeenSet;
}

string AssumeRoleWithWebIdentityRequest::GetRoleArn() const
{
    return m_roleArn;
}

void AssumeRoleWithWebIdentityRequest::SetRoleArn(const string& _roleArn)
{
    m_roleArn = _roleArn;
    m_roleArnHasBeenSet = true;
}

bool AssumeRoleWithWebIdentityRequest::RoleArnHasBeenSet() const
{
    return m_roleArnHasBeenSet;
}

string AssumeRoleWithWebIdentityRequest::GetRoleSessionName() const
{
    return m_roleSessionName;
}

void AssumeRoleWithWebIdentityRequest::SetRoleSessionName(const string& _roleSessionName)
{
    m_roleSessionName = _roleSessionName;
    m_roleSessionNameHasBeenSet = true;
}

bool AssumeRoleWithWebIdentityRequest::RoleSessionNameHasBeenSet() const
{
    return m_roleSessionNameHasBeenSet;
}

int64_t AssumeRoleWithWebIdentityRequest::GetDurationSeconds() const
{
    return m_durationSeconds;
}

void AssumeRoleWithWebIdentityRequest::SetDurationSeconds(const int64_t& _durationSeconds)
{
    m_durationSeconds = _durationSeconds;
    m_durationSecondsHasBeenSet = true;
}

bool AssumeRoleWithWebIdentityRequest::DurationSecondsHasBeenSet() const
{
    return m_durationSecondsHasBeenSet;
}



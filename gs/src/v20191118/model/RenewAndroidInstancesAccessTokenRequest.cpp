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

#include <tencentcloud/gs/v20191118/model/RenewAndroidInstancesAccessTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

RenewAndroidInstancesAccessTokenRequest::RenewAndroidInstancesAccessTokenRequest() :
    m_accessTokenHasBeenSet(false),
    m_expirationDurationHasBeenSet(false)
{
}

string RenewAndroidInstancesAccessTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accessTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessToken.c_str(), allocator).Move(), allocator);
    }

    if (m_expirationDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpirationDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expirationDuration.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RenewAndroidInstancesAccessTokenRequest::GetAccessToken() const
{
    return m_accessToken;
}

void RenewAndroidInstancesAccessTokenRequest::SetAccessToken(const string& _accessToken)
{
    m_accessToken = _accessToken;
    m_accessTokenHasBeenSet = true;
}

bool RenewAndroidInstancesAccessTokenRequest::AccessTokenHasBeenSet() const
{
    return m_accessTokenHasBeenSet;
}

string RenewAndroidInstancesAccessTokenRequest::GetExpirationDuration() const
{
    return m_expirationDuration;
}

void RenewAndroidInstancesAccessTokenRequest::SetExpirationDuration(const string& _expirationDuration)
{
    m_expirationDuration = _expirationDuration;
    m_expirationDurationHasBeenSet = true;
}

bool RenewAndroidInstancesAccessTokenRequest::ExpirationDurationHasBeenSet() const
{
    return m_expirationDurationHasBeenSet;
}



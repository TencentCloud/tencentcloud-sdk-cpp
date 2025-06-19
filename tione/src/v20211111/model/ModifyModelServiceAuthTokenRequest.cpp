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

#include <tencentcloud/tione/v20211111/model/ModifyModelServiceAuthTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ModifyModelServiceAuthTokenRequest::ModifyModelServiceAuthTokenRequest() :
    m_serviceGroupIdHasBeenSet(false),
    m_needResetHasBeenSet(false),
    m_authTokenHasBeenSet(false)
{
}

string ModifyModelServiceAuthTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_needResetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedReset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needReset, allocator);
    }

    if (m_authTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_authToken.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyModelServiceAuthTokenRequest::GetServiceGroupId() const
{
    return m_serviceGroupId;
}

void ModifyModelServiceAuthTokenRequest::SetServiceGroupId(const string& _serviceGroupId)
{
    m_serviceGroupId = _serviceGroupId;
    m_serviceGroupIdHasBeenSet = true;
}

bool ModifyModelServiceAuthTokenRequest::ServiceGroupIdHasBeenSet() const
{
    return m_serviceGroupIdHasBeenSet;
}

bool ModifyModelServiceAuthTokenRequest::GetNeedReset() const
{
    return m_needReset;
}

void ModifyModelServiceAuthTokenRequest::SetNeedReset(const bool& _needReset)
{
    m_needReset = _needReset;
    m_needResetHasBeenSet = true;
}

bool ModifyModelServiceAuthTokenRequest::NeedResetHasBeenSet() const
{
    return m_needResetHasBeenSet;
}

AuthToken ModifyModelServiceAuthTokenRequest::GetAuthToken() const
{
    return m_authToken;
}

void ModifyModelServiceAuthTokenRequest::SetAuthToken(const AuthToken& _authToken)
{
    m_authToken = _authToken;
    m_authTokenHasBeenSet = true;
}

bool ModifyModelServiceAuthTokenRequest::AuthTokenHasBeenSet() const
{
    return m_authTokenHasBeenSet;
}



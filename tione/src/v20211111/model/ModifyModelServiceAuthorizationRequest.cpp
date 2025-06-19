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

#include <tencentcloud/tione/v20211111/model/ModifyModelServiceAuthorizationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ModifyModelServiceAuthorizationRequest::ModifyModelServiceAuthorizationRequest() :
    m_serviceGroupIdHasBeenSet(false),
    m_authorizationEnableHasBeenSet(false)
{
}

string ModifyModelServiceAuthorizationRequest::ToJsonString() const
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

    if (m_authorizationEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_authorizationEnable, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyModelServiceAuthorizationRequest::GetServiceGroupId() const
{
    return m_serviceGroupId;
}

void ModifyModelServiceAuthorizationRequest::SetServiceGroupId(const string& _serviceGroupId)
{
    m_serviceGroupId = _serviceGroupId;
    m_serviceGroupIdHasBeenSet = true;
}

bool ModifyModelServiceAuthorizationRequest::ServiceGroupIdHasBeenSet() const
{
    return m_serviceGroupIdHasBeenSet;
}

bool ModifyModelServiceAuthorizationRequest::GetAuthorizationEnable() const
{
    return m_authorizationEnable;
}

void ModifyModelServiceAuthorizationRequest::SetAuthorizationEnable(const bool& _authorizationEnable)
{
    m_authorizationEnable = _authorizationEnable;
    m_authorizationEnableHasBeenSet = true;
}

bool ModifyModelServiceAuthorizationRequest::AuthorizationEnableHasBeenSet() const
{
    return m_authorizationEnableHasBeenSet;
}



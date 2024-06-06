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

#include <tencentcloud/tione/v20211111/model/ServiceCallInfoV2.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ServiceCallInfoV2::ServiceCallInfoV2() :
    m_serviceGroupIdHasBeenSet(false),
    m_internetEndpointHasBeenSet(false),
    m_authorizationEnableHasBeenSet(false),
    m_authTokenHasBeenSet(false)
{
}

CoreInternalOutcome ServiceCallInfoV2::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceGroupId") && !value["ServiceGroupId"].IsNull())
    {
        if (!value["ServiceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceCallInfoV2.ServiceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceGroupId = string(value["ServiceGroupId"].GetString());
        m_serviceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("InternetEndpoint") && !value["InternetEndpoint"].IsNull())
    {
        if (!value["InternetEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceCallInfoV2.InternetEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetEndpoint = string(value["InternetEndpoint"].GetString());
        m_internetEndpointHasBeenSet = true;
    }

    if (value.HasMember("AuthorizationEnable") && !value["AuthorizationEnable"].IsNull())
    {
        if (!value["AuthorizationEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceCallInfoV2.AuthorizationEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationEnable = value["AuthorizationEnable"].GetBool();
        m_authorizationEnableHasBeenSet = true;
    }

    if (value.HasMember("AuthToken") && !value["AuthToken"].IsNull())
    {
        if (!value["AuthToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceCallInfoV2.AuthToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authToken = string(value["AuthToken"].GetString());
        m_authTokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceCallInfoV2::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_internetEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internetEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authorizationEnable, allocator);
    }

    if (m_authTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authToken.c_str(), allocator).Move(), allocator);
    }

}


string ServiceCallInfoV2::GetServiceGroupId() const
{
    return m_serviceGroupId;
}

void ServiceCallInfoV2::SetServiceGroupId(const string& _serviceGroupId)
{
    m_serviceGroupId = _serviceGroupId;
    m_serviceGroupIdHasBeenSet = true;
}

bool ServiceCallInfoV2::ServiceGroupIdHasBeenSet() const
{
    return m_serviceGroupIdHasBeenSet;
}

string ServiceCallInfoV2::GetInternetEndpoint() const
{
    return m_internetEndpoint;
}

void ServiceCallInfoV2::SetInternetEndpoint(const string& _internetEndpoint)
{
    m_internetEndpoint = _internetEndpoint;
    m_internetEndpointHasBeenSet = true;
}

bool ServiceCallInfoV2::InternetEndpointHasBeenSet() const
{
    return m_internetEndpointHasBeenSet;
}

bool ServiceCallInfoV2::GetAuthorizationEnable() const
{
    return m_authorizationEnable;
}

void ServiceCallInfoV2::SetAuthorizationEnable(const bool& _authorizationEnable)
{
    m_authorizationEnable = _authorizationEnable;
    m_authorizationEnableHasBeenSet = true;
}

bool ServiceCallInfoV2::AuthorizationEnableHasBeenSet() const
{
    return m_authorizationEnableHasBeenSet;
}

string ServiceCallInfoV2::GetAuthToken() const
{
    return m_authToken;
}

void ServiceCallInfoV2::SetAuthToken(const string& _authToken)
{
    m_authToken = _authToken;
    m_authTokenHasBeenSet = true;
}

bool ServiceCallInfoV2::AuthTokenHasBeenSet() const
{
    return m_authTokenHasBeenSet;
}


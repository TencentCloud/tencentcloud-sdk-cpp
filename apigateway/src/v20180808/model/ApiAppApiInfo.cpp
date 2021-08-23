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

#include <tencentcloud/apigateway/v20180808/model/ApiAppApiInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ApiAppApiInfo::ApiAppApiInfo() :
    m_apiAppNameHasBeenSet(false),
    m_apiAppIdHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_apiNameHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_authorizedTimeHasBeenSet(false),
    m_apiRegionHasBeenSet(false),
    m_environmentNameHasBeenSet(false)
{
}

CoreInternalOutcome ApiAppApiInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiAppName") && !value["ApiAppName"].IsNull())
    {
        if (!value["ApiAppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAppApiInfo.ApiAppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiAppName = string(value["ApiAppName"].GetString());
        m_apiAppNameHasBeenSet = true;
    }

    if (value.HasMember("ApiAppId") && !value["ApiAppId"].IsNull())
    {
        if (!value["ApiAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAppApiInfo.ApiAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiAppId = string(value["ApiAppId"].GetString());
        m_apiAppIdHasBeenSet = true;
    }

    if (value.HasMember("ApiId") && !value["ApiId"].IsNull())
    {
        if (!value["ApiId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAppApiInfo.ApiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiId = string(value["ApiId"].GetString());
        m_apiIdHasBeenSet = true;
    }

    if (value.HasMember("ApiName") && !value["ApiName"].IsNull())
    {
        if (!value["ApiName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAppApiInfo.ApiName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiName = string(value["ApiName"].GetString());
        m_apiNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAppApiInfo.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("AuthorizedTime") && !value["AuthorizedTime"].IsNull())
    {
        if (!value["AuthorizedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAppApiInfo.AuthorizedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizedTime = string(value["AuthorizedTime"].GetString());
        m_authorizedTimeHasBeenSet = true;
    }

    if (value.HasMember("ApiRegion") && !value["ApiRegion"].IsNull())
    {
        if (!value["ApiRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAppApiInfo.ApiRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiRegion = string(value["ApiRegion"].GetString());
        m_apiRegionHasBeenSet = true;
    }

    if (value.HasMember("EnvironmentName") && !value["EnvironmentName"].IsNull())
    {
        if (!value["EnvironmentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAppApiInfo.EnvironmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentName = string(value["EnvironmentName"].GetString());
        m_environmentNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiAppApiInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiAppNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiAppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiAppName.c_str(), allocator).Move(), allocator);
    }

    if (m_apiAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_apiRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentName.c_str(), allocator).Move(), allocator);
    }

}


string ApiAppApiInfo::GetApiAppName() const
{
    return m_apiAppName;
}

void ApiAppApiInfo::SetApiAppName(const string& _apiAppName)
{
    m_apiAppName = _apiAppName;
    m_apiAppNameHasBeenSet = true;
}

bool ApiAppApiInfo::ApiAppNameHasBeenSet() const
{
    return m_apiAppNameHasBeenSet;
}

string ApiAppApiInfo::GetApiAppId() const
{
    return m_apiAppId;
}

void ApiAppApiInfo::SetApiAppId(const string& _apiAppId)
{
    m_apiAppId = _apiAppId;
    m_apiAppIdHasBeenSet = true;
}

bool ApiAppApiInfo::ApiAppIdHasBeenSet() const
{
    return m_apiAppIdHasBeenSet;
}

string ApiAppApiInfo::GetApiId() const
{
    return m_apiId;
}

void ApiAppApiInfo::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool ApiAppApiInfo::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}

string ApiAppApiInfo::GetApiName() const
{
    return m_apiName;
}

void ApiAppApiInfo::SetApiName(const string& _apiName)
{
    m_apiName = _apiName;
    m_apiNameHasBeenSet = true;
}

bool ApiAppApiInfo::ApiNameHasBeenSet() const
{
    return m_apiNameHasBeenSet;
}

string ApiAppApiInfo::GetServiceId() const
{
    return m_serviceId;
}

void ApiAppApiInfo::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool ApiAppApiInfo::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string ApiAppApiInfo::GetAuthorizedTime() const
{
    return m_authorizedTime;
}

void ApiAppApiInfo::SetAuthorizedTime(const string& _authorizedTime)
{
    m_authorizedTime = _authorizedTime;
    m_authorizedTimeHasBeenSet = true;
}

bool ApiAppApiInfo::AuthorizedTimeHasBeenSet() const
{
    return m_authorizedTimeHasBeenSet;
}

string ApiAppApiInfo::GetApiRegion() const
{
    return m_apiRegion;
}

void ApiAppApiInfo::SetApiRegion(const string& _apiRegion)
{
    m_apiRegion = _apiRegion;
    m_apiRegionHasBeenSet = true;
}

bool ApiAppApiInfo::ApiRegionHasBeenSet() const
{
    return m_apiRegionHasBeenSet;
}

string ApiAppApiInfo::GetEnvironmentName() const
{
    return m_environmentName;
}

void ApiAppApiInfo::SetEnvironmentName(const string& _environmentName)
{
    m_environmentName = _environmentName;
    m_environmentNameHasBeenSet = true;
}

bool ApiAppApiInfo::EnvironmentNameHasBeenSet() const
{
    return m_environmentNameHasBeenSet;
}


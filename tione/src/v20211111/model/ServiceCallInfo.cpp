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

#include <tencentcloud/tione/v20211111/model/ServiceCallInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ServiceCallInfo::ServiceCallInfo() :
    m_serviceGroupIdHasBeenSet(false),
    m_innerHttpAddrHasBeenSet(false),
    m_innerHttpsAddrHasBeenSet(false),
    m_outerHttpAddrHasBeenSet(false),
    m_outerHttpsAddrHasBeenSet(false),
    m_appKeyHasBeenSet(false),
    m_appSecretHasBeenSet(false),
    m_authorizationEnableHasBeenSet(false)
{
}

CoreInternalOutcome ServiceCallInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceGroupId") && !value["ServiceGroupId"].IsNull())
    {
        if (!value["ServiceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceCallInfo.ServiceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceGroupId = string(value["ServiceGroupId"].GetString());
        m_serviceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("InnerHttpAddr") && !value["InnerHttpAddr"].IsNull())
    {
        if (!value["InnerHttpAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceCallInfo.InnerHttpAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_innerHttpAddr = string(value["InnerHttpAddr"].GetString());
        m_innerHttpAddrHasBeenSet = true;
    }

    if (value.HasMember("InnerHttpsAddr") && !value["InnerHttpsAddr"].IsNull())
    {
        if (!value["InnerHttpsAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceCallInfo.InnerHttpsAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_innerHttpsAddr = string(value["InnerHttpsAddr"].GetString());
        m_innerHttpsAddrHasBeenSet = true;
    }

    if (value.HasMember("OuterHttpAddr") && !value["OuterHttpAddr"].IsNull())
    {
        if (!value["OuterHttpAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceCallInfo.OuterHttpAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outerHttpAddr = string(value["OuterHttpAddr"].GetString());
        m_outerHttpAddrHasBeenSet = true;
    }

    if (value.HasMember("OuterHttpsAddr") && !value["OuterHttpsAddr"].IsNull())
    {
        if (!value["OuterHttpsAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceCallInfo.OuterHttpsAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outerHttpsAddr = string(value["OuterHttpsAddr"].GetString());
        m_outerHttpsAddrHasBeenSet = true;
    }

    if (value.HasMember("AppKey") && !value["AppKey"].IsNull())
    {
        if (!value["AppKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceCallInfo.AppKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appKey = string(value["AppKey"].GetString());
        m_appKeyHasBeenSet = true;
    }

    if (value.HasMember("AppSecret") && !value["AppSecret"].IsNull())
    {
        if (!value["AppSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceCallInfo.AppSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appSecret = string(value["AppSecret"].GetString());
        m_appSecretHasBeenSet = true;
    }

    if (value.HasMember("AuthorizationEnable") && !value["AuthorizationEnable"].IsNull())
    {
        if (!value["AuthorizationEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceCallInfo.AuthorizationEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationEnable = value["AuthorizationEnable"].GetBool();
        m_authorizationEnableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceCallInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_innerHttpAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerHttpAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_innerHttpAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_innerHttpsAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerHttpsAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_innerHttpsAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_outerHttpAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OuterHttpAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outerHttpAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_outerHttpsAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OuterHttpsAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outerHttpsAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_appKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appKey.c_str(), allocator).Move(), allocator);
    }

    if (m_appSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authorizationEnable, allocator);
    }

}


string ServiceCallInfo::GetServiceGroupId() const
{
    return m_serviceGroupId;
}

void ServiceCallInfo::SetServiceGroupId(const string& _serviceGroupId)
{
    m_serviceGroupId = _serviceGroupId;
    m_serviceGroupIdHasBeenSet = true;
}

bool ServiceCallInfo::ServiceGroupIdHasBeenSet() const
{
    return m_serviceGroupIdHasBeenSet;
}

string ServiceCallInfo::GetInnerHttpAddr() const
{
    return m_innerHttpAddr;
}

void ServiceCallInfo::SetInnerHttpAddr(const string& _innerHttpAddr)
{
    m_innerHttpAddr = _innerHttpAddr;
    m_innerHttpAddrHasBeenSet = true;
}

bool ServiceCallInfo::InnerHttpAddrHasBeenSet() const
{
    return m_innerHttpAddrHasBeenSet;
}

string ServiceCallInfo::GetInnerHttpsAddr() const
{
    return m_innerHttpsAddr;
}

void ServiceCallInfo::SetInnerHttpsAddr(const string& _innerHttpsAddr)
{
    m_innerHttpsAddr = _innerHttpsAddr;
    m_innerHttpsAddrHasBeenSet = true;
}

bool ServiceCallInfo::InnerHttpsAddrHasBeenSet() const
{
    return m_innerHttpsAddrHasBeenSet;
}

string ServiceCallInfo::GetOuterHttpAddr() const
{
    return m_outerHttpAddr;
}

void ServiceCallInfo::SetOuterHttpAddr(const string& _outerHttpAddr)
{
    m_outerHttpAddr = _outerHttpAddr;
    m_outerHttpAddrHasBeenSet = true;
}

bool ServiceCallInfo::OuterHttpAddrHasBeenSet() const
{
    return m_outerHttpAddrHasBeenSet;
}

string ServiceCallInfo::GetOuterHttpsAddr() const
{
    return m_outerHttpsAddr;
}

void ServiceCallInfo::SetOuterHttpsAddr(const string& _outerHttpsAddr)
{
    m_outerHttpsAddr = _outerHttpsAddr;
    m_outerHttpsAddrHasBeenSet = true;
}

bool ServiceCallInfo::OuterHttpsAddrHasBeenSet() const
{
    return m_outerHttpsAddrHasBeenSet;
}

string ServiceCallInfo::GetAppKey() const
{
    return m_appKey;
}

void ServiceCallInfo::SetAppKey(const string& _appKey)
{
    m_appKey = _appKey;
    m_appKeyHasBeenSet = true;
}

bool ServiceCallInfo::AppKeyHasBeenSet() const
{
    return m_appKeyHasBeenSet;
}

string ServiceCallInfo::GetAppSecret() const
{
    return m_appSecret;
}

void ServiceCallInfo::SetAppSecret(const string& _appSecret)
{
    m_appSecret = _appSecret;
    m_appSecretHasBeenSet = true;
}

bool ServiceCallInfo::AppSecretHasBeenSet() const
{
    return m_appSecretHasBeenSet;
}

bool ServiceCallInfo::GetAuthorizationEnable() const
{
    return m_authorizationEnable;
}

void ServiceCallInfo::SetAuthorizationEnable(const bool& _authorizationEnable)
{
    m_authorizationEnable = _authorizationEnable;
    m_authorizationEnableHasBeenSet = true;
}

bool ServiceCallInfo::AuthorizationEnableHasBeenSet() const
{
    return m_authorizationEnableHasBeenSet;
}


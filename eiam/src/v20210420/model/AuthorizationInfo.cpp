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

#include <tencentcloud/eiam/v20210420/model/AuthorizationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

AuthorizationInfo::AuthorizationInfo() :
    m_appIdHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_entityNameHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_authorizationIdHasBeenSet(false)
{
}

CoreInternalOutcome AuthorizationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationInfo.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationInfo.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("EntityName") && !value["EntityName"].IsNull())
    {
        if (!value["EntityName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationInfo.EntityName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entityName = string(value["EntityName"].GetString());
        m_entityNameHasBeenSet = true;
    }

    if (value.HasMember("EntityId") && !value["EntityId"].IsNull())
    {
        if (!value["EntityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationInfo.EntityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entityId = string(value["EntityId"].GetString());
        m_entityIdHasBeenSet = true;
    }

    if (value.HasMember("LastModifiedDate") && !value["LastModifiedDate"].IsNull())
    {
        if (!value["LastModifiedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationInfo.LastModifiedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifiedDate = string(value["LastModifiedDate"].GetString());
        m_lastModifiedDateHasBeenSet = true;
    }

    if (value.HasMember("AuthorizationId") && !value["AuthorizationId"].IsNull())
    {
        if (!value["AuthorizationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationInfo.AuthorizationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationId = string(value["AuthorizationId"].GetString());
        m_authorizationIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuthorizationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_entityNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entityName.c_str(), allocator).Move(), allocator);
    }

    if (m_entityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entityId.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifiedDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifiedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModifiedDate.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizationId.c_str(), allocator).Move(), allocator);
    }

}


string AuthorizationInfo::GetAppId() const
{
    return m_appId;
}

void AuthorizationInfo::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AuthorizationInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string AuthorizationInfo::GetAppName() const
{
    return m_appName;
}

void AuthorizationInfo::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool AuthorizationInfo::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string AuthorizationInfo::GetEntityName() const
{
    return m_entityName;
}

void AuthorizationInfo::SetEntityName(const string& _entityName)
{
    m_entityName = _entityName;
    m_entityNameHasBeenSet = true;
}

bool AuthorizationInfo::EntityNameHasBeenSet() const
{
    return m_entityNameHasBeenSet;
}

string AuthorizationInfo::GetEntityId() const
{
    return m_entityId;
}

void AuthorizationInfo::SetEntityId(const string& _entityId)
{
    m_entityId = _entityId;
    m_entityIdHasBeenSet = true;
}

bool AuthorizationInfo::EntityIdHasBeenSet() const
{
    return m_entityIdHasBeenSet;
}

string AuthorizationInfo::GetLastModifiedDate() const
{
    return m_lastModifiedDate;
}

void AuthorizationInfo::SetLastModifiedDate(const string& _lastModifiedDate)
{
    m_lastModifiedDate = _lastModifiedDate;
    m_lastModifiedDateHasBeenSet = true;
}

bool AuthorizationInfo::LastModifiedDateHasBeenSet() const
{
    return m_lastModifiedDateHasBeenSet;
}

string AuthorizationInfo::GetAuthorizationId() const
{
    return m_authorizationId;
}

void AuthorizationInfo::SetAuthorizationId(const string& _authorizationId)
{
    m_authorizationId = _authorizationId;
    m_authorizationIdHasBeenSet = true;
}

bool AuthorizationInfo::AuthorizationIdHasBeenSet() const
{
    return m_authorizationIdHasBeenSet;
}


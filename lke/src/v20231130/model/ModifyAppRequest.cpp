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

#include <tencentcloud/lke/v20231130/model/ModifyAppRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ModifyAppRequest::ModifyAppRequest() :
    m_appBizIdHasBeenSet(false),
    m_appTypeHasBeenSet(false),
    m_baseConfigHasBeenSet(false),
    m_appConfigHasBeenSet(false),
    m_loginSubAccountUinHasBeenSet(false)
{
}

string ModifyAppRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_appTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appType.c_str(), allocator).Move(), allocator);
    }

    if (m_baseConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_baseConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_appConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_appConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_loginSubAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginSubAccountUin.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAppRequest::GetAppBizId() const
{
    return m_appBizId;
}

void ModifyAppRequest::SetAppBizId(const string& _appBizId)
{
    m_appBizId = _appBizId;
    m_appBizIdHasBeenSet = true;
}

bool ModifyAppRequest::AppBizIdHasBeenSet() const
{
    return m_appBizIdHasBeenSet;
}

string ModifyAppRequest::GetAppType() const
{
    return m_appType;
}

void ModifyAppRequest::SetAppType(const string& _appType)
{
    m_appType = _appType;
    m_appTypeHasBeenSet = true;
}

bool ModifyAppRequest::AppTypeHasBeenSet() const
{
    return m_appTypeHasBeenSet;
}

BaseConfig ModifyAppRequest::GetBaseConfig() const
{
    return m_baseConfig;
}

void ModifyAppRequest::SetBaseConfig(const BaseConfig& _baseConfig)
{
    m_baseConfig = _baseConfig;
    m_baseConfigHasBeenSet = true;
}

bool ModifyAppRequest::BaseConfigHasBeenSet() const
{
    return m_baseConfigHasBeenSet;
}

AppConfig ModifyAppRequest::GetAppConfig() const
{
    return m_appConfig;
}

void ModifyAppRequest::SetAppConfig(const AppConfig& _appConfig)
{
    m_appConfig = _appConfig;
    m_appConfigHasBeenSet = true;
}

bool ModifyAppRequest::AppConfigHasBeenSet() const
{
    return m_appConfigHasBeenSet;
}

string ModifyAppRequest::GetLoginSubAccountUin() const
{
    return m_loginSubAccountUin;
}

void ModifyAppRequest::SetLoginSubAccountUin(const string& _loginSubAccountUin)
{
    m_loginSubAccountUin = _loginSubAccountUin;
    m_loginSubAccountUinHasBeenSet = true;
}

bool ModifyAppRequest::LoginSubAccountUinHasBeenSet() const
{
    return m_loginSubAccountUinHasBeenSet;
}



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

#include <tencentcloud/cws/v20180312/model/ModifySiteAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cws::V20180312::Model;
using namespace std;

ModifySiteAttributeRequest::ModifySiteAttributeRequest() :
    m_siteIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_needLoginHasBeenSet(false),
    m_loginCookieHasBeenSet(false),
    m_loginCheckUrlHasBeenSet(false),
    m_loginCheckKwHasBeenSet(false),
    m_scanDisallowHasBeenSet(false)
{
}

string ModifySiteAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_siteIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SiteId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_siteId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_needLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedLogin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needLogin, allocator);
    }

    if (m_loginCookieHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginCookie";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginCookie.c_str(), allocator).Move(), allocator);
    }

    if (m_loginCheckUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginCheckUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginCheckUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_loginCheckKwHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginCheckKw";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginCheckKw.c_str(), allocator).Move(), allocator);
    }

    if (m_scanDisallowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanDisallow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scanDisallow.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifySiteAttributeRequest::GetSiteId() const
{
    return m_siteId;
}

void ModifySiteAttributeRequest::SetSiteId(const uint64_t& _siteId)
{
    m_siteId = _siteId;
    m_siteIdHasBeenSet = true;
}

bool ModifySiteAttributeRequest::SiteIdHasBeenSet() const
{
    return m_siteIdHasBeenSet;
}

string ModifySiteAttributeRequest::GetName() const
{
    return m_name;
}

void ModifySiteAttributeRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifySiteAttributeRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ModifySiteAttributeRequest::GetNeedLogin() const
{
    return m_needLogin;
}

void ModifySiteAttributeRequest::SetNeedLogin(const int64_t& _needLogin)
{
    m_needLogin = _needLogin;
    m_needLoginHasBeenSet = true;
}

bool ModifySiteAttributeRequest::NeedLoginHasBeenSet() const
{
    return m_needLoginHasBeenSet;
}

string ModifySiteAttributeRequest::GetLoginCookie() const
{
    return m_loginCookie;
}

void ModifySiteAttributeRequest::SetLoginCookie(const string& _loginCookie)
{
    m_loginCookie = _loginCookie;
    m_loginCookieHasBeenSet = true;
}

bool ModifySiteAttributeRequest::LoginCookieHasBeenSet() const
{
    return m_loginCookieHasBeenSet;
}

string ModifySiteAttributeRequest::GetLoginCheckUrl() const
{
    return m_loginCheckUrl;
}

void ModifySiteAttributeRequest::SetLoginCheckUrl(const string& _loginCheckUrl)
{
    m_loginCheckUrl = _loginCheckUrl;
    m_loginCheckUrlHasBeenSet = true;
}

bool ModifySiteAttributeRequest::LoginCheckUrlHasBeenSet() const
{
    return m_loginCheckUrlHasBeenSet;
}

string ModifySiteAttributeRequest::GetLoginCheckKw() const
{
    return m_loginCheckKw;
}

void ModifySiteAttributeRequest::SetLoginCheckKw(const string& _loginCheckKw)
{
    m_loginCheckKw = _loginCheckKw;
    m_loginCheckKwHasBeenSet = true;
}

bool ModifySiteAttributeRequest::LoginCheckKwHasBeenSet() const
{
    return m_loginCheckKwHasBeenSet;
}

string ModifySiteAttributeRequest::GetScanDisallow() const
{
    return m_scanDisallow;
}

void ModifySiteAttributeRequest::SetScanDisallow(const string& _scanDisallow)
{
    m_scanDisallow = _scanDisallow;
    m_scanDisallowHasBeenSet = true;
}

bool ModifySiteAttributeRequest::ScanDisallowHasBeenSet() const
{
    return m_scanDisallowHasBeenSet;
}



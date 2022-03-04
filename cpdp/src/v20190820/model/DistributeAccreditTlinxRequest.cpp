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

#include <tencentcloud/cpdp/v20190820/model/DistributeAccreditTlinxRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

DistributeAccreditTlinxRequest::DistributeAccreditTlinxRequest() :
    m_openIdHasBeenSet(false),
    m_openKeyHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_percentHasBeenSet(false),
    m_fullNameHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string DistributeAccreditTlinxRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_openKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openKey.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_percent.c_str(), allocator).Move(), allocator);
    }

    if (m_fullNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fullName.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DistributeAccreditTlinxRequest::GetOpenId() const
{
    return m_openId;
}

void DistributeAccreditTlinxRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool DistributeAccreditTlinxRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string DistributeAccreditTlinxRequest::GetOpenKey() const
{
    return m_openKey;
}

void DistributeAccreditTlinxRequest::SetOpenKey(const string& _openKey)
{
    m_openKey = _openKey;
    m_openKeyHasBeenSet = true;
}

bool DistributeAccreditTlinxRequest::OpenKeyHasBeenSet() const
{
    return m_openKeyHasBeenSet;
}

string DistributeAccreditTlinxRequest::GetAuthType() const
{
    return m_authType;
}

void DistributeAccreditTlinxRequest::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool DistributeAccreditTlinxRequest::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string DistributeAccreditTlinxRequest::GetPercent() const
{
    return m_percent;
}

void DistributeAccreditTlinxRequest::SetPercent(const string& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool DistributeAccreditTlinxRequest::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

string DistributeAccreditTlinxRequest::GetFullName() const
{
    return m_fullName;
}

void DistributeAccreditTlinxRequest::SetFullName(const string& _fullName)
{
    m_fullName = _fullName;
    m_fullNameHasBeenSet = true;
}

bool DistributeAccreditTlinxRequest::FullNameHasBeenSet() const
{
    return m_fullNameHasBeenSet;
}

string DistributeAccreditTlinxRequest::GetProfile() const
{
    return m_profile;
}

void DistributeAccreditTlinxRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool DistributeAccreditTlinxRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}



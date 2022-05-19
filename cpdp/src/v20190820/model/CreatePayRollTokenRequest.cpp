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

#include <tencentcloud/cpdp/v20190820/model/CreatePayRollTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreatePayRollTokenRequest::CreatePayRollTokenRequest() :
    m_openIdHasBeenSet(false),
    m_subMerchantIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_idNoHasBeenSet(false),
    m_employmentTypeHasBeenSet(false),
    m_wechatAppIdHasBeenSet(false),
    m_wechatSubAppIdHasBeenSet(false)
{
}

string CreatePayRollTokenRequest::ToJsonString() const
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

    if (m_subMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_idNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idNo.c_str(), allocator).Move(), allocator);
    }

    if (m_employmentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmploymentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_employmentType.c_str(), allocator).Move(), allocator);
    }

    if (m_wechatAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wechatAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_wechatSubAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatSubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wechatSubAppId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePayRollTokenRequest::GetOpenId() const
{
    return m_openId;
}

void CreatePayRollTokenRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool CreatePayRollTokenRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string CreatePayRollTokenRequest::GetSubMerchantId() const
{
    return m_subMerchantId;
}

void CreatePayRollTokenRequest::SetSubMerchantId(const string& _subMerchantId)
{
    m_subMerchantId = _subMerchantId;
    m_subMerchantIdHasBeenSet = true;
}

bool CreatePayRollTokenRequest::SubMerchantIdHasBeenSet() const
{
    return m_subMerchantIdHasBeenSet;
}

string CreatePayRollTokenRequest::GetUserName() const
{
    return m_userName;
}

void CreatePayRollTokenRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool CreatePayRollTokenRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string CreatePayRollTokenRequest::GetIdNo() const
{
    return m_idNo;
}

void CreatePayRollTokenRequest::SetIdNo(const string& _idNo)
{
    m_idNo = _idNo;
    m_idNoHasBeenSet = true;
}

bool CreatePayRollTokenRequest::IdNoHasBeenSet() const
{
    return m_idNoHasBeenSet;
}

string CreatePayRollTokenRequest::GetEmploymentType() const
{
    return m_employmentType;
}

void CreatePayRollTokenRequest::SetEmploymentType(const string& _employmentType)
{
    m_employmentType = _employmentType;
    m_employmentTypeHasBeenSet = true;
}

bool CreatePayRollTokenRequest::EmploymentTypeHasBeenSet() const
{
    return m_employmentTypeHasBeenSet;
}

string CreatePayRollTokenRequest::GetWechatAppId() const
{
    return m_wechatAppId;
}

void CreatePayRollTokenRequest::SetWechatAppId(const string& _wechatAppId)
{
    m_wechatAppId = _wechatAppId;
    m_wechatAppIdHasBeenSet = true;
}

bool CreatePayRollTokenRequest::WechatAppIdHasBeenSet() const
{
    return m_wechatAppIdHasBeenSet;
}

string CreatePayRollTokenRequest::GetWechatSubAppId() const
{
    return m_wechatSubAppId;
}

void CreatePayRollTokenRequest::SetWechatSubAppId(const string& _wechatSubAppId)
{
    m_wechatSubAppId = _wechatSubAppId;
    m_wechatSubAppIdHasBeenSet = true;
}

bool CreatePayRollTokenRequest::WechatSubAppIdHasBeenSet() const
{
    return m_wechatSubAppIdHasBeenSet;
}



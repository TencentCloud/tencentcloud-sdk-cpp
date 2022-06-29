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

#include <tencentcloud/cpdp/v20190820/model/GetPayRollAuthListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

GetPayRollAuthListRequest::GetPayRollAuthListRequest() :
    m_openIdHasBeenSet(false),
    m_subMerchantIdHasBeenSet(false),
    m_authDateHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_wechatAppIdHasBeenSet(false),
    m_wechatSubAppIdHasBeenSet(false),
    m_authStatusHasBeenSet(false)
{
}

string GetPayRollAuthListRequest::ToJsonString() const
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

    if (m_authDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authDate.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
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

    if (m_authStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authStatus.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetPayRollAuthListRequest::GetOpenId() const
{
    return m_openId;
}

void GetPayRollAuthListRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool GetPayRollAuthListRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string GetPayRollAuthListRequest::GetSubMerchantId() const
{
    return m_subMerchantId;
}

void GetPayRollAuthListRequest::SetSubMerchantId(const string& _subMerchantId)
{
    m_subMerchantId = _subMerchantId;
    m_subMerchantIdHasBeenSet = true;
}

bool GetPayRollAuthListRequest::SubMerchantIdHasBeenSet() const
{
    return m_subMerchantIdHasBeenSet;
}

string GetPayRollAuthListRequest::GetAuthDate() const
{
    return m_authDate;
}

void GetPayRollAuthListRequest::SetAuthDate(const string& _authDate)
{
    m_authDate = _authDate;
    m_authDateHasBeenSet = true;
}

bool GetPayRollAuthListRequest::AuthDateHasBeenSet() const
{
    return m_authDateHasBeenSet;
}

int64_t GetPayRollAuthListRequest::GetOffset() const
{
    return m_offset;
}

void GetPayRollAuthListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool GetPayRollAuthListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t GetPayRollAuthListRequest::GetLimit() const
{
    return m_limit;
}

void GetPayRollAuthListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool GetPayRollAuthListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string GetPayRollAuthListRequest::GetWechatAppId() const
{
    return m_wechatAppId;
}

void GetPayRollAuthListRequest::SetWechatAppId(const string& _wechatAppId)
{
    m_wechatAppId = _wechatAppId;
    m_wechatAppIdHasBeenSet = true;
}

bool GetPayRollAuthListRequest::WechatAppIdHasBeenSet() const
{
    return m_wechatAppIdHasBeenSet;
}

string GetPayRollAuthListRequest::GetWechatSubAppId() const
{
    return m_wechatSubAppId;
}

void GetPayRollAuthListRequest::SetWechatSubAppId(const string& _wechatSubAppId)
{
    m_wechatSubAppId = _wechatSubAppId;
    m_wechatSubAppIdHasBeenSet = true;
}

bool GetPayRollAuthListRequest::WechatSubAppIdHasBeenSet() const
{
    return m_wechatSubAppIdHasBeenSet;
}

string GetPayRollAuthListRequest::GetAuthStatus() const
{
    return m_authStatus;
}

void GetPayRollAuthListRequest::SetAuthStatus(const string& _authStatus)
{
    m_authStatus = _authStatus;
    m_authStatusHasBeenSet = true;
}

bool GetPayRollAuthListRequest::AuthStatusHasBeenSet() const
{
    return m_authStatusHasBeenSet;
}



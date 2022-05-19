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

#include <tencentcloud/cpdp/v20190820/model/GetPayRollAuthRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

GetPayRollAuthRequest::GetPayRollAuthRequest() :
    m_openIdHasBeenSet(false),
    m_subMerchantIdHasBeenSet(false),
    m_wechatAppIdHasBeenSet(false),
    m_wechatSubAppIdHasBeenSet(false)
{
}

string GetPayRollAuthRequest::ToJsonString() const
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


string GetPayRollAuthRequest::GetOpenId() const
{
    return m_openId;
}

void GetPayRollAuthRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool GetPayRollAuthRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string GetPayRollAuthRequest::GetSubMerchantId() const
{
    return m_subMerchantId;
}

void GetPayRollAuthRequest::SetSubMerchantId(const string& _subMerchantId)
{
    m_subMerchantId = _subMerchantId;
    m_subMerchantIdHasBeenSet = true;
}

bool GetPayRollAuthRequest::SubMerchantIdHasBeenSet() const
{
    return m_subMerchantIdHasBeenSet;
}

string GetPayRollAuthRequest::GetWechatAppId() const
{
    return m_wechatAppId;
}

void GetPayRollAuthRequest::SetWechatAppId(const string& _wechatAppId)
{
    m_wechatAppId = _wechatAppId;
    m_wechatAppIdHasBeenSet = true;
}

bool GetPayRollAuthRequest::WechatAppIdHasBeenSet() const
{
    return m_wechatAppIdHasBeenSet;
}

string GetPayRollAuthRequest::GetWechatSubAppId() const
{
    return m_wechatSubAppId;
}

void GetPayRollAuthRequest::SetWechatSubAppId(const string& _wechatSubAppId)
{
    m_wechatSubAppId = _wechatSubAppId;
    m_wechatSubAppIdHasBeenSet = true;
}

bool GetPayRollAuthRequest::WechatSubAppIdHasBeenSet() const
{
    return m_wechatSubAppIdHasBeenSet;
}



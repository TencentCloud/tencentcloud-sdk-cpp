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

#include <tencentcloud/cpdp/v20190820/model/WechatPreAuthResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

WechatPreAuthResult::WechatPreAuthResult() :
    m_authNoHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_mchIdHasBeenSet(false),
    m_subMchIdHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_expireHasBeenSet(false)
{
}

CoreInternalOutcome WechatPreAuthResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuthNo") && !value["AuthNo"].IsNull())
    {
        if (!value["AuthNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatPreAuthResult.AuthNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authNo = string(value["AuthNo"].GetString());
        m_authNoHasBeenSet = true;
    }

    if (value.HasMember("OpenId") && !value["OpenId"].IsNull())
    {
        if (!value["OpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatPreAuthResult.OpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openId = string(value["OpenId"].GetString());
        m_openIdHasBeenSet = true;
    }

    if (value.HasMember("MchId") && !value["MchId"].IsNull())
    {
        if (!value["MchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatPreAuthResult.MchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mchId = string(value["MchId"].GetString());
        m_mchIdHasBeenSet = true;
    }

    if (value.HasMember("SubMchId") && !value["SubMchId"].IsNull())
    {
        if (!value["SubMchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatPreAuthResult.SubMchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subMchId = string(value["SubMchId"].GetString());
        m_subMchIdHasBeenSet = true;
    }

    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatPreAuthResult.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }

    if (value.HasMember("Expire") && !value["Expire"].IsNull())
    {
        if (!value["Expire"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WechatPreAuthResult.Expire` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expire = value["Expire"].GetInt64();
        m_expireHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WechatPreAuthResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_authNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authNo.c_str(), allocator).Move(), allocator);
    }

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_mchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mchId.c_str(), allocator).Move(), allocator);
    }

    if (m_subMchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subMchId.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

    if (m_expireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expire";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expire, allocator);
    }

}


string WechatPreAuthResult::GetAuthNo() const
{
    return m_authNo;
}

void WechatPreAuthResult::SetAuthNo(const string& _authNo)
{
    m_authNo = _authNo;
    m_authNoHasBeenSet = true;
}

bool WechatPreAuthResult::AuthNoHasBeenSet() const
{
    return m_authNoHasBeenSet;
}

string WechatPreAuthResult::GetOpenId() const
{
    return m_openId;
}

void WechatPreAuthResult::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool WechatPreAuthResult::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string WechatPreAuthResult::GetMchId() const
{
    return m_mchId;
}

void WechatPreAuthResult::SetMchId(const string& _mchId)
{
    m_mchId = _mchId;
    m_mchIdHasBeenSet = true;
}

bool WechatPreAuthResult::MchIdHasBeenSet() const
{
    return m_mchIdHasBeenSet;
}

string WechatPreAuthResult::GetSubMchId() const
{
    return m_subMchId;
}

void WechatPreAuthResult::SetSubMchId(const string& _subMchId)
{
    m_subMchId = _subMchId;
    m_subMchIdHasBeenSet = true;
}

bool WechatPreAuthResult::SubMchIdHasBeenSet() const
{
    return m_subMchIdHasBeenSet;
}

string WechatPreAuthResult::GetToken() const
{
    return m_token;
}

void WechatPreAuthResult::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool WechatPreAuthResult::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

int64_t WechatPreAuthResult::GetExpire() const
{
    return m_expire;
}

void WechatPreAuthResult::SetExpire(const int64_t& _expire)
{
    m_expire = _expire;
    m_expireHasBeenSet = true;
}

bool WechatPreAuthResult::ExpireHasBeenSet() const
{
    return m_expireHasBeenSet;
}


/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaMiniRiskResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

DescribeCaptchaMiniRiskResultRequest::DescribeCaptchaMiniRiskResultRequest() :
    m_captchaTypeHasBeenSet(false),
    m_ticketHasBeenSet(false),
    m_userIpHasBeenSet(false),
    m_captchaAppIdHasBeenSet(false),
    m_appSecretKeyHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_sceneIdHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_imeiHasBeenSet(false),
    m_sceneCodeHasBeenSet(false),
    m_weChatOpenIdHasBeenSet(false)
{
}

string DescribeCaptchaMiniRiskResultRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_captchaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptchaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_captchaType, allocator);
    }

    if (m_ticketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ticket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ticket.c_str(), allocator).Move(), allocator);
    }

    if (m_userIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userIp.c_str(), allocator).Move(), allocator);
    }

    if (m_captchaAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptchaAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_captchaAppId, allocator);
    }

    if (m_appSecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppSecretKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appSecretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_businessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_businessId, allocator);
    }

    if (m_sceneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sceneId, allocator);
    }

    if (m_macAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MacAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_macAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_imeiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Imei";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imei.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sceneCode, allocator);
    }

    if (m_weChatOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeChatOpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_weChatOpenId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeCaptchaMiniRiskResultRequest::GetCaptchaType() const
{
    return m_captchaType;
}

void DescribeCaptchaMiniRiskResultRequest::SetCaptchaType(const uint64_t& _captchaType)
{
    m_captchaType = _captchaType;
    m_captchaTypeHasBeenSet = true;
}

bool DescribeCaptchaMiniRiskResultRequest::CaptchaTypeHasBeenSet() const
{
    return m_captchaTypeHasBeenSet;
}

string DescribeCaptchaMiniRiskResultRequest::GetTicket() const
{
    return m_ticket;
}

void DescribeCaptchaMiniRiskResultRequest::SetTicket(const string& _ticket)
{
    m_ticket = _ticket;
    m_ticketHasBeenSet = true;
}

bool DescribeCaptchaMiniRiskResultRequest::TicketHasBeenSet() const
{
    return m_ticketHasBeenSet;
}

string DescribeCaptchaMiniRiskResultRequest::GetUserIp() const
{
    return m_userIp;
}

void DescribeCaptchaMiniRiskResultRequest::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool DescribeCaptchaMiniRiskResultRequest::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

uint64_t DescribeCaptchaMiniRiskResultRequest::GetCaptchaAppId() const
{
    return m_captchaAppId;
}

void DescribeCaptchaMiniRiskResultRequest::SetCaptchaAppId(const uint64_t& _captchaAppId)
{
    m_captchaAppId = _captchaAppId;
    m_captchaAppIdHasBeenSet = true;
}

bool DescribeCaptchaMiniRiskResultRequest::CaptchaAppIdHasBeenSet() const
{
    return m_captchaAppIdHasBeenSet;
}

string DescribeCaptchaMiniRiskResultRequest::GetAppSecretKey() const
{
    return m_appSecretKey;
}

void DescribeCaptchaMiniRiskResultRequest::SetAppSecretKey(const string& _appSecretKey)
{
    m_appSecretKey = _appSecretKey;
    m_appSecretKeyHasBeenSet = true;
}

bool DescribeCaptchaMiniRiskResultRequest::AppSecretKeyHasBeenSet() const
{
    return m_appSecretKeyHasBeenSet;
}

uint64_t DescribeCaptchaMiniRiskResultRequest::GetBusinessId() const
{
    return m_businessId;
}

void DescribeCaptchaMiniRiskResultRequest::SetBusinessId(const uint64_t& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool DescribeCaptchaMiniRiskResultRequest::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

uint64_t DescribeCaptchaMiniRiskResultRequest::GetSceneId() const
{
    return m_sceneId;
}

void DescribeCaptchaMiniRiskResultRequest::SetSceneId(const uint64_t& _sceneId)
{
    m_sceneId = _sceneId;
    m_sceneIdHasBeenSet = true;
}

bool DescribeCaptchaMiniRiskResultRequest::SceneIdHasBeenSet() const
{
    return m_sceneIdHasBeenSet;
}

string DescribeCaptchaMiniRiskResultRequest::GetMacAddress() const
{
    return m_macAddress;
}

void DescribeCaptchaMiniRiskResultRequest::SetMacAddress(const string& _macAddress)
{
    m_macAddress = _macAddress;
    m_macAddressHasBeenSet = true;
}

bool DescribeCaptchaMiniRiskResultRequest::MacAddressHasBeenSet() const
{
    return m_macAddressHasBeenSet;
}

string DescribeCaptchaMiniRiskResultRequest::GetImei() const
{
    return m_imei;
}

void DescribeCaptchaMiniRiskResultRequest::SetImei(const string& _imei)
{
    m_imei = _imei;
    m_imeiHasBeenSet = true;
}

bool DescribeCaptchaMiniRiskResultRequest::ImeiHasBeenSet() const
{
    return m_imeiHasBeenSet;
}

int64_t DescribeCaptchaMiniRiskResultRequest::GetSceneCode() const
{
    return m_sceneCode;
}

void DescribeCaptchaMiniRiskResultRequest::SetSceneCode(const int64_t& _sceneCode)
{
    m_sceneCode = _sceneCode;
    m_sceneCodeHasBeenSet = true;
}

bool DescribeCaptchaMiniRiskResultRequest::SceneCodeHasBeenSet() const
{
    return m_sceneCodeHasBeenSet;
}

string DescribeCaptchaMiniRiskResultRequest::GetWeChatOpenId() const
{
    return m_weChatOpenId;
}

void DescribeCaptchaMiniRiskResultRequest::SetWeChatOpenId(const string& _weChatOpenId)
{
    m_weChatOpenId = _weChatOpenId;
    m_weChatOpenIdHasBeenSet = true;
}

bool DescribeCaptchaMiniRiskResultRequest::WeChatOpenIdHasBeenSet() const
{
    return m_weChatOpenIdHasBeenSet;
}



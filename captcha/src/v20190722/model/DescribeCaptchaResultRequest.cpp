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

#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

DescribeCaptchaResultRequest::DescribeCaptchaResultRequest() :
    m_captchaTypeHasBeenSet(false),
    m_ticketHasBeenSet(false),
    m_userIpHasBeenSet(false),
    m_randstrHasBeenSet(false),
    m_captchaAppIdHasBeenSet(false),
    m_appSecretKeyHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_sceneIdHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_imeiHasBeenSet(false),
    m_needGetCaptchaTimeHasBeenSet(false)
{
}

string DescribeCaptchaResultRequest::ToJsonString() const
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

    if (m_randstrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Randstr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_randstr.c_str(), allocator).Move(), allocator);
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

    if (m_needGetCaptchaTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedGetCaptchaTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needGetCaptchaTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeCaptchaResultRequest::GetCaptchaType() const
{
    return m_captchaType;
}

void DescribeCaptchaResultRequest::SetCaptchaType(const uint64_t& _captchaType)
{
    m_captchaType = _captchaType;
    m_captchaTypeHasBeenSet = true;
}

bool DescribeCaptchaResultRequest::CaptchaTypeHasBeenSet() const
{
    return m_captchaTypeHasBeenSet;
}

string DescribeCaptchaResultRequest::GetTicket() const
{
    return m_ticket;
}

void DescribeCaptchaResultRequest::SetTicket(const string& _ticket)
{
    m_ticket = _ticket;
    m_ticketHasBeenSet = true;
}

bool DescribeCaptchaResultRequest::TicketHasBeenSet() const
{
    return m_ticketHasBeenSet;
}

string DescribeCaptchaResultRequest::GetUserIp() const
{
    return m_userIp;
}

void DescribeCaptchaResultRequest::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool DescribeCaptchaResultRequest::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

string DescribeCaptchaResultRequest::GetRandstr() const
{
    return m_randstr;
}

void DescribeCaptchaResultRequest::SetRandstr(const string& _randstr)
{
    m_randstr = _randstr;
    m_randstrHasBeenSet = true;
}

bool DescribeCaptchaResultRequest::RandstrHasBeenSet() const
{
    return m_randstrHasBeenSet;
}

uint64_t DescribeCaptchaResultRequest::GetCaptchaAppId() const
{
    return m_captchaAppId;
}

void DescribeCaptchaResultRequest::SetCaptchaAppId(const uint64_t& _captchaAppId)
{
    m_captchaAppId = _captchaAppId;
    m_captchaAppIdHasBeenSet = true;
}

bool DescribeCaptchaResultRequest::CaptchaAppIdHasBeenSet() const
{
    return m_captchaAppIdHasBeenSet;
}

string DescribeCaptchaResultRequest::GetAppSecretKey() const
{
    return m_appSecretKey;
}

void DescribeCaptchaResultRequest::SetAppSecretKey(const string& _appSecretKey)
{
    m_appSecretKey = _appSecretKey;
    m_appSecretKeyHasBeenSet = true;
}

bool DescribeCaptchaResultRequest::AppSecretKeyHasBeenSet() const
{
    return m_appSecretKeyHasBeenSet;
}

uint64_t DescribeCaptchaResultRequest::GetBusinessId() const
{
    return m_businessId;
}

void DescribeCaptchaResultRequest::SetBusinessId(const uint64_t& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool DescribeCaptchaResultRequest::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

uint64_t DescribeCaptchaResultRequest::GetSceneId() const
{
    return m_sceneId;
}

void DescribeCaptchaResultRequest::SetSceneId(const uint64_t& _sceneId)
{
    m_sceneId = _sceneId;
    m_sceneIdHasBeenSet = true;
}

bool DescribeCaptchaResultRequest::SceneIdHasBeenSet() const
{
    return m_sceneIdHasBeenSet;
}

string DescribeCaptchaResultRequest::GetMacAddress() const
{
    return m_macAddress;
}

void DescribeCaptchaResultRequest::SetMacAddress(const string& _macAddress)
{
    m_macAddress = _macAddress;
    m_macAddressHasBeenSet = true;
}

bool DescribeCaptchaResultRequest::MacAddressHasBeenSet() const
{
    return m_macAddressHasBeenSet;
}

string DescribeCaptchaResultRequest::GetImei() const
{
    return m_imei;
}

void DescribeCaptchaResultRequest::SetImei(const string& _imei)
{
    m_imei = _imei;
    m_imeiHasBeenSet = true;
}

bool DescribeCaptchaResultRequest::ImeiHasBeenSet() const
{
    return m_imeiHasBeenSet;
}

int64_t DescribeCaptchaResultRequest::GetNeedGetCaptchaTime() const
{
    return m_needGetCaptchaTime;
}

void DescribeCaptchaResultRequest::SetNeedGetCaptchaTime(const int64_t& _needGetCaptchaTime)
{
    m_needGetCaptchaTime = _needGetCaptchaTime;
    m_needGetCaptchaTimeHasBeenSet = true;
}

bool DescribeCaptchaResultRequest::NeedGetCaptchaTimeHasBeenSet() const
{
    return m_needGetCaptchaTimeHasBeenSet;
}



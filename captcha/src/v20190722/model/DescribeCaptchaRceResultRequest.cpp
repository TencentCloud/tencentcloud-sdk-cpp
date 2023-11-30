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

#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaRceResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

DescribeCaptchaRceResultRequest::DescribeCaptchaRceResultRequest() :
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

string DescribeCaptchaRceResultRequest::ToJsonString() const
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


uint64_t DescribeCaptchaRceResultRequest::GetCaptchaType() const
{
    return m_captchaType;
}

void DescribeCaptchaRceResultRequest::SetCaptchaType(const uint64_t& _captchaType)
{
    m_captchaType = _captchaType;
    m_captchaTypeHasBeenSet = true;
}

bool DescribeCaptchaRceResultRequest::CaptchaTypeHasBeenSet() const
{
    return m_captchaTypeHasBeenSet;
}

string DescribeCaptchaRceResultRequest::GetTicket() const
{
    return m_ticket;
}

void DescribeCaptchaRceResultRequest::SetTicket(const string& _ticket)
{
    m_ticket = _ticket;
    m_ticketHasBeenSet = true;
}

bool DescribeCaptchaRceResultRequest::TicketHasBeenSet() const
{
    return m_ticketHasBeenSet;
}

string DescribeCaptchaRceResultRequest::GetUserIp() const
{
    return m_userIp;
}

void DescribeCaptchaRceResultRequest::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool DescribeCaptchaRceResultRequest::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

string DescribeCaptchaRceResultRequest::GetRandstr() const
{
    return m_randstr;
}

void DescribeCaptchaRceResultRequest::SetRandstr(const string& _randstr)
{
    m_randstr = _randstr;
    m_randstrHasBeenSet = true;
}

bool DescribeCaptchaRceResultRequest::RandstrHasBeenSet() const
{
    return m_randstrHasBeenSet;
}

uint64_t DescribeCaptchaRceResultRequest::GetCaptchaAppId() const
{
    return m_captchaAppId;
}

void DescribeCaptchaRceResultRequest::SetCaptchaAppId(const uint64_t& _captchaAppId)
{
    m_captchaAppId = _captchaAppId;
    m_captchaAppIdHasBeenSet = true;
}

bool DescribeCaptchaRceResultRequest::CaptchaAppIdHasBeenSet() const
{
    return m_captchaAppIdHasBeenSet;
}

string DescribeCaptchaRceResultRequest::GetAppSecretKey() const
{
    return m_appSecretKey;
}

void DescribeCaptchaRceResultRequest::SetAppSecretKey(const string& _appSecretKey)
{
    m_appSecretKey = _appSecretKey;
    m_appSecretKeyHasBeenSet = true;
}

bool DescribeCaptchaRceResultRequest::AppSecretKeyHasBeenSet() const
{
    return m_appSecretKeyHasBeenSet;
}

uint64_t DescribeCaptchaRceResultRequest::GetBusinessId() const
{
    return m_businessId;
}

void DescribeCaptchaRceResultRequest::SetBusinessId(const uint64_t& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool DescribeCaptchaRceResultRequest::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

uint64_t DescribeCaptchaRceResultRequest::GetSceneId() const
{
    return m_sceneId;
}

void DescribeCaptchaRceResultRequest::SetSceneId(const uint64_t& _sceneId)
{
    m_sceneId = _sceneId;
    m_sceneIdHasBeenSet = true;
}

bool DescribeCaptchaRceResultRequest::SceneIdHasBeenSet() const
{
    return m_sceneIdHasBeenSet;
}

string DescribeCaptchaRceResultRequest::GetMacAddress() const
{
    return m_macAddress;
}

void DescribeCaptchaRceResultRequest::SetMacAddress(const string& _macAddress)
{
    m_macAddress = _macAddress;
    m_macAddressHasBeenSet = true;
}

bool DescribeCaptchaRceResultRequest::MacAddressHasBeenSet() const
{
    return m_macAddressHasBeenSet;
}

string DescribeCaptchaRceResultRequest::GetImei() const
{
    return m_imei;
}

void DescribeCaptchaRceResultRequest::SetImei(const string& _imei)
{
    m_imei = _imei;
    m_imeiHasBeenSet = true;
}

bool DescribeCaptchaRceResultRequest::ImeiHasBeenSet() const
{
    return m_imeiHasBeenSet;
}

int64_t DescribeCaptchaRceResultRequest::GetNeedGetCaptchaTime() const
{
    return m_needGetCaptchaTime;
}

void DescribeCaptchaRceResultRequest::SetNeedGetCaptchaTime(const int64_t& _needGetCaptchaTime)
{
    m_needGetCaptchaTime = _needGetCaptchaTime;
    m_needGetCaptchaTimeHasBeenSet = true;
}

bool DescribeCaptchaRceResultRequest::NeedGetCaptchaTimeHasBeenSet() const
{
    return m_needGetCaptchaTimeHasBeenSet;
}



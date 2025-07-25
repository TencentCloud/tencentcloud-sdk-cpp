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

#include <tencentcloud/tds/v20220801/model/DescribeFraudUltimateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tds::V20220801::Model;
using namespace std;

DescribeFraudUltimateRequest::DescribeFraudUltimateRequest() :
    m_deviceTokenHasBeenSet(false),
    m_sceneCodeHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_elapsedTimeHasBeenSet(false),
    m_weChatOpenIdHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_clientIPHasBeenSet(false),
    m_qQOpenIdHasBeenSet(false),
    m_dataAuthorizationHasBeenSet(false)
{
}

string DescribeFraudUltimateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deviceTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceToken.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sceneCode.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_eventTime, allocator);
    }

    if (m_elapsedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElapsedTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_elapsedTime, allocator);
    }

    if (m_weChatOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeChatOpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_weChatOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientIP.c_str(), allocator).Move(), allocator);
    }

    if (m_qQOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QQOpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_qQOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataAuthorizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataAuthorization";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dataAuthorization.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeFraudUltimateRequest::GetDeviceToken() const
{
    return m_deviceToken;
}

void DescribeFraudUltimateRequest::SetDeviceToken(const string& _deviceToken)
{
    m_deviceToken = _deviceToken;
    m_deviceTokenHasBeenSet = true;
}

bool DescribeFraudUltimateRequest::DeviceTokenHasBeenSet() const
{
    return m_deviceTokenHasBeenSet;
}

string DescribeFraudUltimateRequest::GetSceneCode() const
{
    return m_sceneCode;
}

void DescribeFraudUltimateRequest::SetSceneCode(const string& _sceneCode)
{
    m_sceneCode = _sceneCode;
    m_sceneCodeHasBeenSet = true;
}

bool DescribeFraudUltimateRequest::SceneCodeHasBeenSet() const
{
    return m_sceneCodeHasBeenSet;
}

string DescribeFraudUltimateRequest::GetUserId() const
{
    return m_userId;
}

void DescribeFraudUltimateRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeFraudUltimateRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t DescribeFraudUltimateRequest::GetEventTime() const
{
    return m_eventTime;
}

void DescribeFraudUltimateRequest::SetEventTime(const uint64_t& _eventTime)
{
    m_eventTime = _eventTime;
    m_eventTimeHasBeenSet = true;
}

bool DescribeFraudUltimateRequest::EventTimeHasBeenSet() const
{
    return m_eventTimeHasBeenSet;
}

uint64_t DescribeFraudUltimateRequest::GetElapsedTime() const
{
    return m_elapsedTime;
}

void DescribeFraudUltimateRequest::SetElapsedTime(const uint64_t& _elapsedTime)
{
    m_elapsedTime = _elapsedTime;
    m_elapsedTimeHasBeenSet = true;
}

bool DescribeFraudUltimateRequest::ElapsedTimeHasBeenSet() const
{
    return m_elapsedTimeHasBeenSet;
}

string DescribeFraudUltimateRequest::GetWeChatOpenId() const
{
    return m_weChatOpenId;
}

void DescribeFraudUltimateRequest::SetWeChatOpenId(const string& _weChatOpenId)
{
    m_weChatOpenId = _weChatOpenId;
    m_weChatOpenIdHasBeenSet = true;
}

bool DescribeFraudUltimateRequest::WeChatOpenIdHasBeenSet() const
{
    return m_weChatOpenIdHasBeenSet;
}

string DescribeFraudUltimateRequest::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void DescribeFraudUltimateRequest::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool DescribeFraudUltimateRequest::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string DescribeFraudUltimateRequest::GetClientIP() const
{
    return m_clientIP;
}

void DescribeFraudUltimateRequest::SetClientIP(const string& _clientIP)
{
    m_clientIP = _clientIP;
    m_clientIPHasBeenSet = true;
}

bool DescribeFraudUltimateRequest::ClientIPHasBeenSet() const
{
    return m_clientIPHasBeenSet;
}

string DescribeFraudUltimateRequest::GetQQOpenId() const
{
    return m_qQOpenId;
}

void DescribeFraudUltimateRequest::SetQQOpenId(const string& _qQOpenId)
{
    m_qQOpenId = _qQOpenId;
    m_qQOpenIdHasBeenSet = true;
}

bool DescribeFraudUltimateRequest::QQOpenIdHasBeenSet() const
{
    return m_qQOpenIdHasBeenSet;
}

DataAuthorizationInfo DescribeFraudUltimateRequest::GetDataAuthorization() const
{
    return m_dataAuthorization;
}

void DescribeFraudUltimateRequest::SetDataAuthorization(const DataAuthorizationInfo& _dataAuthorization)
{
    m_dataAuthorization = _dataAuthorization;
    m_dataAuthorizationHasBeenSet = true;
}

bool DescribeFraudUltimateRequest::DataAuthorizationHasBeenSet() const
{
    return m_dataAuthorizationHasBeenSet;
}



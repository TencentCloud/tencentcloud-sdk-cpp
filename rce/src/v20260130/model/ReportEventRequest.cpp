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

#include <tencentcloud/rce/v20260130/model/ReportEventRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

ReportEventRequest::ReportEventRequest() :
    m_eventCodeHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_deviceTokenHasBeenSet(false),
    m_userIpHasBeenSet(false),
    m_eventDetailHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userEmailHasBeenSet(false),
    m_userPhoneHasBeenSet(false),
    m_browserHasBeenSet(false),
    m_appHasBeenSet(false),
    m_dataAuthorizationHasBeenSet(false),
    m_userPhoneEncryptHasBeenSet(false),
    m_weChatOpenIdHasBeenSet(false),
    m_qQOpenIdHasBeenSet(false),
    m_qQAppIdHasBeenSet(false)
{
}

string ReportEventRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_eventCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventCode.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceToken.c_str(), allocator).Move(), allocator);
    }

    if (m_userIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userIp.c_str(), allocator).Move(), allocator);
    }

    if (m_eventDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventDetail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eventDetail.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserEmail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userEmail.c_str(), allocator).Move(), allocator);
    }

    if (m_userPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserPhone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_browserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Browser";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_browser.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_appHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "App";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_app.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dataAuthorizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataAuthorization";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dataAuthorization.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_userPhoneEncryptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserPhoneEncrypt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userPhoneEncrypt.c_str(), allocator).Move(), allocator);
    }

    if (m_weChatOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeChatOpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_weChatOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_qQOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QQOpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_qQOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_qQAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QQAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_qQAppId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ReportEventRequest::GetEventCode() const
{
    return m_eventCode;
}

void ReportEventRequest::SetEventCode(const string& _eventCode)
{
    m_eventCode = _eventCode;
    m_eventCodeHasBeenSet = true;
}

bool ReportEventRequest::EventCodeHasBeenSet() const
{
    return m_eventCodeHasBeenSet;
}

string ReportEventRequest::GetEventTime() const
{
    return m_eventTime;
}

void ReportEventRequest::SetEventTime(const string& _eventTime)
{
    m_eventTime = _eventTime;
    m_eventTimeHasBeenSet = true;
}

bool ReportEventRequest::EventTimeHasBeenSet() const
{
    return m_eventTimeHasBeenSet;
}

string ReportEventRequest::GetSessionId() const
{
    return m_sessionId;
}

void ReportEventRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool ReportEventRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string ReportEventRequest::GetDeviceToken() const
{
    return m_deviceToken;
}

void ReportEventRequest::SetDeviceToken(const string& _deviceToken)
{
    m_deviceToken = _deviceToken;
    m_deviceTokenHasBeenSet = true;
}

bool ReportEventRequest::DeviceTokenHasBeenSet() const
{
    return m_deviceTokenHasBeenSet;
}

string ReportEventRequest::GetUserIp() const
{
    return m_userIp;
}

void ReportEventRequest::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool ReportEventRequest::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

EventDetail ReportEventRequest::GetEventDetail() const
{
    return m_eventDetail;
}

void ReportEventRequest::SetEventDetail(const EventDetail& _eventDetail)
{
    m_eventDetail = _eventDetail;
    m_eventDetailHasBeenSet = true;
}

bool ReportEventRequest::EventDetailHasBeenSet() const
{
    return m_eventDetailHasBeenSet;
}

string ReportEventRequest::GetUserId() const
{
    return m_userId;
}

void ReportEventRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ReportEventRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string ReportEventRequest::GetUserEmail() const
{
    return m_userEmail;
}

void ReportEventRequest::SetUserEmail(const string& _userEmail)
{
    m_userEmail = _userEmail;
    m_userEmailHasBeenSet = true;
}

bool ReportEventRequest::UserEmailHasBeenSet() const
{
    return m_userEmailHasBeenSet;
}

string ReportEventRequest::GetUserPhone() const
{
    return m_userPhone;
}

void ReportEventRequest::SetUserPhone(const string& _userPhone)
{
    m_userPhone = _userPhone;
    m_userPhoneHasBeenSet = true;
}

bool ReportEventRequest::UserPhoneHasBeenSet() const
{
    return m_userPhoneHasBeenSet;
}

Browser ReportEventRequest::GetBrowser() const
{
    return m_browser;
}

void ReportEventRequest::SetBrowser(const Browser& _browser)
{
    m_browser = _browser;
    m_browserHasBeenSet = true;
}

bool ReportEventRequest::BrowserHasBeenSet() const
{
    return m_browserHasBeenSet;
}

App ReportEventRequest::GetApp() const
{
    return m_app;
}

void ReportEventRequest::SetApp(const App& _app)
{
    m_app = _app;
    m_appHasBeenSet = true;
}

bool ReportEventRequest::AppHasBeenSet() const
{
    return m_appHasBeenSet;
}

DataAuthorization ReportEventRequest::GetDataAuthorization() const
{
    return m_dataAuthorization;
}

void ReportEventRequest::SetDataAuthorization(const DataAuthorization& _dataAuthorization)
{
    m_dataAuthorization = _dataAuthorization;
    m_dataAuthorizationHasBeenSet = true;
}

bool ReportEventRequest::DataAuthorizationHasBeenSet() const
{
    return m_dataAuthorizationHasBeenSet;
}

string ReportEventRequest::GetUserPhoneEncrypt() const
{
    return m_userPhoneEncrypt;
}

void ReportEventRequest::SetUserPhoneEncrypt(const string& _userPhoneEncrypt)
{
    m_userPhoneEncrypt = _userPhoneEncrypt;
    m_userPhoneEncryptHasBeenSet = true;
}

bool ReportEventRequest::UserPhoneEncryptHasBeenSet() const
{
    return m_userPhoneEncryptHasBeenSet;
}

string ReportEventRequest::GetWeChatOpenId() const
{
    return m_weChatOpenId;
}

void ReportEventRequest::SetWeChatOpenId(const string& _weChatOpenId)
{
    m_weChatOpenId = _weChatOpenId;
    m_weChatOpenIdHasBeenSet = true;
}

bool ReportEventRequest::WeChatOpenIdHasBeenSet() const
{
    return m_weChatOpenIdHasBeenSet;
}

string ReportEventRequest::GetQQOpenId() const
{
    return m_qQOpenId;
}

void ReportEventRequest::SetQQOpenId(const string& _qQOpenId)
{
    m_qQOpenId = _qQOpenId;
    m_qQOpenIdHasBeenSet = true;
}

bool ReportEventRequest::QQOpenIdHasBeenSet() const
{
    return m_qQOpenIdHasBeenSet;
}

string ReportEventRequest::GetQQAppId() const
{
    return m_qQAppId;
}

void ReportEventRequest::SetQQAppId(const string& _qQAppId)
{
    m_qQAppId = _qQAppId;
    m_qQAppIdHasBeenSet = true;
}

bool ReportEventRequest::QQAppIdHasBeenSet() const
{
    return m_qQAppIdHasBeenSet;
}



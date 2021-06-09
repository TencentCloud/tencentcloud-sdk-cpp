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

#include <tencentcloud/captcha/v20190722/model/UpdateCaptchaAppIdInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

UpdateCaptchaAppIdInfoRequest::UpdateCaptchaAppIdInfoRequest() :
    m_captchaAppIdHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_domainLimitHasBeenSet(false),
    m_sceneTypeHasBeenSet(false),
    m_capTypeHasBeenSet(false),
    m_evilInterceptGradeHasBeenSet(false),
    m_smartVerifyHasBeenSet(false),
    m_smartEngineHasBeenSet(false),
    m_schemeColorHasBeenSet(false),
    m_captchaLanguageHasBeenSet(false),
    m_mailAlarmHasBeenSet(false),
    m_topFullScreenHasBeenSet(false),
    m_trafficThresholdHasBeenSet(false)
{
}

string UpdateCaptchaAppIdInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_captchaAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptchaAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_captchaAppId, allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_domainLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sceneType, allocator);
    }

    if (m_capTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_capType, allocator);
    }

    if (m_evilInterceptGradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilInterceptGrade";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_evilInterceptGrade, allocator);
    }

    if (m_smartVerifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmartVerify";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_smartVerify, allocator);
    }

    if (m_smartEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmartEngine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_smartEngine, allocator);
    }

    if (m_schemeColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemeColor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schemeColor.c_str(), allocator).Move(), allocator);
    }

    if (m_captchaLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptchaLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_captchaLanguage, allocator);
    }

    if (m_mailAlarmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MailAlarm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mailAlarm.c_str(), allocator).Move(), allocator);
    }

    if (m_topFullScreenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopFullScreen";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_topFullScreen, allocator);
    }

    if (m_trafficThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_trafficThreshold, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t UpdateCaptchaAppIdInfoRequest::GetCaptchaAppId() const
{
    return m_captchaAppId;
}

void UpdateCaptchaAppIdInfoRequest::SetCaptchaAppId(const int64_t& _captchaAppId)
{
    m_captchaAppId = _captchaAppId;
    m_captchaAppIdHasBeenSet = true;
}

bool UpdateCaptchaAppIdInfoRequest::CaptchaAppIdHasBeenSet() const
{
    return m_captchaAppIdHasBeenSet;
}

string UpdateCaptchaAppIdInfoRequest::GetAppName() const
{
    return m_appName;
}

void UpdateCaptchaAppIdInfoRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool UpdateCaptchaAppIdInfoRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string UpdateCaptchaAppIdInfoRequest::GetDomainLimit() const
{
    return m_domainLimit;
}

void UpdateCaptchaAppIdInfoRequest::SetDomainLimit(const string& _domainLimit)
{
    m_domainLimit = _domainLimit;
    m_domainLimitHasBeenSet = true;
}

bool UpdateCaptchaAppIdInfoRequest::DomainLimitHasBeenSet() const
{
    return m_domainLimitHasBeenSet;
}

int64_t UpdateCaptchaAppIdInfoRequest::GetSceneType() const
{
    return m_sceneType;
}

void UpdateCaptchaAppIdInfoRequest::SetSceneType(const int64_t& _sceneType)
{
    m_sceneType = _sceneType;
    m_sceneTypeHasBeenSet = true;
}

bool UpdateCaptchaAppIdInfoRequest::SceneTypeHasBeenSet() const
{
    return m_sceneTypeHasBeenSet;
}

int64_t UpdateCaptchaAppIdInfoRequest::GetCapType() const
{
    return m_capType;
}

void UpdateCaptchaAppIdInfoRequest::SetCapType(const int64_t& _capType)
{
    m_capType = _capType;
    m_capTypeHasBeenSet = true;
}

bool UpdateCaptchaAppIdInfoRequest::CapTypeHasBeenSet() const
{
    return m_capTypeHasBeenSet;
}

int64_t UpdateCaptchaAppIdInfoRequest::GetEvilInterceptGrade() const
{
    return m_evilInterceptGrade;
}

void UpdateCaptchaAppIdInfoRequest::SetEvilInterceptGrade(const int64_t& _evilInterceptGrade)
{
    m_evilInterceptGrade = _evilInterceptGrade;
    m_evilInterceptGradeHasBeenSet = true;
}

bool UpdateCaptchaAppIdInfoRequest::EvilInterceptGradeHasBeenSet() const
{
    return m_evilInterceptGradeHasBeenSet;
}

int64_t UpdateCaptchaAppIdInfoRequest::GetSmartVerify() const
{
    return m_smartVerify;
}

void UpdateCaptchaAppIdInfoRequest::SetSmartVerify(const int64_t& _smartVerify)
{
    m_smartVerify = _smartVerify;
    m_smartVerifyHasBeenSet = true;
}

bool UpdateCaptchaAppIdInfoRequest::SmartVerifyHasBeenSet() const
{
    return m_smartVerifyHasBeenSet;
}

int64_t UpdateCaptchaAppIdInfoRequest::GetSmartEngine() const
{
    return m_smartEngine;
}

void UpdateCaptchaAppIdInfoRequest::SetSmartEngine(const int64_t& _smartEngine)
{
    m_smartEngine = _smartEngine;
    m_smartEngineHasBeenSet = true;
}

bool UpdateCaptchaAppIdInfoRequest::SmartEngineHasBeenSet() const
{
    return m_smartEngineHasBeenSet;
}

string UpdateCaptchaAppIdInfoRequest::GetSchemeColor() const
{
    return m_schemeColor;
}

void UpdateCaptchaAppIdInfoRequest::SetSchemeColor(const string& _schemeColor)
{
    m_schemeColor = _schemeColor;
    m_schemeColorHasBeenSet = true;
}

bool UpdateCaptchaAppIdInfoRequest::SchemeColorHasBeenSet() const
{
    return m_schemeColorHasBeenSet;
}

int64_t UpdateCaptchaAppIdInfoRequest::GetCaptchaLanguage() const
{
    return m_captchaLanguage;
}

void UpdateCaptchaAppIdInfoRequest::SetCaptchaLanguage(const int64_t& _captchaLanguage)
{
    m_captchaLanguage = _captchaLanguage;
    m_captchaLanguageHasBeenSet = true;
}

bool UpdateCaptchaAppIdInfoRequest::CaptchaLanguageHasBeenSet() const
{
    return m_captchaLanguageHasBeenSet;
}

string UpdateCaptchaAppIdInfoRequest::GetMailAlarm() const
{
    return m_mailAlarm;
}

void UpdateCaptchaAppIdInfoRequest::SetMailAlarm(const string& _mailAlarm)
{
    m_mailAlarm = _mailAlarm;
    m_mailAlarmHasBeenSet = true;
}

bool UpdateCaptchaAppIdInfoRequest::MailAlarmHasBeenSet() const
{
    return m_mailAlarmHasBeenSet;
}

int64_t UpdateCaptchaAppIdInfoRequest::GetTopFullScreen() const
{
    return m_topFullScreen;
}

void UpdateCaptchaAppIdInfoRequest::SetTopFullScreen(const int64_t& _topFullScreen)
{
    m_topFullScreen = _topFullScreen;
    m_topFullScreenHasBeenSet = true;
}

bool UpdateCaptchaAppIdInfoRequest::TopFullScreenHasBeenSet() const
{
    return m_topFullScreenHasBeenSet;
}

int64_t UpdateCaptchaAppIdInfoRequest::GetTrafficThreshold() const
{
    return m_trafficThreshold;
}

void UpdateCaptchaAppIdInfoRequest::SetTrafficThreshold(const int64_t& _trafficThreshold)
{
    m_trafficThreshold = _trafficThreshold;
    m_trafficThresholdHasBeenSet = true;
}

bool UpdateCaptchaAppIdInfoRequest::TrafficThresholdHasBeenSet() const
{
    return m_trafficThresholdHasBeenSet;
}



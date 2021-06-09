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

#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaAppIdInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

DescribeCaptchaAppIdInfoResponse::DescribeCaptchaAppIdInfoResponse() :
    m_schemeColorHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_sceneTypeHasBeenSet(false),
    m_evilInterceptGradeHasBeenSet(false),
    m_smartVerifyHasBeenSet(false),
    m_smartEngineHasBeenSet(false),
    m_capTypeHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_domainLimitHasBeenSet(false),
    m_mailAlarmHasBeenSet(false),
    m_trafficThresholdHasBeenSet(false),
    m_encryptKeyHasBeenSet(false),
    m_topFullScreenHasBeenSet(false),
    m_captchaCodeHasBeenSet(false),
    m_captchaMsgHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCaptchaAppIdInfoResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("SchemeColor") && !rsp["SchemeColor"].IsNull())
    {
        if (!rsp["SchemeColor"].IsString())
        {
            return CoreInternalOutcome(Error("response `SchemeColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemeColor = string(rsp["SchemeColor"].GetString());
        m_schemeColorHasBeenSet = true;
    }

    if (rsp.HasMember("Language") && !rsp["Language"].IsNull())
    {
        if (!rsp["Language"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Language` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_language = rsp["Language"].GetInt64();
        m_languageHasBeenSet = true;
    }

    if (rsp.HasMember("SceneType") && !rsp["SceneType"].IsNull())
    {
        if (!rsp["SceneType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SceneType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sceneType = rsp["SceneType"].GetInt64();
        m_sceneTypeHasBeenSet = true;
    }

    if (rsp.HasMember("EvilInterceptGrade") && !rsp["EvilInterceptGrade"].IsNull())
    {
        if (!rsp["EvilInterceptGrade"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EvilInterceptGrade` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilInterceptGrade = rsp["EvilInterceptGrade"].GetInt64();
        m_evilInterceptGradeHasBeenSet = true;
    }

    if (rsp.HasMember("SmartVerify") && !rsp["SmartVerify"].IsNull())
    {
        if (!rsp["SmartVerify"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SmartVerify` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_smartVerify = rsp["SmartVerify"].GetInt64();
        m_smartVerifyHasBeenSet = true;
    }

    if (rsp.HasMember("SmartEngine") && !rsp["SmartEngine"].IsNull())
    {
        if (!rsp["SmartEngine"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SmartEngine` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_smartEngine = rsp["SmartEngine"].GetInt64();
        m_smartEngineHasBeenSet = true;
    }

    if (rsp.HasMember("CapType") && !rsp["CapType"].IsNull())
    {
        if (!rsp["CapType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CapType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_capType = rsp["CapType"].GetInt64();
        m_capTypeHasBeenSet = true;
    }

    if (rsp.HasMember("AppName") && !rsp["AppName"].IsNull())
    {
        if (!rsp["AppName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(rsp["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (rsp.HasMember("DomainLimit") && !rsp["DomainLimit"].IsNull())
    {
        if (!rsp["DomainLimit"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainLimit = string(rsp["DomainLimit"].GetString());
        m_domainLimitHasBeenSet = true;
    }

    if (rsp.HasMember("MailAlarm") && !rsp["MailAlarm"].IsNull())
    {
        if (!rsp["MailAlarm"].IsArray())
            return CoreInternalOutcome(Error("response `MailAlarm` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MailAlarm"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_mailAlarm.push_back((*itr).GetString());
        }
        m_mailAlarmHasBeenSet = true;
    }

    if (rsp.HasMember("TrafficThreshold") && !rsp["TrafficThreshold"].IsNull())
    {
        if (!rsp["TrafficThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TrafficThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_trafficThreshold = rsp["TrafficThreshold"].GetInt64();
        m_trafficThresholdHasBeenSet = true;
    }

    if (rsp.HasMember("EncryptKey") && !rsp["EncryptKey"].IsNull())
    {
        if (!rsp["EncryptKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `EncryptKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptKey = string(rsp["EncryptKey"].GetString());
        m_encryptKeyHasBeenSet = true;
    }

    if (rsp.HasMember("TopFullScreen") && !rsp["TopFullScreen"].IsNull())
    {
        if (!rsp["TopFullScreen"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TopFullScreen` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topFullScreen = rsp["TopFullScreen"].GetInt64();
        m_topFullScreenHasBeenSet = true;
    }

    if (rsp.HasMember("CaptchaCode") && !rsp["CaptchaCode"].IsNull())
    {
        if (!rsp["CaptchaCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CaptchaCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_captchaCode = rsp["CaptchaCode"].GetInt64();
        m_captchaCodeHasBeenSet = true;
    }

    if (rsp.HasMember("CaptchaMsg") && !rsp["CaptchaMsg"].IsNull())
    {
        if (!rsp["CaptchaMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `CaptchaMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_captchaMsg = string(rsp["CaptchaMsg"].GetString());
        m_captchaMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeCaptchaAppIdInfoResponse::GetSchemeColor() const
{
    return m_schemeColor;
}

bool DescribeCaptchaAppIdInfoResponse::SchemeColorHasBeenSet() const
{
    return m_schemeColorHasBeenSet;
}

int64_t DescribeCaptchaAppIdInfoResponse::GetLanguage() const
{
    return m_language;
}

bool DescribeCaptchaAppIdInfoResponse::LanguageHasBeenSet() const
{
    return m_languageHasBeenSet;
}

int64_t DescribeCaptchaAppIdInfoResponse::GetSceneType() const
{
    return m_sceneType;
}

bool DescribeCaptchaAppIdInfoResponse::SceneTypeHasBeenSet() const
{
    return m_sceneTypeHasBeenSet;
}

int64_t DescribeCaptchaAppIdInfoResponse::GetEvilInterceptGrade() const
{
    return m_evilInterceptGrade;
}

bool DescribeCaptchaAppIdInfoResponse::EvilInterceptGradeHasBeenSet() const
{
    return m_evilInterceptGradeHasBeenSet;
}

int64_t DescribeCaptchaAppIdInfoResponse::GetSmartVerify() const
{
    return m_smartVerify;
}

bool DescribeCaptchaAppIdInfoResponse::SmartVerifyHasBeenSet() const
{
    return m_smartVerifyHasBeenSet;
}

int64_t DescribeCaptchaAppIdInfoResponse::GetSmartEngine() const
{
    return m_smartEngine;
}

bool DescribeCaptchaAppIdInfoResponse::SmartEngineHasBeenSet() const
{
    return m_smartEngineHasBeenSet;
}

int64_t DescribeCaptchaAppIdInfoResponse::GetCapType() const
{
    return m_capType;
}

bool DescribeCaptchaAppIdInfoResponse::CapTypeHasBeenSet() const
{
    return m_capTypeHasBeenSet;
}

string DescribeCaptchaAppIdInfoResponse::GetAppName() const
{
    return m_appName;
}

bool DescribeCaptchaAppIdInfoResponse::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string DescribeCaptchaAppIdInfoResponse::GetDomainLimit() const
{
    return m_domainLimit;
}

bool DescribeCaptchaAppIdInfoResponse::DomainLimitHasBeenSet() const
{
    return m_domainLimitHasBeenSet;
}

vector<string> DescribeCaptchaAppIdInfoResponse::GetMailAlarm() const
{
    return m_mailAlarm;
}

bool DescribeCaptchaAppIdInfoResponse::MailAlarmHasBeenSet() const
{
    return m_mailAlarmHasBeenSet;
}

int64_t DescribeCaptchaAppIdInfoResponse::GetTrafficThreshold() const
{
    return m_trafficThreshold;
}

bool DescribeCaptchaAppIdInfoResponse::TrafficThresholdHasBeenSet() const
{
    return m_trafficThresholdHasBeenSet;
}

string DescribeCaptchaAppIdInfoResponse::GetEncryptKey() const
{
    return m_encryptKey;
}

bool DescribeCaptchaAppIdInfoResponse::EncryptKeyHasBeenSet() const
{
    return m_encryptKeyHasBeenSet;
}

int64_t DescribeCaptchaAppIdInfoResponse::GetTopFullScreen() const
{
    return m_topFullScreen;
}

bool DescribeCaptchaAppIdInfoResponse::TopFullScreenHasBeenSet() const
{
    return m_topFullScreenHasBeenSet;
}

int64_t DescribeCaptchaAppIdInfoResponse::GetCaptchaCode() const
{
    return m_captchaCode;
}

bool DescribeCaptchaAppIdInfoResponse::CaptchaCodeHasBeenSet() const
{
    return m_captchaCodeHasBeenSet;
}

string DescribeCaptchaAppIdInfoResponse::GetCaptchaMsg() const
{
    return m_captchaMsg;
}

bool DescribeCaptchaAppIdInfoResponse::CaptchaMsgHasBeenSet() const
{
    return m_captchaMsgHasBeenSet;
}



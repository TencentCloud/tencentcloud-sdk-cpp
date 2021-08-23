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

#include <tencentcloud/captcha/v20190722/model/CaptchaUserAllAppId.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

CaptchaUserAllAppId::CaptchaUserAllAppId() :
    m_captchaAppIdHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_tcAppIdHasBeenSet(false),
    m_channelInfoHasBeenSet(false)
{
}

CoreInternalOutcome CaptchaUserAllAppId::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CaptchaAppId") && !value["CaptchaAppId"].IsNull())
    {
        if (!value["CaptchaAppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaUserAllAppId.CaptchaAppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_captchaAppId = value["CaptchaAppId"].GetInt64();
        m_captchaAppIdHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaUserAllAppId.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("TcAppId") && !value["TcAppId"].IsNull())
    {
        if (!value["TcAppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaUserAllAppId.TcAppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tcAppId = value["TcAppId"].GetInt64();
        m_tcAppIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelInfo") && !value["ChannelInfo"].IsNull())
    {
        if (!value["ChannelInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaUserAllAppId.ChannelInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelInfo = string(value["ChannelInfo"].GetString());
        m_channelInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CaptchaUserAllAppId::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_captchaAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptchaAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_captchaAppId, allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_tcAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tcAppId, allocator);
    }

    if (m_channelInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelInfo.c_str(), allocator).Move(), allocator);
    }

}


int64_t CaptchaUserAllAppId::GetCaptchaAppId() const
{
    return m_captchaAppId;
}

void CaptchaUserAllAppId::SetCaptchaAppId(const int64_t& _captchaAppId)
{
    m_captchaAppId = _captchaAppId;
    m_captchaAppIdHasBeenSet = true;
}

bool CaptchaUserAllAppId::CaptchaAppIdHasBeenSet() const
{
    return m_captchaAppIdHasBeenSet;
}

string CaptchaUserAllAppId::GetAppName() const
{
    return m_appName;
}

void CaptchaUserAllAppId::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool CaptchaUserAllAppId::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

int64_t CaptchaUserAllAppId::GetTcAppId() const
{
    return m_tcAppId;
}

void CaptchaUserAllAppId::SetTcAppId(const int64_t& _tcAppId)
{
    m_tcAppId = _tcAppId;
    m_tcAppIdHasBeenSet = true;
}

bool CaptchaUserAllAppId::TcAppIdHasBeenSet() const
{
    return m_tcAppIdHasBeenSet;
}

string CaptchaUserAllAppId::GetChannelInfo() const
{
    return m_channelInfo;
}

void CaptchaUserAllAppId::SetChannelInfo(const string& _channelInfo)
{
    m_channelInfo = _channelInfo;
    m_channelInfoHasBeenSet = true;
}

bool CaptchaUserAllAppId::ChannelInfoHasBeenSet() const
{
    return m_channelInfoHasBeenSet;
}


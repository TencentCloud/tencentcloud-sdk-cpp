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

#include <tencentcloud/teo/v20220901/model/TCCaptchaOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

TCCaptchaOption::TCCaptchaOption() :
    m_captchaAppIdHasBeenSet(false),
    m_appSecretKeyHasBeenSet(false)
{
}

CoreInternalOutcome TCCaptchaOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CaptchaAppId") && !value["CaptchaAppId"].IsNull())
    {
        if (!value["CaptchaAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TCCaptchaOption.CaptchaAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_captchaAppId = string(value["CaptchaAppId"].GetString());
        m_captchaAppIdHasBeenSet = true;
    }

    if (value.HasMember("AppSecretKey") && !value["AppSecretKey"].IsNull())
    {
        if (!value["AppSecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TCCaptchaOption.AppSecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appSecretKey = string(value["AppSecretKey"].GetString());
        m_appSecretKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TCCaptchaOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_captchaAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptchaAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_captchaAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_appSecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppSecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appSecretKey.c_str(), allocator).Move(), allocator);
    }

}


string TCCaptchaOption::GetCaptchaAppId() const
{
    return m_captchaAppId;
}

void TCCaptchaOption::SetCaptchaAppId(const string& _captchaAppId)
{
    m_captchaAppId = _captchaAppId;
    m_captchaAppIdHasBeenSet = true;
}

bool TCCaptchaOption::CaptchaAppIdHasBeenSet() const
{
    return m_captchaAppIdHasBeenSet;
}

string TCCaptchaOption::GetAppSecretKey() const
{
    return m_appSecretKey;
}

void TCCaptchaOption::SetAppSecretKey(const string& _appSecretKey)
{
    m_appSecretKey = _appSecretKey;
    m_appSecretKeyHasBeenSet = true;
}

bool TCCaptchaOption::AppSecretKeyHasBeenSet() const
{
    return m_appSecretKeyHasBeenSet;
}


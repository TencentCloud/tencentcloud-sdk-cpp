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

#include <tencentcloud/ctem/v20231128/model/DisplayHttp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplayHttp::DisplayHttp() :
    m_idHasBeenSet(false),
    m_displayToolCommonHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_contentLengthHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_screenshotThumbUrlHasBeenSet(false),
    m_screenshotUrlHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_apiHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_sslHasBeenSet(false),
    m_sslExpiredTimeHasBeenSet(false),
    m_isChangeHasBeenSet(false)
{
}

CoreInternalOutcome DisplayHttp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayHttp.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DisplayToolCommon") && !value["DisplayToolCommon"].IsNull())
    {
        if (!value["DisplayToolCommon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayHttp.DisplayToolCommon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_displayToolCommon.Deserialize(value["DisplayToolCommon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_displayToolCommonHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayHttp.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayHttp.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("ContentLength") && !value["ContentLength"].IsNull())
    {
        if (!value["ContentLength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayHttp.ContentLength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_contentLength = value["ContentLength"].GetInt64();
        m_contentLengthHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayHttp.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("ScreenshotThumbUrl") && !value["ScreenshotThumbUrl"].IsNull())
    {
        if (!value["ScreenshotThumbUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayHttp.ScreenshotThumbUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_screenshotThumbUrl = string(value["ScreenshotThumbUrl"].GetString());
        m_screenshotThumbUrlHasBeenSet = true;
    }

    if (value.HasMember("ScreenshotUrl") && !value["ScreenshotUrl"].IsNull())
    {
        if (!value["ScreenshotUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayHttp.ScreenshotUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_screenshotUrl = string(value["ScreenshotUrl"].GetString());
        m_screenshotUrlHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayHttp.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Api") && !value["Api"].IsNull())
    {
        if (!value["Api"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayHttp.Api` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_api = string(value["Api"].GetString());
        m_apiHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayHttp.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Ssl") && !value["Ssl"].IsNull())
    {
        if (!value["Ssl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayHttp.Ssl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ssl = string(value["Ssl"].GetString());
        m_sslHasBeenSet = true;
    }

    if (value.HasMember("SslExpiredTime") && !value["SslExpiredTime"].IsNull())
    {
        if (!value["SslExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayHttp.SslExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sslExpiredTime = string(value["SslExpiredTime"].GetString());
        m_sslExpiredTimeHasBeenSet = true;
    }

    if (value.HasMember("IsChange") && !value["IsChange"].IsNull())
    {
        if (!value["IsChange"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayHttp.IsChange` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isChange = value["IsChange"].GetBool();
        m_isChangeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplayHttp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_displayToolCommonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayToolCommon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_displayToolCommon.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_contentLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contentLength, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_screenshotThumbUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScreenshotThumbUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_screenshotThumbUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_screenshotUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScreenshotUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_screenshotUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_apiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Api";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_api.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_sslHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ssl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ssl.c_str(), allocator).Move(), allocator);
    }

    if (m_sslExpiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sslExpiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isChangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsChange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isChange, allocator);
    }

}


int64_t DisplayHttp::GetId() const
{
    return m_id;
}

void DisplayHttp::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisplayHttp::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

DisplayToolCommon DisplayHttp::GetDisplayToolCommon() const
{
    return m_displayToolCommon;
}

void DisplayHttp::SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon)
{
    m_displayToolCommon = _displayToolCommon;
    m_displayToolCommonHasBeenSet = true;
}

bool DisplayHttp::DisplayToolCommonHasBeenSet() const
{
    return m_displayToolCommonHasBeenSet;
}

string DisplayHttp::GetUrl() const
{
    return m_url;
}

void DisplayHttp::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool DisplayHttp::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string DisplayHttp::GetTitle() const
{
    return m_title;
}

void DisplayHttp::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool DisplayHttp::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

int64_t DisplayHttp::GetContentLength() const
{
    return m_contentLength;
}

void DisplayHttp::SetContentLength(const int64_t& _contentLength)
{
    m_contentLength = _contentLength;
    m_contentLengthHasBeenSet = true;
}

bool DisplayHttp::ContentLengthHasBeenSet() const
{
    return m_contentLengthHasBeenSet;
}

string DisplayHttp::GetContent() const
{
    return m_content;
}

void DisplayHttp::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool DisplayHttp::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string DisplayHttp::GetScreenshotThumbUrl() const
{
    return m_screenshotThumbUrl;
}

void DisplayHttp::SetScreenshotThumbUrl(const string& _screenshotThumbUrl)
{
    m_screenshotThumbUrl = _screenshotThumbUrl;
    m_screenshotThumbUrlHasBeenSet = true;
}

bool DisplayHttp::ScreenshotThumbUrlHasBeenSet() const
{
    return m_screenshotThumbUrlHasBeenSet;
}

string DisplayHttp::GetScreenshotUrl() const
{
    return m_screenshotUrl;
}

void DisplayHttp::SetScreenshotUrl(const string& _screenshotUrl)
{
    m_screenshotUrl = _screenshotUrl;
    m_screenshotUrlHasBeenSet = true;
}

bool DisplayHttp::ScreenshotUrlHasBeenSet() const
{
    return m_screenshotUrlHasBeenSet;
}

int64_t DisplayHttp::GetCode() const
{
    return m_code;
}

void DisplayHttp::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool DisplayHttp::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string DisplayHttp::GetApi() const
{
    return m_api;
}

void DisplayHttp::SetApi(const string& _api)
{
    m_api = _api;
    m_apiHasBeenSet = true;
}

bool DisplayHttp::ApiHasBeenSet() const
{
    return m_apiHasBeenSet;
}

string DisplayHttp::GetIp() const
{
    return m_ip;
}

void DisplayHttp::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DisplayHttp::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string DisplayHttp::GetSsl() const
{
    return m_ssl;
}

void DisplayHttp::SetSsl(const string& _ssl)
{
    m_ssl = _ssl;
    m_sslHasBeenSet = true;
}

bool DisplayHttp::SslHasBeenSet() const
{
    return m_sslHasBeenSet;
}

string DisplayHttp::GetSslExpiredTime() const
{
    return m_sslExpiredTime;
}

void DisplayHttp::SetSslExpiredTime(const string& _sslExpiredTime)
{
    m_sslExpiredTime = _sslExpiredTime;
    m_sslExpiredTimeHasBeenSet = true;
}

bool DisplayHttp::SslExpiredTimeHasBeenSet() const
{
    return m_sslExpiredTimeHasBeenSet;
}

bool DisplayHttp::GetIsChange() const
{
    return m_isChange;
}

void DisplayHttp::SetIsChange(const bool& _isChange)
{
    m_isChange = _isChange;
    m_isChangeHasBeenSet = true;
}

bool DisplayHttp::IsChangeHasBeenSet() const
{
    return m_isChangeHasBeenSet;
}


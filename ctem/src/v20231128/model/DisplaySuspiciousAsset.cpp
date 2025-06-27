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

#include <tencentcloud/ctem/v20231128/model/DisplaySuspiciousAsset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplaySuspiciousAsset::DisplaySuspiciousAsset() :
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
    m_sourceTypeHasBeenSet(false),
    m_sourceValueHasBeenSet(false),
    m_trustedHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_rootDomainHasBeenSet(false)
{
}

CoreInternalOutcome DisplaySuspiciousAsset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySuspiciousAsset.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DisplayToolCommon") && !value["DisplayToolCommon"].IsNull())
    {
        if (!value["DisplayToolCommon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySuspiciousAsset.DisplayToolCommon` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DisplaySuspiciousAsset.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySuspiciousAsset.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("ContentLength") && !value["ContentLength"].IsNull())
    {
        if (!value["ContentLength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySuspiciousAsset.ContentLength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_contentLength = value["ContentLength"].GetInt64();
        m_contentLengthHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySuspiciousAsset.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("ScreenshotThumbUrl") && !value["ScreenshotThumbUrl"].IsNull())
    {
        if (!value["ScreenshotThumbUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySuspiciousAsset.ScreenshotThumbUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_screenshotThumbUrl = string(value["ScreenshotThumbUrl"].GetString());
        m_screenshotThumbUrlHasBeenSet = true;
    }

    if (value.HasMember("ScreenshotUrl") && !value["ScreenshotUrl"].IsNull())
    {
        if (!value["ScreenshotUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySuspiciousAsset.ScreenshotUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_screenshotUrl = string(value["ScreenshotUrl"].GetString());
        m_screenshotUrlHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySuspiciousAsset.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Api") && !value["Api"].IsNull())
    {
        if (!value["Api"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySuspiciousAsset.Api` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_api = string(value["Api"].GetString());
        m_apiHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySuspiciousAsset.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Ssl") && !value["Ssl"].IsNull())
    {
        if (!value["Ssl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySuspiciousAsset.Ssl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ssl = string(value["Ssl"].GetString());
        m_sslHasBeenSet = true;
    }

    if (value.HasMember("SslExpiredTime") && !value["SslExpiredTime"].IsNull())
    {
        if (!value["SslExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySuspiciousAsset.SslExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sslExpiredTime = string(value["SslExpiredTime"].GetString());
        m_sslExpiredTimeHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySuspiciousAsset.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceValue") && !value["SourceValue"].IsNull())
    {
        if (!value["SourceValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySuspiciousAsset.SourceValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceValue = string(value["SourceValue"].GetString());
        m_sourceValueHasBeenSet = true;
    }

    if (value.HasMember("Trusted") && !value["Trusted"].IsNull())
    {
        if (!value["Trusted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySuspiciousAsset.Trusted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_trusted = value["Trusted"].GetBool();
        m_trustedHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySuspiciousAsset.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("RootDomain") && !value["RootDomain"].IsNull())
    {
        if (!value["RootDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySuspiciousAsset.RootDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rootDomain = string(value["RootDomain"].GetString());
        m_rootDomainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplaySuspiciousAsset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceValue.c_str(), allocator).Move(), allocator);
    }

    if (m_trustedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trusted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trusted, allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_rootDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rootDomain.c_str(), allocator).Move(), allocator);
    }

}


int64_t DisplaySuspiciousAsset::GetId() const
{
    return m_id;
}

void DisplaySuspiciousAsset::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisplaySuspiciousAsset::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

DisplayToolCommon DisplaySuspiciousAsset::GetDisplayToolCommon() const
{
    return m_displayToolCommon;
}

void DisplaySuspiciousAsset::SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon)
{
    m_displayToolCommon = _displayToolCommon;
    m_displayToolCommonHasBeenSet = true;
}

bool DisplaySuspiciousAsset::DisplayToolCommonHasBeenSet() const
{
    return m_displayToolCommonHasBeenSet;
}

string DisplaySuspiciousAsset::GetUrl() const
{
    return m_url;
}

void DisplaySuspiciousAsset::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool DisplaySuspiciousAsset::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string DisplaySuspiciousAsset::GetTitle() const
{
    return m_title;
}

void DisplaySuspiciousAsset::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool DisplaySuspiciousAsset::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

int64_t DisplaySuspiciousAsset::GetContentLength() const
{
    return m_contentLength;
}

void DisplaySuspiciousAsset::SetContentLength(const int64_t& _contentLength)
{
    m_contentLength = _contentLength;
    m_contentLengthHasBeenSet = true;
}

bool DisplaySuspiciousAsset::ContentLengthHasBeenSet() const
{
    return m_contentLengthHasBeenSet;
}

string DisplaySuspiciousAsset::GetContent() const
{
    return m_content;
}

void DisplaySuspiciousAsset::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool DisplaySuspiciousAsset::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string DisplaySuspiciousAsset::GetScreenshotThumbUrl() const
{
    return m_screenshotThumbUrl;
}

void DisplaySuspiciousAsset::SetScreenshotThumbUrl(const string& _screenshotThumbUrl)
{
    m_screenshotThumbUrl = _screenshotThumbUrl;
    m_screenshotThumbUrlHasBeenSet = true;
}

bool DisplaySuspiciousAsset::ScreenshotThumbUrlHasBeenSet() const
{
    return m_screenshotThumbUrlHasBeenSet;
}

string DisplaySuspiciousAsset::GetScreenshotUrl() const
{
    return m_screenshotUrl;
}

void DisplaySuspiciousAsset::SetScreenshotUrl(const string& _screenshotUrl)
{
    m_screenshotUrl = _screenshotUrl;
    m_screenshotUrlHasBeenSet = true;
}

bool DisplaySuspiciousAsset::ScreenshotUrlHasBeenSet() const
{
    return m_screenshotUrlHasBeenSet;
}

int64_t DisplaySuspiciousAsset::GetCode() const
{
    return m_code;
}

void DisplaySuspiciousAsset::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool DisplaySuspiciousAsset::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string DisplaySuspiciousAsset::GetApi() const
{
    return m_api;
}

void DisplaySuspiciousAsset::SetApi(const string& _api)
{
    m_api = _api;
    m_apiHasBeenSet = true;
}

bool DisplaySuspiciousAsset::ApiHasBeenSet() const
{
    return m_apiHasBeenSet;
}

string DisplaySuspiciousAsset::GetIp() const
{
    return m_ip;
}

void DisplaySuspiciousAsset::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DisplaySuspiciousAsset::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string DisplaySuspiciousAsset::GetSsl() const
{
    return m_ssl;
}

void DisplaySuspiciousAsset::SetSsl(const string& _ssl)
{
    m_ssl = _ssl;
    m_sslHasBeenSet = true;
}

bool DisplaySuspiciousAsset::SslHasBeenSet() const
{
    return m_sslHasBeenSet;
}

string DisplaySuspiciousAsset::GetSslExpiredTime() const
{
    return m_sslExpiredTime;
}

void DisplaySuspiciousAsset::SetSslExpiredTime(const string& _sslExpiredTime)
{
    m_sslExpiredTime = _sslExpiredTime;
    m_sslExpiredTimeHasBeenSet = true;
}

bool DisplaySuspiciousAsset::SslExpiredTimeHasBeenSet() const
{
    return m_sslExpiredTimeHasBeenSet;
}

string DisplaySuspiciousAsset::GetSourceType() const
{
    return m_sourceType;
}

void DisplaySuspiciousAsset::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool DisplaySuspiciousAsset::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string DisplaySuspiciousAsset::GetSourceValue() const
{
    return m_sourceValue;
}

void DisplaySuspiciousAsset::SetSourceValue(const string& _sourceValue)
{
    m_sourceValue = _sourceValue;
    m_sourceValueHasBeenSet = true;
}

bool DisplaySuspiciousAsset::SourceValueHasBeenSet() const
{
    return m_sourceValueHasBeenSet;
}

bool DisplaySuspiciousAsset::GetTrusted() const
{
    return m_trusted;
}

void DisplaySuspiciousAsset::SetTrusted(const bool& _trusted)
{
    m_trusted = _trusted;
    m_trustedHasBeenSet = true;
}

bool DisplaySuspiciousAsset::TrustedHasBeenSet() const
{
    return m_trustedHasBeenSet;
}

string DisplaySuspiciousAsset::GetOwner() const
{
    return m_owner;
}

void DisplaySuspiciousAsset::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool DisplaySuspiciousAsset::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string DisplaySuspiciousAsset::GetRootDomain() const
{
    return m_rootDomain;
}

void DisplaySuspiciousAsset::SetRootDomain(const string& _rootDomain)
{
    m_rootDomain = _rootDomain;
    m_rootDomainHasBeenSet = true;
}

bool DisplaySuspiciousAsset::RootDomainHasBeenSet() const
{
    return m_rootDomainHasBeenSet;
}


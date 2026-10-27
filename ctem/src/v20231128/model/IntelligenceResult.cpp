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

#include <tencentcloud/ctem/v20231128/model/IntelligenceResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

IntelligenceResult::IntelligenceResult() :
    m_customerIdHasBeenSet(false),
    m_customerNameHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_bannerHasBeenSet(false),
    m_screenshotUrlHasBeenSet(false),
    m_isAffectedHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome IntelligenceResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomerId") && !value["CustomerId"].IsNull())
    {
        if (!value["CustomerId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntelligenceResult.CustomerId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_customerId = value["CustomerId"].GetInt64();
        m_customerIdHasBeenSet = true;
    }

    if (value.HasMember("CustomerName") && !value["CustomerName"].IsNull())
    {
        if (!value["CustomerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntelligenceResult.CustomerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerName = string(value["CustomerName"].GetString());
        m_customerNameHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntelligenceResult.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Banner") && !value["Banner"].IsNull())
    {
        if (!value["Banner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntelligenceResult.Banner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_banner = string(value["Banner"].GetString());
        m_bannerHasBeenSet = true;
    }

    if (value.HasMember("ScreenshotUrl") && !value["ScreenshotUrl"].IsNull())
    {
        if (!value["ScreenshotUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntelligenceResult.ScreenshotUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_screenshotUrl = string(value["ScreenshotUrl"].GetString());
        m_screenshotUrlHasBeenSet = true;
    }

    if (value.HasMember("IsAffected") && !value["IsAffected"].IsNull())
    {
        if (!value["IsAffected"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IntelligenceResult.IsAffected` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAffected = value["IsAffected"].GetBool();
        m_isAffectedHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntelligenceResult.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntelligenceResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customerId, allocator);
    }

    if (m_customerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerName.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_bannerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Banner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_banner.c_str(), allocator).Move(), allocator);
    }

    if (m_screenshotUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScreenshotUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_screenshotUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_isAffectedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAffected";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAffected, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

}


int64_t IntelligenceResult::GetCustomerId() const
{
    return m_customerId;
}

void IntelligenceResult::SetCustomerId(const int64_t& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool IntelligenceResult::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

string IntelligenceResult::GetCustomerName() const
{
    return m_customerName;
}

void IntelligenceResult::SetCustomerName(const string& _customerName)
{
    m_customerName = _customerName;
    m_customerNameHasBeenSet = true;
}

bool IntelligenceResult::CustomerNameHasBeenSet() const
{
    return m_customerNameHasBeenSet;
}

string IntelligenceResult::GetTitle() const
{
    return m_title;
}

void IntelligenceResult::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool IntelligenceResult::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string IntelligenceResult::GetBanner() const
{
    return m_banner;
}

void IntelligenceResult::SetBanner(const string& _banner)
{
    m_banner = _banner;
    m_bannerHasBeenSet = true;
}

bool IntelligenceResult::BannerHasBeenSet() const
{
    return m_bannerHasBeenSet;
}

string IntelligenceResult::GetScreenshotUrl() const
{
    return m_screenshotUrl;
}

void IntelligenceResult::SetScreenshotUrl(const string& _screenshotUrl)
{
    m_screenshotUrl = _screenshotUrl;
    m_screenshotUrlHasBeenSet = true;
}

bool IntelligenceResult::ScreenshotUrlHasBeenSet() const
{
    return m_screenshotUrlHasBeenSet;
}

bool IntelligenceResult::GetIsAffected() const
{
    return m_isAffected;
}

void IntelligenceResult::SetIsAffected(const bool& _isAffected)
{
    m_isAffected = _isAffected;
    m_isAffectedHasBeenSet = true;
}

bool IntelligenceResult::IsAffectedHasBeenSet() const
{
    return m_isAffectedHasBeenSet;
}

string IntelligenceResult::GetUrl() const
{
    return m_url;
}

void IntelligenceResult::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool IntelligenceResult::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}


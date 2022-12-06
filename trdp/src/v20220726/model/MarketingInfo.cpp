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

#include <tencentcloud/trdp/v20220726/model/MarketingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trdp::V20220726::Model;
using namespace std;

MarketingInfo::MarketingInfo() :
    m_deliveryModeHasBeenSet(false),
    m_advertisingTypeHasBeenSet(false),
    m_fullScreenHasBeenSet(false),
    m_advertisingSpaceWidthHasBeenSet(false),
    m_advertisingSpaceHeightHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome MarketingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeliveryMode") && !value["DeliveryMode"].IsNull())
    {
        if (!value["DeliveryMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MarketingInfo.DeliveryMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deliveryMode = value["DeliveryMode"].GetInt64();
        m_deliveryModeHasBeenSet = true;
    }

    if (value.HasMember("AdvertisingType") && !value["AdvertisingType"].IsNull())
    {
        if (!value["AdvertisingType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MarketingInfo.AdvertisingType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_advertisingType = value["AdvertisingType"].GetInt64();
        m_advertisingTypeHasBeenSet = true;
    }

    if (value.HasMember("FullScreen") && !value["FullScreen"].IsNull())
    {
        if (!value["FullScreen"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MarketingInfo.FullScreen` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fullScreen = value["FullScreen"].GetInt64();
        m_fullScreenHasBeenSet = true;
    }

    if (value.HasMember("AdvertisingSpaceWidth") && !value["AdvertisingSpaceWidth"].IsNull())
    {
        if (!value["AdvertisingSpaceWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MarketingInfo.AdvertisingSpaceWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_advertisingSpaceWidth = value["AdvertisingSpaceWidth"].GetInt64();
        m_advertisingSpaceWidthHasBeenSet = true;
    }

    if (value.HasMember("AdvertisingSpaceHeight") && !value["AdvertisingSpaceHeight"].IsNull())
    {
        if (!value["AdvertisingSpaceHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MarketingInfo.AdvertisingSpaceHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_advertisingSpaceHeight = value["AdvertisingSpaceHeight"].GetInt64();
        m_advertisingSpaceHeightHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MarketingInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MarketingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deliveryModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deliveryMode, allocator);
    }

    if (m_advertisingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvertisingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_advertisingType, allocator);
    }

    if (m_fullScreenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullScreen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fullScreen, allocator);
    }

    if (m_advertisingSpaceWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvertisingSpaceWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_advertisingSpaceWidth, allocator);
    }

    if (m_advertisingSpaceHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvertisingSpaceHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_advertisingSpaceHeight, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

}


int64_t MarketingInfo::GetDeliveryMode() const
{
    return m_deliveryMode;
}

void MarketingInfo::SetDeliveryMode(const int64_t& _deliveryMode)
{
    m_deliveryMode = _deliveryMode;
    m_deliveryModeHasBeenSet = true;
}

bool MarketingInfo::DeliveryModeHasBeenSet() const
{
    return m_deliveryModeHasBeenSet;
}

int64_t MarketingInfo::GetAdvertisingType() const
{
    return m_advertisingType;
}

void MarketingInfo::SetAdvertisingType(const int64_t& _advertisingType)
{
    m_advertisingType = _advertisingType;
    m_advertisingTypeHasBeenSet = true;
}

bool MarketingInfo::AdvertisingTypeHasBeenSet() const
{
    return m_advertisingTypeHasBeenSet;
}

int64_t MarketingInfo::GetFullScreen() const
{
    return m_fullScreen;
}

void MarketingInfo::SetFullScreen(const int64_t& _fullScreen)
{
    m_fullScreen = _fullScreen;
    m_fullScreenHasBeenSet = true;
}

bool MarketingInfo::FullScreenHasBeenSet() const
{
    return m_fullScreenHasBeenSet;
}

int64_t MarketingInfo::GetAdvertisingSpaceWidth() const
{
    return m_advertisingSpaceWidth;
}

void MarketingInfo::SetAdvertisingSpaceWidth(const int64_t& _advertisingSpaceWidth)
{
    m_advertisingSpaceWidth = _advertisingSpaceWidth;
    m_advertisingSpaceWidthHasBeenSet = true;
}

bool MarketingInfo::AdvertisingSpaceWidthHasBeenSet() const
{
    return m_advertisingSpaceWidthHasBeenSet;
}

int64_t MarketingInfo::GetAdvertisingSpaceHeight() const
{
    return m_advertisingSpaceHeight;
}

void MarketingInfo::SetAdvertisingSpaceHeight(const int64_t& _advertisingSpaceHeight)
{
    m_advertisingSpaceHeight = _advertisingSpaceHeight;
    m_advertisingSpaceHeightHasBeenSet = true;
}

bool MarketingInfo::AdvertisingSpaceHeightHasBeenSet() const
{
    return m_advertisingSpaceHeightHasBeenSet;
}

string MarketingInfo::GetUrl() const
{
    return m_url;
}

void MarketingInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool MarketingInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}


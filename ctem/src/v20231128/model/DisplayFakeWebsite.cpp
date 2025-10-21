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

#include <tencentcloud/ctem/v20231128/model/DisplayFakeWebsite.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplayFakeWebsite::DisplayFakeWebsite() :
    m_idHasBeenSet(false),
    m_displayToolCommonHasBeenSet(false),
    m_websiteHasBeenSet(false),
    m_iPLocationHasBeenSet(false),
    m_screenshotHasBeenSet(false),
    m_handlingStatusHasBeenSet(false),
    m_shutdownStatusHasBeenSet(false),
    m_shutdownTimeHasBeenSet(false)
{
}

CoreInternalOutcome DisplayFakeWebsite::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeWebsite.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DisplayToolCommon") && !value["DisplayToolCommon"].IsNull())
    {
        if (!value["DisplayToolCommon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeWebsite.DisplayToolCommon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_displayToolCommon.Deserialize(value["DisplayToolCommon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_displayToolCommonHasBeenSet = true;
    }

    if (value.HasMember("Website") && !value["Website"].IsNull())
    {
        if (!value["Website"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeWebsite.Website` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_website = string(value["Website"].GetString());
        m_websiteHasBeenSet = true;
    }

    if (value.HasMember("IPLocation") && !value["IPLocation"].IsNull())
    {
        if (!value["IPLocation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeWebsite.IPLocation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iPLocation = string(value["IPLocation"].GetString());
        m_iPLocationHasBeenSet = true;
    }

    if (value.HasMember("Screenshot") && !value["Screenshot"].IsNull())
    {
        if (!value["Screenshot"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeWebsite.Screenshot` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_screenshot = string(value["Screenshot"].GetString());
        m_screenshotHasBeenSet = true;
    }

    if (value.HasMember("HandlingStatus") && !value["HandlingStatus"].IsNull())
    {
        if (!value["HandlingStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeWebsite.HandlingStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_handlingStatus = value["HandlingStatus"].GetInt64();
        m_handlingStatusHasBeenSet = true;
    }

    if (value.HasMember("ShutdownStatus") && !value["ShutdownStatus"].IsNull())
    {
        if (!value["ShutdownStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeWebsite.ShutdownStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shutdownStatus = value["ShutdownStatus"].GetInt64();
        m_shutdownStatusHasBeenSet = true;
    }

    if (value.HasMember("ShutdownTime") && !value["ShutdownTime"].IsNull())
    {
        if (!value["ShutdownTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeWebsite.ShutdownTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shutdownTime = string(value["ShutdownTime"].GetString());
        m_shutdownTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplayFakeWebsite::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_websiteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Website";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_website.c_str(), allocator).Move(), allocator);
    }

    if (m_iPLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iPLocation.c_str(), allocator).Move(), allocator);
    }

    if (m_screenshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Screenshot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_screenshot.c_str(), allocator).Move(), allocator);
    }

    if (m_handlingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandlingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_handlingStatus, allocator);
    }

    if (m_shutdownStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShutdownStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shutdownStatus, allocator);
    }

    if (m_shutdownTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShutdownTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shutdownTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t DisplayFakeWebsite::GetId() const
{
    return m_id;
}

void DisplayFakeWebsite::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisplayFakeWebsite::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

DisplayToolCommon DisplayFakeWebsite::GetDisplayToolCommon() const
{
    return m_displayToolCommon;
}

void DisplayFakeWebsite::SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon)
{
    m_displayToolCommon = _displayToolCommon;
    m_displayToolCommonHasBeenSet = true;
}

bool DisplayFakeWebsite::DisplayToolCommonHasBeenSet() const
{
    return m_displayToolCommonHasBeenSet;
}

string DisplayFakeWebsite::GetWebsite() const
{
    return m_website;
}

void DisplayFakeWebsite::SetWebsite(const string& _website)
{
    m_website = _website;
    m_websiteHasBeenSet = true;
}

bool DisplayFakeWebsite::WebsiteHasBeenSet() const
{
    return m_websiteHasBeenSet;
}

string DisplayFakeWebsite::GetIPLocation() const
{
    return m_iPLocation;
}

void DisplayFakeWebsite::SetIPLocation(const string& _iPLocation)
{
    m_iPLocation = _iPLocation;
    m_iPLocationHasBeenSet = true;
}

bool DisplayFakeWebsite::IPLocationHasBeenSet() const
{
    return m_iPLocationHasBeenSet;
}

string DisplayFakeWebsite::GetScreenshot() const
{
    return m_screenshot;
}

void DisplayFakeWebsite::SetScreenshot(const string& _screenshot)
{
    m_screenshot = _screenshot;
    m_screenshotHasBeenSet = true;
}

bool DisplayFakeWebsite::ScreenshotHasBeenSet() const
{
    return m_screenshotHasBeenSet;
}

int64_t DisplayFakeWebsite::GetHandlingStatus() const
{
    return m_handlingStatus;
}

void DisplayFakeWebsite::SetHandlingStatus(const int64_t& _handlingStatus)
{
    m_handlingStatus = _handlingStatus;
    m_handlingStatusHasBeenSet = true;
}

bool DisplayFakeWebsite::HandlingStatusHasBeenSet() const
{
    return m_handlingStatusHasBeenSet;
}

int64_t DisplayFakeWebsite::GetShutdownStatus() const
{
    return m_shutdownStatus;
}

void DisplayFakeWebsite::SetShutdownStatus(const int64_t& _shutdownStatus)
{
    m_shutdownStatus = _shutdownStatus;
    m_shutdownStatusHasBeenSet = true;
}

bool DisplayFakeWebsite::ShutdownStatusHasBeenSet() const
{
    return m_shutdownStatusHasBeenSet;
}

string DisplayFakeWebsite::GetShutdownTime() const
{
    return m_shutdownTime;
}

void DisplayFakeWebsite::SetShutdownTime(const string& _shutdownTime)
{
    m_shutdownTime = _shutdownTime;
    m_shutdownTimeHasBeenSet = true;
}

bool DisplayFakeWebsite::ShutdownTimeHasBeenSet() const
{
    return m_shutdownTimeHasBeenSet;
}


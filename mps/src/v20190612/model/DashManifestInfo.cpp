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

#include <tencentcloud/mps/v20190612/model/DashManifestInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DashManifestInfo::DashManifestInfo() :
    m_windowsHasBeenSet(false),
    m_minBufferTimeHasBeenSet(false),
    m_minUpdatePeriodHasBeenSet(false),
    m_suggestedPresentationDelayHasBeenSet(false)
{
}

CoreInternalOutcome DashManifestInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Windows") && !value["Windows"].IsNull())
    {
        if (!value["Windows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DashManifestInfo.Windows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_windows = value["Windows"].GetInt64();
        m_windowsHasBeenSet = true;
    }

    if (value.HasMember("MinBufferTime") && !value["MinBufferTime"].IsNull())
    {
        if (!value["MinBufferTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DashManifestInfo.MinBufferTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minBufferTime = value["MinBufferTime"].GetInt64();
        m_minBufferTimeHasBeenSet = true;
    }

    if (value.HasMember("MinUpdatePeriod") && !value["MinUpdatePeriod"].IsNull())
    {
        if (!value["MinUpdatePeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DashManifestInfo.MinUpdatePeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minUpdatePeriod = value["MinUpdatePeriod"].GetInt64();
        m_minUpdatePeriodHasBeenSet = true;
    }

    if (value.HasMember("SuggestedPresentationDelay") && !value["SuggestedPresentationDelay"].IsNull())
    {
        if (!value["SuggestedPresentationDelay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DashManifestInfo.SuggestedPresentationDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_suggestedPresentationDelay = value["SuggestedPresentationDelay"].GetInt64();
        m_suggestedPresentationDelayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DashManifestInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_windowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Windows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_windows, allocator);
    }

    if (m_minBufferTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinBufferTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minBufferTime, allocator);
    }

    if (m_minUpdatePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinUpdatePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minUpdatePeriod, allocator);
    }

    if (m_suggestedPresentationDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuggestedPresentationDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_suggestedPresentationDelay, allocator);
    }

}


int64_t DashManifestInfo::GetWindows() const
{
    return m_windows;
}

void DashManifestInfo::SetWindows(const int64_t& _windows)
{
    m_windows = _windows;
    m_windowsHasBeenSet = true;
}

bool DashManifestInfo::WindowsHasBeenSet() const
{
    return m_windowsHasBeenSet;
}

int64_t DashManifestInfo::GetMinBufferTime() const
{
    return m_minBufferTime;
}

void DashManifestInfo::SetMinBufferTime(const int64_t& _minBufferTime)
{
    m_minBufferTime = _minBufferTime;
    m_minBufferTimeHasBeenSet = true;
}

bool DashManifestInfo::MinBufferTimeHasBeenSet() const
{
    return m_minBufferTimeHasBeenSet;
}

int64_t DashManifestInfo::GetMinUpdatePeriod() const
{
    return m_minUpdatePeriod;
}

void DashManifestInfo::SetMinUpdatePeriod(const int64_t& _minUpdatePeriod)
{
    m_minUpdatePeriod = _minUpdatePeriod;
    m_minUpdatePeriodHasBeenSet = true;
}

bool DashManifestInfo::MinUpdatePeriodHasBeenSet() const
{
    return m_minUpdatePeriodHasBeenSet;
}

int64_t DashManifestInfo::GetSuggestedPresentationDelay() const
{
    return m_suggestedPresentationDelay;
}

void DashManifestInfo::SetSuggestedPresentationDelay(const int64_t& _suggestedPresentationDelay)
{
    m_suggestedPresentationDelay = _suggestedPresentationDelay;
    m_suggestedPresentationDelayHasBeenSet = true;
}

bool DashManifestInfo::SuggestedPresentationDelayHasBeenSet() const
{
    return m_suggestedPresentationDelayHasBeenSet;
}


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

#include <tencentcloud/rum/v20210622/model/EventView.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

EventView::EventView() :
    m_appIdHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_viewIdHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_eventCategoryHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_sdkVersionHasBeenSet(false),
    m_issueIdHasBeenSet(false),
    m_fingerprintHasBeenSet(false),
    m_isSourceMappedHasBeenSet(false),
    m_exceptionStacksHasBeenSet(false),
    m_exceptionFramesHasBeenSet(false),
    m_eventPropertiesHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_pageUrlHasBeenSet(false),
    m_normalizedPageUrlHasBeenSet(false),
    m_pageTitleHasBeenSet(false),
    m_resourceUrlHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_targetElementHasBeenSet(false),
    m_targetTextHasBeenSet(false),
    m_logLevelHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_osHasBeenSet(false),
    m_browserHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_measurementsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome EventView::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("ViewId") && !value["ViewId"].IsNull())
    {
        if (!value["ViewId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.ViewId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewId = string(value["ViewId"].GetString());
        m_viewIdHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("EventCategory") && !value["EventCategory"].IsNull())
    {
        if (!value["EventCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.EventCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventCategory = string(value["EventCategory"].GetString());
        m_eventCategoryHasBeenSet = true;
    }

    if (value.HasMember("EventName") && !value["EventName"].IsNull())
    {
        if (!value["EventName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(value["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.Timestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = string(value["Timestamp"].GetString());
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(value["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("AppVersion") && !value["AppVersion"].IsNull())
    {
        if (!value["AppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.AppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVersion = string(value["AppVersion"].GetString());
        m_appVersionHasBeenSet = true;
    }

    if (value.HasMember("SdkVersion") && !value["SdkVersion"].IsNull())
    {
        if (!value["SdkVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.SdkVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sdkVersion = string(value["SdkVersion"].GetString());
        m_sdkVersionHasBeenSet = true;
    }

    if (value.HasMember("IssueId") && !value["IssueId"].IsNull())
    {
        if (!value["IssueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.IssueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueId = string(value["IssueId"].GetString());
        m_issueIdHasBeenSet = true;
    }

    if (value.HasMember("Fingerprint") && !value["Fingerprint"].IsNull())
    {
        if (!value["Fingerprint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.Fingerprint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fingerprint = string(value["Fingerprint"].GetString());
        m_fingerprintHasBeenSet = true;
    }

    if (value.HasMember("IsSourceMapped") && !value["IsSourceMapped"].IsNull())
    {
        if (!value["IsSourceMapped"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.IsSourceMapped` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isSourceMapped = value["IsSourceMapped"].GetInt64();
        m_isSourceMappedHasBeenSet = true;
    }

    if (value.HasMember("ExceptionStacks") && !value["ExceptionStacks"].IsNull())
    {
        if (!value["ExceptionStacks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventView.ExceptionStacks` is not array type"));

        const rapidjson::Value &tmpValue = value["ExceptionStacks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventStack item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_exceptionStacks.push_back(item);
        }
        m_exceptionStacksHasBeenSet = true;
    }

    if (value.HasMember("ExceptionFrames") && !value["ExceptionFrames"].IsNull())
    {
        if (!value["ExceptionFrames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventView.ExceptionFrames` is not array type"));

        const rapidjson::Value &tmpValue = value["ExceptionFrames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventFrame item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_exceptionFrames.push_back(item);
        }
        m_exceptionFramesHasBeenSet = true;
    }

    if (value.HasMember("EventProperties") && !value["EventProperties"].IsNull())
    {
        if (!value["EventProperties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventView.EventProperties` is not array type"));

        const rapidjson::Value &tmpValue = value["EventProperties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StringKeyValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eventProperties.push_back(item);
        }
        m_eventPropertiesHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("PageUrl") && !value["PageUrl"].IsNull())
    {
        if (!value["PageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.PageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pageUrl = string(value["PageUrl"].GetString());
        m_pageUrlHasBeenSet = true;
    }

    if (value.HasMember("NormalizedPageUrl") && !value["NormalizedPageUrl"].IsNull())
    {
        if (!value["NormalizedPageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.NormalizedPageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_normalizedPageUrl = string(value["NormalizedPageUrl"].GetString());
        m_normalizedPageUrlHasBeenSet = true;
    }

    if (value.HasMember("PageTitle") && !value["PageTitle"].IsNull())
    {
        if (!value["PageTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.PageTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pageTitle = string(value["PageTitle"].GetString());
        m_pageTitleHasBeenSet = true;
    }

    if (value.HasMember("ResourceUrl") && !value["ResourceUrl"].IsNull())
    {
        if (!value["ResourceUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.ResourceUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceUrl = string(value["ResourceUrl"].GetString());
        m_resourceUrlHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetElement") && !value["TargetElement"].IsNull())
    {
        if (!value["TargetElement"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.TargetElement` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetElement = string(value["TargetElement"].GetString());
        m_targetElementHasBeenSet = true;
    }

    if (value.HasMember("TargetText") && !value["TargetText"].IsNull())
    {
        if (!value["TargetText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.TargetText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetText = string(value["TargetText"].GetString());
        m_targetTextHasBeenSet = true;
    }

    if (value.HasMember("LogLevel") && !value["LogLevel"].IsNull())
    {
        if (!value["LogLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.LogLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logLevel = string(value["LogLevel"].GetString());
        m_logLevelHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("Isp") && !value["Isp"].IsNull())
    {
        if (!value["Isp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.Isp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isp = string(value["Isp"].GetString());
        m_ispHasBeenSet = true;
    }

    if (value.HasMember("NetworkType") && !value["NetworkType"].IsNull())
    {
        if (!value["NetworkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.NetworkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkType = string(value["NetworkType"].GetString());
        m_networkTypeHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("Os") && !value["Os"].IsNull())
    {
        if (!value["Os"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.Os` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_os = string(value["Os"].GetString());
        m_osHasBeenSet = true;
    }

    if (value.HasMember("Browser") && !value["Browser"].IsNull())
    {
        if (!value["Browser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.Browser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_browser = string(value["Browser"].GetString());
        m_browserHasBeenSet = true;
    }

    if (value.HasMember("Environment") && !value["Environment"].IsNull())
    {
        if (!value["Environment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventView.Environment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environment = string(value["Environment"].GetString());
        m_environmentHasBeenSet = true;
    }

    if (value.HasMember("Measurements") && !value["Measurements"].IsNull())
    {
        if (!value["Measurements"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventView.Measurements` is not array type"));

        const rapidjson::Value &tmpValue = value["Measurements"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FloatKeyValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_measurements.push_back(item);
        }
        m_measurementsHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventView.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StringKeyValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventView::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

    if (m_viewIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewId.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_eventCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_sdkVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sdkVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_issueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueId.c_str(), allocator).Move(), allocator);
    }

    if (m_fingerprintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fingerprint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fingerprint.c_str(), allocator).Move(), allocator);
    }

    if (m_isSourceMappedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSourceMapped";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSourceMapped, allocator);
    }

    if (m_exceptionStacksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptionStacks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_exceptionStacks.begin(); itr != m_exceptionStacks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_exceptionFramesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptionFrames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_exceptionFrames.begin(); itr != m_exceptionFrames.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_eventPropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventProperties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eventProperties.begin(); itr != m_eventProperties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_normalizedPageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormalizedPageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_normalizedPageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_pageTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pageTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetElementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetElement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetElement.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetText.c_str(), allocator).Move(), allocator);
    }

    if (m_logLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_ispHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isp.c_str(), allocator).Move(), allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_osHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Os";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_os.c_str(), allocator).Move(), allocator);
    }

    if (m_browserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Browser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_browser.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }

    if (m_measurementsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Measurements";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_measurements.begin(); itr != m_measurements.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string EventView::GetAppId() const
{
    return m_appId;
}

void EventView::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool EventView::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string EventView::GetEventId() const
{
    return m_eventId;
}

void EventView::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool EventView::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string EventView::GetViewId() const
{
    return m_viewId;
}

void EventView::SetViewId(const string& _viewId)
{
    m_viewId = _viewId;
    m_viewIdHasBeenSet = true;
}

bool EventView::ViewIdHasBeenSet() const
{
    return m_viewIdHasBeenSet;
}

string EventView::GetEventType() const
{
    return m_eventType;
}

void EventView::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool EventView::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string EventView::GetEventCategory() const
{
    return m_eventCategory;
}

void EventView::SetEventCategory(const string& _eventCategory)
{
    m_eventCategory = _eventCategory;
    m_eventCategoryHasBeenSet = true;
}

bool EventView::EventCategoryHasBeenSet() const
{
    return m_eventCategoryHasBeenSet;
}

string EventView::GetEventName() const
{
    return m_eventName;
}

void EventView::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool EventView::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

string EventView::GetTimestamp() const
{
    return m_timestamp;
}

void EventView::SetTimestamp(const string& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool EventView::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string EventView::GetDate() const
{
    return m_date;
}

void EventView::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool EventView::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string EventView::GetPlatform() const
{
    return m_platform;
}

void EventView::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool EventView::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string EventView::GetAppVersion() const
{
    return m_appVersion;
}

void EventView::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool EventView::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string EventView::GetSdkVersion() const
{
    return m_sdkVersion;
}

void EventView::SetSdkVersion(const string& _sdkVersion)
{
    m_sdkVersion = _sdkVersion;
    m_sdkVersionHasBeenSet = true;
}

bool EventView::SdkVersionHasBeenSet() const
{
    return m_sdkVersionHasBeenSet;
}

string EventView::GetIssueId() const
{
    return m_issueId;
}

void EventView::SetIssueId(const string& _issueId)
{
    m_issueId = _issueId;
    m_issueIdHasBeenSet = true;
}

bool EventView::IssueIdHasBeenSet() const
{
    return m_issueIdHasBeenSet;
}

string EventView::GetFingerprint() const
{
    return m_fingerprint;
}

void EventView::SetFingerprint(const string& _fingerprint)
{
    m_fingerprint = _fingerprint;
    m_fingerprintHasBeenSet = true;
}

bool EventView::FingerprintHasBeenSet() const
{
    return m_fingerprintHasBeenSet;
}

int64_t EventView::GetIsSourceMapped() const
{
    return m_isSourceMapped;
}

void EventView::SetIsSourceMapped(const int64_t& _isSourceMapped)
{
    m_isSourceMapped = _isSourceMapped;
    m_isSourceMappedHasBeenSet = true;
}

bool EventView::IsSourceMappedHasBeenSet() const
{
    return m_isSourceMappedHasBeenSet;
}

vector<EventStack> EventView::GetExceptionStacks() const
{
    return m_exceptionStacks;
}

void EventView::SetExceptionStacks(const vector<EventStack>& _exceptionStacks)
{
    m_exceptionStacks = _exceptionStacks;
    m_exceptionStacksHasBeenSet = true;
}

bool EventView::ExceptionStacksHasBeenSet() const
{
    return m_exceptionStacksHasBeenSet;
}

vector<EventFrame> EventView::GetExceptionFrames() const
{
    return m_exceptionFrames;
}

void EventView::SetExceptionFrames(const vector<EventFrame>& _exceptionFrames)
{
    m_exceptionFrames = _exceptionFrames;
    m_exceptionFramesHasBeenSet = true;
}

bool EventView::ExceptionFramesHasBeenSet() const
{
    return m_exceptionFramesHasBeenSet;
}

vector<StringKeyValue> EventView::GetEventProperties() const
{
    return m_eventProperties;
}

void EventView::SetEventProperties(const vector<StringKeyValue>& _eventProperties)
{
    m_eventProperties = _eventProperties;
    m_eventPropertiesHasBeenSet = true;
}

bool EventView::EventPropertiesHasBeenSet() const
{
    return m_eventPropertiesHasBeenSet;
}

string EventView::GetSessionId() const
{
    return m_sessionId;
}

void EventView::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool EventView::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string EventView::GetUserId() const
{
    return m_userId;
}

void EventView::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool EventView::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string EventView::GetDeviceId() const
{
    return m_deviceId;
}

void EventView::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool EventView::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string EventView::GetPageUrl() const
{
    return m_pageUrl;
}

void EventView::SetPageUrl(const string& _pageUrl)
{
    m_pageUrl = _pageUrl;
    m_pageUrlHasBeenSet = true;
}

bool EventView::PageUrlHasBeenSet() const
{
    return m_pageUrlHasBeenSet;
}

string EventView::GetNormalizedPageUrl() const
{
    return m_normalizedPageUrl;
}

void EventView::SetNormalizedPageUrl(const string& _normalizedPageUrl)
{
    m_normalizedPageUrl = _normalizedPageUrl;
    m_normalizedPageUrlHasBeenSet = true;
}

bool EventView::NormalizedPageUrlHasBeenSet() const
{
    return m_normalizedPageUrlHasBeenSet;
}

string EventView::GetPageTitle() const
{
    return m_pageTitle;
}

void EventView::SetPageTitle(const string& _pageTitle)
{
    m_pageTitle = _pageTitle;
    m_pageTitleHasBeenSet = true;
}

bool EventView::PageTitleHasBeenSet() const
{
    return m_pageTitleHasBeenSet;
}

string EventView::GetResourceUrl() const
{
    return m_resourceUrl;
}

void EventView::SetResourceUrl(const string& _resourceUrl)
{
    m_resourceUrl = _resourceUrl;
    m_resourceUrlHasBeenSet = true;
}

bool EventView::ResourceUrlHasBeenSet() const
{
    return m_resourceUrlHasBeenSet;
}

string EventView::GetResourceType() const
{
    return m_resourceType;
}

void EventView::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool EventView::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string EventView::GetTargetElement() const
{
    return m_targetElement;
}

void EventView::SetTargetElement(const string& _targetElement)
{
    m_targetElement = _targetElement;
    m_targetElementHasBeenSet = true;
}

bool EventView::TargetElementHasBeenSet() const
{
    return m_targetElementHasBeenSet;
}

string EventView::GetTargetText() const
{
    return m_targetText;
}

void EventView::SetTargetText(const string& _targetText)
{
    m_targetText = _targetText;
    m_targetTextHasBeenSet = true;
}

bool EventView::TargetTextHasBeenSet() const
{
    return m_targetTextHasBeenSet;
}

string EventView::GetLogLevel() const
{
    return m_logLevel;
}

void EventView::SetLogLevel(const string& _logLevel)
{
    m_logLevel = _logLevel;
    m_logLevelHasBeenSet = true;
}

bool EventView::LogLevelHasBeenSet() const
{
    return m_logLevelHasBeenSet;
}

string EventView::GetIp() const
{
    return m_ip;
}

void EventView::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool EventView::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string EventView::GetCountry() const
{
    return m_country;
}

void EventView::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool EventView::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string EventView::GetProvince() const
{
    return m_province;
}

void EventView::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool EventView::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string EventView::GetCity() const
{
    return m_city;
}

void EventView::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool EventView::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string EventView::GetIsp() const
{
    return m_isp;
}

void EventView::SetIsp(const string& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool EventView::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

string EventView::GetNetworkType() const
{
    return m_networkType;
}

void EventView::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool EventView::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string EventView::GetDeviceType() const
{
    return m_deviceType;
}

void EventView::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool EventView::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string EventView::GetOs() const
{
    return m_os;
}

void EventView::SetOs(const string& _os)
{
    m_os = _os;
    m_osHasBeenSet = true;
}

bool EventView::OsHasBeenSet() const
{
    return m_osHasBeenSet;
}

string EventView::GetBrowser() const
{
    return m_browser;
}

void EventView::SetBrowser(const string& _browser)
{
    m_browser = _browser;
    m_browserHasBeenSet = true;
}

bool EventView::BrowserHasBeenSet() const
{
    return m_browserHasBeenSet;
}

string EventView::GetEnvironment() const
{
    return m_environment;
}

void EventView::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool EventView::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

vector<FloatKeyValue> EventView::GetMeasurements() const
{
    return m_measurements;
}

void EventView::SetMeasurements(const vector<FloatKeyValue>& _measurements)
{
    m_measurements = _measurements;
    m_measurementsHasBeenSet = true;
}

bool EventView::MeasurementsHasBeenSet() const
{
    return m_measurementsHasBeenSet;
}

vector<StringKeyValue> EventView::GetTags() const
{
    return m_tags;
}

void EventView::SetTags(const vector<StringKeyValue>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool EventView::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


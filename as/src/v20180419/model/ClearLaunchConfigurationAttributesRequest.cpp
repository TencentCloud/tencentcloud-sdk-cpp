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

#include <tencentcloud/as/v20180419/model/ClearLaunchConfigurationAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace std;

ClearLaunchConfigurationAttributesRequest::ClearLaunchConfigurationAttributesRequest() :
    m_launchConfigurationIdHasBeenSet(false),
    m_clearDataDisksHasBeenSet(false),
    m_clearHostNameSettingsHasBeenSet(false),
    m_clearInstanceNameSettingsHasBeenSet(false),
    m_clearDisasterRecoverGroupIdsHasBeenSet(false),
    m_clearInstanceTagsHasBeenSet(false),
    m_clearMetadataHasBeenSet(false)
{
}

string ClearLaunchConfigurationAttributesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_launchConfigurationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchConfigurationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_launchConfigurationId.c_str(), allocator).Move(), allocator);
    }

    if (m_clearDataDisksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClearDataDisks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clearDataDisks, allocator);
    }

    if (m_clearHostNameSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClearHostNameSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clearHostNameSettings, allocator);
    }

    if (m_clearInstanceNameSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClearInstanceNameSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clearInstanceNameSettings, allocator);
    }

    if (m_clearDisasterRecoverGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClearDisasterRecoverGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clearDisasterRecoverGroupIds, allocator);
    }

    if (m_clearInstanceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClearInstanceTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clearInstanceTags, allocator);
    }

    if (m_clearMetadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClearMetadata";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clearMetadata, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ClearLaunchConfigurationAttributesRequest::GetLaunchConfigurationId() const
{
    return m_launchConfigurationId;
}

void ClearLaunchConfigurationAttributesRequest::SetLaunchConfigurationId(const string& _launchConfigurationId)
{
    m_launchConfigurationId = _launchConfigurationId;
    m_launchConfigurationIdHasBeenSet = true;
}

bool ClearLaunchConfigurationAttributesRequest::LaunchConfigurationIdHasBeenSet() const
{
    return m_launchConfigurationIdHasBeenSet;
}

bool ClearLaunchConfigurationAttributesRequest::GetClearDataDisks() const
{
    return m_clearDataDisks;
}

void ClearLaunchConfigurationAttributesRequest::SetClearDataDisks(const bool& _clearDataDisks)
{
    m_clearDataDisks = _clearDataDisks;
    m_clearDataDisksHasBeenSet = true;
}

bool ClearLaunchConfigurationAttributesRequest::ClearDataDisksHasBeenSet() const
{
    return m_clearDataDisksHasBeenSet;
}

bool ClearLaunchConfigurationAttributesRequest::GetClearHostNameSettings() const
{
    return m_clearHostNameSettings;
}

void ClearLaunchConfigurationAttributesRequest::SetClearHostNameSettings(const bool& _clearHostNameSettings)
{
    m_clearHostNameSettings = _clearHostNameSettings;
    m_clearHostNameSettingsHasBeenSet = true;
}

bool ClearLaunchConfigurationAttributesRequest::ClearHostNameSettingsHasBeenSet() const
{
    return m_clearHostNameSettingsHasBeenSet;
}

bool ClearLaunchConfigurationAttributesRequest::GetClearInstanceNameSettings() const
{
    return m_clearInstanceNameSettings;
}

void ClearLaunchConfigurationAttributesRequest::SetClearInstanceNameSettings(const bool& _clearInstanceNameSettings)
{
    m_clearInstanceNameSettings = _clearInstanceNameSettings;
    m_clearInstanceNameSettingsHasBeenSet = true;
}

bool ClearLaunchConfigurationAttributesRequest::ClearInstanceNameSettingsHasBeenSet() const
{
    return m_clearInstanceNameSettingsHasBeenSet;
}

bool ClearLaunchConfigurationAttributesRequest::GetClearDisasterRecoverGroupIds() const
{
    return m_clearDisasterRecoverGroupIds;
}

void ClearLaunchConfigurationAttributesRequest::SetClearDisasterRecoverGroupIds(const bool& _clearDisasterRecoverGroupIds)
{
    m_clearDisasterRecoverGroupIds = _clearDisasterRecoverGroupIds;
    m_clearDisasterRecoverGroupIdsHasBeenSet = true;
}

bool ClearLaunchConfigurationAttributesRequest::ClearDisasterRecoverGroupIdsHasBeenSet() const
{
    return m_clearDisasterRecoverGroupIdsHasBeenSet;
}

bool ClearLaunchConfigurationAttributesRequest::GetClearInstanceTags() const
{
    return m_clearInstanceTags;
}

void ClearLaunchConfigurationAttributesRequest::SetClearInstanceTags(const bool& _clearInstanceTags)
{
    m_clearInstanceTags = _clearInstanceTags;
    m_clearInstanceTagsHasBeenSet = true;
}

bool ClearLaunchConfigurationAttributesRequest::ClearInstanceTagsHasBeenSet() const
{
    return m_clearInstanceTagsHasBeenSet;
}

bool ClearLaunchConfigurationAttributesRequest::GetClearMetadata() const
{
    return m_clearMetadata;
}

void ClearLaunchConfigurationAttributesRequest::SetClearMetadata(const bool& _clearMetadata)
{
    m_clearMetadata = _clearMetadata;
    m_clearMetadataHasBeenSet = true;
}

bool ClearLaunchConfigurationAttributesRequest::ClearMetadataHasBeenSet() const
{
    return m_clearMetadataHasBeenSet;
}



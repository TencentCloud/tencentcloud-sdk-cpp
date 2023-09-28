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

#include <tencentcloud/as/v20180419/model/RollbackInstanceRefreshRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace std;

RollbackInstanceRefreshRequest::RollbackInstanceRefreshRequest() :
    m_autoScalingGroupIdHasBeenSet(false),
    m_refreshSettingsHasBeenSet(false),
    m_originRefreshActivityIdHasBeenSet(false),
    m_refreshModeHasBeenSet(false)
{
}

string RollbackInstanceRefreshRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_autoScalingGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoScalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_refreshSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefreshSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_refreshSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_originRefreshActivityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginRefreshActivityId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originRefreshActivityId.c_str(), allocator).Move(), allocator);
    }

    if (m_refreshModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefreshMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_refreshMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RollbackInstanceRefreshRequest::GetAutoScalingGroupId() const
{
    return m_autoScalingGroupId;
}

void RollbackInstanceRefreshRequest::SetAutoScalingGroupId(const string& _autoScalingGroupId)
{
    m_autoScalingGroupId = _autoScalingGroupId;
    m_autoScalingGroupIdHasBeenSet = true;
}

bool RollbackInstanceRefreshRequest::AutoScalingGroupIdHasBeenSet() const
{
    return m_autoScalingGroupIdHasBeenSet;
}

RefreshSettings RollbackInstanceRefreshRequest::GetRefreshSettings() const
{
    return m_refreshSettings;
}

void RollbackInstanceRefreshRequest::SetRefreshSettings(const RefreshSettings& _refreshSettings)
{
    m_refreshSettings = _refreshSettings;
    m_refreshSettingsHasBeenSet = true;
}

bool RollbackInstanceRefreshRequest::RefreshSettingsHasBeenSet() const
{
    return m_refreshSettingsHasBeenSet;
}

string RollbackInstanceRefreshRequest::GetOriginRefreshActivityId() const
{
    return m_originRefreshActivityId;
}

void RollbackInstanceRefreshRequest::SetOriginRefreshActivityId(const string& _originRefreshActivityId)
{
    m_originRefreshActivityId = _originRefreshActivityId;
    m_originRefreshActivityIdHasBeenSet = true;
}

bool RollbackInstanceRefreshRequest::OriginRefreshActivityIdHasBeenSet() const
{
    return m_originRefreshActivityIdHasBeenSet;
}

string RollbackInstanceRefreshRequest::GetRefreshMode() const
{
    return m_refreshMode;
}

void RollbackInstanceRefreshRequest::SetRefreshMode(const string& _refreshMode)
{
    m_refreshMode = _refreshMode;
    m_refreshModeHasBeenSet = true;
}

bool RollbackInstanceRefreshRequest::RefreshModeHasBeenSet() const
{
    return m_refreshModeHasBeenSet;
}



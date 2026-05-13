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

#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetDataScanTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyDspmAssetDataScanTaskRequest::ModifyDspmAssetDataScanTaskRequest() :
    m_assetIdsHasBeenSet(false),
    m_isScheduledHasBeenSet(false),
    m_isAgreeAuthHasBeenSet(false),
    m_isRunAtOnceHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_scheduleConfigHasBeenSet(false)
{
}

string ModifyDspmAssetDataScanTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_assetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assetIds.begin(); itr != m_assetIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isScheduledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsScheduled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isScheduled, allocator);
    }

    if (m_isAgreeAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAgreeAuth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAgreeAuth, allocator);
    }

    if (m_isRunAtOnceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRunAtOnce";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isRunAtOnce, allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scheduleConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scheduleConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyDspmAssetDataScanTaskRequest::GetAssetIds() const
{
    return m_assetIds;
}

void ModifyDspmAssetDataScanTaskRequest::SetAssetIds(const vector<string>& _assetIds)
{
    m_assetIds = _assetIds;
    m_assetIdsHasBeenSet = true;
}

bool ModifyDspmAssetDataScanTaskRequest::AssetIdsHasBeenSet() const
{
    return m_assetIdsHasBeenSet;
}

bool ModifyDspmAssetDataScanTaskRequest::GetIsScheduled() const
{
    return m_isScheduled;
}

void ModifyDspmAssetDataScanTaskRequest::SetIsScheduled(const bool& _isScheduled)
{
    m_isScheduled = _isScheduled;
    m_isScheduledHasBeenSet = true;
}

bool ModifyDspmAssetDataScanTaskRequest::IsScheduledHasBeenSet() const
{
    return m_isScheduledHasBeenSet;
}

bool ModifyDspmAssetDataScanTaskRequest::GetIsAgreeAuth() const
{
    return m_isAgreeAuth;
}

void ModifyDspmAssetDataScanTaskRequest::SetIsAgreeAuth(const bool& _isAgreeAuth)
{
    m_isAgreeAuth = _isAgreeAuth;
    m_isAgreeAuthHasBeenSet = true;
}

bool ModifyDspmAssetDataScanTaskRequest::IsAgreeAuthHasBeenSet() const
{
    return m_isAgreeAuthHasBeenSet;
}

bool ModifyDspmAssetDataScanTaskRequest::GetIsRunAtOnce() const
{
    return m_isRunAtOnce;
}

void ModifyDspmAssetDataScanTaskRequest::SetIsRunAtOnce(const bool& _isRunAtOnce)
{
    m_isRunAtOnce = _isRunAtOnce;
    m_isRunAtOnceHasBeenSet = true;
}

bool ModifyDspmAssetDataScanTaskRequest::IsRunAtOnceHasBeenSet() const
{
    return m_isRunAtOnceHasBeenSet;
}

vector<string> ModifyDspmAssetDataScanTaskRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyDspmAssetDataScanTaskRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyDspmAssetDataScanTaskRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

DspmScheduleConfig ModifyDspmAssetDataScanTaskRequest::GetScheduleConfig() const
{
    return m_scheduleConfig;
}

void ModifyDspmAssetDataScanTaskRequest::SetScheduleConfig(const DspmScheduleConfig& _scheduleConfig)
{
    m_scheduleConfig = _scheduleConfig;
    m_scheduleConfigHasBeenSet = true;
}

bool ModifyDspmAssetDataScanTaskRequest::ScheduleConfigHasBeenSet() const
{
    return m_scheduleConfigHasBeenSet;
}



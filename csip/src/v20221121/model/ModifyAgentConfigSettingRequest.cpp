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

#include <tencentcloud/csip/v20221121/model/ModifyAgentConfigSettingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyAgentConfigSettingRequest::ModifyAgentConfigSettingRequest() :
    m_memberIdHasBeenSet(false),
    m_logCollectSettingsHasBeenSet(false),
    m_assetSelectionTypeHasBeenSet(false),
    m_tagIdsHasBeenSet(false),
    m_instanceIDsHasBeenSet(false),
    m_excludeInstanceIDsHasBeenSet(false)
{
}

string ModifyAgentConfigSettingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_logCollectSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogCollectSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_logCollectSettings.begin(); itr != m_logCollectSettings.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_assetSelectionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetSelectionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetSelectionType.c_str(), allocator).Move(), allocator);
    }

    if (m_tagIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagIds.begin(); itr != m_tagIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIDs.begin(); itr != m_instanceIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludeInstanceIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeInstanceIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeInstanceIDs.begin(); itr != m_excludeInstanceIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyAgentConfigSettingRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyAgentConfigSettingRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyAgentConfigSettingRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<string> ModifyAgentConfigSettingRequest::GetLogCollectSettings() const
{
    return m_logCollectSettings;
}

void ModifyAgentConfigSettingRequest::SetLogCollectSettings(const vector<string>& _logCollectSettings)
{
    m_logCollectSettings = _logCollectSettings;
    m_logCollectSettingsHasBeenSet = true;
}

bool ModifyAgentConfigSettingRequest::LogCollectSettingsHasBeenSet() const
{
    return m_logCollectSettingsHasBeenSet;
}

string ModifyAgentConfigSettingRequest::GetAssetSelectionType() const
{
    return m_assetSelectionType;
}

void ModifyAgentConfigSettingRequest::SetAssetSelectionType(const string& _assetSelectionType)
{
    m_assetSelectionType = _assetSelectionType;
    m_assetSelectionTypeHasBeenSet = true;
}

bool ModifyAgentConfigSettingRequest::AssetSelectionTypeHasBeenSet() const
{
    return m_assetSelectionTypeHasBeenSet;
}

vector<string> ModifyAgentConfigSettingRequest::GetTagIds() const
{
    return m_tagIds;
}

void ModifyAgentConfigSettingRequest::SetTagIds(const vector<string>& _tagIds)
{
    m_tagIds = _tagIds;
    m_tagIdsHasBeenSet = true;
}

bool ModifyAgentConfigSettingRequest::TagIdsHasBeenSet() const
{
    return m_tagIdsHasBeenSet;
}

vector<string> ModifyAgentConfigSettingRequest::GetInstanceIDs() const
{
    return m_instanceIDs;
}

void ModifyAgentConfigSettingRequest::SetInstanceIDs(const vector<string>& _instanceIDs)
{
    m_instanceIDs = _instanceIDs;
    m_instanceIDsHasBeenSet = true;
}

bool ModifyAgentConfigSettingRequest::InstanceIDsHasBeenSet() const
{
    return m_instanceIDsHasBeenSet;
}

vector<string> ModifyAgentConfigSettingRequest::GetExcludeInstanceIDs() const
{
    return m_excludeInstanceIDs;
}

void ModifyAgentConfigSettingRequest::SetExcludeInstanceIDs(const vector<string>& _excludeInstanceIDs)
{
    m_excludeInstanceIDs = _excludeInstanceIDs;
    m_excludeInstanceIDsHasBeenSet = true;
}

bool ModifyAgentConfigSettingRequest::ExcludeInstanceIDsHasBeenSet() const
{
    return m_excludeInstanceIDsHasBeenSet;
}



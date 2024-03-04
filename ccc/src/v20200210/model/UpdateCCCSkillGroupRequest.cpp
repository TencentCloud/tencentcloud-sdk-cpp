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

#include <tencentcloud/ccc/v20200210/model/UpdateCCCSkillGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

UpdateCCCSkillGroupRequest::UpdateCCCSkillGroupRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_skillGroupIDHasBeenSet(false),
    m_skillGroupNameHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_ringAllHasBeenSet(false)
{
}

string UpdateCCCSkillGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_skillGroupIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_skillGroupID, allocator);
    }

    if (m_skillGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_skillGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_maxConcurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxConcurrency, allocator);
    }

    if (m_ringAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RingAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ringAll, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t UpdateCCCSkillGroupRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void UpdateCCCSkillGroupRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool UpdateCCCSkillGroupRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

int64_t UpdateCCCSkillGroupRequest::GetSkillGroupID() const
{
    return m_skillGroupID;
}

void UpdateCCCSkillGroupRequest::SetSkillGroupID(const int64_t& _skillGroupID)
{
    m_skillGroupID = _skillGroupID;
    m_skillGroupIDHasBeenSet = true;
}

bool UpdateCCCSkillGroupRequest::SkillGroupIDHasBeenSet() const
{
    return m_skillGroupIDHasBeenSet;
}

string UpdateCCCSkillGroupRequest::GetSkillGroupName() const
{
    return m_skillGroupName;
}

void UpdateCCCSkillGroupRequest::SetSkillGroupName(const string& _skillGroupName)
{
    m_skillGroupName = _skillGroupName;
    m_skillGroupNameHasBeenSet = true;
}

bool UpdateCCCSkillGroupRequest::SkillGroupNameHasBeenSet() const
{
    return m_skillGroupNameHasBeenSet;
}

int64_t UpdateCCCSkillGroupRequest::GetMaxConcurrency() const
{
    return m_maxConcurrency;
}

void UpdateCCCSkillGroupRequest::SetMaxConcurrency(const int64_t& _maxConcurrency)
{
    m_maxConcurrency = _maxConcurrency;
    m_maxConcurrencyHasBeenSet = true;
}

bool UpdateCCCSkillGroupRequest::MaxConcurrencyHasBeenSet() const
{
    return m_maxConcurrencyHasBeenSet;
}

bool UpdateCCCSkillGroupRequest::GetRingAll() const
{
    return m_ringAll;
}

void UpdateCCCSkillGroupRequest::SetRingAll(const bool& _ringAll)
{
    m_ringAll = _ringAll;
    m_ringAllHasBeenSet = true;
}

bool UpdateCCCSkillGroupRequest::RingAllHasBeenSet() const
{
    return m_ringAllHasBeenSet;
}



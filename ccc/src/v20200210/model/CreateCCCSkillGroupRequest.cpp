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

#include <tencentcloud/ccc/v20200210/model/CreateCCCSkillGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

CreateCCCSkillGroupRequest::CreateCCCSkillGroupRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_skillGroupNameHasBeenSet(false),
    m_skillGroupTypeHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false)
{
}

string CreateCCCSkillGroupRequest::ToJsonString() const
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

    if (m_skillGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_skillGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_skillGroupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_skillGroupType, allocator);
    }

    if (m_maxConcurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxConcurrency, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateCCCSkillGroupRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateCCCSkillGroupRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateCCCSkillGroupRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string CreateCCCSkillGroupRequest::GetSkillGroupName() const
{
    return m_skillGroupName;
}

void CreateCCCSkillGroupRequest::SetSkillGroupName(const string& _skillGroupName)
{
    m_skillGroupName = _skillGroupName;
    m_skillGroupNameHasBeenSet = true;
}

bool CreateCCCSkillGroupRequest::SkillGroupNameHasBeenSet() const
{
    return m_skillGroupNameHasBeenSet;
}

int64_t CreateCCCSkillGroupRequest::GetSkillGroupType() const
{
    return m_skillGroupType;
}

void CreateCCCSkillGroupRequest::SetSkillGroupType(const int64_t& _skillGroupType)
{
    m_skillGroupType = _skillGroupType;
    m_skillGroupTypeHasBeenSet = true;
}

bool CreateCCCSkillGroupRequest::SkillGroupTypeHasBeenSet() const
{
    return m_skillGroupTypeHasBeenSet;
}

uint64_t CreateCCCSkillGroupRequest::GetMaxConcurrency() const
{
    return m_maxConcurrency;
}

void CreateCCCSkillGroupRequest::SetMaxConcurrency(const uint64_t& _maxConcurrency)
{
    m_maxConcurrency = _maxConcurrency;
    m_maxConcurrencyHasBeenSet = true;
}

bool CreateCCCSkillGroupRequest::MaxConcurrencyHasBeenSet() const
{
    return m_maxConcurrencyHasBeenSet;
}



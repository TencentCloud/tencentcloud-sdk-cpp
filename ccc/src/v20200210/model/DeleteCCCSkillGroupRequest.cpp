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

#include <tencentcloud/ccc/v20200210/model/DeleteCCCSkillGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

DeleteCCCSkillGroupRequest::DeleteCCCSkillGroupRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_skillGroupIdHasBeenSet(false)
{
}

string DeleteCCCSkillGroupRequest::ToJsonString() const
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

    if (m_skillGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_skillGroupId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DeleteCCCSkillGroupRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void DeleteCCCSkillGroupRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool DeleteCCCSkillGroupRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

int64_t DeleteCCCSkillGroupRequest::GetSkillGroupId() const
{
    return m_skillGroupId;
}

void DeleteCCCSkillGroupRequest::SetSkillGroupId(const int64_t& _skillGroupId)
{
    m_skillGroupId = _skillGroupId;
    m_skillGroupIdHasBeenSet = true;
}

bool DeleteCCCSkillGroupRequest::SkillGroupIdHasBeenSet() const
{
    return m_skillGroupIdHasBeenSet;
}



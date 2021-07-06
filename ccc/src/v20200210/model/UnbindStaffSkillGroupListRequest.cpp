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

#include <tencentcloud/ccc/v20200210/model/UnbindStaffSkillGroupListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

UnbindStaffSkillGroupListRequest::UnbindStaffSkillGroupListRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_staffEmailHasBeenSet(false),
    m_skillGroupListHasBeenSet(false)
{
}

string UnbindStaffSkillGroupListRequest::ToJsonString() const
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

    if (m_staffEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaffEmail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_staffEmail.c_str(), allocator).Move(), allocator);
    }

    if (m_skillGroupListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_skillGroupList.begin(); itr != m_skillGroupList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t UnbindStaffSkillGroupListRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void UnbindStaffSkillGroupListRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool UnbindStaffSkillGroupListRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string UnbindStaffSkillGroupListRequest::GetStaffEmail() const
{
    return m_staffEmail;
}

void UnbindStaffSkillGroupListRequest::SetStaffEmail(const string& _staffEmail)
{
    m_staffEmail = _staffEmail;
    m_staffEmailHasBeenSet = true;
}

bool UnbindStaffSkillGroupListRequest::StaffEmailHasBeenSet() const
{
    return m_staffEmailHasBeenSet;
}

vector<int64_t> UnbindStaffSkillGroupListRequest::GetSkillGroupList() const
{
    return m_skillGroupList;
}

void UnbindStaffSkillGroupListRequest::SetSkillGroupList(const vector<int64_t>& _skillGroupList)
{
    m_skillGroupList = _skillGroupList;
    m_skillGroupListHasBeenSet = true;
}

bool UnbindStaffSkillGroupListRequest::SkillGroupListHasBeenSet() const
{
    return m_skillGroupListHasBeenSet;
}



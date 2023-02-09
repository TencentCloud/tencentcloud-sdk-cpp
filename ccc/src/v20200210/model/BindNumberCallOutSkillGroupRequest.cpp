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

#include <tencentcloud/ccc/v20200210/model/BindNumberCallOutSkillGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

BindNumberCallOutSkillGroupRequest::BindNumberCallOutSkillGroupRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_skillGroupIdsHasBeenSet(false)
{
}

string BindNumberCallOutSkillGroupRequest::ToJsonString() const
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

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_number.c_str(), allocator).Move(), allocator);
    }

    if (m_skillGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_skillGroupIds.begin(); itr != m_skillGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t BindNumberCallOutSkillGroupRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void BindNumberCallOutSkillGroupRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool BindNumberCallOutSkillGroupRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string BindNumberCallOutSkillGroupRequest::GetNumber() const
{
    return m_number;
}

void BindNumberCallOutSkillGroupRequest::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool BindNumberCallOutSkillGroupRequest::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

vector<uint64_t> BindNumberCallOutSkillGroupRequest::GetSkillGroupIds() const
{
    return m_skillGroupIds;
}

void BindNumberCallOutSkillGroupRequest::SetSkillGroupIds(const vector<uint64_t>& _skillGroupIds)
{
    m_skillGroupIds = _skillGroupIds;
    m_skillGroupIdsHasBeenSet = true;
}

bool BindNumberCallOutSkillGroupRequest::SkillGroupIdsHasBeenSet() const
{
    return m_skillGroupIdsHasBeenSet;
}



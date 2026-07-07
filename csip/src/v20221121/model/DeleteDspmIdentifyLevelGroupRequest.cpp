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

#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyLevelGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DeleteDspmIdentifyLevelGroupRequest::DeleteDspmIdentifyLevelGroupRequest() :
    m_idsHasBeenSet(false),
    m_memberIdHasBeenSet(false)
{
}

string DeleteDspmIdentifyLevelGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ids.begin(); itr != m_ids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> DeleteDspmIdentifyLevelGroupRequest::GetIds() const
{
    return m_ids;
}

void DeleteDspmIdentifyLevelGroupRequest::SetIds(const vector<uint64_t>& _ids)
{
    m_ids = _ids;
    m_idsHasBeenSet = true;
}

bool DeleteDspmIdentifyLevelGroupRequest::IdsHasBeenSet() const
{
    return m_idsHasBeenSet;
}

vector<string> DeleteDspmIdentifyLevelGroupRequest::GetMemberId() const
{
    return m_memberId;
}

void DeleteDspmIdentifyLevelGroupRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DeleteDspmIdentifyLevelGroupRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}



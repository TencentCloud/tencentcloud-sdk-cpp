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

#include <tencentcloud/chdfs/v20201112/model/DeletePathProtectionRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chdfs::V20201112::Model;
using namespace std;

DeletePathProtectionRuleRequest::DeletePathProtectionRuleRequest() :
    m_pathProtectionRuleIdHasBeenSet(false)
{
}

string DeletePathProtectionRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pathProtectionRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathProtectionRuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pathProtectionRuleId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DeletePathProtectionRuleRequest::GetPathProtectionRuleId() const
{
    return m_pathProtectionRuleId;
}

void DeletePathProtectionRuleRequest::SetPathProtectionRuleId(const uint64_t& _pathProtectionRuleId)
{
    m_pathProtectionRuleId = _pathProtectionRuleId;
    m_pathProtectionRuleIdHasBeenSet = true;
}

bool DeletePathProtectionRuleRequest::PathProtectionRuleIdHasBeenSet() const
{
    return m_pathProtectionRuleIdHasBeenSet;
}



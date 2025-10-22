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

#include <tencentcloud/chdfs/v20201112/model/DeleteAccessRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chdfs::V20201112::Model;
using namespace std;

DeleteAccessRulesRequest::DeleteAccessRulesRequest() :
    m_accessRuleIdsHasBeenSet(false)
{
}

string DeleteAccessRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accessRuleIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessRuleIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accessRuleIds.begin(); itr != m_accessRuleIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> DeleteAccessRulesRequest::GetAccessRuleIds() const
{
    return m_accessRuleIds;
}

void DeleteAccessRulesRequest::SetAccessRuleIds(const vector<uint64_t>& _accessRuleIds)
{
    m_accessRuleIds = _accessRuleIds;
    m_accessRuleIdsHasBeenSet = true;
}

bool DeleteAccessRulesRequest::AccessRuleIdsHasBeenSet() const
{
    return m_accessRuleIdsHasBeenSet;
}



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

#include <tencentcloud/chdfs/v20190718/model/DeleteLifeCycleRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chdfs::V20190718::Model;
using namespace std;

DeleteLifeCycleRulesRequest::DeleteLifeCycleRulesRequest() :
    m_lifeCycleRuleIdsHasBeenSet(false)
{
}

string DeleteLifeCycleRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_lifeCycleRuleIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeCycleRuleIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_lifeCycleRuleIds.begin(); itr != m_lifeCycleRuleIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> DeleteLifeCycleRulesRequest::GetLifeCycleRuleIds() const
{
    return m_lifeCycleRuleIds;
}

void DeleteLifeCycleRulesRequest::SetLifeCycleRuleIds(const vector<uint64_t>& _lifeCycleRuleIds)
{
    m_lifeCycleRuleIds = _lifeCycleRuleIds;
    m_lifeCycleRuleIdsHasBeenSet = true;
}

bool DeleteLifeCycleRulesRequest::LifeCycleRuleIdsHasBeenSet() const
{
    return m_lifeCycleRuleIdsHasBeenSet;
}



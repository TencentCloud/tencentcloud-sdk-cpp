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

#include <tencentcloud/iss/v20230517/model/BatchGetVLPlanSourceFileURLRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

BatchGetVLPlanSourceFileURLRequest::BatchGetVLPlanSourceFileURLRequest() :
    m_vLPlanResultIdsHasBeenSet(false),
    m_expireHasBeenSet(false)
{
}

string BatchGetVLPlanSourceFileURLRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vLPlanResultIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VLPlanResultIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vLPlanResultIds.begin(); itr != m_vLPlanResultIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_expireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expire";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expire, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> BatchGetVLPlanSourceFileURLRequest::GetVLPlanResultIds() const
{
    return m_vLPlanResultIds;
}

void BatchGetVLPlanSourceFileURLRequest::SetVLPlanResultIds(const vector<string>& _vLPlanResultIds)
{
    m_vLPlanResultIds = _vLPlanResultIds;
    m_vLPlanResultIdsHasBeenSet = true;
}

bool BatchGetVLPlanSourceFileURLRequest::VLPlanResultIdsHasBeenSet() const
{
    return m_vLPlanResultIdsHasBeenSet;
}

int64_t BatchGetVLPlanSourceFileURLRequest::GetExpire() const
{
    return m_expire;
}

void BatchGetVLPlanSourceFileURLRequest::SetExpire(const int64_t& _expire)
{
    m_expire = _expire;
    m_expireHasBeenSet = true;
}

bool BatchGetVLPlanSourceFileURLRequest::ExpireHasBeenSet() const
{
    return m_expireHasBeenSet;
}



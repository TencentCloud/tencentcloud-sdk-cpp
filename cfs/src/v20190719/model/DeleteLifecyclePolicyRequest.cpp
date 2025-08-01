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

#include <tencentcloud/cfs/v20190719/model/DeleteLifecyclePolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

DeleteLifecyclePolicyRequest::DeleteLifecyclePolicyRequest() :
    m_lifecyclePolicyIDHasBeenSet(false)
{
}

string DeleteLifecyclePolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_lifecyclePolicyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecyclePolicyID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lifecyclePolicyID.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteLifecyclePolicyRequest::GetLifecyclePolicyID() const
{
    return m_lifecyclePolicyID;
}

void DeleteLifecyclePolicyRequest::SetLifecyclePolicyID(const string& _lifecyclePolicyID)
{
    m_lifecyclePolicyID = _lifecyclePolicyID;
    m_lifecyclePolicyIDHasBeenSet = true;
}

bool DeleteLifecyclePolicyRequest::LifecyclePolicyIDHasBeenSet() const
{
    return m_lifecyclePolicyIDHasBeenSet;
}



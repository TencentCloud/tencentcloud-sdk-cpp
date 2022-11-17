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

#include <tencentcloud/tdid/v20210519/model/GetConsortiumClusterListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

GetConsortiumClusterListRequest::GetConsortiumClusterListRequest() :
    m_consortiumIdHasBeenSet(false)
{
}

string GetConsortiumClusterListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_consortiumIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsortiumId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_consortiumId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t GetConsortiumClusterListRequest::GetConsortiumId() const
{
    return m_consortiumId;
}

void GetConsortiumClusterListRequest::SetConsortiumId(const uint64_t& _consortiumId)
{
    m_consortiumId = _consortiumId;
    m_consortiumIdHasBeenSet = true;
}

bool GetConsortiumClusterListRequest::ConsortiumIdHasBeenSet() const
{
    return m_consortiumIdHasBeenSet;
}



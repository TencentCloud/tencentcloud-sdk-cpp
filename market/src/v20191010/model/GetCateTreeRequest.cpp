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

#include <tencentcloud/market/v20191010/model/GetCateTreeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Market::V20191010::Model;
using namespace std;

GetCateTreeRequest::GetCateTreeRequest() :
    m_cateIdHasBeenSet(false)
{
}

string GetCateTreeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cateId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t GetCateTreeRequest::GetCateId() const
{
    return m_cateId;
}

void GetCateTreeRequest::SetCateId(const uint64_t& _cateId)
{
    m_cateId = _cateId;
    m_cateIdHasBeenSet = true;
}

bool GetCateTreeRequest::CateIdHasBeenSet() const
{
    return m_cateIdHasBeenSet;
}



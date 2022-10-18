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

#include <tencentcloud/bma/v20210624/model/DescribeCRObtainDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

DescribeCRObtainDetailRequest::DescribeCRObtainDetailRequest() :
    m_tortIdHasBeenSet(false)
{
}

string DescribeCRObtainDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tortIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tortId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeCRObtainDetailRequest::GetTortId() const
{
    return m_tortId;
}

void DescribeCRObtainDetailRequest::SetTortId(const int64_t& _tortId)
{
    m_tortId = _tortId;
    m_tortIdHasBeenSet = true;
}

bool DescribeCRObtainDetailRequest::TortIdHasBeenSet() const
{
    return m_tortIdHasBeenSet;
}



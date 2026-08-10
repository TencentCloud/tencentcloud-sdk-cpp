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

#include <tencentcloud/csip/v20221121/model/DescribeKBDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeKBDetailRequest::DescribeKBDetailRequest() :
    m_kBIDHasBeenSet(false)
{
}

string DescribeKBDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_kBIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KBID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_kBID, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeKBDetailRequest::GetKBID() const
{
    return m_kBID;
}

void DescribeKBDetailRequest::SetKBID(const uint64_t& _kBID)
{
    m_kBID = _kBID;
    m_kBIDHasBeenSet = true;
}

bool DescribeKBDetailRequest::KBIDHasBeenSet() const
{
    return m_kBIDHasBeenSet;
}



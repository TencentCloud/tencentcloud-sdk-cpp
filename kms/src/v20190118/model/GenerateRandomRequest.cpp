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

#include <tencentcloud/kms/v20190118/model/GenerateRandomRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

GenerateRandomRequest::GenerateRandomRequest() :
    m_numberOfBytesHasBeenSet(false)
{
}

string GenerateRandomRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_numberOfBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumberOfBytes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_numberOfBytes, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t GenerateRandomRequest::GetNumberOfBytes() const
{
    return m_numberOfBytes;
}

void GenerateRandomRequest::SetNumberOfBytes(const uint64_t& _numberOfBytes)
{
    m_numberOfBytes = _numberOfBytes;
    m_numberOfBytesHasBeenSet = true;
}

bool GenerateRandomRequest::NumberOfBytesHasBeenSet() const
{
    return m_numberOfBytesHasBeenSet;
}



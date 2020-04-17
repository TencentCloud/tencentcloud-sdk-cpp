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

#include <tencentcloud/tcr/v20190924/model/DescribeInstanceStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace rapidjson;
using namespace std;

DescribeInstanceStatusRequest::DescribeInstanceStatusRequest() :
    m_registryIdsHasBeenSet(false)
{
}

string DescribeInstanceStatusRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegistryIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_registryIds.begin(); itr != m_registryIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeInstanceStatusRequest::GetRegistryIds() const
{
    return m_registryIds;
}

void DescribeInstanceStatusRequest::SetRegistryIds(const vector<string>& _registryIds)
{
    m_registryIds = _registryIds;
    m_registryIdsHasBeenSet = true;
}

bool DescribeInstanceStatusRequest::RegistryIdsHasBeenSet() const
{
    return m_registryIdsHasBeenSet;
}



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

#include <tencentcloud/tdmq/v20200217/model/DeleteEnvironmentsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace rapidjson;
using namespace std;

DeleteEnvironmentsRequest::DeleteEnvironmentsRequest() :
    m_environmentIdsHasBeenSet(false)
{
}

string DeleteEnvironmentsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_environmentIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvironmentIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_environmentIds.begin(); itr != m_environmentIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DeleteEnvironmentsRequest::GetEnvironmentIds() const
{
    return m_environmentIds;
}

void DeleteEnvironmentsRequest::SetEnvironmentIds(const vector<string>& _environmentIds)
{
    m_environmentIds = _environmentIds;
    m_environmentIdsHasBeenSet = true;
}

bool DeleteEnvironmentsRequest::EnvironmentIdsHasBeenSet() const
{
    return m_environmentIdsHasBeenSet;
}



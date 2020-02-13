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

#include <tencentcloud/gaap/v20180529/model/DescribeDomainErrorPageInfoByIdsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

DescribeDomainErrorPageInfoByIdsRequest::DescribeDomainErrorPageInfoByIdsRequest() :
    m_errorPageIdsHasBeenSet(false)
{
}

string DescribeDomainErrorPageInfoByIdsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_errorPageIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ErrorPageIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_errorPageIds.begin(); itr != m_errorPageIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeDomainErrorPageInfoByIdsRequest::GetErrorPageIds() const
{
    return m_errorPageIds;
}

void DescribeDomainErrorPageInfoByIdsRequest::SetErrorPageIds(const vector<string>& _errorPageIds)
{
    m_errorPageIds = _errorPageIds;
    m_errorPageIdsHasBeenSet = true;
}

bool DescribeDomainErrorPageInfoByIdsRequest::ErrorPageIdsHasBeenSet() const
{
    return m_errorPageIdsHasBeenSet;
}



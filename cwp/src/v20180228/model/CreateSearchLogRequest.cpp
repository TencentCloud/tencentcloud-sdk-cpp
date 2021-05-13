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

#include <tencentcloud/cwp/v20180228/model/CreateSearchLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace rapidjson;
using namespace std;

CreateSearchLogRequest::CreateSearchLogRequest() :
    m_searchContentHasBeenSet(false)
{
}

string CreateSearchLogRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_searchContentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SearchContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_searchContent.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSearchLogRequest::GetSearchContent() const
{
    return m_searchContent;
}

void CreateSearchLogRequest::SetSearchContent(const string& _searchContent)
{
    m_searchContent = _searchContent;
    m_searchContentHasBeenSet = true;
}

bool CreateSearchLogRequest::SearchContentHasBeenSet() const
{
    return m_searchContentHasBeenSet;
}



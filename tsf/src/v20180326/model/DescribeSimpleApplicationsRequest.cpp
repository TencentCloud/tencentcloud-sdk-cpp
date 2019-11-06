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

#include <tencentcloud/tsf/v20180326/model/DescribeSimpleApplicationsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

DescribeSimpleApplicationsRequest::DescribeSimpleApplicationsRequest() :
    m_applicationIdListHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_microserviceTypeHasBeenSet(false),
    m_applicationResourceTypeListHasBeenSet(false),
    m_searchWordHasBeenSet(false)
{
}

string DescribeSimpleApplicationsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_applicationIdList.begin(); itr != m_applicationIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_applicationTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_applicationType.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_microserviceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MicroserviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_microserviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationResourceTypeListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationResourceTypeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_applicationResourceTypeList.begin(); itr != m_applicationResourceTypeList.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_searchWordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SearchWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_searchWord.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeSimpleApplicationsRequest::GetApplicationIdList() const
{
    return m_applicationIdList;
}

void DescribeSimpleApplicationsRequest::SetApplicationIdList(const vector<string>& _applicationIdList)
{
    m_applicationIdList = _applicationIdList;
    m_applicationIdListHasBeenSet = true;
}

bool DescribeSimpleApplicationsRequest::ApplicationIdListHasBeenSet() const
{
    return m_applicationIdListHasBeenSet;
}

string DescribeSimpleApplicationsRequest::GetApplicationType() const
{
    return m_applicationType;
}

void DescribeSimpleApplicationsRequest::SetApplicationType(const string& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool DescribeSimpleApplicationsRequest::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

int64_t DescribeSimpleApplicationsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSimpleApplicationsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSimpleApplicationsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeSimpleApplicationsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSimpleApplicationsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSimpleApplicationsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeSimpleApplicationsRequest::GetMicroserviceType() const
{
    return m_microserviceType;
}

void DescribeSimpleApplicationsRequest::SetMicroserviceType(const string& _microserviceType)
{
    m_microserviceType = _microserviceType;
    m_microserviceTypeHasBeenSet = true;
}

bool DescribeSimpleApplicationsRequest::MicroserviceTypeHasBeenSet() const
{
    return m_microserviceTypeHasBeenSet;
}

vector<string> DescribeSimpleApplicationsRequest::GetApplicationResourceTypeList() const
{
    return m_applicationResourceTypeList;
}

void DescribeSimpleApplicationsRequest::SetApplicationResourceTypeList(const vector<string>& _applicationResourceTypeList)
{
    m_applicationResourceTypeList = _applicationResourceTypeList;
    m_applicationResourceTypeListHasBeenSet = true;
}

bool DescribeSimpleApplicationsRequest::ApplicationResourceTypeListHasBeenSet() const
{
    return m_applicationResourceTypeListHasBeenSet;
}

string DescribeSimpleApplicationsRequest::GetSearchWord() const
{
    return m_searchWord;
}

void DescribeSimpleApplicationsRequest::SetSearchWord(const string& _searchWord)
{
    m_searchWord = _searchWord;
    m_searchWordHasBeenSet = true;
}

bool DescribeSimpleApplicationsRequest::SearchWordHasBeenSet() const
{
    return m_searchWordHasBeenSet;
}



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

#include <tencentcloud/dayu/v20180709/model/DescribleRegionCountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace rapidjson;
using namespace std;

DescribleRegionCountRequest::DescribleRegionCountRequest() :
    m_businessHasBeenSet(false),
    m_lineListHasBeenSet(false)
{
}

string DescribleRegionCountRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_lineListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LineList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_lineList.begin(); itr != m_lineList.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetUint64(*itr), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribleRegionCountRequest::GetBusiness() const
{
    return m_business;
}

void DescribleRegionCountRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool DescribleRegionCountRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

vector<uint64_t> DescribleRegionCountRequest::GetLineList() const
{
    return m_lineList;
}

void DescribleRegionCountRequest::SetLineList(const vector<uint64_t>& _lineList)
{
    m_lineList = _lineList;
    m_lineListHasBeenSet = true;
}

bool DescribleRegionCountRequest::LineListHasBeenSet() const
{
    return m_lineListHasBeenSet;
}



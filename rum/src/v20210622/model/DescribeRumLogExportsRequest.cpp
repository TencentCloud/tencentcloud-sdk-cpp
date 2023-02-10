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

#include <tencentcloud/rum/v20210622/model/DescribeRumLogExportsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeRumLogExportsRequest::DescribeRumLogExportsRequest() :
    m_pageSizeHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_iDHasBeenSet(false)
{
}

string DescribeRumLogExportsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNum, allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iD, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeRumLogExportsRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeRumLogExportsRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeRumLogExportsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeRumLogExportsRequest::GetPageNum() const
{
    return m_pageNum;
}

void DescribeRumLogExportsRequest::SetPageNum(const int64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool DescribeRumLogExportsRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

int64_t DescribeRumLogExportsRequest::GetID() const
{
    return m_iD;
}

void DescribeRumLogExportsRequest::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DescribeRumLogExportsRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}



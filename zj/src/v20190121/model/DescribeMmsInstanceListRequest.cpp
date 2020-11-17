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

#include <tencentcloud/zj/v20190121/model/DescribeMmsInstanceListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Zj::V20190121::Model;
using namespace rapidjson;
using namespace std;

DescribeMmsInstanceListRequest::DescribeMmsInstanceListRequest() :
    m_licenseHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_appSubIdHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

string DescribeMmsInstanceListRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_licenseHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "License";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_license.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_appSubIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppSubId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_appSubId.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_title.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeMmsInstanceListRequest::GetLicense() const
{
    return m_license;
}

void DescribeMmsInstanceListRequest::SetLicense(const string& _license)
{
    m_license = _license;
    m_licenseHasBeenSet = true;
}

bool DescribeMmsInstanceListRequest::LicenseHasBeenSet() const
{
    return m_licenseHasBeenSet;
}

int64_t DescribeMmsInstanceListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeMmsInstanceListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeMmsInstanceListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeMmsInstanceListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeMmsInstanceListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeMmsInstanceListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeMmsInstanceListRequest::GetAppSubId() const
{
    return m_appSubId;
}

void DescribeMmsInstanceListRequest::SetAppSubId(const string& _appSubId)
{
    m_appSubId = _appSubId;
    m_appSubIdHasBeenSet = true;
}

bool DescribeMmsInstanceListRequest::AppSubIdHasBeenSet() const
{
    return m_appSubIdHasBeenSet;
}

string DescribeMmsInstanceListRequest::GetTitle() const
{
    return m_title;
}

void DescribeMmsInstanceListRequest::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool DescribeMmsInstanceListRequest::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}



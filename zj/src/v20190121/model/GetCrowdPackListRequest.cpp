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

#include <tencentcloud/zj/v20190121/model/GetCrowdPackListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Zj::V20190121::Model;
using namespace rapidjson;
using namespace std;

GetCrowdPackListRequest::GetCrowdPackListRequest() :
    m_licenseHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string GetCrowdPackListRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetCrowdPackListRequest::GetLicense() const
{
    return m_license;
}

void GetCrowdPackListRequest::SetLicense(const string& _license)
{
    m_license = _license;
    m_licenseHasBeenSet = true;
}

bool GetCrowdPackListRequest::LicenseHasBeenSet() const
{
    return m_licenseHasBeenSet;
}

int64_t GetCrowdPackListRequest::GetOffset() const
{
    return m_offset;
}

void GetCrowdPackListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool GetCrowdPackListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t GetCrowdPackListRequest::GetLimit() const
{
    return m_limit;
}

void GetCrowdPackListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool GetCrowdPackListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string GetCrowdPackListRequest::GetName() const
{
    return m_name;
}

void GetCrowdPackListRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GetCrowdPackListRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t GetCrowdPackListRequest::GetStatus() const
{
    return m_status;
}

void GetCrowdPackListRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool GetCrowdPackListRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}



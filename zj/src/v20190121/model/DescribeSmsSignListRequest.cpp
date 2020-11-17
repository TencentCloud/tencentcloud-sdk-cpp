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

#include <tencentcloud/zj/v20190121/model/DescribeSmsSignListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Zj::V20190121::Model;
using namespace rapidjson;
using namespace std;

DescribeSmsSignListRequest::DescribeSmsSignListRequest() :
    m_licenseHasBeenSet(false),
    m_signIdSetHasBeenSet(false),
    m_internationalHasBeenSet(false)
{
}

string DescribeSmsSignListRequest::ToJsonString() const
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

    if (m_signIdSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SignIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_signIdSet.begin(); itr != m_signIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetUint64(*itr), allocator);
        }
    }

    if (m_internationalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "International";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_international, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSmsSignListRequest::GetLicense() const
{
    return m_license;
}

void DescribeSmsSignListRequest::SetLicense(const string& _license)
{
    m_license = _license;
    m_licenseHasBeenSet = true;
}

bool DescribeSmsSignListRequest::LicenseHasBeenSet() const
{
    return m_licenseHasBeenSet;
}

vector<uint64_t> DescribeSmsSignListRequest::GetSignIdSet() const
{
    return m_signIdSet;
}

void DescribeSmsSignListRequest::SetSignIdSet(const vector<uint64_t>& _signIdSet)
{
    m_signIdSet = _signIdSet;
    m_signIdSetHasBeenSet = true;
}

bool DescribeSmsSignListRequest::SignIdSetHasBeenSet() const
{
    return m_signIdSetHasBeenSet;
}

uint64_t DescribeSmsSignListRequest::GetInternational() const
{
    return m_international;
}

void DescribeSmsSignListRequest::SetInternational(const uint64_t& _international)
{
    m_international = _international;
    m_internationalHasBeenSet = true;
}

bool DescribeSmsSignListRequest::InternationalHasBeenSet() const
{
    return m_internationalHasBeenSet;
}



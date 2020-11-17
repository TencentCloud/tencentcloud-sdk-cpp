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

#include <tencentcloud/zj/v20190121/model/DescribeSmsTemplateListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Zj::V20190121::Model;
using namespace rapidjson;
using namespace std;

DescribeSmsTemplateListRequest::DescribeSmsTemplateListRequest() :
    m_licenseHasBeenSet(false),
    m_templateIdSetHasBeenSet(false),
    m_internationalHasBeenSet(false)
{
}

string DescribeSmsTemplateListRequest::ToJsonString() const
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

    if (m_templateIdSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TemplateIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_templateIdSet.begin(); itr != m_templateIdSet.end(); ++itr)
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


string DescribeSmsTemplateListRequest::GetLicense() const
{
    return m_license;
}

void DescribeSmsTemplateListRequest::SetLicense(const string& _license)
{
    m_license = _license;
    m_licenseHasBeenSet = true;
}

bool DescribeSmsTemplateListRequest::LicenseHasBeenSet() const
{
    return m_licenseHasBeenSet;
}

vector<uint64_t> DescribeSmsTemplateListRequest::GetTemplateIdSet() const
{
    return m_templateIdSet;
}

void DescribeSmsTemplateListRequest::SetTemplateIdSet(const vector<uint64_t>& _templateIdSet)
{
    m_templateIdSet = _templateIdSet;
    m_templateIdSetHasBeenSet = true;
}

bool DescribeSmsTemplateListRequest::TemplateIdSetHasBeenSet() const
{
    return m_templateIdSetHasBeenSet;
}

uint64_t DescribeSmsTemplateListRequest::GetInternational() const
{
    return m_international;
}

void DescribeSmsTemplateListRequest::SetInternational(const uint64_t& _international)
{
    m_international = _international;
    m_internationalHasBeenSet = true;
}

bool DescribeSmsTemplateListRequest::InternationalHasBeenSet() const
{
    return m_internationalHasBeenSet;
}



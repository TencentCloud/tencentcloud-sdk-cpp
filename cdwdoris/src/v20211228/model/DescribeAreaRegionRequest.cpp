/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeAreaRegionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeAreaRegionRequest::DescribeAreaRegionRequest() :
    m_isInternationalSiteHasBeenSet(false)
{
}

string DescribeAreaRegionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_isInternationalSiteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInternationalSite";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isInternationalSite, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool DescribeAreaRegionRequest::GetIsInternationalSite() const
{
    return m_isInternationalSite;
}

void DescribeAreaRegionRequest::SetIsInternationalSite(const bool& _isInternationalSite)
{
    m_isInternationalSite = _isInternationalSite;
    m_isInternationalSiteHasBeenSet = true;
}

bool DescribeAreaRegionRequest::IsInternationalSiteHasBeenSet() const
{
    return m_isInternationalSiteHasBeenSet;
}



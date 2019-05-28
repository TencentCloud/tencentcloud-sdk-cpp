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

#include <tencentcloud/cws/v20180312/model/CreateSitesScansRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cws::V20180312::Model;
using namespace rapidjson;
using namespace std;

CreateSitesScansRequest::CreateSitesScansRequest() :
    m_siteIdsHasBeenSet(false),
    m_scannerTypeHasBeenSet(false),
    m_rateLimitHasBeenSet(false)
{
}

string CreateSitesScansRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_siteIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SiteIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_siteIds.begin(); itr != m_siteIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetUint64(*itr), allocator);
        }
    }

    if (m_scannerTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ScannerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_scannerType.c_str(), allocator).Move(), allocator);
    }

    if (m_rateLimitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RateLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rateLimit, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> CreateSitesScansRequest::GetSiteIds() const
{
    return m_siteIds;
}

void CreateSitesScansRequest::SetSiteIds(const vector<uint64_t>& _siteIds)
{
    m_siteIds = _siteIds;
    m_siteIdsHasBeenSet = true;
}

bool CreateSitesScansRequest::SiteIdsHasBeenSet() const
{
    return m_siteIdsHasBeenSet;
}

string CreateSitesScansRequest::GetScannerType() const
{
    return m_scannerType;
}

void CreateSitesScansRequest::SetScannerType(const string& _scannerType)
{
    m_scannerType = _scannerType;
    m_scannerTypeHasBeenSet = true;
}

bool CreateSitesScansRequest::ScannerTypeHasBeenSet() const
{
    return m_scannerTypeHasBeenSet;
}

uint64_t CreateSitesScansRequest::GetRateLimit() const
{
    return m_rateLimit;
}

void CreateSitesScansRequest::SetRateLimit(const uint64_t& _rateLimit)
{
    m_rateLimit = _rateLimit;
    m_rateLimitHasBeenSet = true;
}

bool CreateSitesScansRequest::RateLimitHasBeenSet() const
{
    return m_rateLimitHasBeenSet;
}



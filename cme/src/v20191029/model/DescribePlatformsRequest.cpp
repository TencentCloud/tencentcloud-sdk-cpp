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

#include <tencentcloud/cme/v20191029/model/DescribePlatformsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

DescribePlatformsRequest::DescribePlatformsRequest() :
    m_platformsHasBeenSet(false),
    m_licenseIdsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribePlatformsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platforms";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_platforms.begin(); itr != m_platforms.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_licenseIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_licenseIds.begin(); itr != m_licenseIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribePlatformsRequest::GetPlatforms() const
{
    return m_platforms;
}

void DescribePlatformsRequest::SetPlatforms(const vector<string>& _platforms)
{
    m_platforms = _platforms;
    m_platformsHasBeenSet = true;
}

bool DescribePlatformsRequest::PlatformsHasBeenSet() const
{
    return m_platformsHasBeenSet;
}

vector<string> DescribePlatformsRequest::GetLicenseIds() const
{
    return m_licenseIds;
}

void DescribePlatformsRequest::SetLicenseIds(const vector<string>& _licenseIds)
{
    m_licenseIds = _licenseIds;
    m_licenseIdsHasBeenSet = true;
}

bool DescribePlatformsRequest::LicenseIdsHasBeenSet() const
{
    return m_licenseIdsHasBeenSet;
}

uint64_t DescribePlatformsRequest::GetOffset() const
{
    return m_offset;
}

void DescribePlatformsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribePlatformsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribePlatformsRequest::GetLimit() const
{
    return m_limit;
}

void DescribePlatformsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribePlatformsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}



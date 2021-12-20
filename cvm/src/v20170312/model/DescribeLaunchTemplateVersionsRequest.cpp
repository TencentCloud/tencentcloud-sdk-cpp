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

#include <tencentcloud/cvm/v20170312/model/DescribeLaunchTemplateVersionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

DescribeLaunchTemplateVersionsRequest::DescribeLaunchTemplateVersionsRequest() :
    m_launchTemplateIdHasBeenSet(false),
    m_launchTemplateVersionsHasBeenSet(false),
    m_minVersionHasBeenSet(false),
    m_maxVersionHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_defaultVersionHasBeenSet(false)
{
}

string DescribeLaunchTemplateVersionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_launchTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_launchTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_launchTemplateVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchTemplateVersions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_launchTemplateVersions.begin(); itr != m_launchTemplateVersions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_minVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minVersion, allocator);
    }

    if (m_maxVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxVersion, allocator);
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

    if (m_defaultVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_defaultVersion, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeLaunchTemplateVersionsRequest::GetLaunchTemplateId() const
{
    return m_launchTemplateId;
}

void DescribeLaunchTemplateVersionsRequest::SetLaunchTemplateId(const string& _launchTemplateId)
{
    m_launchTemplateId = _launchTemplateId;
    m_launchTemplateIdHasBeenSet = true;
}

bool DescribeLaunchTemplateVersionsRequest::LaunchTemplateIdHasBeenSet() const
{
    return m_launchTemplateIdHasBeenSet;
}

vector<uint64_t> DescribeLaunchTemplateVersionsRequest::GetLaunchTemplateVersions() const
{
    return m_launchTemplateVersions;
}

void DescribeLaunchTemplateVersionsRequest::SetLaunchTemplateVersions(const vector<uint64_t>& _launchTemplateVersions)
{
    m_launchTemplateVersions = _launchTemplateVersions;
    m_launchTemplateVersionsHasBeenSet = true;
}

bool DescribeLaunchTemplateVersionsRequest::LaunchTemplateVersionsHasBeenSet() const
{
    return m_launchTemplateVersionsHasBeenSet;
}

uint64_t DescribeLaunchTemplateVersionsRequest::GetMinVersion() const
{
    return m_minVersion;
}

void DescribeLaunchTemplateVersionsRequest::SetMinVersion(const uint64_t& _minVersion)
{
    m_minVersion = _minVersion;
    m_minVersionHasBeenSet = true;
}

bool DescribeLaunchTemplateVersionsRequest::MinVersionHasBeenSet() const
{
    return m_minVersionHasBeenSet;
}

uint64_t DescribeLaunchTemplateVersionsRequest::GetMaxVersion() const
{
    return m_maxVersion;
}

void DescribeLaunchTemplateVersionsRequest::SetMaxVersion(const uint64_t& _maxVersion)
{
    m_maxVersion = _maxVersion;
    m_maxVersionHasBeenSet = true;
}

bool DescribeLaunchTemplateVersionsRequest::MaxVersionHasBeenSet() const
{
    return m_maxVersionHasBeenSet;
}

uint64_t DescribeLaunchTemplateVersionsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeLaunchTemplateVersionsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeLaunchTemplateVersionsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeLaunchTemplateVersionsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeLaunchTemplateVersionsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeLaunchTemplateVersionsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

bool DescribeLaunchTemplateVersionsRequest::GetDefaultVersion() const
{
    return m_defaultVersion;
}

void DescribeLaunchTemplateVersionsRequest::SetDefaultVersion(const bool& _defaultVersion)
{
    m_defaultVersion = _defaultVersion;
    m_defaultVersionHasBeenSet = true;
}

bool DescribeLaunchTemplateVersionsRequest::DefaultVersionHasBeenSet() const
{
    return m_defaultVersionHasBeenSet;
}



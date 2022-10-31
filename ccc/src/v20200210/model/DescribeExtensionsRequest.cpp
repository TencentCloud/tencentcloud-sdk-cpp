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

#include <tencentcloud/ccc/v20200210/model/DescribeExtensionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

DescribeExtensionsRequest::DescribeExtensionsRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_extensionIdsHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_fuzzingKeyWordHasBeenSet(false),
    m_isNeedStatusHasBeenSet(false)
{
}

string DescribeExtensionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_extensionIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensionIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_extensionIds.begin(); itr != m_extensionIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_fuzzingKeyWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FuzzingKeyWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fuzzingKeyWord.c_str(), allocator).Move(), allocator);
    }

    if (m_isNeedStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNeedStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isNeedStatus, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeExtensionsRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void DescribeExtensionsRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool DescribeExtensionsRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

int64_t DescribeExtensionsRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeExtensionsRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeExtensionsRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

vector<string> DescribeExtensionsRequest::GetExtensionIds() const
{
    return m_extensionIds;
}

void DescribeExtensionsRequest::SetExtensionIds(const vector<string>& _extensionIds)
{
    m_extensionIds = _extensionIds;
    m_extensionIdsHasBeenSet = true;
}

bool DescribeExtensionsRequest::ExtensionIdsHasBeenSet() const
{
    return m_extensionIdsHasBeenSet;
}

int64_t DescribeExtensionsRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeExtensionsRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeExtensionsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeExtensionsRequest::GetFuzzingKeyWord() const
{
    return m_fuzzingKeyWord;
}

void DescribeExtensionsRequest::SetFuzzingKeyWord(const string& _fuzzingKeyWord)
{
    m_fuzzingKeyWord = _fuzzingKeyWord;
    m_fuzzingKeyWordHasBeenSet = true;
}

bool DescribeExtensionsRequest::FuzzingKeyWordHasBeenSet() const
{
    return m_fuzzingKeyWordHasBeenSet;
}

bool DescribeExtensionsRequest::GetIsNeedStatus() const
{
    return m_isNeedStatus;
}

void DescribeExtensionsRequest::SetIsNeedStatus(const bool& _isNeedStatus)
{
    m_isNeedStatus = _isNeedStatus;
    m_isNeedStatusHasBeenSet = true;
}

bool DescribeExtensionsRequest::IsNeedStatusHasBeenSet() const
{
    return m_isNeedStatusHasBeenSet;
}



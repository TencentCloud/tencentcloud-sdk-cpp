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

#include <tencentcloud/bdrc/v20260330/model/DescribeCopyPairsDeniedActionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

DescribeCopyPairsDeniedActionsRequest::DescribeCopyPairsDeniedActionsRequest() :
    m_copyPairIdsHasBeenSet(false),
    m_copyPairTypeHasBeenSet(false)
{
}

string DescribeCopyPairsDeniedActionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_copyPairIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyPairIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_copyPairIds.begin(); itr != m_copyPairIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_copyPairTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyPairType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_copyPairType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeCopyPairsDeniedActionsRequest::GetCopyPairIds() const
{
    return m_copyPairIds;
}

void DescribeCopyPairsDeniedActionsRequest::SetCopyPairIds(const vector<string>& _copyPairIds)
{
    m_copyPairIds = _copyPairIds;
    m_copyPairIdsHasBeenSet = true;
}

bool DescribeCopyPairsDeniedActionsRequest::CopyPairIdsHasBeenSet() const
{
    return m_copyPairIdsHasBeenSet;
}

string DescribeCopyPairsDeniedActionsRequest::GetCopyPairType() const
{
    return m_copyPairType;
}

void DescribeCopyPairsDeniedActionsRequest::SetCopyPairType(const string& _copyPairType)
{
    m_copyPairType = _copyPairType;
    m_copyPairTypeHasBeenSet = true;
}

bool DescribeCopyPairsDeniedActionsRequest::CopyPairTypeHasBeenSet() const
{
    return m_copyPairTypeHasBeenSet;
}



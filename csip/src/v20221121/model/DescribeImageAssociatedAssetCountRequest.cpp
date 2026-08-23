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

#include <tencentcloud/csip/v20221121/model/DescribeImageAssociatedAssetCountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeImageAssociatedAssetCountRequest::DescribeImageAssociatedAssetCountRequest() :
    m_memberIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_previewIdHasBeenSet(false)
{
}

string DescribeImageAssociatedAssetCountRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_id.begin(); itr != m_id.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_previewIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_previewId.begin(); itr != m_previewId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeImageAssociatedAssetCountRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeImageAssociatedAssetCountRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeImageAssociatedAssetCountRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<uint64_t> DescribeImageAssociatedAssetCountRequest::GetId() const
{
    return m_id;
}

void DescribeImageAssociatedAssetCountRequest::SetId(const vector<uint64_t>& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeImageAssociatedAssetCountRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<uint64_t> DescribeImageAssociatedAssetCountRequest::GetPreviewId() const
{
    return m_previewId;
}

void DescribeImageAssociatedAssetCountRequest::SetPreviewId(const vector<uint64_t>& _previewId)
{
    m_previewId = _previewId;
    m_previewIdHasBeenSet = true;
}

bool DescribeImageAssociatedAssetCountRequest::PreviewIdHasBeenSet() const
{
    return m_previewIdHasBeenSet;
}



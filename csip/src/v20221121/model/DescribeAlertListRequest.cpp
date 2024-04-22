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

#include <tencentcloud/csip/v20221121/model/DescribeAlertListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeAlertListRequest::DescribeAlertListRequest() :
    m_filterHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_operatedMemberIdHasBeenSet(false),
    m_assetTypeHasBeenSet(false)
{
}

string DescribeAlertListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filter.ToJsonObject(d[key.c_str()], allocator);
    }

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

    if (m_operatedMemberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatedMemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_operatedMemberId.begin(); itr != m_operatedMemberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_assetType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Filter DescribeAlertListRequest::GetFilter() const
{
    return m_filter;
}

void DescribeAlertListRequest::SetFilter(const Filter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeAlertListRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

vector<string> DescribeAlertListRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeAlertListRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeAlertListRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<string> DescribeAlertListRequest::GetOperatedMemberId() const
{
    return m_operatedMemberId;
}

void DescribeAlertListRequest::SetOperatedMemberId(const vector<string>& _operatedMemberId)
{
    m_operatedMemberId = _operatedMemberId;
    m_operatedMemberIdHasBeenSet = true;
}

bool DescribeAlertListRequest::OperatedMemberIdHasBeenSet() const
{
    return m_operatedMemberIdHasBeenSet;
}

int64_t DescribeAlertListRequest::GetAssetType() const
{
    return m_assetType;
}

void DescribeAlertListRequest::SetAssetType(const int64_t& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool DescribeAlertListRequest::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}



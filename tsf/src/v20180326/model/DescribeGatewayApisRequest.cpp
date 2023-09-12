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

#include <tencentcloud/tsf/v20180326/model/DescribeGatewayApisRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DescribeGatewayApisRequest::DescribeGatewayApisRequest() :
    m_groupIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_searchWordHasBeenSet(false),
    m_gatewayDeployGroupIdHasBeenSet(false),
    m_releaseStatusHasBeenSet(false)
{
}

string DescribeGatewayApisRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
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

    if (m_searchWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchWord.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayDeployGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayDeployGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayDeployGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_releaseStatus.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeGatewayApisRequest::GetGroupId() const
{
    return m_groupId;
}

void DescribeGatewayApisRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeGatewayApisRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t DescribeGatewayApisRequest::GetOffset() const
{
    return m_offset;
}

void DescribeGatewayApisRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeGatewayApisRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeGatewayApisRequest::GetLimit() const
{
    return m_limit;
}

void DescribeGatewayApisRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeGatewayApisRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeGatewayApisRequest::GetSearchWord() const
{
    return m_searchWord;
}

void DescribeGatewayApisRequest::SetSearchWord(const string& _searchWord)
{
    m_searchWord = _searchWord;
    m_searchWordHasBeenSet = true;
}

bool DescribeGatewayApisRequest::SearchWordHasBeenSet() const
{
    return m_searchWordHasBeenSet;
}

string DescribeGatewayApisRequest::GetGatewayDeployGroupId() const
{
    return m_gatewayDeployGroupId;
}

void DescribeGatewayApisRequest::SetGatewayDeployGroupId(const string& _gatewayDeployGroupId)
{
    m_gatewayDeployGroupId = _gatewayDeployGroupId;
    m_gatewayDeployGroupIdHasBeenSet = true;
}

bool DescribeGatewayApisRequest::GatewayDeployGroupIdHasBeenSet() const
{
    return m_gatewayDeployGroupIdHasBeenSet;
}

string DescribeGatewayApisRequest::GetReleaseStatus() const
{
    return m_releaseStatus;
}

void DescribeGatewayApisRequest::SetReleaseStatus(const string& _releaseStatus)
{
    m_releaseStatus = _releaseStatus;
    m_releaseStatusHasBeenSet = true;
}

bool DescribeGatewayApisRequest::ReleaseStatusHasBeenSet() const
{
    return m_releaseStatusHasBeenSet;
}



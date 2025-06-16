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

#include <tencentcloud/csip/v20221121/model/DescribeTopAttackInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeTopAttackInfoRequest::DescribeTopAttackInfoRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_queryTypeHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_operatedMemberIdHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_assetTypeHasBeenSet(false)
{
}

string DescribeTopAttackInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_queryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryType, allocator);
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

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
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


string DescribeTopAttackInfoRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTopAttackInfoRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTopAttackInfoRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeTopAttackInfoRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTopAttackInfoRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTopAttackInfoRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeTopAttackInfoRequest::GetQueryType() const
{
    return m_queryType;
}

void DescribeTopAttackInfoRequest::SetQueryType(const int64_t& _queryType)
{
    m_queryType = _queryType;
    m_queryTypeHasBeenSet = true;
}

bool DescribeTopAttackInfoRequest::QueryTypeHasBeenSet() const
{
    return m_queryTypeHasBeenSet;
}

vector<string> DescribeTopAttackInfoRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeTopAttackInfoRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeTopAttackInfoRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<string> DescribeTopAttackInfoRequest::GetOperatedMemberId() const
{
    return m_operatedMemberId;
}

void DescribeTopAttackInfoRequest::SetOperatedMemberId(const vector<string>& _operatedMemberId)
{
    m_operatedMemberId = _operatedMemberId;
    m_operatedMemberIdHasBeenSet = true;
}

bool DescribeTopAttackInfoRequest::OperatedMemberIdHasBeenSet() const
{
    return m_operatedMemberIdHasBeenSet;
}

string DescribeTopAttackInfoRequest::GetAssetName() const
{
    return m_assetName;
}

void DescribeTopAttackInfoRequest::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool DescribeTopAttackInfoRequest::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

int64_t DescribeTopAttackInfoRequest::GetAssetType() const
{
    return m_assetType;
}

void DescribeTopAttackInfoRequest::SetAssetType(const int64_t& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool DescribeTopAttackInfoRequest::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}



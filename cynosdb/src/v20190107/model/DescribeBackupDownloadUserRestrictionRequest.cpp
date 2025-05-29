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

#include <tencentcloud/cynosdb/v20190107/model/DescribeBackupDownloadUserRestrictionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeBackupDownloadUserRestrictionRequest::DescribeBackupDownloadUserRestrictionRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_onlyUserRestrictionHasBeenSet(false)
{
}

string DescribeBackupDownloadUserRestrictionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_onlyUserRestrictionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlyUserRestriction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_onlyUserRestriction, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeBackupDownloadUserRestrictionRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBackupDownloadUserRestrictionRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBackupDownloadUserRestrictionRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeBackupDownloadUserRestrictionRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBackupDownloadUserRestrictionRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBackupDownloadUserRestrictionRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

bool DescribeBackupDownloadUserRestrictionRequest::GetOnlyUserRestriction() const
{
    return m_onlyUserRestriction;
}

void DescribeBackupDownloadUserRestrictionRequest::SetOnlyUserRestriction(const bool& _onlyUserRestriction)
{
    m_onlyUserRestriction = _onlyUserRestriction;
    m_onlyUserRestrictionHasBeenSet = true;
}

bool DescribeBackupDownloadUserRestrictionRequest::OnlyUserRestrictionHasBeenSet() const
{
    return m_onlyUserRestrictionHasBeenSet;
}



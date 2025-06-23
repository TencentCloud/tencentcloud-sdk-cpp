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

#include <tencentcloud/ssl/v20191205/model/DescribeHostUploadUpdateRecordDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

DescribeHostUploadUpdateRecordDetailRequest::DescribeHostUploadUpdateRecordDetailRequest() :
    m_deployRecordIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeHostUploadUpdateRecordDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deployRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployRecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deployRecordId, allocator);
    }

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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeHostUploadUpdateRecordDetailRequest::GetDeployRecordId() const
{
    return m_deployRecordId;
}

void DescribeHostUploadUpdateRecordDetailRequest::SetDeployRecordId(const int64_t& _deployRecordId)
{
    m_deployRecordId = _deployRecordId;
    m_deployRecordIdHasBeenSet = true;
}

bool DescribeHostUploadUpdateRecordDetailRequest::DeployRecordIdHasBeenSet() const
{
    return m_deployRecordIdHasBeenSet;
}

int64_t DescribeHostUploadUpdateRecordDetailRequest::GetLimit() const
{
    return m_limit;
}

void DescribeHostUploadUpdateRecordDetailRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeHostUploadUpdateRecordDetailRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeHostUploadUpdateRecordDetailRequest::GetOffset() const
{
    return m_offset;
}

void DescribeHostUploadUpdateRecordDetailRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeHostUploadUpdateRecordDetailRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}



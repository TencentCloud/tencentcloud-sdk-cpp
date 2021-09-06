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

#include <tencentcloud/ame/v20190916/model/DescribePkgOfflineMusicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

DescribePkgOfflineMusicRequest::DescribePkgOfflineMusicRequest() :
    m_packageOrderIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribePkgOfflineMusicRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_packageOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageOrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageOrderId.c_str(), allocator).Move(), allocator);
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


string DescribePkgOfflineMusicRequest::GetPackageOrderId() const
{
    return m_packageOrderId;
}

void DescribePkgOfflineMusicRequest::SetPackageOrderId(const string& _packageOrderId)
{
    m_packageOrderId = _packageOrderId;
    m_packageOrderIdHasBeenSet = true;
}

bool DescribePkgOfflineMusicRequest::PackageOrderIdHasBeenSet() const
{
    return m_packageOrderIdHasBeenSet;
}

int64_t DescribePkgOfflineMusicRequest::GetLimit() const
{
    return m_limit;
}

void DescribePkgOfflineMusicRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribePkgOfflineMusicRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribePkgOfflineMusicRequest::GetOffset() const
{
    return m_offset;
}

void DescribePkgOfflineMusicRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribePkgOfflineMusicRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}



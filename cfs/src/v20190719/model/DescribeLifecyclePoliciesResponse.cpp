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

#include <tencentcloud/cfs/v20190719/model/DescribeLifecyclePoliciesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

DescribeLifecyclePoliciesResponse::DescribeLifecyclePoliciesResponse() :
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_lifecyclePoliciesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLifecyclePoliciesResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("PageNumber") && !rsp["PageNumber"].IsNull())
    {
        if (!rsp["PageNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PageNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNumber = rsp["PageNumber"].GetUint64();
        m_pageNumberHasBeenSet = true;
    }

    if (rsp.HasMember("PageSize") && !rsp["PageSize"].IsNull())
    {
        if (!rsp["PageSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = rsp["PageSize"].GetUint64();
        m_pageSizeHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("LifecyclePolicies") && !rsp["LifecyclePolicies"].IsNull())
    {
        if (!rsp["LifecyclePolicies"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LifecyclePolicies` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LifecyclePolicies"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LifecyclePolicy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_lifecyclePolicies.push_back(item);
        }
        m_lifecyclePoliciesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeLifecyclePoliciesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_lifecyclePoliciesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecyclePolicies";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_lifecyclePolicies.begin(); itr != m_lifecyclePolicies.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeLifecyclePoliciesResponse::GetPageNumber() const
{
    return m_pageNumber;
}

bool DescribeLifecyclePoliciesResponse::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t DescribeLifecyclePoliciesResponse::GetPageSize() const
{
    return m_pageSize;
}

bool DescribeLifecyclePoliciesResponse::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

uint64_t DescribeLifecyclePoliciesResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeLifecyclePoliciesResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<LifecyclePolicy> DescribeLifecyclePoliciesResponse::GetLifecyclePolicies() const
{
    return m_lifecyclePolicies;
}

bool DescribeLifecyclePoliciesResponse::LifecyclePoliciesHasBeenSet() const
{
    return m_lifecyclePoliciesHasBeenSet;
}



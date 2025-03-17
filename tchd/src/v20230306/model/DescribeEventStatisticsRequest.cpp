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

#include <tencentcloud/tchd/v20230306/model/DescribeEventStatisticsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tchd::V20230306::Model;
using namespace std;

DescribeEventStatisticsRequest::DescribeEventStatisticsRequest() :
    m_regionIdHasBeenSet(false),
    m_productIdsHasBeenSet(false)
{
}

string DescribeEventStatisticsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_productIds.begin(); itr != m_productIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeEventStatisticsRequest::GetRegionId() const
{
    return m_regionId;
}

void DescribeEventStatisticsRequest::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool DescribeEventStatisticsRequest::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

vector<string> DescribeEventStatisticsRequest::GetProductIds() const
{
    return m_productIds;
}

void DescribeEventStatisticsRequest::SetProductIds(const vector<string>& _productIds)
{
    m_productIds = _productIds;
    m_productIdsHasBeenSet = true;
}

bool DescribeEventStatisticsRequest::ProductIdsHasBeenSet() const
{
    return m_productIdsHasBeenSet;
}



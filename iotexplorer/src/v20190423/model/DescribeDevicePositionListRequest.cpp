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

#include <tencentcloud/iotexplorer/v20190423/model/DescribeDevicePositionListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DescribeDevicePositionListRequest::DescribeDevicePositionListRequest() :
    m_productIdListHasBeenSet(false),
    m_coordinateTypeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeDevicePositionListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_productIdList.begin(); itr != m_productIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_coordinateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoordinateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_coordinateType, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeDevicePositionListRequest::GetProductIdList() const
{
    return m_productIdList;
}

void DescribeDevicePositionListRequest::SetProductIdList(const vector<string>& _productIdList)
{
    m_productIdList = _productIdList;
    m_productIdListHasBeenSet = true;
}

bool DescribeDevicePositionListRequest::ProductIdListHasBeenSet() const
{
    return m_productIdListHasBeenSet;
}

int64_t DescribeDevicePositionListRequest::GetCoordinateType() const
{
    return m_coordinateType;
}

void DescribeDevicePositionListRequest::SetCoordinateType(const int64_t& _coordinateType)
{
    m_coordinateType = _coordinateType;
    m_coordinateTypeHasBeenSet = true;
}

bool DescribeDevicePositionListRequest::CoordinateTypeHasBeenSet() const
{
    return m_coordinateTypeHasBeenSet;
}

int64_t DescribeDevicePositionListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDevicePositionListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDevicePositionListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeDevicePositionListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDevicePositionListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDevicePositionListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}



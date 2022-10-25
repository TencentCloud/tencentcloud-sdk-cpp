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

#include <tencentcloud/iotexplorer/v20190423/model/DescribeGatewaySubProductsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DescribeGatewaySubProductsRequest::DescribeGatewaySubProductsRequest() :
    m_gatewayProductIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_productSourceHasBeenSet(false)
{
}

string DescribeGatewaySubProductsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayProductIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayProductId.c_str(), allocator).Move(), allocator);
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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_productSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_productSource, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeGatewaySubProductsRequest::GetGatewayProductId() const
{
    return m_gatewayProductId;
}

void DescribeGatewaySubProductsRequest::SetGatewayProductId(const string& _gatewayProductId)
{
    m_gatewayProductId = _gatewayProductId;
    m_gatewayProductIdHasBeenSet = true;
}

bool DescribeGatewaySubProductsRequest::GatewayProductIdHasBeenSet() const
{
    return m_gatewayProductIdHasBeenSet;
}

uint64_t DescribeGatewaySubProductsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeGatewaySubProductsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeGatewaySubProductsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeGatewaySubProductsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeGatewaySubProductsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeGatewaySubProductsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeGatewaySubProductsRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeGatewaySubProductsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeGatewaySubProductsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t DescribeGatewaySubProductsRequest::GetProductSource() const
{
    return m_productSource;
}

void DescribeGatewaySubProductsRequest::SetProductSource(const int64_t& _productSource)
{
    m_productSource = _productSource;
    m_productSourceHasBeenSet = true;
}

bool DescribeGatewaySubProductsRequest::ProductSourceHasBeenSet() const
{
    return m_productSourceHasBeenSet;
}



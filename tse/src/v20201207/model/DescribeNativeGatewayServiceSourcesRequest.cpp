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

#include <tencentcloud/tse/v20201207/model/DescribeNativeGatewayServiceSourcesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DescribeNativeGatewayServiceSourcesRequest::DescribeNativeGatewayServiceSourcesRequest() :
    m_gatewayIDHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_sourceTypesHasBeenSet(false),
    m_orderFieldHasBeenSet(false),
    m_orderTypeHasBeenSet(false)
{
}

string DescribeNativeGatewayServiceSourcesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayID.c_str(), allocator).Move(), allocator);
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

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceTypes.begin(); itr != m_sourceTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_orderFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderField.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeNativeGatewayServiceSourcesRequest::GetGatewayID() const
{
    return m_gatewayID;
}

void DescribeNativeGatewayServiceSourcesRequest::SetGatewayID(const string& _gatewayID)
{
    m_gatewayID = _gatewayID;
    m_gatewayIDHasBeenSet = true;
}

bool DescribeNativeGatewayServiceSourcesRequest::GatewayIDHasBeenSet() const
{
    return m_gatewayIDHasBeenSet;
}

uint64_t DescribeNativeGatewayServiceSourcesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeNativeGatewayServiceSourcesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeNativeGatewayServiceSourcesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeNativeGatewayServiceSourcesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeNativeGatewayServiceSourcesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeNativeGatewayServiceSourcesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeNativeGatewayServiceSourcesRequest::GetSourceName() const
{
    return m_sourceName;
}

void DescribeNativeGatewayServiceSourcesRequest::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool DescribeNativeGatewayServiceSourcesRequest::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

vector<string> DescribeNativeGatewayServiceSourcesRequest::GetSourceTypes() const
{
    return m_sourceTypes;
}

void DescribeNativeGatewayServiceSourcesRequest::SetSourceTypes(const vector<string>& _sourceTypes)
{
    m_sourceTypes = _sourceTypes;
    m_sourceTypesHasBeenSet = true;
}

bool DescribeNativeGatewayServiceSourcesRequest::SourceTypesHasBeenSet() const
{
    return m_sourceTypesHasBeenSet;
}

string DescribeNativeGatewayServiceSourcesRequest::GetOrderField() const
{
    return m_orderField;
}

void DescribeNativeGatewayServiceSourcesRequest::SetOrderField(const string& _orderField)
{
    m_orderField = _orderField;
    m_orderFieldHasBeenSet = true;
}

bool DescribeNativeGatewayServiceSourcesRequest::OrderFieldHasBeenSet() const
{
    return m_orderFieldHasBeenSet;
}

string DescribeNativeGatewayServiceSourcesRequest::GetOrderType() const
{
    return m_orderType;
}

void DescribeNativeGatewayServiceSourcesRequest::SetOrderType(const string& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool DescribeNativeGatewayServiceSourcesRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}



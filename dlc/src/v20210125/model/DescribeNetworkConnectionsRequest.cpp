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

#include <tencentcloud/dlc/v20210125/model/DescribeNetworkConnectionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeNetworkConnectionsRequest::DescribeNetworkConnectionsRequest() :
    m_networkConnectionTypeHasBeenSet(false),
    m_dataEngineNameHasBeenSet(false),
    m_datasourceConnectionVpcIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_networkConnectionNameHasBeenSet(false)
{
}

string DescribeNetworkConnectionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_networkConnectionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkConnectionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_networkConnectionType, allocator);
    }

    if (m_dataEngineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataEngineName.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceConnectionVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceConnectionVpcId.c_str(), allocator).Move(), allocator);
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

    if (m_networkConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkConnectionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkConnectionName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeNetworkConnectionsRequest::GetNetworkConnectionType() const
{
    return m_networkConnectionType;
}

void DescribeNetworkConnectionsRequest::SetNetworkConnectionType(const int64_t& _networkConnectionType)
{
    m_networkConnectionType = _networkConnectionType;
    m_networkConnectionTypeHasBeenSet = true;
}

bool DescribeNetworkConnectionsRequest::NetworkConnectionTypeHasBeenSet() const
{
    return m_networkConnectionTypeHasBeenSet;
}

string DescribeNetworkConnectionsRequest::GetDataEngineName() const
{
    return m_dataEngineName;
}

void DescribeNetworkConnectionsRequest::SetDataEngineName(const string& _dataEngineName)
{
    m_dataEngineName = _dataEngineName;
    m_dataEngineNameHasBeenSet = true;
}

bool DescribeNetworkConnectionsRequest::DataEngineNameHasBeenSet() const
{
    return m_dataEngineNameHasBeenSet;
}

string DescribeNetworkConnectionsRequest::GetDatasourceConnectionVpcId() const
{
    return m_datasourceConnectionVpcId;
}

void DescribeNetworkConnectionsRequest::SetDatasourceConnectionVpcId(const string& _datasourceConnectionVpcId)
{
    m_datasourceConnectionVpcId = _datasourceConnectionVpcId;
    m_datasourceConnectionVpcIdHasBeenSet = true;
}

bool DescribeNetworkConnectionsRequest::DatasourceConnectionVpcIdHasBeenSet() const
{
    return m_datasourceConnectionVpcIdHasBeenSet;
}

int64_t DescribeNetworkConnectionsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeNetworkConnectionsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeNetworkConnectionsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeNetworkConnectionsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeNetworkConnectionsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeNetworkConnectionsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeNetworkConnectionsRequest::GetNetworkConnectionName() const
{
    return m_networkConnectionName;
}

void DescribeNetworkConnectionsRequest::SetNetworkConnectionName(const string& _networkConnectionName)
{
    m_networkConnectionName = _networkConnectionName;
    m_networkConnectionNameHasBeenSet = true;
}

bool DescribeNetworkConnectionsRequest::NetworkConnectionNameHasBeenSet() const
{
    return m_networkConnectionNameHasBeenSet;
}



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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeClusterConfigsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeClusterConfigsRequest::DescribeClusterConfigsRequest() :
    m_instanceIdHasBeenSet(false),
    m_configTypeHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_clusterConfigTypeHasBeenSet(false),
    m_iPAddressHasBeenSet(false),
    m_computeGroupIdHasBeenSet(false)
{
}

string DescribeClusterConfigsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_configTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_configType, allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterConfigTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterConfigType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clusterConfigType, allocator);
    }

    if (m_iPAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iPAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_computeGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_computeGroupId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeClusterConfigsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeClusterConfigsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeClusterConfigsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeClusterConfigsRequest::GetConfigType() const
{
    return m_configType;
}

void DescribeClusterConfigsRequest::SetConfigType(const int64_t& _configType)
{
    m_configType = _configType;
    m_configTypeHasBeenSet = true;
}

bool DescribeClusterConfigsRequest::ConfigTypeHasBeenSet() const
{
    return m_configTypeHasBeenSet;
}

string DescribeClusterConfigsRequest::GetFileName() const
{
    return m_fileName;
}

void DescribeClusterConfigsRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool DescribeClusterConfigsRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

int64_t DescribeClusterConfigsRequest::GetClusterConfigType() const
{
    return m_clusterConfigType;
}

void DescribeClusterConfigsRequest::SetClusterConfigType(const int64_t& _clusterConfigType)
{
    m_clusterConfigType = _clusterConfigType;
    m_clusterConfigTypeHasBeenSet = true;
}

bool DescribeClusterConfigsRequest::ClusterConfigTypeHasBeenSet() const
{
    return m_clusterConfigTypeHasBeenSet;
}

string DescribeClusterConfigsRequest::GetIPAddress() const
{
    return m_iPAddress;
}

void DescribeClusterConfigsRequest::SetIPAddress(const string& _iPAddress)
{
    m_iPAddress = _iPAddress;
    m_iPAddressHasBeenSet = true;
}

bool DescribeClusterConfigsRequest::IPAddressHasBeenSet() const
{
    return m_iPAddressHasBeenSet;
}

string DescribeClusterConfigsRequest::GetComputeGroupId() const
{
    return m_computeGroupId;
}

void DescribeClusterConfigsRequest::SetComputeGroupId(const string& _computeGroupId)
{
    m_computeGroupId = _computeGroupId;
    m_computeGroupIdHasBeenSet = true;
}

bool DescribeClusterConfigsRequest::ComputeGroupIdHasBeenSet() const
{
    return m_computeGroupIdHasBeenSet;
}



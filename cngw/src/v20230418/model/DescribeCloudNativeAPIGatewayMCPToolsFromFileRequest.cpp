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

#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPToolsFromFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

DescribeCloudNativeAPIGatewayMCPToolsFromFileRequest::DescribeCloudNativeAPIGatewayMCPToolsFromFileRequest() :
    m_contentHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_mCPServerIdHasBeenSet(false)
{
}

string DescribeCloudNativeAPIGatewayMCPToolsFromFileRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_mCPServerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MCPServerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mCPServerId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCloudNativeAPIGatewayMCPToolsFromFileRequest::GetContent() const
{
    return m_content;
}

void DescribeCloudNativeAPIGatewayMCPToolsFromFileRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayMCPToolsFromFileRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string DescribeCloudNativeAPIGatewayMCPToolsFromFileRequest::GetFormat() const
{
    return m_format;
}

void DescribeCloudNativeAPIGatewayMCPToolsFromFileRequest::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayMCPToolsFromFileRequest::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string DescribeCloudNativeAPIGatewayMCPToolsFromFileRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void DescribeCloudNativeAPIGatewayMCPToolsFromFileRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayMCPToolsFromFileRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string DescribeCloudNativeAPIGatewayMCPToolsFromFileRequest::GetMCPServerId() const
{
    return m_mCPServerId;
}

void DescribeCloudNativeAPIGatewayMCPToolsFromFileRequest::SetMCPServerId(const string& _mCPServerId)
{
    m_mCPServerId = _mCPServerId;
    m_mCPServerIdHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayMCPToolsFromFileRequest::MCPServerIdHasBeenSet() const
{
    return m_mCPServerIdHasBeenSet;
}



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

#include <tencentcloud/cngw/v20230418/model/UpdateCloudNativeAPIGatewayMCPToolsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

UpdateCloudNativeAPIGatewayMCPToolsRequest::UpdateCloudNativeAPIGatewayMCPToolsRequest() :
    m_gatewayIdHasBeenSet(false),
    m_mCPServerIdHasBeenSet(false),
    m_toolsHasBeenSet(false)
{
}

string UpdateCloudNativeAPIGatewayMCPToolsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_toolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tools";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tools.begin(); itr != m_tools.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateCloudNativeAPIGatewayMCPToolsRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void UpdateCloudNativeAPIGatewayMCPToolsRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool UpdateCloudNativeAPIGatewayMCPToolsRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string UpdateCloudNativeAPIGatewayMCPToolsRequest::GetMCPServerId() const
{
    return m_mCPServerId;
}

void UpdateCloudNativeAPIGatewayMCPToolsRequest::SetMCPServerId(const string& _mCPServerId)
{
    m_mCPServerId = _mCPServerId;
    m_mCPServerIdHasBeenSet = true;
}

bool UpdateCloudNativeAPIGatewayMCPToolsRequest::MCPServerIdHasBeenSet() const
{
    return m_mCPServerIdHasBeenSet;
}

vector<CNAPIGwMCPTool> UpdateCloudNativeAPIGatewayMCPToolsRequest::GetTools() const
{
    return m_tools;
}

void UpdateCloudNativeAPIGatewayMCPToolsRequest::SetTools(const vector<CNAPIGwMCPTool>& _tools)
{
    m_tools = _tools;
    m_toolsHasBeenSet = true;
}

bool UpdateCloudNativeAPIGatewayMCPToolsRequest::ToolsHasBeenSet() const
{
    return m_toolsHasBeenSet;
}



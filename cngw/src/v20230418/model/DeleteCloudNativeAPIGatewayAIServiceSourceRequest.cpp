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

#include <tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayAIServiceSourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

DeleteCloudNativeAPIGatewayAIServiceSourceRequest::DeleteCloudNativeAPIGatewayAIServiceSourceRequest() :
    m_gatewayIdHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_sourceTypeHasBeenSet(false)
{
}

string DeleteCloudNativeAPIGatewayAIServiceSourceRequest::ToJsonString() const
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

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteCloudNativeAPIGatewayAIServiceSourceRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void DeleteCloudNativeAPIGatewayAIServiceSourceRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool DeleteCloudNativeAPIGatewayAIServiceSourceRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string DeleteCloudNativeAPIGatewayAIServiceSourceRequest::GetSourceId() const
{
    return m_sourceId;
}

void DeleteCloudNativeAPIGatewayAIServiceSourceRequest::SetSourceId(const string& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool DeleteCloudNativeAPIGatewayAIServiceSourceRequest::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

string DeleteCloudNativeAPIGatewayAIServiceSourceRequest::GetSourceType() const
{
    return m_sourceType;
}

void DeleteCloudNativeAPIGatewayAIServiceSourceRequest::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool DeleteCloudNativeAPIGatewayAIServiceSourceRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}



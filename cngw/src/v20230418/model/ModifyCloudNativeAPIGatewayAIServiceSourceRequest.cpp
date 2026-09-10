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

#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayAIServiceSourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

ModifyCloudNativeAPIGatewayAIServiceSourceRequest::ModifyCloudNativeAPIGatewayAIServiceSourceRequest() :
    m_gatewayIdHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceInfoHasBeenSet(false)
{
}

string ModifyCloudNativeAPIGatewayAIServiceSourceRequest::ToJsonString() const
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

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCloudNativeAPIGatewayAIServiceSourceRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void ModifyCloudNativeAPIGatewayAIServiceSourceRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayAIServiceSourceRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayAIServiceSourceRequest::GetSourceName() const
{
    return m_sourceName;
}

void ModifyCloudNativeAPIGatewayAIServiceSourceRequest::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayAIServiceSourceRequest::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

string ModifyCloudNativeAPIGatewayAIServiceSourceRequest::GetSourceType() const
{
    return m_sourceType;
}

void ModifyCloudNativeAPIGatewayAIServiceSourceRequest::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayAIServiceSourceRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string ModifyCloudNativeAPIGatewayAIServiceSourceRequest::GetSourceId() const
{
    return m_sourceId;
}

void ModifyCloudNativeAPIGatewayAIServiceSourceRequest::SetSourceId(const string& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayAIServiceSourceRequest::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayAIServiceSourceRequest::GetDescription() const
{
    return m_description;
}

void ModifyCloudNativeAPIGatewayAIServiceSourceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayAIServiceSourceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

CNAPIGwAIServiceSourceInfo ModifyCloudNativeAPIGatewayAIServiceSourceRequest::GetSourceInfo() const
{
    return m_sourceInfo;
}

void ModifyCloudNativeAPIGatewayAIServiceSourceRequest::SetSourceInfo(const CNAPIGwAIServiceSourceInfo& _sourceInfo)
{
    m_sourceInfo = _sourceInfo;
    m_sourceInfoHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayAIServiceSourceRequest::SourceInfoHasBeenSet() const
{
    return m_sourceInfoHasBeenSet;
}



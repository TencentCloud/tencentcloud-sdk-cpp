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

#include <tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayAIServiceSourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CreateCloudNativeAPIGatewayAIServiceSourceRequest::CreateCloudNativeAPIGatewayAIServiceSourceRequest() :
    m_gatewayIdHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_sourceProductHasBeenSet(false),
    m_sourceInfoHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateCloudNativeAPIGatewayAIServiceSourceRequest::ToJsonString() const
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

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceProductHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceProduct";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceProduct.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCloudNativeAPIGatewayAIServiceSourceRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void CreateCloudNativeAPIGatewayAIServiceSourceRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayAIServiceSourceRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string CreateCloudNativeAPIGatewayAIServiceSourceRequest::GetSourceType() const
{
    return m_sourceType;
}

void CreateCloudNativeAPIGatewayAIServiceSourceRequest::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayAIServiceSourceRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string CreateCloudNativeAPIGatewayAIServiceSourceRequest::GetSourceName() const
{
    return m_sourceName;
}

void CreateCloudNativeAPIGatewayAIServiceSourceRequest::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayAIServiceSourceRequest::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

string CreateCloudNativeAPIGatewayAIServiceSourceRequest::GetSourceProduct() const
{
    return m_sourceProduct;
}

void CreateCloudNativeAPIGatewayAIServiceSourceRequest::SetSourceProduct(const string& _sourceProduct)
{
    m_sourceProduct = _sourceProduct;
    m_sourceProductHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayAIServiceSourceRequest::SourceProductHasBeenSet() const
{
    return m_sourceProductHasBeenSet;
}

CNAPIGwAIServiceSourceInfo CreateCloudNativeAPIGatewayAIServiceSourceRequest::GetSourceInfo() const
{
    return m_sourceInfo;
}

void CreateCloudNativeAPIGatewayAIServiceSourceRequest::SetSourceInfo(const CNAPIGwAIServiceSourceInfo& _sourceInfo)
{
    m_sourceInfo = _sourceInfo;
    m_sourceInfoHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayAIServiceSourceRequest::SourceInfoHasBeenSet() const
{
    return m_sourceInfoHasBeenSet;
}

string CreateCloudNativeAPIGatewayAIServiceSourceRequest::GetDescription() const
{
    return m_description;
}

void CreateCloudNativeAPIGatewayAIServiceSourceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayAIServiceSourceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}



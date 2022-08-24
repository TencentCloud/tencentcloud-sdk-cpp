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

#include <tencentcloud/apigateway/v20180808/model/ImportOpenApiRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ImportOpenApiRequest::ImportOpenApiRequest() :
    m_serviceIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_encodeTypeHasBeenSet(false),
    m_contentVersionHasBeenSet(false)
{
}

string ImportOpenApiRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_encodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_contentVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contentVersion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ImportOpenApiRequest::GetServiceId() const
{
    return m_serviceId;
}

void ImportOpenApiRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool ImportOpenApiRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string ImportOpenApiRequest::GetContent() const
{
    return m_content;
}

void ImportOpenApiRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ImportOpenApiRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string ImportOpenApiRequest::GetEncodeType() const
{
    return m_encodeType;
}

void ImportOpenApiRequest::SetEncodeType(const string& _encodeType)
{
    m_encodeType = _encodeType;
    m_encodeTypeHasBeenSet = true;
}

bool ImportOpenApiRequest::EncodeTypeHasBeenSet() const
{
    return m_encodeTypeHasBeenSet;
}

string ImportOpenApiRequest::GetContentVersion() const
{
    return m_contentVersion;
}

void ImportOpenApiRequest::SetContentVersion(const string& _contentVersion)
{
    m_contentVersion = _contentVersion;
    m_contentVersionHasBeenSet = true;
}

bool ImportOpenApiRequest::ContentVersionHasBeenSet() const
{
    return m_contentVersionHasBeenSet;
}



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

#include <tencentcloud/iotexplorer/v20190423/model/ModifyCloudStorageAIServiceCallbackRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

ModifyCloudStorageAIServiceCallbackRequest::ModifyCloudStorageAIServiceCallbackRequest() :
    m_productIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_callbackTokenHasBeenSet(false)
{
}

string ModifyCloudStorageAIServiceCallbackRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCloudStorageAIServiceCallbackRequest::GetProductId() const
{
    return m_productId;
}

void ModifyCloudStorageAIServiceCallbackRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ModifyCloudStorageAIServiceCallbackRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ModifyCloudStorageAIServiceCallbackRequest::GetType() const
{
    return m_type;
}

void ModifyCloudStorageAIServiceCallbackRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyCloudStorageAIServiceCallbackRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ModifyCloudStorageAIServiceCallbackRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void ModifyCloudStorageAIServiceCallbackRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool ModifyCloudStorageAIServiceCallbackRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string ModifyCloudStorageAIServiceCallbackRequest::GetCallbackToken() const
{
    return m_callbackToken;
}

void ModifyCloudStorageAIServiceCallbackRequest::SetCallbackToken(const string& _callbackToken)
{
    m_callbackToken = _callbackToken;
    m_callbackTokenHasBeenSet = true;
}

bool ModifyCloudStorageAIServiceCallbackRequest::CallbackTokenHasBeenSet() const
{
    return m_callbackTokenHasBeenSet;
}



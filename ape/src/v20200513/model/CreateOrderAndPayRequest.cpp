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

#include <tencentcloud/ape/v20200513/model/CreateOrderAndPayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ape::V20200513::Model;
using namespace std;

CreateOrderAndPayRequest::CreateOrderAndPayRequest() :
    m_imageIdHasBeenSet(false),
    m_authUserIdHasBeenSet(false),
    m_marshalIdHasBeenSet(false)
{
}

string CreateOrderAndPayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_imageId, allocator);
    }

    if (m_authUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_marshalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarshalId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_marshalId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateOrderAndPayRequest::GetImageId() const
{
    return m_imageId;
}

void CreateOrderAndPayRequest::SetImageId(const uint64_t& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool CreateOrderAndPayRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string CreateOrderAndPayRequest::GetAuthUserId() const
{
    return m_authUserId;
}

void CreateOrderAndPayRequest::SetAuthUserId(const string& _authUserId)
{
    m_authUserId = _authUserId;
    m_authUserIdHasBeenSet = true;
}

bool CreateOrderAndPayRequest::AuthUserIdHasBeenSet() const
{
    return m_authUserIdHasBeenSet;
}

uint64_t CreateOrderAndPayRequest::GetMarshalId() const
{
    return m_marshalId;
}

void CreateOrderAndPayRequest::SetMarshalId(const uint64_t& _marshalId)
{
    m_marshalId = _marshalId;
    m_marshalIdHasBeenSet = true;
}

bool CreateOrderAndPayRequest::MarshalIdHasBeenSet() const
{
    return m_marshalIdHasBeenSet;
}



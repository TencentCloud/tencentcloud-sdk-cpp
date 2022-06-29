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

#include <tencentcloud/iotcloud/v20180614/model/UpdateProductDynamicRegisterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace std;

UpdateProductDynamicRegisterRequest::UpdateProductDynamicRegisterRequest() :
    m_productIdHasBeenSet(false),
    m_registerTypeHasBeenSet(false),
    m_registerLimitHasBeenSet(false)
{
}

string UpdateProductDynamicRegisterRequest::ToJsonString() const
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

    if (m_registerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_registerType, allocator);
    }

    if (m_registerLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_registerLimit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateProductDynamicRegisterRequest::GetProductId() const
{
    return m_productId;
}

void UpdateProductDynamicRegisterRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool UpdateProductDynamicRegisterRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

uint64_t UpdateProductDynamicRegisterRequest::GetRegisterType() const
{
    return m_registerType;
}

void UpdateProductDynamicRegisterRequest::SetRegisterType(const uint64_t& _registerType)
{
    m_registerType = _registerType;
    m_registerTypeHasBeenSet = true;
}

bool UpdateProductDynamicRegisterRequest::RegisterTypeHasBeenSet() const
{
    return m_registerTypeHasBeenSet;
}

uint64_t UpdateProductDynamicRegisterRequest::GetRegisterLimit() const
{
    return m_registerLimit;
}

void UpdateProductDynamicRegisterRequest::SetRegisterLimit(const uint64_t& _registerLimit)
{
    m_registerLimit = _registerLimit;
    m_registerLimitHasBeenSet = true;
}

bool UpdateProductDynamicRegisterRequest::RegisterLimitHasBeenSet() const
{
    return m_registerLimitHasBeenSet;
}



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

#include <tencentcloud/iotvideo/v20191126/model/CreateDevicesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

CreateDevicesRequest::CreateDevicesRequest() :
    m_productIdHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_namePrefixHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string CreateDevicesRequest::ToJsonString() const
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

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_number, allocator);
    }

    if (m_namePrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamePrefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namePrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDevicesRequest::GetProductId() const
{
    return m_productId;
}

void CreateDevicesRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CreateDevicesRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

uint64_t CreateDevicesRequest::GetNumber() const
{
    return m_number;
}

void CreateDevicesRequest::SetNumber(const uint64_t& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool CreateDevicesRequest::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string CreateDevicesRequest::GetNamePrefix() const
{
    return m_namePrefix;
}

void CreateDevicesRequest::SetNamePrefix(const string& _namePrefix)
{
    m_namePrefix = _namePrefix;
    m_namePrefixHasBeenSet = true;
}

bool CreateDevicesRequest::NamePrefixHasBeenSet() const
{
    return m_namePrefixHasBeenSet;
}

string CreateDevicesRequest::GetOperator() const
{
    return m_operator;
}

void CreateDevicesRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateDevicesRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}



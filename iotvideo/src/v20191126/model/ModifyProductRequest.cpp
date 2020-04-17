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

#include <tencentcloud/iotvideo/v20191126/model/ModifyProductRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace rapidjson;
using namespace std;

ModifyProductRequest::ModifyProductRequest() :
    m_productIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_productDescriptionHasBeenSet(false),
    m_chipManufactureIdHasBeenSet(false),
    m_chipIdHasBeenSet(false)
{
}

string ModifyProductRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_productDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_productDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_chipManufactureIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChipManufactureId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_chipManufactureId.c_str(), allocator).Move(), allocator);
    }

    if (m_chipIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChipId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_chipId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyProductRequest::GetProductId() const
{
    return m_productId;
}

void ModifyProductRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ModifyProductRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ModifyProductRequest::GetProductName() const
{
    return m_productName;
}

void ModifyProductRequest::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool ModifyProductRequest::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string ModifyProductRequest::GetProductDescription() const
{
    return m_productDescription;
}

void ModifyProductRequest::SetProductDescription(const string& _productDescription)
{
    m_productDescription = _productDescription;
    m_productDescriptionHasBeenSet = true;
}

bool ModifyProductRequest::ProductDescriptionHasBeenSet() const
{
    return m_productDescriptionHasBeenSet;
}

string ModifyProductRequest::GetChipManufactureId() const
{
    return m_chipManufactureId;
}

void ModifyProductRequest::SetChipManufactureId(const string& _chipManufactureId)
{
    m_chipManufactureId = _chipManufactureId;
    m_chipManufactureIdHasBeenSet = true;
}

bool ModifyProductRequest::ChipManufactureIdHasBeenSet() const
{
    return m_chipManufactureIdHasBeenSet;
}

string ModifyProductRequest::GetChipId() const
{
    return m_chipId;
}

void ModifyProductRequest::SetChipId(const string& _chipId)
{
    m_chipId = _chipId;
    m_chipIdHasBeenSet = true;
}

bool ModifyProductRequest::ChipIdHasBeenSet() const
{
    return m_chipIdHasBeenSet;
}



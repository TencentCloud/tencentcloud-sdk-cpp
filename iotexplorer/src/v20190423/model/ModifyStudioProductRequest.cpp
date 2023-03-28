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

#include <tencentcloud/iotexplorer/v20190423/model/ModifyStudioProductRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

ModifyStudioProductRequest::ModifyStudioProductRequest() :
    m_productIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_productDescHasBeenSet(false),
    m_moduleIdHasBeenSet(false),
    m_enableProductScriptHasBeenSet(false),
    m_bindStrategyHasBeenSet(false)
{
}

string ModifyStudioProductRequest::ToJsonString() const
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

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_productDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_moduleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_moduleId, allocator);
    }

    if (m_enableProductScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableProductScript";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_enableProductScript.c_str(), allocator).Move(), allocator);
    }

    if (m_bindStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bindStrategy, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyStudioProductRequest::GetProductId() const
{
    return m_productId;
}

void ModifyStudioProductRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ModifyStudioProductRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ModifyStudioProductRequest::GetProductName() const
{
    return m_productName;
}

void ModifyStudioProductRequest::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool ModifyStudioProductRequest::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string ModifyStudioProductRequest::GetProductDesc() const
{
    return m_productDesc;
}

void ModifyStudioProductRequest::SetProductDesc(const string& _productDesc)
{
    m_productDesc = _productDesc;
    m_productDescHasBeenSet = true;
}

bool ModifyStudioProductRequest::ProductDescHasBeenSet() const
{
    return m_productDescHasBeenSet;
}

int64_t ModifyStudioProductRequest::GetModuleId() const
{
    return m_moduleId;
}

void ModifyStudioProductRequest::SetModuleId(const int64_t& _moduleId)
{
    m_moduleId = _moduleId;
    m_moduleIdHasBeenSet = true;
}

bool ModifyStudioProductRequest::ModuleIdHasBeenSet() const
{
    return m_moduleIdHasBeenSet;
}

string ModifyStudioProductRequest::GetEnableProductScript() const
{
    return m_enableProductScript;
}

void ModifyStudioProductRequest::SetEnableProductScript(const string& _enableProductScript)
{
    m_enableProductScript = _enableProductScript;
    m_enableProductScriptHasBeenSet = true;
}

bool ModifyStudioProductRequest::EnableProductScriptHasBeenSet() const
{
    return m_enableProductScriptHasBeenSet;
}

uint64_t ModifyStudioProductRequest::GetBindStrategy() const
{
    return m_bindStrategy;
}

void ModifyStudioProductRequest::SetBindStrategy(const uint64_t& _bindStrategy)
{
    m_bindStrategy = _bindStrategy;
    m_bindStrategyHasBeenSet = true;
}

bool ModifyStudioProductRequest::BindStrategyHasBeenSet() const
{
    return m_bindStrategyHasBeenSet;
}



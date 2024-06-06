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

#include <tencentcloud/dlc/v20210125/model/GrantDLCCatalogAccessRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

GrantDLCCatalogAccessRequest::GrantDLCCatalogAccessRequest() :
    m_vpcIdHasBeenSet(false),
    m_productHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_vpcUinHasBeenSet(false),
    m_vpcAppIdHasBeenSet(false)
{
}

string GrantDLCCatalogAccessRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcUin.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vpcAppId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GrantDLCCatalogAccessRequest::GetVpcId() const
{
    return m_vpcId;
}

void GrantDLCCatalogAccessRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool GrantDLCCatalogAccessRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string GrantDLCCatalogAccessRequest::GetProduct() const
{
    return m_product;
}

void GrantDLCCatalogAccessRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool GrantDLCCatalogAccessRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string GrantDLCCatalogAccessRequest::GetDescription() const
{
    return m_description;
}

void GrantDLCCatalogAccessRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool GrantDLCCatalogAccessRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string GrantDLCCatalogAccessRequest::GetVpcUin() const
{
    return m_vpcUin;
}

void GrantDLCCatalogAccessRequest::SetVpcUin(const string& _vpcUin)
{
    m_vpcUin = _vpcUin;
    m_vpcUinHasBeenSet = true;
}

bool GrantDLCCatalogAccessRequest::VpcUinHasBeenSet() const
{
    return m_vpcUinHasBeenSet;
}

uint64_t GrantDLCCatalogAccessRequest::GetVpcAppId() const
{
    return m_vpcAppId;
}

void GrantDLCCatalogAccessRequest::SetVpcAppId(const uint64_t& _vpcAppId)
{
    m_vpcAppId = _vpcAppId;
    m_vpcAppIdHasBeenSet = true;
}

bool GrantDLCCatalogAccessRequest::VpcAppIdHasBeenSet() const
{
    return m_vpcAppIdHasBeenSet;
}



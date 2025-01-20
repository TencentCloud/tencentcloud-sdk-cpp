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

#include <tencentcloud/vpc/v20170312/model/ModifyCustomerGatewayAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyCustomerGatewayAttributeRequest::ModifyCustomerGatewayAttributeRequest() :
    m_customerGatewayIdHasBeenSet(false),
    m_customerGatewayNameHasBeenSet(false),
    m_bgpAsnHasBeenSet(false)
{
}

string ModifyCustomerGatewayAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_customerGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerGatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customerGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_customerGatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerGatewayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customerGatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_bgpAsnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BgpAsn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bgpAsn, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCustomerGatewayAttributeRequest::GetCustomerGatewayId() const
{
    return m_customerGatewayId;
}

void ModifyCustomerGatewayAttributeRequest::SetCustomerGatewayId(const string& _customerGatewayId)
{
    m_customerGatewayId = _customerGatewayId;
    m_customerGatewayIdHasBeenSet = true;
}

bool ModifyCustomerGatewayAttributeRequest::CustomerGatewayIdHasBeenSet() const
{
    return m_customerGatewayIdHasBeenSet;
}

string ModifyCustomerGatewayAttributeRequest::GetCustomerGatewayName() const
{
    return m_customerGatewayName;
}

void ModifyCustomerGatewayAttributeRequest::SetCustomerGatewayName(const string& _customerGatewayName)
{
    m_customerGatewayName = _customerGatewayName;
    m_customerGatewayNameHasBeenSet = true;
}

bool ModifyCustomerGatewayAttributeRequest::CustomerGatewayNameHasBeenSet() const
{
    return m_customerGatewayNameHasBeenSet;
}

uint64_t ModifyCustomerGatewayAttributeRequest::GetBgpAsn() const
{
    return m_bgpAsn;
}

void ModifyCustomerGatewayAttributeRequest::SetBgpAsn(const uint64_t& _bgpAsn)
{
    m_bgpAsn = _bgpAsn;
    m_bgpAsnHasBeenSet = true;
}

bool ModifyCustomerGatewayAttributeRequest::BgpAsnHasBeenSet() const
{
    return m_bgpAsnHasBeenSet;
}



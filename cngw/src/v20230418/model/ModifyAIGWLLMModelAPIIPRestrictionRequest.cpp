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

#include <tencentcloud/cngw/v20230418/model/ModifyAIGWLLMModelAPIIPRestrictionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

ModifyAIGWLLMModelAPIIPRestrictionRequest::ModifyAIGWLLMModelAPIIPRestrictionRequest() :
    m_gatewayIdHasBeenSet(false),
    m_modelAPIIdHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_restrictionTypeHasBeenSet(false),
    m_addressListHasBeenSet(false)
{
}

string ModifyAIGWLLMModelAPIIPRestrictionRequest::ToJsonString() const
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

    if (m_modelAPIIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelAPIId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelAPIId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_restrictionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestrictionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_restrictionType.c_str(), allocator).Move(), allocator);
    }

    if (m_addressListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_addressList.begin(); itr != m_addressList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAIGWLLMModelAPIIPRestrictionRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void ModifyAIGWLLMModelAPIIPRestrictionRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool ModifyAIGWLLMModelAPIIPRestrictionRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string ModifyAIGWLLMModelAPIIPRestrictionRequest::GetModelAPIId() const
{
    return m_modelAPIId;
}

void ModifyAIGWLLMModelAPIIPRestrictionRequest::SetModelAPIId(const string& _modelAPIId)
{
    m_modelAPIId = _modelAPIId;
    m_modelAPIIdHasBeenSet = true;
}

bool ModifyAIGWLLMModelAPIIPRestrictionRequest::ModelAPIIdHasBeenSet() const
{
    return m_modelAPIIdHasBeenSet;
}

bool ModifyAIGWLLMModelAPIIPRestrictionRequest::GetEnable() const
{
    return m_enable;
}

void ModifyAIGWLLMModelAPIIPRestrictionRequest::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyAIGWLLMModelAPIIPRestrictionRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string ModifyAIGWLLMModelAPIIPRestrictionRequest::GetRestrictionType() const
{
    return m_restrictionType;
}

void ModifyAIGWLLMModelAPIIPRestrictionRequest::SetRestrictionType(const string& _restrictionType)
{
    m_restrictionType = _restrictionType;
    m_restrictionTypeHasBeenSet = true;
}

bool ModifyAIGWLLMModelAPIIPRestrictionRequest::RestrictionTypeHasBeenSet() const
{
    return m_restrictionTypeHasBeenSet;
}

vector<string> ModifyAIGWLLMModelAPIIPRestrictionRequest::GetAddressList() const
{
    return m_addressList;
}

void ModifyAIGWLLMModelAPIIPRestrictionRequest::SetAddressList(const vector<string>& _addressList)
{
    m_addressList = _addressList;
    m_addressListHasBeenSet = true;
}

bool ModifyAIGWLLMModelAPIIPRestrictionRequest::AddressListHasBeenSet() const
{
    return m_addressListHasBeenSet;
}



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

#include <tencentcloud/youmall/v20180228/model/ModifyPersonTypeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

ModifyPersonTypeRequest::ModifyPersonTypeRequest() :
    m_companyIdHasBeenSet(false),
    m_shopIdHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_personTypeHasBeenSet(false),
    m_personSubTypeHasBeenSet(false)
{
}

string ModifyPersonTypeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_companyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_companyId.c_str(), allocator).Move(), allocator);
    }

    if (m_shopIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shopId, allocator);
    }

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_personId, allocator);
    }

    if (m_personTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_personType, allocator);
    }

    if (m_personSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonSubType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_personSubType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPersonTypeRequest::GetCompanyId() const
{
    return m_companyId;
}

void ModifyPersonTypeRequest::SetCompanyId(const string& _companyId)
{
    m_companyId = _companyId;
    m_companyIdHasBeenSet = true;
}

bool ModifyPersonTypeRequest::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

uint64_t ModifyPersonTypeRequest::GetShopId() const
{
    return m_shopId;
}

void ModifyPersonTypeRequest::SetShopId(const uint64_t& _shopId)
{
    m_shopId = _shopId;
    m_shopIdHasBeenSet = true;
}

bool ModifyPersonTypeRequest::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}

uint64_t ModifyPersonTypeRequest::GetPersonId() const
{
    return m_personId;
}

void ModifyPersonTypeRequest::SetPersonId(const uint64_t& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool ModifyPersonTypeRequest::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

uint64_t ModifyPersonTypeRequest::GetPersonType() const
{
    return m_personType;
}

void ModifyPersonTypeRequest::SetPersonType(const uint64_t& _personType)
{
    m_personType = _personType;
    m_personTypeHasBeenSet = true;
}

bool ModifyPersonTypeRequest::PersonTypeHasBeenSet() const
{
    return m_personTypeHasBeenSet;
}

uint64_t ModifyPersonTypeRequest::GetPersonSubType() const
{
    return m_personSubType;
}

void ModifyPersonTypeRequest::SetPersonSubType(const uint64_t& _personSubType)
{
    m_personSubType = _personSubType;
    m_personSubTypeHasBeenSet = true;
}

bool ModifyPersonTypeRequest::PersonSubTypeHasBeenSet() const
{
    return m_personSubTypeHasBeenSet;
}



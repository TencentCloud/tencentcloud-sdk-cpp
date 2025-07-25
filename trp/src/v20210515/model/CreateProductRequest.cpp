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

#include <tencentcloud/trp/v20210515/model/CreateProductRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

CreateProductRequest::CreateProductRequest() :
    m_nameHasBeenSet(false),
    m_merchantIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_merchantNameHasBeenSet(false),
    m_specificationHasBeenSet(false),
    m_logoHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_extHasBeenSet(false)
{
}

string CreateProductRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantName.c_str(), allocator).Move(), allocator);
    }

    if (m_specificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Specification";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_specification.c_str(), allocator).Move(), allocator);
    }

    if (m_logoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_logo.begin(); itr != m_logo.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_corpId, allocator);
    }

    if (m_extHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ext.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateProductRequest::GetName() const
{
    return m_name;
}

void CreateProductRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateProductRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateProductRequest::GetMerchantId() const
{
    return m_merchantId;
}

void CreateProductRequest::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool CreateProductRequest::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string CreateProductRequest::GetRemark() const
{
    return m_remark;
}

void CreateProductRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateProductRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateProductRequest::GetMerchantName() const
{
    return m_merchantName;
}

void CreateProductRequest::SetMerchantName(const string& _merchantName)
{
    m_merchantName = _merchantName;
    m_merchantNameHasBeenSet = true;
}

bool CreateProductRequest::MerchantNameHasBeenSet() const
{
    return m_merchantNameHasBeenSet;
}

string CreateProductRequest::GetSpecification() const
{
    return m_specification;
}

void CreateProductRequest::SetSpecification(const string& _specification)
{
    m_specification = _specification;
    m_specificationHasBeenSet = true;
}

bool CreateProductRequest::SpecificationHasBeenSet() const
{
    return m_specificationHasBeenSet;
}

vector<string> CreateProductRequest::GetLogo() const
{
    return m_logo;
}

void CreateProductRequest::SetLogo(const vector<string>& _logo)
{
    m_logo = _logo;
    m_logoHasBeenSet = true;
}

bool CreateProductRequest::LogoHasBeenSet() const
{
    return m_logoHasBeenSet;
}

uint64_t CreateProductRequest::GetCorpId() const
{
    return m_corpId;
}

void CreateProductRequest::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool CreateProductRequest::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

Ext CreateProductRequest::GetExt() const
{
    return m_ext;
}

void CreateProductRequest::SetExt(const Ext& _ext)
{
    m_ext = _ext;
    m_extHasBeenSet = true;
}

bool CreateProductRequest::ExtHasBeenSet() const
{
    return m_extHasBeenSet;
}



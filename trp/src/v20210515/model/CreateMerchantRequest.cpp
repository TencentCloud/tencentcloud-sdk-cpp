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

#include <tencentcloud/trp/v20210515/model/CreateMerchantRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

CreateMerchantRequest::CreateMerchantRequest() :
    m_nameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_codeTypeHasBeenSet(false),
    m_codeUrlHasBeenSet(false)
{
}

string CreateMerchantRequest::ToJsonString() const
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

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_corpId, allocator);
    }

    if (m_codeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_codeType, allocator);
    }

    if (m_codeUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_codeUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMerchantRequest::GetName() const
{
    return m_name;
}

void CreateMerchantRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateMerchantRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateMerchantRequest::GetRemark() const
{
    return m_remark;
}

void CreateMerchantRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateMerchantRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t CreateMerchantRequest::GetCorpId() const
{
    return m_corpId;
}

void CreateMerchantRequest::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool CreateMerchantRequest::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

int64_t CreateMerchantRequest::GetCodeType() const
{
    return m_codeType;
}

void CreateMerchantRequest::SetCodeType(const int64_t& _codeType)
{
    m_codeType = _codeType;
    m_codeTypeHasBeenSet = true;
}

bool CreateMerchantRequest::CodeTypeHasBeenSet() const
{
    return m_codeTypeHasBeenSet;
}

string CreateMerchantRequest::GetCodeUrl() const
{
    return m_codeUrl;
}

void CreateMerchantRequest::SetCodeUrl(const string& _codeUrl)
{
    m_codeUrl = _codeUrl;
    m_codeUrlHasBeenSet = true;
}

bool CreateMerchantRequest::CodeUrlHasBeenSet() const
{
    return m_codeUrlHasBeenSet;
}



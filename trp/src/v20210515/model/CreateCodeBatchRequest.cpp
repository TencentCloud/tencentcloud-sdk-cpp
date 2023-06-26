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

#include <tencentcloud/trp/v20210515/model/CreateCodeBatchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

CreateCodeBatchRequest::CreateCodeBatchRequest() :
    m_corpIdHasBeenSet(false),
    m_merchantIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_batchTypeHasBeenSet(false),
    m_batchIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_mpTplHasBeenSet(false),
    m_cloneIdHasBeenSet(false),
    m_batchCodeHasBeenSet(false),
    m_validDateHasBeenSet(false),
    m_productionDateHasBeenSet(false)
{
}

string CreateCodeBatchRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_corpId, allocator);
    }

    if (m_merchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_batchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_batchType, allocator);
    }

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_mpTplHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MpTpl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mpTpl.c_str(), allocator).Move(), allocator);
    }

    if (m_cloneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cloneId.c_str(), allocator).Move(), allocator);
    }

    if (m_batchCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_batchCode.c_str(), allocator).Move(), allocator);
    }

    if (m_validDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_validDate.c_str(), allocator).Move(), allocator);
    }

    if (m_productionDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductionDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productionDate.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateCodeBatchRequest::GetCorpId() const
{
    return m_corpId;
}

void CreateCodeBatchRequest::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool CreateCodeBatchRequest::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string CreateCodeBatchRequest::GetMerchantId() const
{
    return m_merchantId;
}

void CreateCodeBatchRequest::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool CreateCodeBatchRequest::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string CreateCodeBatchRequest::GetProductId() const
{
    return m_productId;
}

void CreateCodeBatchRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CreateCodeBatchRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

uint64_t CreateCodeBatchRequest::GetBatchType() const
{
    return m_batchType;
}

void CreateCodeBatchRequest::SetBatchType(const uint64_t& _batchType)
{
    m_batchType = _batchType;
    m_batchTypeHasBeenSet = true;
}

bool CreateCodeBatchRequest::BatchTypeHasBeenSet() const
{
    return m_batchTypeHasBeenSet;
}

string CreateCodeBatchRequest::GetBatchId() const
{
    return m_batchId;
}

void CreateCodeBatchRequest::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool CreateCodeBatchRequest::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

string CreateCodeBatchRequest::GetRemark() const
{
    return m_remark;
}

void CreateCodeBatchRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateCodeBatchRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateCodeBatchRequest::GetMpTpl() const
{
    return m_mpTpl;
}

void CreateCodeBatchRequest::SetMpTpl(const string& _mpTpl)
{
    m_mpTpl = _mpTpl;
    m_mpTplHasBeenSet = true;
}

bool CreateCodeBatchRequest::MpTplHasBeenSet() const
{
    return m_mpTplHasBeenSet;
}

string CreateCodeBatchRequest::GetCloneId() const
{
    return m_cloneId;
}

void CreateCodeBatchRequest::SetCloneId(const string& _cloneId)
{
    m_cloneId = _cloneId;
    m_cloneIdHasBeenSet = true;
}

bool CreateCodeBatchRequest::CloneIdHasBeenSet() const
{
    return m_cloneIdHasBeenSet;
}

string CreateCodeBatchRequest::GetBatchCode() const
{
    return m_batchCode;
}

void CreateCodeBatchRequest::SetBatchCode(const string& _batchCode)
{
    m_batchCode = _batchCode;
    m_batchCodeHasBeenSet = true;
}

bool CreateCodeBatchRequest::BatchCodeHasBeenSet() const
{
    return m_batchCodeHasBeenSet;
}

string CreateCodeBatchRequest::GetValidDate() const
{
    return m_validDate;
}

void CreateCodeBatchRequest::SetValidDate(const string& _validDate)
{
    m_validDate = _validDate;
    m_validDateHasBeenSet = true;
}

bool CreateCodeBatchRequest::ValidDateHasBeenSet() const
{
    return m_validDateHasBeenSet;
}

string CreateCodeBatchRequest::GetProductionDate() const
{
    return m_productionDate;
}

void CreateCodeBatchRequest::SetProductionDate(const string& _productionDate)
{
    m_productionDate = _productionDate;
    m_productionDateHasBeenSet = true;
}

bool CreateCodeBatchRequest::ProductionDateHasBeenSet() const
{
    return m_productionDateHasBeenSet;
}



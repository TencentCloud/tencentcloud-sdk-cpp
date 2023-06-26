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

#include <tencentcloud/trp/v20210515/model/ModifyCodeBatchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

ModifyCodeBatchRequest::ModifyCodeBatchRequest() :
    m_batchIdHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_mpTplHasBeenSet(false),
    m_merchantIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_batchCodeHasBeenSet(false),
    m_validDateHasBeenSet(false),
    m_productionDateHasBeenSet(false)
{
}

string ModifyCodeBatchRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_corpId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_mpTplHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MpTpl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mpTpl.c_str(), allocator).Move(), allocator);
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

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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


string ModifyCodeBatchRequest::GetBatchId() const
{
    return m_batchId;
}

void ModifyCodeBatchRequest::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool ModifyCodeBatchRequest::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

uint64_t ModifyCodeBatchRequest::GetCorpId() const
{
    return m_corpId;
}

void ModifyCodeBatchRequest::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool ModifyCodeBatchRequest::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

int64_t ModifyCodeBatchRequest::GetStatus() const
{
    return m_status;
}

void ModifyCodeBatchRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyCodeBatchRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyCodeBatchRequest::GetMpTpl() const
{
    return m_mpTpl;
}

void ModifyCodeBatchRequest::SetMpTpl(const string& _mpTpl)
{
    m_mpTpl = _mpTpl;
    m_mpTplHasBeenSet = true;
}

bool ModifyCodeBatchRequest::MpTplHasBeenSet() const
{
    return m_mpTplHasBeenSet;
}

string ModifyCodeBatchRequest::GetMerchantId() const
{
    return m_merchantId;
}

void ModifyCodeBatchRequest::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool ModifyCodeBatchRequest::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string ModifyCodeBatchRequest::GetProductId() const
{
    return m_productId;
}

void ModifyCodeBatchRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ModifyCodeBatchRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ModifyCodeBatchRequest::GetRemark() const
{
    return m_remark;
}

void ModifyCodeBatchRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyCodeBatchRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string ModifyCodeBatchRequest::GetBatchCode() const
{
    return m_batchCode;
}

void ModifyCodeBatchRequest::SetBatchCode(const string& _batchCode)
{
    m_batchCode = _batchCode;
    m_batchCodeHasBeenSet = true;
}

bool ModifyCodeBatchRequest::BatchCodeHasBeenSet() const
{
    return m_batchCodeHasBeenSet;
}

string ModifyCodeBatchRequest::GetValidDate() const
{
    return m_validDate;
}

void ModifyCodeBatchRequest::SetValidDate(const string& _validDate)
{
    m_validDate = _validDate;
    m_validDateHasBeenSet = true;
}

bool ModifyCodeBatchRequest::ValidDateHasBeenSet() const
{
    return m_validDateHasBeenSet;
}

string ModifyCodeBatchRequest::GetProductionDate() const
{
    return m_productionDate;
}

void ModifyCodeBatchRequest::SetProductionDate(const string& _productionDate)
{
    m_productionDate = _productionDate;
    m_productionDateHasBeenSet = true;
}

bool ModifyCodeBatchRequest::ProductionDateHasBeenSet() const
{
    return m_productionDateHasBeenSet;
}



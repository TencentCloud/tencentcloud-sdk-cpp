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

#include <tencentcloud/trp/v20210515/model/CodeBatch.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

CodeBatch::CodeBatch() :
    m_batchIdHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_batchCodeHasBeenSet(false),
    m_codeCntHasBeenSet(false),
    m_merchantIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_batchTypeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_mpTplHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_merchantNameHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_extHasBeenSet(false),
    m_tplNameHasBeenSet(false),
    m_jobHasBeenSet(false),
    m_productionDateHasBeenSet(false),
    m_validDateHasBeenSet(false),
    m_attrsHasBeenSet(false)
{
}

CoreInternalOutcome CodeBatch::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BatchId") && !value["BatchId"].IsNull())
    {
        if (!value["BatchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeBatch.BatchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchId = string(value["BatchId"].GetString());
        m_batchIdHasBeenSet = true;
    }

    if (value.HasMember("CorpId") && !value["CorpId"].IsNull())
    {
        if (!value["CorpId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CodeBatch.CorpId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_corpId = value["CorpId"].GetInt64();
        m_corpIdHasBeenSet = true;
    }

    if (value.HasMember("BatchCode") && !value["BatchCode"].IsNull())
    {
        if (!value["BatchCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeBatch.BatchCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchCode = string(value["BatchCode"].GetString());
        m_batchCodeHasBeenSet = true;
    }

    if (value.HasMember("CodeCnt") && !value["CodeCnt"].IsNull())
    {
        if (!value["CodeCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CodeBatch.CodeCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_codeCnt = value["CodeCnt"].GetInt64();
        m_codeCntHasBeenSet = true;
    }

    if (value.HasMember("MerchantId") && !value["MerchantId"].IsNull())
    {
        if (!value["MerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeBatch.MerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantId = string(value["MerchantId"].GetString());
        m_merchantIdHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeBatch.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("BatchType") && !value["BatchType"].IsNull())
    {
        if (!value["BatchType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CodeBatch.BatchType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_batchType = value["BatchType"].GetInt64();
        m_batchTypeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeBatch.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("MpTpl") && !value["MpTpl"].IsNull())
    {
        if (!value["MpTpl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeBatch.MpTpl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mpTpl = string(value["MpTpl"].GetString());
        m_mpTplHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CodeBatch.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeBatch.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeBatch.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("MerchantName") && !value["MerchantName"].IsNull())
    {
        if (!value["MerchantName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeBatch.MerchantName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantName = string(value["MerchantName"].GetString());
        m_merchantNameHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeBatch.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("Ext") && !value["Ext"].IsNull())
    {
        if (!value["Ext"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CodeBatch.Ext` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ext.Deserialize(value["Ext"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extHasBeenSet = true;
    }

    if (value.HasMember("TplName") && !value["TplName"].IsNull())
    {
        if (!value["TplName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeBatch.TplName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tplName = string(value["TplName"].GetString());
        m_tplNameHasBeenSet = true;
    }

    if (value.HasMember("Job") && !value["Job"].IsNull())
    {
        if (!value["Job"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CodeBatch.Job` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_job.Deserialize(value["Job"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_jobHasBeenSet = true;
    }

    if (value.HasMember("ProductionDate") && !value["ProductionDate"].IsNull())
    {
        if (!value["ProductionDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeBatch.ProductionDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productionDate = string(value["ProductionDate"].GetString());
        m_productionDateHasBeenSet = true;
    }

    if (value.HasMember("ValidDate") && !value["ValidDate"].IsNull())
    {
        if (!value["ValidDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeBatch.ValidDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validDate = string(value["ValidDate"].GetString());
        m_validDateHasBeenSet = true;
    }

    if (value.HasMember("Attrs") && !value["Attrs"].IsNull())
    {
        if (!value["Attrs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CodeBatch.Attrs` is not array type"));

        const rapidjson::Value &tmpValue = value["Attrs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AttrItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_attrs.push_back(item);
        }
        m_attrsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CodeBatch::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_corpId, allocator);
    }

    if (m_batchCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchCode.c_str(), allocator).Move(), allocator);
    }

    if (m_codeCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_codeCnt, allocator);
    }

    if (m_merchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_batchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_batchType, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_mpTplHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MpTpl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mpTpl.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantName.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_extHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ext.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tplNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TplName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tplName.c_str(), allocator).Move(), allocator);
    }

    if (m_jobHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Job";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_job.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_productionDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductionDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productionDate.c_str(), allocator).Move(), allocator);
    }

    if (m_validDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validDate.c_str(), allocator).Move(), allocator);
    }

    if (m_attrsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attrs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attrs.begin(); itr != m_attrs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CodeBatch::GetBatchId() const
{
    return m_batchId;
}

void CodeBatch::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool CodeBatch::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

int64_t CodeBatch::GetCorpId() const
{
    return m_corpId;
}

void CodeBatch::SetCorpId(const int64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool CodeBatch::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string CodeBatch::GetBatchCode() const
{
    return m_batchCode;
}

void CodeBatch::SetBatchCode(const string& _batchCode)
{
    m_batchCode = _batchCode;
    m_batchCodeHasBeenSet = true;
}

bool CodeBatch::BatchCodeHasBeenSet() const
{
    return m_batchCodeHasBeenSet;
}

int64_t CodeBatch::GetCodeCnt() const
{
    return m_codeCnt;
}

void CodeBatch::SetCodeCnt(const int64_t& _codeCnt)
{
    m_codeCnt = _codeCnt;
    m_codeCntHasBeenSet = true;
}

bool CodeBatch::CodeCntHasBeenSet() const
{
    return m_codeCntHasBeenSet;
}

string CodeBatch::GetMerchantId() const
{
    return m_merchantId;
}

void CodeBatch::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool CodeBatch::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string CodeBatch::GetProductId() const
{
    return m_productId;
}

void CodeBatch::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CodeBatch::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

int64_t CodeBatch::GetBatchType() const
{
    return m_batchType;
}

void CodeBatch::SetBatchType(const int64_t& _batchType)
{
    m_batchType = _batchType;
    m_batchTypeHasBeenSet = true;
}

bool CodeBatch::BatchTypeHasBeenSet() const
{
    return m_batchTypeHasBeenSet;
}

string CodeBatch::GetRemark() const
{
    return m_remark;
}

void CodeBatch::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CodeBatch::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CodeBatch::GetMpTpl() const
{
    return m_mpTpl;
}

void CodeBatch::SetMpTpl(const string& _mpTpl)
{
    m_mpTpl = _mpTpl;
    m_mpTplHasBeenSet = true;
}

bool CodeBatch::MpTplHasBeenSet() const
{
    return m_mpTplHasBeenSet;
}

int64_t CodeBatch::GetStatus() const
{
    return m_status;
}

void CodeBatch::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CodeBatch::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CodeBatch::GetCreateTime() const
{
    return m_createTime;
}

void CodeBatch::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CodeBatch::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CodeBatch::GetUpdateTime() const
{
    return m_updateTime;
}

void CodeBatch::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CodeBatch::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string CodeBatch::GetMerchantName() const
{
    return m_merchantName;
}

void CodeBatch::SetMerchantName(const string& _merchantName)
{
    m_merchantName = _merchantName;
    m_merchantNameHasBeenSet = true;
}

bool CodeBatch::MerchantNameHasBeenSet() const
{
    return m_merchantNameHasBeenSet;
}

string CodeBatch::GetProductName() const
{
    return m_productName;
}

void CodeBatch::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool CodeBatch::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

Ext CodeBatch::GetExt() const
{
    return m_ext;
}

void CodeBatch::SetExt(const Ext& _ext)
{
    m_ext = _ext;
    m_extHasBeenSet = true;
}

bool CodeBatch::ExtHasBeenSet() const
{
    return m_extHasBeenSet;
}

string CodeBatch::GetTplName() const
{
    return m_tplName;
}

void CodeBatch::SetTplName(const string& _tplName)
{
    m_tplName = _tplName;
    m_tplNameHasBeenSet = true;
}

bool CodeBatch::TplNameHasBeenSet() const
{
    return m_tplNameHasBeenSet;
}

Job CodeBatch::GetJob() const
{
    return m_job;
}

void CodeBatch::SetJob(const Job& _job)
{
    m_job = _job;
    m_jobHasBeenSet = true;
}

bool CodeBatch::JobHasBeenSet() const
{
    return m_jobHasBeenSet;
}

string CodeBatch::GetProductionDate() const
{
    return m_productionDate;
}

void CodeBatch::SetProductionDate(const string& _productionDate)
{
    m_productionDate = _productionDate;
    m_productionDateHasBeenSet = true;
}

bool CodeBatch::ProductionDateHasBeenSet() const
{
    return m_productionDateHasBeenSet;
}

string CodeBatch::GetValidDate() const
{
    return m_validDate;
}

void CodeBatch::SetValidDate(const string& _validDate)
{
    m_validDate = _validDate;
    m_validDateHasBeenSet = true;
}

bool CodeBatch::ValidDateHasBeenSet() const
{
    return m_validDateHasBeenSet;
}

vector<AttrItem> CodeBatch::GetAttrs() const
{
    return m_attrs;
}

void CodeBatch::SetAttrs(const vector<AttrItem>& _attrs)
{
    m_attrs = _attrs;
    m_attrsHasBeenSet = true;
}

bool CodeBatch::AttrsHasBeenSet() const
{
    return m_attrsHasBeenSet;
}


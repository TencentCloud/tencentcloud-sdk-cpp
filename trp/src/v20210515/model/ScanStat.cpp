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

#include <tencentcloud/trp/v20210515/model/ScanStat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

ScanStat::ScanStat() :
    m_codeHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_merchantIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_batchIdHasBeenSet(false),
    m_pvHasBeenSet(false),
    m_uvHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_merchantNameHasBeenSet(false),
    m_productNameHasBeenSet(false)
{
}

CoreInternalOutcome ScanStat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanStat.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("CorpId") && !value["CorpId"].IsNull())
    {
        if (!value["CorpId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanStat.CorpId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_corpId = value["CorpId"].GetUint64();
        m_corpIdHasBeenSet = true;
    }

    if (value.HasMember("MerchantId") && !value["MerchantId"].IsNull())
    {
        if (!value["MerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanStat.MerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantId = string(value["MerchantId"].GetString());
        m_merchantIdHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanStat.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("BatchId") && !value["BatchId"].IsNull())
    {
        if (!value["BatchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanStat.BatchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchId = string(value["BatchId"].GetString());
        m_batchIdHasBeenSet = true;
    }

    if (value.HasMember("Pv") && !value["Pv"].IsNull())
    {
        if (!value["Pv"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanStat.Pv` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pv = value["Pv"].GetUint64();
        m_pvHasBeenSet = true;
    }

    if (value.HasMember("Uv") && !value["Uv"].IsNull())
    {
        if (!value["Uv"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanStat.Uv` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uv = value["Uv"].GetUint64();
        m_uvHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanStat.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanStat.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("MerchantName") && !value["MerchantName"].IsNull())
    {
        if (!value["MerchantName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanStat.MerchantName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantName = string(value["MerchantName"].GetString());
        m_merchantNameHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanStat.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScanStat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_corpId, allocator);
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

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_pvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pv, allocator);
    }

    if (m_uvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uv, allocator);
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

}


string ScanStat::GetCode() const
{
    return m_code;
}

void ScanStat::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool ScanStat::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

uint64_t ScanStat::GetCorpId() const
{
    return m_corpId;
}

void ScanStat::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool ScanStat::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string ScanStat::GetMerchantId() const
{
    return m_merchantId;
}

void ScanStat::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool ScanStat::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string ScanStat::GetProductId() const
{
    return m_productId;
}

void ScanStat::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ScanStat::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ScanStat::GetBatchId() const
{
    return m_batchId;
}

void ScanStat::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool ScanStat::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

uint64_t ScanStat::GetPv() const
{
    return m_pv;
}

void ScanStat::SetPv(const uint64_t& _pv)
{
    m_pv = _pv;
    m_pvHasBeenSet = true;
}

bool ScanStat::PvHasBeenSet() const
{
    return m_pvHasBeenSet;
}

uint64_t ScanStat::GetUv() const
{
    return m_uv;
}

void ScanStat::SetUv(const uint64_t& _uv)
{
    m_uv = _uv;
    m_uvHasBeenSet = true;
}

bool ScanStat::UvHasBeenSet() const
{
    return m_uvHasBeenSet;
}

string ScanStat::GetCreateTime() const
{
    return m_createTime;
}

void ScanStat::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ScanStat::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ScanStat::GetUpdateTime() const
{
    return m_updateTime;
}

void ScanStat::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ScanStat::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ScanStat::GetMerchantName() const
{
    return m_merchantName;
}

void ScanStat::SetMerchantName(const string& _merchantName)
{
    m_merchantName = _merchantName;
    m_merchantNameHasBeenSet = true;
}

bool ScanStat::MerchantNameHasBeenSet() const
{
    return m_merchantNameHasBeenSet;
}

string ScanStat::GetProductName() const
{
    return m_productName;
}

void ScanStat::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool ScanStat::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}


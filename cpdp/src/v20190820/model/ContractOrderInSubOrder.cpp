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

#include <tencentcloud/cpdp/v20190820/model/ContractOrderInSubOrder.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ContractOrderInSubOrder::ContractOrderInSubOrder() :
    m_subMchIncomeHasBeenSet(false),
    m_platformIncomeHasBeenSet(false),
    m_productDetailHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_subOutTradeNoHasBeenSet(false),
    m_amtHasBeenSet(false),
    m_originalAmtHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

CoreInternalOutcome ContractOrderInSubOrder::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubMchIncome") && !value["SubMchIncome"].IsNull())
    {
        if (!value["SubMchIncome"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContractOrderInSubOrder.SubMchIncome` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subMchIncome = value["SubMchIncome"].GetInt64();
        m_subMchIncomeHasBeenSet = true;
    }

    if (value.HasMember("PlatformIncome") && !value["PlatformIncome"].IsNull())
    {
        if (!value["PlatformIncome"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContractOrderInSubOrder.PlatformIncome` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_platformIncome = value["PlatformIncome"].GetInt64();
        m_platformIncomeHasBeenSet = true;
    }

    if (value.HasMember("ProductDetail") && !value["ProductDetail"].IsNull())
    {
        if (!value["ProductDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractOrderInSubOrder.ProductDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productDetail = string(value["ProductDetail"].GetString());
        m_productDetailHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractOrderInSubOrder.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("SubAppId") && !value["SubAppId"].IsNull())
    {
        if (!value["SubAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractOrderInSubOrder.SubAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAppId = string(value["SubAppId"].GetString());
        m_subAppIdHasBeenSet = true;
    }

    if (value.HasMember("SubOutTradeNo") && !value["SubOutTradeNo"].IsNull())
    {
        if (!value["SubOutTradeNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractOrderInSubOrder.SubOutTradeNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subOutTradeNo = string(value["SubOutTradeNo"].GetString());
        m_subOutTradeNoHasBeenSet = true;
    }

    if (value.HasMember("Amt") && !value["Amt"].IsNull())
    {
        if (!value["Amt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContractOrderInSubOrder.Amt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_amt = value["Amt"].GetInt64();
        m_amtHasBeenSet = true;
    }

    if (value.HasMember("OriginalAmt") && !value["OriginalAmt"].IsNull())
    {
        if (!value["OriginalAmt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContractOrderInSubOrder.OriginalAmt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originalAmt = value["OriginalAmt"].GetInt64();
        m_originalAmtHasBeenSet = true;
    }

    if (value.HasMember("Metadata") && !value["Metadata"].IsNull())
    {
        if (!value["Metadata"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractOrderInSubOrder.Metadata` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metadata = string(value["Metadata"].GetString());
        m_metadataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContractOrderInSubOrder::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subMchIncomeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMchIncome";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subMchIncome, allocator);
    }

    if (m_platformIncomeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformIncome";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_platformIncome, allocator);
    }

    if (m_productDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_subOutTradeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubOutTradeNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subOutTradeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_amtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_amt, allocator);
    }

    if (m_originalAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalAmt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalAmt, allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metadata.c_str(), allocator).Move(), allocator);
    }

}


int64_t ContractOrderInSubOrder::GetSubMchIncome() const
{
    return m_subMchIncome;
}

void ContractOrderInSubOrder::SetSubMchIncome(const int64_t& _subMchIncome)
{
    m_subMchIncome = _subMchIncome;
    m_subMchIncomeHasBeenSet = true;
}

bool ContractOrderInSubOrder::SubMchIncomeHasBeenSet() const
{
    return m_subMchIncomeHasBeenSet;
}

int64_t ContractOrderInSubOrder::GetPlatformIncome() const
{
    return m_platformIncome;
}

void ContractOrderInSubOrder::SetPlatformIncome(const int64_t& _platformIncome)
{
    m_platformIncome = _platformIncome;
    m_platformIncomeHasBeenSet = true;
}

bool ContractOrderInSubOrder::PlatformIncomeHasBeenSet() const
{
    return m_platformIncomeHasBeenSet;
}

string ContractOrderInSubOrder::GetProductDetail() const
{
    return m_productDetail;
}

void ContractOrderInSubOrder::SetProductDetail(const string& _productDetail)
{
    m_productDetail = _productDetail;
    m_productDetailHasBeenSet = true;
}

bool ContractOrderInSubOrder::ProductDetailHasBeenSet() const
{
    return m_productDetailHasBeenSet;
}

string ContractOrderInSubOrder::GetProductName() const
{
    return m_productName;
}

void ContractOrderInSubOrder::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool ContractOrderInSubOrder::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string ContractOrderInSubOrder::GetSubAppId() const
{
    return m_subAppId;
}

void ContractOrderInSubOrder::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ContractOrderInSubOrder::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string ContractOrderInSubOrder::GetSubOutTradeNo() const
{
    return m_subOutTradeNo;
}

void ContractOrderInSubOrder::SetSubOutTradeNo(const string& _subOutTradeNo)
{
    m_subOutTradeNo = _subOutTradeNo;
    m_subOutTradeNoHasBeenSet = true;
}

bool ContractOrderInSubOrder::SubOutTradeNoHasBeenSet() const
{
    return m_subOutTradeNoHasBeenSet;
}

int64_t ContractOrderInSubOrder::GetAmt() const
{
    return m_amt;
}

void ContractOrderInSubOrder::SetAmt(const int64_t& _amt)
{
    m_amt = _amt;
    m_amtHasBeenSet = true;
}

bool ContractOrderInSubOrder::AmtHasBeenSet() const
{
    return m_amtHasBeenSet;
}

int64_t ContractOrderInSubOrder::GetOriginalAmt() const
{
    return m_originalAmt;
}

void ContractOrderInSubOrder::SetOriginalAmt(const int64_t& _originalAmt)
{
    m_originalAmt = _originalAmt;
    m_originalAmtHasBeenSet = true;
}

bool ContractOrderInSubOrder::OriginalAmtHasBeenSet() const
{
    return m_originalAmtHasBeenSet;
}

string ContractOrderInSubOrder::GetMetadata() const
{
    return m_metadata;
}

void ContractOrderInSubOrder::SetMetadata(const string& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool ContractOrderInSubOrder::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}


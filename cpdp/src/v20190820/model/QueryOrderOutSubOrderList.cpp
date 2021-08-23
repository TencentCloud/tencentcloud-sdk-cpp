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

#include <tencentcloud/cpdp/v20190820/model/QueryOrderOutSubOrderList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOrderOutSubOrderList::QueryOrderOutSubOrderList() :
    m_amtHasBeenSet(false),
    m_subMchIncomeHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_originalAmtHasBeenSet(false),
    m_platformIncomeHasBeenSet(false),
    m_productDetailHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_settleCheckHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_subOutTradeNoHasBeenSet(false)
{
}

CoreInternalOutcome QueryOrderOutSubOrderList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Amt") && !value["Amt"].IsNull())
    {
        if (!value["Amt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutSubOrderList.Amt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_amt = value["Amt"].GetInt64();
        m_amtHasBeenSet = true;
    }

    if (value.HasMember("SubMchIncome") && !value["SubMchIncome"].IsNull())
    {
        if (!value["SubMchIncome"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutSubOrderList.SubMchIncome` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subMchIncome = value["SubMchIncome"].GetInt64();
        m_subMchIncomeHasBeenSet = true;
    }

    if (value.HasMember("Metadata") && !value["Metadata"].IsNull())
    {
        if (!value["Metadata"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutSubOrderList.Metadata` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metadata = string(value["Metadata"].GetString());
        m_metadataHasBeenSet = true;
    }

    if (value.HasMember("OriginalAmt") && !value["OriginalAmt"].IsNull())
    {
        if (!value["OriginalAmt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutSubOrderList.OriginalAmt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originalAmt = value["OriginalAmt"].GetInt64();
        m_originalAmtHasBeenSet = true;
    }

    if (value.HasMember("PlatformIncome") && !value["PlatformIncome"].IsNull())
    {
        if (!value["PlatformIncome"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutSubOrderList.PlatformIncome` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_platformIncome = value["PlatformIncome"].GetInt64();
        m_platformIncomeHasBeenSet = true;
    }

    if (value.HasMember("ProductDetail") && !value["ProductDetail"].IsNull())
    {
        if (!value["ProductDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutSubOrderList.ProductDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productDetail = string(value["ProductDetail"].GetString());
        m_productDetailHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutSubOrderList.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("SettleCheck") && !value["SettleCheck"].IsNull())
    {
        if (!value["SettleCheck"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutSubOrderList.SettleCheck` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_settleCheck = value["SettleCheck"].GetInt64();
        m_settleCheckHasBeenSet = true;
    }

    if (value.HasMember("SubAppId") && !value["SubAppId"].IsNull())
    {
        if (!value["SubAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutSubOrderList.SubAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAppId = string(value["SubAppId"].GetString());
        m_subAppIdHasBeenSet = true;
    }

    if (value.HasMember("SubOutTradeNo") && !value["SubOutTradeNo"].IsNull())
    {
        if (!value["SubOutTradeNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutSubOrderList.SubOutTradeNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subOutTradeNo = string(value["SubOutTradeNo"].GetString());
        m_subOutTradeNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryOrderOutSubOrderList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_amtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_amt, allocator);
    }

    if (m_subMchIncomeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMchIncome";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subMchIncome, allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metadata.c_str(), allocator).Move(), allocator);
    }

    if (m_originalAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalAmt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalAmt, allocator);
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

    if (m_settleCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_settleCheck, allocator);
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

}


int64_t QueryOrderOutSubOrderList::GetAmt() const
{
    return m_amt;
}

void QueryOrderOutSubOrderList::SetAmt(const int64_t& _amt)
{
    m_amt = _amt;
    m_amtHasBeenSet = true;
}

bool QueryOrderOutSubOrderList::AmtHasBeenSet() const
{
    return m_amtHasBeenSet;
}

int64_t QueryOrderOutSubOrderList::GetSubMchIncome() const
{
    return m_subMchIncome;
}

void QueryOrderOutSubOrderList::SetSubMchIncome(const int64_t& _subMchIncome)
{
    m_subMchIncome = _subMchIncome;
    m_subMchIncomeHasBeenSet = true;
}

bool QueryOrderOutSubOrderList::SubMchIncomeHasBeenSet() const
{
    return m_subMchIncomeHasBeenSet;
}

string QueryOrderOutSubOrderList::GetMetadata() const
{
    return m_metadata;
}

void QueryOrderOutSubOrderList::SetMetadata(const string& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool QueryOrderOutSubOrderList::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

int64_t QueryOrderOutSubOrderList::GetOriginalAmt() const
{
    return m_originalAmt;
}

void QueryOrderOutSubOrderList::SetOriginalAmt(const int64_t& _originalAmt)
{
    m_originalAmt = _originalAmt;
    m_originalAmtHasBeenSet = true;
}

bool QueryOrderOutSubOrderList::OriginalAmtHasBeenSet() const
{
    return m_originalAmtHasBeenSet;
}

int64_t QueryOrderOutSubOrderList::GetPlatformIncome() const
{
    return m_platformIncome;
}

void QueryOrderOutSubOrderList::SetPlatformIncome(const int64_t& _platformIncome)
{
    m_platformIncome = _platformIncome;
    m_platformIncomeHasBeenSet = true;
}

bool QueryOrderOutSubOrderList::PlatformIncomeHasBeenSet() const
{
    return m_platformIncomeHasBeenSet;
}

string QueryOrderOutSubOrderList::GetProductDetail() const
{
    return m_productDetail;
}

void QueryOrderOutSubOrderList::SetProductDetail(const string& _productDetail)
{
    m_productDetail = _productDetail;
    m_productDetailHasBeenSet = true;
}

bool QueryOrderOutSubOrderList::ProductDetailHasBeenSet() const
{
    return m_productDetailHasBeenSet;
}

string QueryOrderOutSubOrderList::GetProductName() const
{
    return m_productName;
}

void QueryOrderOutSubOrderList::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool QueryOrderOutSubOrderList::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

int64_t QueryOrderOutSubOrderList::GetSettleCheck() const
{
    return m_settleCheck;
}

void QueryOrderOutSubOrderList::SetSettleCheck(const int64_t& _settleCheck)
{
    m_settleCheck = _settleCheck;
    m_settleCheckHasBeenSet = true;
}

bool QueryOrderOutSubOrderList::SettleCheckHasBeenSet() const
{
    return m_settleCheckHasBeenSet;
}

string QueryOrderOutSubOrderList::GetSubAppId() const
{
    return m_subAppId;
}

void QueryOrderOutSubOrderList::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool QueryOrderOutSubOrderList::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string QueryOrderOutSubOrderList::GetSubOutTradeNo() const
{
    return m_subOutTradeNo;
}

void QueryOrderOutSubOrderList::SetSubOutTradeNo(const string& _subOutTradeNo)
{
    m_subOutTradeNo = _subOutTradeNo;
    m_subOutTradeNoHasBeenSet = true;
}

bool QueryOrderOutSubOrderList::SubOutTradeNoHasBeenSet() const
{
    return m_subOutTradeNoHasBeenSet;
}


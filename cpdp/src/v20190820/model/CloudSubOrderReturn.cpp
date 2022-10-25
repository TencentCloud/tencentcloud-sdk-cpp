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

#include <tencentcloud/cpdp/v20190820/model/CloudSubOrderReturn.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CloudSubOrderReturn::CloudSubOrderReturn() :
    m_subOutTradeNoHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_productDetailHasBeenSet(false),
    m_platformIncomeHasBeenSet(false),
    m_subMchIncomeHasBeenSet(false),
    m_amtHasBeenSet(false),
    m_originalAmtHasBeenSet(false),
    m_settleCheckHasBeenSet(false),
    m_settleInfoHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_attachmentInfoListHasBeenSet(false),
    m_channelExternalSubOrderIdHasBeenSet(false),
    m_wxSubMchIdHasBeenSet(false),
    m_channelSubPayOrderIdHasBeenSet(false),
    m_productIdHasBeenSet(false)
{
}

CoreInternalOutcome CloudSubOrderReturn::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubOutTradeNo") && !value["SubOutTradeNo"].IsNull())
    {
        if (!value["SubOutTradeNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrderReturn.SubOutTradeNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subOutTradeNo = string(value["SubOutTradeNo"].GetString());
        m_subOutTradeNoHasBeenSet = true;
    }

    if (value.HasMember("SubAppId") && !value["SubAppId"].IsNull())
    {
        if (!value["SubAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrderReturn.SubAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAppId = string(value["SubAppId"].GetString());
        m_subAppIdHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrderReturn.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("ProductDetail") && !value["ProductDetail"].IsNull())
    {
        if (!value["ProductDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrderReturn.ProductDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productDetail = string(value["ProductDetail"].GetString());
        m_productDetailHasBeenSet = true;
    }

    if (value.HasMember("PlatformIncome") && !value["PlatformIncome"].IsNull())
    {
        if (!value["PlatformIncome"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrderReturn.PlatformIncome` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_platformIncome = value["PlatformIncome"].GetInt64();
        m_platformIncomeHasBeenSet = true;
    }

    if (value.HasMember("SubMchIncome") && !value["SubMchIncome"].IsNull())
    {
        if (!value["SubMchIncome"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrderReturn.SubMchIncome` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subMchIncome = value["SubMchIncome"].GetInt64();
        m_subMchIncomeHasBeenSet = true;
    }

    if (value.HasMember("Amt") && !value["Amt"].IsNull())
    {
        if (!value["Amt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrderReturn.Amt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_amt = value["Amt"].GetInt64();
        m_amtHasBeenSet = true;
    }

    if (value.HasMember("OriginalAmt") && !value["OriginalAmt"].IsNull())
    {
        if (!value["OriginalAmt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrderReturn.OriginalAmt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originalAmt = value["OriginalAmt"].GetInt64();
        m_originalAmtHasBeenSet = true;
    }

    if (value.HasMember("SettleCheck") && !value["SettleCheck"].IsNull())
    {
        if (!value["SettleCheck"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrderReturn.SettleCheck` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_settleCheck = value["SettleCheck"].GetInt64();
        m_settleCheckHasBeenSet = true;
    }

    if (value.HasMember("SettleInfo") && !value["SettleInfo"].IsNull())
    {
        if (!value["SettleInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrderReturn.SettleInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_settleInfo.Deserialize(value["SettleInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_settleInfoHasBeenSet = true;
    }

    if (value.HasMember("Metadata") && !value["Metadata"].IsNull())
    {
        if (!value["Metadata"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrderReturn.Metadata` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metadata = string(value["Metadata"].GetString());
        m_metadataHasBeenSet = true;
    }

    if (value.HasMember("AttachmentInfoList") && !value["AttachmentInfoList"].IsNull())
    {
        if (!value["AttachmentInfoList"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrderReturn.AttachmentInfoList` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_attachmentInfoList.Deserialize(value["AttachmentInfoList"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_attachmentInfoListHasBeenSet = true;
    }

    if (value.HasMember("ChannelExternalSubOrderId") && !value["ChannelExternalSubOrderId"].IsNull())
    {
        if (!value["ChannelExternalSubOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrderReturn.ChannelExternalSubOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelExternalSubOrderId = string(value["ChannelExternalSubOrderId"].GetString());
        m_channelExternalSubOrderIdHasBeenSet = true;
    }

    if (value.HasMember("WxSubMchId") && !value["WxSubMchId"].IsNull())
    {
        if (!value["WxSubMchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrderReturn.WxSubMchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wxSubMchId = string(value["WxSubMchId"].GetString());
        m_wxSubMchIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelSubPayOrderId") && !value["ChannelSubPayOrderId"].IsNull())
    {
        if (!value["ChannelSubPayOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrderReturn.ChannelSubPayOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelSubPayOrderId = string(value["ChannelSubPayOrderId"].GetString());
        m_channelSubPayOrderIdHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrderReturn.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudSubOrderReturn::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subOutTradeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubOutTradeNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subOutTradeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_productDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_platformIncomeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformIncome";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_platformIncome, allocator);
    }

    if (m_subMchIncomeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMchIncome";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subMchIncome, allocator);
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

    if (m_settleCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_settleCheck, allocator);
    }

    if (m_settleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_settleInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metadata.c_str(), allocator).Move(), allocator);
    }

    if (m_attachmentInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachmentInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_attachmentInfoList.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_channelExternalSubOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelExternalSubOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelExternalSubOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_wxSubMchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxSubMchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wxSubMchId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelSubPayOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelSubPayOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelSubPayOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

}


string CloudSubOrderReturn::GetSubOutTradeNo() const
{
    return m_subOutTradeNo;
}

void CloudSubOrderReturn::SetSubOutTradeNo(const string& _subOutTradeNo)
{
    m_subOutTradeNo = _subOutTradeNo;
    m_subOutTradeNoHasBeenSet = true;
}

bool CloudSubOrderReturn::SubOutTradeNoHasBeenSet() const
{
    return m_subOutTradeNoHasBeenSet;
}

string CloudSubOrderReturn::GetSubAppId() const
{
    return m_subAppId;
}

void CloudSubOrderReturn::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CloudSubOrderReturn::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CloudSubOrderReturn::GetProductName() const
{
    return m_productName;
}

void CloudSubOrderReturn::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool CloudSubOrderReturn::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string CloudSubOrderReturn::GetProductDetail() const
{
    return m_productDetail;
}

void CloudSubOrderReturn::SetProductDetail(const string& _productDetail)
{
    m_productDetail = _productDetail;
    m_productDetailHasBeenSet = true;
}

bool CloudSubOrderReturn::ProductDetailHasBeenSet() const
{
    return m_productDetailHasBeenSet;
}

int64_t CloudSubOrderReturn::GetPlatformIncome() const
{
    return m_platformIncome;
}

void CloudSubOrderReturn::SetPlatformIncome(const int64_t& _platformIncome)
{
    m_platformIncome = _platformIncome;
    m_platformIncomeHasBeenSet = true;
}

bool CloudSubOrderReturn::PlatformIncomeHasBeenSet() const
{
    return m_platformIncomeHasBeenSet;
}

int64_t CloudSubOrderReturn::GetSubMchIncome() const
{
    return m_subMchIncome;
}

void CloudSubOrderReturn::SetSubMchIncome(const int64_t& _subMchIncome)
{
    m_subMchIncome = _subMchIncome;
    m_subMchIncomeHasBeenSet = true;
}

bool CloudSubOrderReturn::SubMchIncomeHasBeenSet() const
{
    return m_subMchIncomeHasBeenSet;
}

int64_t CloudSubOrderReturn::GetAmt() const
{
    return m_amt;
}

void CloudSubOrderReturn::SetAmt(const int64_t& _amt)
{
    m_amt = _amt;
    m_amtHasBeenSet = true;
}

bool CloudSubOrderReturn::AmtHasBeenSet() const
{
    return m_amtHasBeenSet;
}

int64_t CloudSubOrderReturn::GetOriginalAmt() const
{
    return m_originalAmt;
}

void CloudSubOrderReturn::SetOriginalAmt(const int64_t& _originalAmt)
{
    m_originalAmt = _originalAmt;
    m_originalAmtHasBeenSet = true;
}

bool CloudSubOrderReturn::OriginalAmtHasBeenSet() const
{
    return m_originalAmtHasBeenSet;
}

int64_t CloudSubOrderReturn::GetSettleCheck() const
{
    return m_settleCheck;
}

void CloudSubOrderReturn::SetSettleCheck(const int64_t& _settleCheck)
{
    m_settleCheck = _settleCheck;
    m_settleCheckHasBeenSet = true;
}

bool CloudSubOrderReturn::SettleCheckHasBeenSet() const
{
    return m_settleCheckHasBeenSet;
}

CloudSettleInfo CloudSubOrderReturn::GetSettleInfo() const
{
    return m_settleInfo;
}

void CloudSubOrderReturn::SetSettleInfo(const CloudSettleInfo& _settleInfo)
{
    m_settleInfo = _settleInfo;
    m_settleInfoHasBeenSet = true;
}

bool CloudSubOrderReturn::SettleInfoHasBeenSet() const
{
    return m_settleInfoHasBeenSet;
}

string CloudSubOrderReturn::GetMetadata() const
{
    return m_metadata;
}

void CloudSubOrderReturn::SetMetadata(const string& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool CloudSubOrderReturn::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

CloudAttachmentInfo CloudSubOrderReturn::GetAttachmentInfoList() const
{
    return m_attachmentInfoList;
}

void CloudSubOrderReturn::SetAttachmentInfoList(const CloudAttachmentInfo& _attachmentInfoList)
{
    m_attachmentInfoList = _attachmentInfoList;
    m_attachmentInfoListHasBeenSet = true;
}

bool CloudSubOrderReturn::AttachmentInfoListHasBeenSet() const
{
    return m_attachmentInfoListHasBeenSet;
}

string CloudSubOrderReturn::GetChannelExternalSubOrderId() const
{
    return m_channelExternalSubOrderId;
}

void CloudSubOrderReturn::SetChannelExternalSubOrderId(const string& _channelExternalSubOrderId)
{
    m_channelExternalSubOrderId = _channelExternalSubOrderId;
    m_channelExternalSubOrderIdHasBeenSet = true;
}

bool CloudSubOrderReturn::ChannelExternalSubOrderIdHasBeenSet() const
{
    return m_channelExternalSubOrderIdHasBeenSet;
}

string CloudSubOrderReturn::GetWxSubMchId() const
{
    return m_wxSubMchId;
}

void CloudSubOrderReturn::SetWxSubMchId(const string& _wxSubMchId)
{
    m_wxSubMchId = _wxSubMchId;
    m_wxSubMchIdHasBeenSet = true;
}

bool CloudSubOrderReturn::WxSubMchIdHasBeenSet() const
{
    return m_wxSubMchIdHasBeenSet;
}

string CloudSubOrderReturn::GetChannelSubPayOrderId() const
{
    return m_channelSubPayOrderId;
}

void CloudSubOrderReturn::SetChannelSubPayOrderId(const string& _channelSubPayOrderId)
{
    m_channelSubPayOrderId = _channelSubPayOrderId;
    m_channelSubPayOrderIdHasBeenSet = true;
}

bool CloudSubOrderReturn::ChannelSubPayOrderIdHasBeenSet() const
{
    return m_channelSubPayOrderIdHasBeenSet;
}

string CloudSubOrderReturn::GetProductId() const
{
    return m_productId;
}

void CloudSubOrderReturn::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CloudSubOrderReturn::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}


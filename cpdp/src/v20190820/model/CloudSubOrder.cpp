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

#include <tencentcloud/cpdp/v20190820/model/CloudSubOrder.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CloudSubOrder::CloudSubOrder() :
    m_subOutTradeNoHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_productDetailHasBeenSet(false),
    m_platformIncomeHasBeenSet(false),
    m_subMchIncomeHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_amtHasBeenSet(false),
    m_originalAmtHasBeenSet(false),
    m_wxSubMchIdHasBeenSet(false),
    m_settleInfoHasBeenSet(false),
    m_attachmentInfoListHasBeenSet(false),
    m_externalAttachmentDataListHasBeenSet(false)
{
}

CoreInternalOutcome CloudSubOrder::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubOutTradeNo") && !value["SubOutTradeNo"].IsNull())
    {
        if (!value["SubOutTradeNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrder.SubOutTradeNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subOutTradeNo = string(value["SubOutTradeNo"].GetString());
        m_subOutTradeNoHasBeenSet = true;
    }

    if (value.HasMember("SubAppId") && !value["SubAppId"].IsNull())
    {
        if (!value["SubAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrder.SubAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAppId = string(value["SubAppId"].GetString());
        m_subAppIdHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrder.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("ProductDetail") && !value["ProductDetail"].IsNull())
    {
        if (!value["ProductDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrder.ProductDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productDetail = string(value["ProductDetail"].GetString());
        m_productDetailHasBeenSet = true;
    }

    if (value.HasMember("PlatformIncome") && !value["PlatformIncome"].IsNull())
    {
        if (!value["PlatformIncome"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrder.PlatformIncome` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_platformIncome = value["PlatformIncome"].GetInt64();
        m_platformIncomeHasBeenSet = true;
    }

    if (value.HasMember("SubMchIncome") && !value["SubMchIncome"].IsNull())
    {
        if (!value["SubMchIncome"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrder.SubMchIncome` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subMchIncome = value["SubMchIncome"].GetInt64();
        m_subMchIncomeHasBeenSet = true;
    }

    if (value.HasMember("Metadata") && !value["Metadata"].IsNull())
    {
        if (!value["Metadata"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrder.Metadata` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metadata = string(value["Metadata"].GetString());
        m_metadataHasBeenSet = true;
    }

    if (value.HasMember("Amt") && !value["Amt"].IsNull())
    {
        if (!value["Amt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrder.Amt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_amt = value["Amt"].GetInt64();
        m_amtHasBeenSet = true;
    }

    if (value.HasMember("OriginalAmt") && !value["OriginalAmt"].IsNull())
    {
        if (!value["OriginalAmt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrder.OriginalAmt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originalAmt = value["OriginalAmt"].GetInt64();
        m_originalAmtHasBeenSet = true;
    }

    if (value.HasMember("WxSubMchId") && !value["WxSubMchId"].IsNull())
    {
        if (!value["WxSubMchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrder.WxSubMchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wxSubMchId = string(value["WxSubMchId"].GetString());
        m_wxSubMchIdHasBeenSet = true;
    }

    if (value.HasMember("SettleInfo") && !value["SettleInfo"].IsNull())
    {
        if (!value["SettleInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrder.SettleInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_settleInfo.Deserialize(value["SettleInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_settleInfoHasBeenSet = true;
    }

    if (value.HasMember("AttachmentInfoList") && !value["AttachmentInfoList"].IsNull())
    {
        if (!value["AttachmentInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudSubOrder.AttachmentInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["AttachmentInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudAttachmentInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_attachmentInfoList.push_back(item);
        }
        m_attachmentInfoListHasBeenSet = true;
    }

    if (value.HasMember("ExternalAttachmentDataList") && !value["ExternalAttachmentDataList"].IsNull())
    {
        if (!value["ExternalAttachmentDataList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudSubOrder.ExternalAttachmentDataList` is not array type"));

        const rapidjson::Value &tmpValue = value["ExternalAttachmentDataList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudExternalAttachmentData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_externalAttachmentDataList.push_back(item);
        }
        m_externalAttachmentDataListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudSubOrder::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metadata.c_str(), allocator).Move(), allocator);
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

    if (m_wxSubMchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxSubMchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wxSubMchId.c_str(), allocator).Move(), allocator);
    }

    if (m_settleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_settleInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_attachmentInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachmentInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attachmentInfoList.begin(); itr != m_attachmentInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_externalAttachmentDataListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalAttachmentDataList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_externalAttachmentDataList.begin(); itr != m_externalAttachmentDataList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CloudSubOrder::GetSubOutTradeNo() const
{
    return m_subOutTradeNo;
}

void CloudSubOrder::SetSubOutTradeNo(const string& _subOutTradeNo)
{
    m_subOutTradeNo = _subOutTradeNo;
    m_subOutTradeNoHasBeenSet = true;
}

bool CloudSubOrder::SubOutTradeNoHasBeenSet() const
{
    return m_subOutTradeNoHasBeenSet;
}

string CloudSubOrder::GetSubAppId() const
{
    return m_subAppId;
}

void CloudSubOrder::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CloudSubOrder::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CloudSubOrder::GetProductName() const
{
    return m_productName;
}

void CloudSubOrder::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool CloudSubOrder::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string CloudSubOrder::GetProductDetail() const
{
    return m_productDetail;
}

void CloudSubOrder::SetProductDetail(const string& _productDetail)
{
    m_productDetail = _productDetail;
    m_productDetailHasBeenSet = true;
}

bool CloudSubOrder::ProductDetailHasBeenSet() const
{
    return m_productDetailHasBeenSet;
}

int64_t CloudSubOrder::GetPlatformIncome() const
{
    return m_platformIncome;
}

void CloudSubOrder::SetPlatformIncome(const int64_t& _platformIncome)
{
    m_platformIncome = _platformIncome;
    m_platformIncomeHasBeenSet = true;
}

bool CloudSubOrder::PlatformIncomeHasBeenSet() const
{
    return m_platformIncomeHasBeenSet;
}

int64_t CloudSubOrder::GetSubMchIncome() const
{
    return m_subMchIncome;
}

void CloudSubOrder::SetSubMchIncome(const int64_t& _subMchIncome)
{
    m_subMchIncome = _subMchIncome;
    m_subMchIncomeHasBeenSet = true;
}

bool CloudSubOrder::SubMchIncomeHasBeenSet() const
{
    return m_subMchIncomeHasBeenSet;
}

string CloudSubOrder::GetMetadata() const
{
    return m_metadata;
}

void CloudSubOrder::SetMetadata(const string& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool CloudSubOrder::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

int64_t CloudSubOrder::GetAmt() const
{
    return m_amt;
}

void CloudSubOrder::SetAmt(const int64_t& _amt)
{
    m_amt = _amt;
    m_amtHasBeenSet = true;
}

bool CloudSubOrder::AmtHasBeenSet() const
{
    return m_amtHasBeenSet;
}

int64_t CloudSubOrder::GetOriginalAmt() const
{
    return m_originalAmt;
}

void CloudSubOrder::SetOriginalAmt(const int64_t& _originalAmt)
{
    m_originalAmt = _originalAmt;
    m_originalAmtHasBeenSet = true;
}

bool CloudSubOrder::OriginalAmtHasBeenSet() const
{
    return m_originalAmtHasBeenSet;
}

string CloudSubOrder::GetWxSubMchId() const
{
    return m_wxSubMchId;
}

void CloudSubOrder::SetWxSubMchId(const string& _wxSubMchId)
{
    m_wxSubMchId = _wxSubMchId;
    m_wxSubMchIdHasBeenSet = true;
}

bool CloudSubOrder::WxSubMchIdHasBeenSet() const
{
    return m_wxSubMchIdHasBeenSet;
}

CloudSettleInfo CloudSubOrder::GetSettleInfo() const
{
    return m_settleInfo;
}

void CloudSubOrder::SetSettleInfo(const CloudSettleInfo& _settleInfo)
{
    m_settleInfo = _settleInfo;
    m_settleInfoHasBeenSet = true;
}

bool CloudSubOrder::SettleInfoHasBeenSet() const
{
    return m_settleInfoHasBeenSet;
}

vector<CloudAttachmentInfo> CloudSubOrder::GetAttachmentInfoList() const
{
    return m_attachmentInfoList;
}

void CloudSubOrder::SetAttachmentInfoList(const vector<CloudAttachmentInfo>& _attachmentInfoList)
{
    m_attachmentInfoList = _attachmentInfoList;
    m_attachmentInfoListHasBeenSet = true;
}

bool CloudSubOrder::AttachmentInfoListHasBeenSet() const
{
    return m_attachmentInfoListHasBeenSet;
}

vector<CloudExternalAttachmentData> CloudSubOrder::GetExternalAttachmentDataList() const
{
    return m_externalAttachmentDataList;
}

void CloudSubOrder::SetExternalAttachmentDataList(const vector<CloudExternalAttachmentData>& _externalAttachmentDataList)
{
    m_externalAttachmentDataList = _externalAttachmentDataList;
    m_externalAttachmentDataListHasBeenSet = true;
}

bool CloudSubOrder::ExternalAttachmentDataListHasBeenSet() const
{
    return m_externalAttachmentDataListHasBeenSet;
}


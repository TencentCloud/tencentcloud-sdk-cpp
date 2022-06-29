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

#include <tencentcloud/cpdp/v20190820/model/RefundCloudOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

RefundCloudOrderRequest::RefundCloudOrderRequest() :
    m_midasAppIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_refundIdHasBeenSet(false),
    m_totalRefundAmtHasBeenSet(false),
    m_outTradeNoHasBeenSet(false),
    m_midasEnvironmentHasBeenSet(false),
    m_platformRefundAmtHasBeenSet(false),
    m_mchRefundAmtHasBeenSet(false),
    m_subOrderRefundListHasBeenSet(false),
    m_channelOrderIdHasBeenSet(false),
    m_refundNotifyUrlHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_externalRefundPromptGroupListHasBeenSet(false)
{
}

string RefundCloudOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_midasAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_refundIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_refundId.c_str(), allocator).Move(), allocator);
    }

    if (m_totalRefundAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRefundAmt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_totalRefundAmt, allocator);
    }

    if (m_outTradeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutTradeNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outTradeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_midasEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasEnvironment.c_str(), allocator).Move(), allocator);
    }

    if (m_platformRefundAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformRefundAmt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_platformRefundAmt, allocator);
    }

    if (m_mchRefundAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MchRefundAmt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mchRefundAmt, allocator);
    }

    if (m_subOrderRefundListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubOrderRefundList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subOrderRefundList.begin(); itr != m_subOrderRefundList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_channelOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelOrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_refundNotifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundNotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_refundNotifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metadata.c_str(), allocator).Move(), allocator);
    }

    if (m_externalRefundPromptGroupListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalRefundPromptGroupList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_externalRefundPromptGroupList.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RefundCloudOrderRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void RefundCloudOrderRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool RefundCloudOrderRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string RefundCloudOrderRequest::GetUserId() const
{
    return m_userId;
}

void RefundCloudOrderRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool RefundCloudOrderRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string RefundCloudOrderRequest::GetRefundId() const
{
    return m_refundId;
}

void RefundCloudOrderRequest::SetRefundId(const string& _refundId)
{
    m_refundId = _refundId;
    m_refundIdHasBeenSet = true;
}

bool RefundCloudOrderRequest::RefundIdHasBeenSet() const
{
    return m_refundIdHasBeenSet;
}

int64_t RefundCloudOrderRequest::GetTotalRefundAmt() const
{
    return m_totalRefundAmt;
}

void RefundCloudOrderRequest::SetTotalRefundAmt(const int64_t& _totalRefundAmt)
{
    m_totalRefundAmt = _totalRefundAmt;
    m_totalRefundAmtHasBeenSet = true;
}

bool RefundCloudOrderRequest::TotalRefundAmtHasBeenSet() const
{
    return m_totalRefundAmtHasBeenSet;
}

string RefundCloudOrderRequest::GetOutTradeNo() const
{
    return m_outTradeNo;
}

void RefundCloudOrderRequest::SetOutTradeNo(const string& _outTradeNo)
{
    m_outTradeNo = _outTradeNo;
    m_outTradeNoHasBeenSet = true;
}

bool RefundCloudOrderRequest::OutTradeNoHasBeenSet() const
{
    return m_outTradeNoHasBeenSet;
}

string RefundCloudOrderRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void RefundCloudOrderRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool RefundCloudOrderRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}

int64_t RefundCloudOrderRequest::GetPlatformRefundAmt() const
{
    return m_platformRefundAmt;
}

void RefundCloudOrderRequest::SetPlatformRefundAmt(const int64_t& _platformRefundAmt)
{
    m_platformRefundAmt = _platformRefundAmt;
    m_platformRefundAmtHasBeenSet = true;
}

bool RefundCloudOrderRequest::PlatformRefundAmtHasBeenSet() const
{
    return m_platformRefundAmtHasBeenSet;
}

int64_t RefundCloudOrderRequest::GetMchRefundAmt() const
{
    return m_mchRefundAmt;
}

void RefundCloudOrderRequest::SetMchRefundAmt(const int64_t& _mchRefundAmt)
{
    m_mchRefundAmt = _mchRefundAmt;
    m_mchRefundAmtHasBeenSet = true;
}

bool RefundCloudOrderRequest::MchRefundAmtHasBeenSet() const
{
    return m_mchRefundAmtHasBeenSet;
}

vector<CloudSubOrderRefund> RefundCloudOrderRequest::GetSubOrderRefundList() const
{
    return m_subOrderRefundList;
}

void RefundCloudOrderRequest::SetSubOrderRefundList(const vector<CloudSubOrderRefund>& _subOrderRefundList)
{
    m_subOrderRefundList = _subOrderRefundList;
    m_subOrderRefundListHasBeenSet = true;
}

bool RefundCloudOrderRequest::SubOrderRefundListHasBeenSet() const
{
    return m_subOrderRefundListHasBeenSet;
}

string RefundCloudOrderRequest::GetChannelOrderId() const
{
    return m_channelOrderId;
}

void RefundCloudOrderRequest::SetChannelOrderId(const string& _channelOrderId)
{
    m_channelOrderId = _channelOrderId;
    m_channelOrderIdHasBeenSet = true;
}

bool RefundCloudOrderRequest::ChannelOrderIdHasBeenSet() const
{
    return m_channelOrderIdHasBeenSet;
}

string RefundCloudOrderRequest::GetRefundNotifyUrl() const
{
    return m_refundNotifyUrl;
}

void RefundCloudOrderRequest::SetRefundNotifyUrl(const string& _refundNotifyUrl)
{
    m_refundNotifyUrl = _refundNotifyUrl;
    m_refundNotifyUrlHasBeenSet = true;
}

bool RefundCloudOrderRequest::RefundNotifyUrlHasBeenSet() const
{
    return m_refundNotifyUrlHasBeenSet;
}

string RefundCloudOrderRequest::GetMetadata() const
{
    return m_metadata;
}

void RefundCloudOrderRequest::SetMetadata(const string& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool RefundCloudOrderRequest::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

string RefundCloudOrderRequest::GetExternalRefundPromptGroupList() const
{
    return m_externalRefundPromptGroupList;
}

void RefundCloudOrderRequest::SetExternalRefundPromptGroupList(const string& _externalRefundPromptGroupList)
{
    m_externalRefundPromptGroupList = _externalRefundPromptGroupList;
    m_externalRefundPromptGroupListHasBeenSet = true;
}

bool RefundCloudOrderRequest::ExternalRefundPromptGroupListHasBeenSet() const
{
    return m_externalRefundPromptGroupListHasBeenSet;
}



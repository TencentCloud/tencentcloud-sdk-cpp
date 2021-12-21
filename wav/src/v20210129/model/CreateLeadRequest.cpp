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

#include <tencentcloud/wav/v20210129/model/CreateLeadRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

CreateLeadRequest::CreateLeadRequest() :
    m_channelIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_dealerIdHasBeenSet(false),
    m_brandIdHasBeenSet(false),
    m_seriesIdHasBeenSet(false),
    m_customerNameHasBeenSet(false),
    m_customerPhoneHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_customerSexHasBeenSet(false),
    m_salesNameHasBeenSet(false),
    m_salesPhoneHasBeenSet(false),
    m_ccNameHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string CreateLeadRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_channelId, allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_createTime, allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_dealerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dealerId, allocator);
    }

    if (m_brandIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_brandId, allocator);
    }

    if (m_seriesIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeriesId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_seriesId, allocator);
    }

    if (m_customerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customerName.c_str(), allocator).Move(), allocator);
    }

    if (m_customerPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerPhone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customerPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_modelId, allocator);
    }

    if (m_customerSexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerSex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_customerSex, allocator);
    }

    if (m_salesNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_salesName.c_str(), allocator).Move(), allocator);
    }

    if (m_salesPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesPhone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_salesPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_ccNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateLeadRequest::GetChannelId() const
{
    return m_channelId;
}

void CreateLeadRequest::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool CreateLeadRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string CreateLeadRequest::GetChannelName() const
{
    return m_channelName;
}

void CreateLeadRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool CreateLeadRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

uint64_t CreateLeadRequest::GetCreateTime() const
{
    return m_createTime;
}

void CreateLeadRequest::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CreateLeadRequest::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t CreateLeadRequest::GetSourceType() const
{
    return m_sourceType;
}

void CreateLeadRequest::SetSourceType(const int64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool CreateLeadRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

uint64_t CreateLeadRequest::GetDealerId() const
{
    return m_dealerId;
}

void CreateLeadRequest::SetDealerId(const uint64_t& _dealerId)
{
    m_dealerId = _dealerId;
    m_dealerIdHasBeenSet = true;
}

bool CreateLeadRequest::DealerIdHasBeenSet() const
{
    return m_dealerIdHasBeenSet;
}

uint64_t CreateLeadRequest::GetBrandId() const
{
    return m_brandId;
}

void CreateLeadRequest::SetBrandId(const uint64_t& _brandId)
{
    m_brandId = _brandId;
    m_brandIdHasBeenSet = true;
}

bool CreateLeadRequest::BrandIdHasBeenSet() const
{
    return m_brandIdHasBeenSet;
}

uint64_t CreateLeadRequest::GetSeriesId() const
{
    return m_seriesId;
}

void CreateLeadRequest::SetSeriesId(const uint64_t& _seriesId)
{
    m_seriesId = _seriesId;
    m_seriesIdHasBeenSet = true;
}

bool CreateLeadRequest::SeriesIdHasBeenSet() const
{
    return m_seriesIdHasBeenSet;
}

string CreateLeadRequest::GetCustomerName() const
{
    return m_customerName;
}

void CreateLeadRequest::SetCustomerName(const string& _customerName)
{
    m_customerName = _customerName;
    m_customerNameHasBeenSet = true;
}

bool CreateLeadRequest::CustomerNameHasBeenSet() const
{
    return m_customerNameHasBeenSet;
}

string CreateLeadRequest::GetCustomerPhone() const
{
    return m_customerPhone;
}

void CreateLeadRequest::SetCustomerPhone(const string& _customerPhone)
{
    m_customerPhone = _customerPhone;
    m_customerPhoneHasBeenSet = true;
}

bool CreateLeadRequest::CustomerPhoneHasBeenSet() const
{
    return m_customerPhoneHasBeenSet;
}

uint64_t CreateLeadRequest::GetModelId() const
{
    return m_modelId;
}

void CreateLeadRequest::SetModelId(const uint64_t& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool CreateLeadRequest::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

int64_t CreateLeadRequest::GetCustomerSex() const
{
    return m_customerSex;
}

void CreateLeadRequest::SetCustomerSex(const int64_t& _customerSex)
{
    m_customerSex = _customerSex;
    m_customerSexHasBeenSet = true;
}

bool CreateLeadRequest::CustomerSexHasBeenSet() const
{
    return m_customerSexHasBeenSet;
}

string CreateLeadRequest::GetSalesName() const
{
    return m_salesName;
}

void CreateLeadRequest::SetSalesName(const string& _salesName)
{
    m_salesName = _salesName;
    m_salesNameHasBeenSet = true;
}

bool CreateLeadRequest::SalesNameHasBeenSet() const
{
    return m_salesNameHasBeenSet;
}

string CreateLeadRequest::GetSalesPhone() const
{
    return m_salesPhone;
}

void CreateLeadRequest::SetSalesPhone(const string& _salesPhone)
{
    m_salesPhone = _salesPhone;
    m_salesPhoneHasBeenSet = true;
}

bool CreateLeadRequest::SalesPhoneHasBeenSet() const
{
    return m_salesPhoneHasBeenSet;
}

string CreateLeadRequest::GetCcName() const
{
    return m_ccName;
}

void CreateLeadRequest::SetCcName(const string& _ccName)
{
    m_ccName = _ccName;
    m_ccNameHasBeenSet = true;
}

bool CreateLeadRequest::CcNameHasBeenSet() const
{
    return m_ccNameHasBeenSet;
}

string CreateLeadRequest::GetRemark() const
{
    return m_remark;
}

void CreateLeadRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateLeadRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}



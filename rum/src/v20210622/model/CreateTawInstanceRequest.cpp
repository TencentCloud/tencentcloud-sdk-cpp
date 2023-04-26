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

#include <tencentcloud/rum/v20210622/model/CreateTawInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

CreateTawInstanceRequest::CreateTawInstanceRequest() :
    m_areaIdHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_dataRetentionDaysHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_instanceDescHasBeenSet(false),
    m_countNumHasBeenSet(false),
    m_periodRetainHasBeenSet(false),
    m_buyingChannelHasBeenSet(false),
    m_resourcePackageTypeHasBeenSet(false),
    m_resourcePackageNumHasBeenSet(false),
    m_instanceTypeHasBeenSet(false)
{
}

string CreateTawInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_areaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_areaId, allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_chargeType, allocator);
    }

    if (m_dataRetentionDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataRetentionDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataRetentionDays, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_instanceDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_countNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_countNum.c_str(), allocator).Move(), allocator);
    }

    if (m_periodRetainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodRetain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_periodRetain.c_str(), allocator).Move(), allocator);
    }

    if (m_buyingChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyingChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_buyingChannel.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcePackageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePackageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourcePackageType, allocator);
    }

    if (m_resourcePackageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePackageNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourcePackageNum, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateTawInstanceRequest::GetAreaId() const
{
    return m_areaId;
}

void CreateTawInstanceRequest::SetAreaId(const int64_t& _areaId)
{
    m_areaId = _areaId;
    m_areaIdHasBeenSet = true;
}

bool CreateTawInstanceRequest::AreaIdHasBeenSet() const
{
    return m_areaIdHasBeenSet;
}

int64_t CreateTawInstanceRequest::GetChargeType() const
{
    return m_chargeType;
}

void CreateTawInstanceRequest::SetChargeType(const int64_t& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool CreateTawInstanceRequest::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

int64_t CreateTawInstanceRequest::GetDataRetentionDays() const
{
    return m_dataRetentionDays;
}

void CreateTawInstanceRequest::SetDataRetentionDays(const int64_t& _dataRetentionDays)
{
    m_dataRetentionDays = _dataRetentionDays;
    m_dataRetentionDaysHasBeenSet = true;
}

bool CreateTawInstanceRequest::DataRetentionDaysHasBeenSet() const
{
    return m_dataRetentionDaysHasBeenSet;
}

string CreateTawInstanceRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateTawInstanceRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateTawInstanceRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

vector<Tag> CreateTawInstanceRequest::GetTags() const
{
    return m_tags;
}

void CreateTawInstanceRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateTawInstanceRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateTawInstanceRequest::GetInstanceDesc() const
{
    return m_instanceDesc;
}

void CreateTawInstanceRequest::SetInstanceDesc(const string& _instanceDesc)
{
    m_instanceDesc = _instanceDesc;
    m_instanceDescHasBeenSet = true;
}

bool CreateTawInstanceRequest::InstanceDescHasBeenSet() const
{
    return m_instanceDescHasBeenSet;
}

string CreateTawInstanceRequest::GetCountNum() const
{
    return m_countNum;
}

void CreateTawInstanceRequest::SetCountNum(const string& _countNum)
{
    m_countNum = _countNum;
    m_countNumHasBeenSet = true;
}

bool CreateTawInstanceRequest::CountNumHasBeenSet() const
{
    return m_countNumHasBeenSet;
}

string CreateTawInstanceRequest::GetPeriodRetain() const
{
    return m_periodRetain;
}

void CreateTawInstanceRequest::SetPeriodRetain(const string& _periodRetain)
{
    m_periodRetain = _periodRetain;
    m_periodRetainHasBeenSet = true;
}

bool CreateTawInstanceRequest::PeriodRetainHasBeenSet() const
{
    return m_periodRetainHasBeenSet;
}

string CreateTawInstanceRequest::GetBuyingChannel() const
{
    return m_buyingChannel;
}

void CreateTawInstanceRequest::SetBuyingChannel(const string& _buyingChannel)
{
    m_buyingChannel = _buyingChannel;
    m_buyingChannelHasBeenSet = true;
}

bool CreateTawInstanceRequest::BuyingChannelHasBeenSet() const
{
    return m_buyingChannelHasBeenSet;
}

uint64_t CreateTawInstanceRequest::GetResourcePackageType() const
{
    return m_resourcePackageType;
}

void CreateTawInstanceRequest::SetResourcePackageType(const uint64_t& _resourcePackageType)
{
    m_resourcePackageType = _resourcePackageType;
    m_resourcePackageTypeHasBeenSet = true;
}

bool CreateTawInstanceRequest::ResourcePackageTypeHasBeenSet() const
{
    return m_resourcePackageTypeHasBeenSet;
}

uint64_t CreateTawInstanceRequest::GetResourcePackageNum() const
{
    return m_resourcePackageNum;
}

void CreateTawInstanceRequest::SetResourcePackageNum(const uint64_t& _resourcePackageNum)
{
    m_resourcePackageNum = _resourcePackageNum;
    m_resourcePackageNumHasBeenSet = true;
}

bool CreateTawInstanceRequest::ResourcePackageNumHasBeenSet() const
{
    return m_resourcePackageNumHasBeenSet;
}

int64_t CreateTawInstanceRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateTawInstanceRequest::SetInstanceType(const int64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateTawInstanceRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}



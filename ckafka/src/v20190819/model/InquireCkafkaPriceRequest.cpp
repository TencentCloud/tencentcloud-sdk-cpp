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

#include <tencentcloud/ckafka/v20190819/model/InquireCkafkaPriceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

InquireCkafkaPriceRequest::InquireCkafkaPriceRequest() :
    m_instanceTypeHasBeenSet(false),
    m_instanceChargeParamHasBeenSet(false),
    m_instanceNumHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_inquiryDiskParamHasBeenSet(false),
    m_messageRetentionHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_partitionHasBeenSet(false),
    m_zoneIdsHasBeenSet(false),
    m_categoryActionHasBeenSet(false),
    m_billTypeHasBeenSet(false),
    m_publicNetworkParamHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

string InquireCkafkaPriceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceChargeParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_instanceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceNum, allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_inquiryDiskParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InquiryDiskParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inquiryDiskParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_messageRetentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageRetention";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_messageRetention, allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_topic, allocator);
    }

    if (m_partitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_partition, allocator);
    }

    if (m_zoneIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zoneIds.begin(); itr != m_zoneIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_categoryActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_categoryAction.c_str(), allocator).Move(), allocator);
    }

    if (m_billTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_billType.c_str(), allocator).Move(), allocator);
    }

    if (m_publicNetworkParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicNetworkParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_publicNetworkParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InquireCkafkaPriceRequest::GetInstanceType() const
{
    return m_instanceType;
}

void InquireCkafkaPriceRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InquireCkafkaPriceRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

InstanceChargeParam InquireCkafkaPriceRequest::GetInstanceChargeParam() const
{
    return m_instanceChargeParam;
}

void InquireCkafkaPriceRequest::SetInstanceChargeParam(const InstanceChargeParam& _instanceChargeParam)
{
    m_instanceChargeParam = _instanceChargeParam;
    m_instanceChargeParamHasBeenSet = true;
}

bool InquireCkafkaPriceRequest::InstanceChargeParamHasBeenSet() const
{
    return m_instanceChargeParamHasBeenSet;
}

int64_t InquireCkafkaPriceRequest::GetInstanceNum() const
{
    return m_instanceNum;
}

void InquireCkafkaPriceRequest::SetInstanceNum(const int64_t& _instanceNum)
{
    m_instanceNum = _instanceNum;
    m_instanceNumHasBeenSet = true;
}

bool InquireCkafkaPriceRequest::InstanceNumHasBeenSet() const
{
    return m_instanceNumHasBeenSet;
}

int64_t InquireCkafkaPriceRequest::GetBandwidth() const
{
    return m_bandwidth;
}

void InquireCkafkaPriceRequest::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool InquireCkafkaPriceRequest::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

InquiryDiskParam InquireCkafkaPriceRequest::GetInquiryDiskParam() const
{
    return m_inquiryDiskParam;
}

void InquireCkafkaPriceRequest::SetInquiryDiskParam(const InquiryDiskParam& _inquiryDiskParam)
{
    m_inquiryDiskParam = _inquiryDiskParam;
    m_inquiryDiskParamHasBeenSet = true;
}

bool InquireCkafkaPriceRequest::InquiryDiskParamHasBeenSet() const
{
    return m_inquiryDiskParamHasBeenSet;
}

int64_t InquireCkafkaPriceRequest::GetMessageRetention() const
{
    return m_messageRetention;
}

void InquireCkafkaPriceRequest::SetMessageRetention(const int64_t& _messageRetention)
{
    m_messageRetention = _messageRetention;
    m_messageRetentionHasBeenSet = true;
}

bool InquireCkafkaPriceRequest::MessageRetentionHasBeenSet() const
{
    return m_messageRetentionHasBeenSet;
}

int64_t InquireCkafkaPriceRequest::GetTopic() const
{
    return m_topic;
}

void InquireCkafkaPriceRequest::SetTopic(const int64_t& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool InquireCkafkaPriceRequest::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

int64_t InquireCkafkaPriceRequest::GetPartition() const
{
    return m_partition;
}

void InquireCkafkaPriceRequest::SetPartition(const int64_t& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool InquireCkafkaPriceRequest::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}

vector<int64_t> InquireCkafkaPriceRequest::GetZoneIds() const
{
    return m_zoneIds;
}

void InquireCkafkaPriceRequest::SetZoneIds(const vector<int64_t>& _zoneIds)
{
    m_zoneIds = _zoneIds;
    m_zoneIdsHasBeenSet = true;
}

bool InquireCkafkaPriceRequest::ZoneIdsHasBeenSet() const
{
    return m_zoneIdsHasBeenSet;
}

string InquireCkafkaPriceRequest::GetCategoryAction() const
{
    return m_categoryAction;
}

void InquireCkafkaPriceRequest::SetCategoryAction(const string& _categoryAction)
{
    m_categoryAction = _categoryAction;
    m_categoryActionHasBeenSet = true;
}

bool InquireCkafkaPriceRequest::CategoryActionHasBeenSet() const
{
    return m_categoryActionHasBeenSet;
}

string InquireCkafkaPriceRequest::GetBillType() const
{
    return m_billType;
}

void InquireCkafkaPriceRequest::SetBillType(const string& _billType)
{
    m_billType = _billType;
    m_billTypeHasBeenSet = true;
}

bool InquireCkafkaPriceRequest::BillTypeHasBeenSet() const
{
    return m_billTypeHasBeenSet;
}

InquiryPublicNetworkParam InquireCkafkaPriceRequest::GetPublicNetworkParam() const
{
    return m_publicNetworkParam;
}

void InquireCkafkaPriceRequest::SetPublicNetworkParam(const InquiryPublicNetworkParam& _publicNetworkParam)
{
    m_publicNetworkParam = _publicNetworkParam;
    m_publicNetworkParamHasBeenSet = true;
}

bool InquireCkafkaPriceRequest::PublicNetworkParamHasBeenSet() const
{
    return m_publicNetworkParamHasBeenSet;
}

string InquireCkafkaPriceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void InquireCkafkaPriceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InquireCkafkaPriceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}



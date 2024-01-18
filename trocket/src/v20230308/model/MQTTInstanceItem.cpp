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

#include <tencentcloud/trocket/v20230308/model/MQTTInstanceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

MQTTInstanceItem::MQTTInstanceItem() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_topicNumLimitHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_topicNumHasBeenSet(false),
    m_skuCodeHasBeenSet(false),
    m_tpsLimitHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_subscriptionNumLimitHasBeenSet(false),
    m_clientNumLimitHasBeenSet(false)
{
}

CoreInternalOutcome MQTTInstanceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTInstanceItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTInstanceItem.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTInstanceItem.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTInstanceItem.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTInstanceItem.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("TopicNumLimit") && !value["TopicNumLimit"].IsNull())
    {
        if (!value["TopicNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTInstanceItem.TopicNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNumLimit = value["TopicNumLimit"].GetInt64();
        m_topicNumLimitHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTInstanceItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("TopicNum") && !value["TopicNum"].IsNull())
    {
        if (!value["TopicNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTInstanceItem.TopicNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNum = value["TopicNum"].GetInt64();
        m_topicNumHasBeenSet = true;
    }

    if (value.HasMember("SkuCode") && !value["SkuCode"].IsNull())
    {
        if (!value["SkuCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTInstanceItem.SkuCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skuCode = string(value["SkuCode"].GetString());
        m_skuCodeHasBeenSet = true;
    }

    if (value.HasMember("TpsLimit") && !value["TpsLimit"].IsNull())
    {
        if (!value["TpsLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTInstanceItem.TpsLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tpsLimit = value["TpsLimit"].GetInt64();
        m_tpsLimitHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTInstanceItem.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("SubscriptionNumLimit") && !value["SubscriptionNumLimit"].IsNull())
    {
        if (!value["SubscriptionNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTInstanceItem.SubscriptionNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subscriptionNumLimit = value["SubscriptionNumLimit"].GetInt64();
        m_subscriptionNumLimitHasBeenSet = true;
    }

    if (value.HasMember("ClientNumLimit") && !value["ClientNumLimit"].IsNull())
    {
        if (!value["ClientNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTInstanceItem.ClientNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clientNumLimit = value["ClientNumLimit"].GetInt64();
        m_clientNumLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MQTTInstanceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNumLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNumLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicNumLimit, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicNum, allocator);
    }

    if (m_skuCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkuCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skuCode.c_str(), allocator).Move(), allocator);
    }

    if (m_tpsLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TpsLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tpsLimit, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_subscriptionNumLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscriptionNumLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subscriptionNumLimit, allocator);
    }

    if (m_clientNumLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientNumLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientNumLimit, allocator);
    }

}


string MQTTInstanceItem::GetInstanceId() const
{
    return m_instanceId;
}

void MQTTInstanceItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool MQTTInstanceItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string MQTTInstanceItem::GetInstanceName() const
{
    return m_instanceName;
}

void MQTTInstanceItem::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool MQTTInstanceItem::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string MQTTInstanceItem::GetVersion() const
{
    return m_version;
}

void MQTTInstanceItem::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool MQTTInstanceItem::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string MQTTInstanceItem::GetInstanceType() const
{
    return m_instanceType;
}

void MQTTInstanceItem::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool MQTTInstanceItem::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string MQTTInstanceItem::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void MQTTInstanceItem::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool MQTTInstanceItem::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

int64_t MQTTInstanceItem::GetTopicNumLimit() const
{
    return m_topicNumLimit;
}

void MQTTInstanceItem::SetTopicNumLimit(const int64_t& _topicNumLimit)
{
    m_topicNumLimit = _topicNumLimit;
    m_topicNumLimitHasBeenSet = true;
}

bool MQTTInstanceItem::TopicNumLimitHasBeenSet() const
{
    return m_topicNumLimitHasBeenSet;
}

string MQTTInstanceItem::GetRemark() const
{
    return m_remark;
}

void MQTTInstanceItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool MQTTInstanceItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t MQTTInstanceItem::GetTopicNum() const
{
    return m_topicNum;
}

void MQTTInstanceItem::SetTopicNum(const int64_t& _topicNum)
{
    m_topicNum = _topicNum;
    m_topicNumHasBeenSet = true;
}

bool MQTTInstanceItem::TopicNumHasBeenSet() const
{
    return m_topicNumHasBeenSet;
}

string MQTTInstanceItem::GetSkuCode() const
{
    return m_skuCode;
}

void MQTTInstanceItem::SetSkuCode(const string& _skuCode)
{
    m_skuCode = _skuCode;
    m_skuCodeHasBeenSet = true;
}

bool MQTTInstanceItem::SkuCodeHasBeenSet() const
{
    return m_skuCodeHasBeenSet;
}

int64_t MQTTInstanceItem::GetTpsLimit() const
{
    return m_tpsLimit;
}

void MQTTInstanceItem::SetTpsLimit(const int64_t& _tpsLimit)
{
    m_tpsLimit = _tpsLimit;
    m_tpsLimitHasBeenSet = true;
}

bool MQTTInstanceItem::TpsLimitHasBeenSet() const
{
    return m_tpsLimitHasBeenSet;
}

int64_t MQTTInstanceItem::GetCreateTime() const
{
    return m_createTime;
}

void MQTTInstanceItem::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MQTTInstanceItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t MQTTInstanceItem::GetSubscriptionNumLimit() const
{
    return m_subscriptionNumLimit;
}

void MQTTInstanceItem::SetSubscriptionNumLimit(const int64_t& _subscriptionNumLimit)
{
    m_subscriptionNumLimit = _subscriptionNumLimit;
    m_subscriptionNumLimitHasBeenSet = true;
}

bool MQTTInstanceItem::SubscriptionNumLimitHasBeenSet() const
{
    return m_subscriptionNumLimitHasBeenSet;
}

int64_t MQTTInstanceItem::GetClientNumLimit() const
{
    return m_clientNumLimit;
}

void MQTTInstanceItem::SetClientNumLimit(const int64_t& _clientNumLimit)
{
    m_clientNumLimit = _clientNumLimit;
    m_clientNumLimitHasBeenSet = true;
}

bool MQTTInstanceItem::ClientNumLimitHasBeenSet() const
{
    return m_clientNumLimitHasBeenSet;
}


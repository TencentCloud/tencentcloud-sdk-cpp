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

#include <tencentcloud/trocket/v20230308/model/InstanceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

InstanceItem::InstanceItem() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_topicNumLimitHasBeenSet(false),
    m_groupNumLimitHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_expiryTimeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_topicNumHasBeenSet(false),
    m_groupNumHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_skuCodeHasBeenSet(false),
    m_tpsLimitHasBeenSet(false),
    m_scaledTpsLimitHasBeenSet(false),
    m_messageRetentionHasBeenSet(false),
    m_maxMessageDelayHasBeenSet(false),
    m_renewFlagHasBeenSet(false)
{
}

CoreInternalOutcome InstanceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItem.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItem.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItem.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItem.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("TopicNumLimit") && !value["TopicNumLimit"].IsNull())
    {
        if (!value["TopicNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItem.TopicNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNumLimit = value["TopicNumLimit"].GetInt64();
        m_topicNumLimitHasBeenSet = true;
    }

    if (value.HasMember("GroupNumLimit") && !value["GroupNumLimit"].IsNull())
    {
        if (!value["GroupNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItem.GroupNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupNumLimit = value["GroupNumLimit"].GetInt64();
        m_groupNumLimitHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItem.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("ExpiryTime") && !value["ExpiryTime"].IsNull())
    {
        if (!value["ExpiryTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItem.ExpiryTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiryTime = value["ExpiryTime"].GetInt64();
        m_expiryTimeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("TopicNum") && !value["TopicNum"].IsNull())
    {
        if (!value["TopicNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItem.TopicNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNum = value["TopicNum"].GetInt64();
        m_topicNumHasBeenSet = true;
    }

    if (value.HasMember("GroupNum") && !value["GroupNum"].IsNull())
    {
        if (!value["GroupNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItem.GroupNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupNum = value["GroupNum"].GetInt64();
        m_groupNumHasBeenSet = true;
    }

    if (value.HasMember("TagList") && !value["TagList"].IsNull())
    {
        if (!value["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceItem.TagList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagList.push_back(item);
        }
        m_tagListHasBeenSet = true;
    }

    if (value.HasMember("SkuCode") && !value["SkuCode"].IsNull())
    {
        if (!value["SkuCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItem.SkuCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skuCode = string(value["SkuCode"].GetString());
        m_skuCodeHasBeenSet = true;
    }

    if (value.HasMember("TpsLimit") && !value["TpsLimit"].IsNull())
    {
        if (!value["TpsLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItem.TpsLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tpsLimit = value["TpsLimit"].GetInt64();
        m_tpsLimitHasBeenSet = true;
    }

    if (value.HasMember("ScaledTpsLimit") && !value["ScaledTpsLimit"].IsNull())
    {
        if (!value["ScaledTpsLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItem.ScaledTpsLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scaledTpsLimit = value["ScaledTpsLimit"].GetInt64();
        m_scaledTpsLimitHasBeenSet = true;
    }

    if (value.HasMember("MessageRetention") && !value["MessageRetention"].IsNull())
    {
        if (!value["MessageRetention"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItem.MessageRetention` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_messageRetention = value["MessageRetention"].GetInt64();
        m_messageRetentionHasBeenSet = true;
    }

    if (value.HasMember("MaxMessageDelay") && !value["MaxMessageDelay"].IsNull())
    {
        if (!value["MaxMessageDelay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItem.MaxMessageDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMessageDelay = value["MaxMessageDelay"].GetInt64();
        m_maxMessageDelayHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItem.RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_groupNumLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupNumLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupNumLimit, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_expiryTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiryTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiryTime, allocator);
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

    if (m_groupNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupNum, allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_scaledTpsLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaledTpsLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scaledTpsLimit, allocator);
    }

    if (m_messageRetentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageRetention";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageRetention, allocator);
    }

    if (m_maxMessageDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMessageDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxMessageDelay, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

}


string InstanceItem::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceItem::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceItem::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceItem::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string InstanceItem::GetVersion() const
{
    return m_version;
}

void InstanceItem::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool InstanceItem::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string InstanceItem::GetInstanceType() const
{
    return m_instanceType;
}

void InstanceItem::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InstanceItem::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string InstanceItem::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void InstanceItem::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool InstanceItem::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

int64_t InstanceItem::GetTopicNumLimit() const
{
    return m_topicNumLimit;
}

void InstanceItem::SetTopicNumLimit(const int64_t& _topicNumLimit)
{
    m_topicNumLimit = _topicNumLimit;
    m_topicNumLimitHasBeenSet = true;
}

bool InstanceItem::TopicNumLimitHasBeenSet() const
{
    return m_topicNumLimitHasBeenSet;
}

int64_t InstanceItem::GetGroupNumLimit() const
{
    return m_groupNumLimit;
}

void InstanceItem::SetGroupNumLimit(const int64_t& _groupNumLimit)
{
    m_groupNumLimit = _groupNumLimit;
    m_groupNumLimitHasBeenSet = true;
}

bool InstanceItem::GroupNumLimitHasBeenSet() const
{
    return m_groupNumLimitHasBeenSet;
}

string InstanceItem::GetPayMode() const
{
    return m_payMode;
}

void InstanceItem::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool InstanceItem::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t InstanceItem::GetExpiryTime() const
{
    return m_expiryTime;
}

void InstanceItem::SetExpiryTime(const int64_t& _expiryTime)
{
    m_expiryTime = _expiryTime;
    m_expiryTimeHasBeenSet = true;
}

bool InstanceItem::ExpiryTimeHasBeenSet() const
{
    return m_expiryTimeHasBeenSet;
}

string InstanceItem::GetRemark() const
{
    return m_remark;
}

void InstanceItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool InstanceItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t InstanceItem::GetTopicNum() const
{
    return m_topicNum;
}

void InstanceItem::SetTopicNum(const int64_t& _topicNum)
{
    m_topicNum = _topicNum;
    m_topicNumHasBeenSet = true;
}

bool InstanceItem::TopicNumHasBeenSet() const
{
    return m_topicNumHasBeenSet;
}

int64_t InstanceItem::GetGroupNum() const
{
    return m_groupNum;
}

void InstanceItem::SetGroupNum(const int64_t& _groupNum)
{
    m_groupNum = _groupNum;
    m_groupNumHasBeenSet = true;
}

bool InstanceItem::GroupNumHasBeenSet() const
{
    return m_groupNumHasBeenSet;
}

vector<Tag> InstanceItem::GetTagList() const
{
    return m_tagList;
}

void InstanceItem::SetTagList(const vector<Tag>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool InstanceItem::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

string InstanceItem::GetSkuCode() const
{
    return m_skuCode;
}

void InstanceItem::SetSkuCode(const string& _skuCode)
{
    m_skuCode = _skuCode;
    m_skuCodeHasBeenSet = true;
}

bool InstanceItem::SkuCodeHasBeenSet() const
{
    return m_skuCodeHasBeenSet;
}

int64_t InstanceItem::GetTpsLimit() const
{
    return m_tpsLimit;
}

void InstanceItem::SetTpsLimit(const int64_t& _tpsLimit)
{
    m_tpsLimit = _tpsLimit;
    m_tpsLimitHasBeenSet = true;
}

bool InstanceItem::TpsLimitHasBeenSet() const
{
    return m_tpsLimitHasBeenSet;
}

int64_t InstanceItem::GetScaledTpsLimit() const
{
    return m_scaledTpsLimit;
}

void InstanceItem::SetScaledTpsLimit(const int64_t& _scaledTpsLimit)
{
    m_scaledTpsLimit = _scaledTpsLimit;
    m_scaledTpsLimitHasBeenSet = true;
}

bool InstanceItem::ScaledTpsLimitHasBeenSet() const
{
    return m_scaledTpsLimitHasBeenSet;
}

int64_t InstanceItem::GetMessageRetention() const
{
    return m_messageRetention;
}

void InstanceItem::SetMessageRetention(const int64_t& _messageRetention)
{
    m_messageRetention = _messageRetention;
    m_messageRetentionHasBeenSet = true;
}

bool InstanceItem::MessageRetentionHasBeenSet() const
{
    return m_messageRetentionHasBeenSet;
}

int64_t InstanceItem::GetMaxMessageDelay() const
{
    return m_maxMessageDelay;
}

void InstanceItem::SetMaxMessageDelay(const int64_t& _maxMessageDelay)
{
    m_maxMessageDelay = _maxMessageDelay;
    m_maxMessageDelayHasBeenSet = true;
}

bool InstanceItem::MaxMessageDelayHasBeenSet() const
{
    return m_maxMessageDelayHasBeenSet;
}

int64_t InstanceItem::GetRenewFlag() const
{
    return m_renewFlag;
}

void InstanceItem::SetRenewFlag(const int64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool InstanceItem::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}


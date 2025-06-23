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

#include <tencentcloud/trocket/v20230308/model/FusionInstanceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

FusionInstanceItem::FusionInstanceItem() :
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
    m_renewFlagHasBeenSet(false),
    m_instanceItemExtraInfoHasBeenSet(false),
    m_destroyTimeHasBeenSet(false),
    m_zoneIdsHasBeenSet(false),
    m_enableDeletionProtectionHasBeenSet(false)
{
}

CoreInternalOutcome FusionInstanceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FusionInstanceItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FusionInstanceItem.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FusionInstanceItem.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FusionInstanceItem.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FusionInstanceItem.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("TopicNumLimit") && !value["TopicNumLimit"].IsNull())
    {
        if (!value["TopicNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FusionInstanceItem.TopicNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNumLimit = value["TopicNumLimit"].GetInt64();
        m_topicNumLimitHasBeenSet = true;
    }

    if (value.HasMember("GroupNumLimit") && !value["GroupNumLimit"].IsNull())
    {
        if (!value["GroupNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FusionInstanceItem.GroupNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupNumLimit = value["GroupNumLimit"].GetInt64();
        m_groupNumLimitHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FusionInstanceItem.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("ExpiryTime") && !value["ExpiryTime"].IsNull())
    {
        if (!value["ExpiryTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FusionInstanceItem.ExpiryTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiryTime = value["ExpiryTime"].GetInt64();
        m_expiryTimeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FusionInstanceItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("TopicNum") && !value["TopicNum"].IsNull())
    {
        if (!value["TopicNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FusionInstanceItem.TopicNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNum = value["TopicNum"].GetInt64();
        m_topicNumHasBeenSet = true;
    }

    if (value.HasMember("GroupNum") && !value["GroupNum"].IsNull())
    {
        if (!value["GroupNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FusionInstanceItem.GroupNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupNum = value["GroupNum"].GetInt64();
        m_groupNumHasBeenSet = true;
    }

    if (value.HasMember("TagList") && !value["TagList"].IsNull())
    {
        if (!value["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FusionInstanceItem.TagList` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `FusionInstanceItem.SkuCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skuCode = string(value["SkuCode"].GetString());
        m_skuCodeHasBeenSet = true;
    }

    if (value.HasMember("TpsLimit") && !value["TpsLimit"].IsNull())
    {
        if (!value["TpsLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FusionInstanceItem.TpsLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tpsLimit = value["TpsLimit"].GetInt64();
        m_tpsLimitHasBeenSet = true;
    }

    if (value.HasMember("ScaledTpsLimit") && !value["ScaledTpsLimit"].IsNull())
    {
        if (!value["ScaledTpsLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FusionInstanceItem.ScaledTpsLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scaledTpsLimit = value["ScaledTpsLimit"].GetInt64();
        m_scaledTpsLimitHasBeenSet = true;
    }

    if (value.HasMember("MessageRetention") && !value["MessageRetention"].IsNull())
    {
        if (!value["MessageRetention"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FusionInstanceItem.MessageRetention` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_messageRetention = value["MessageRetention"].GetInt64();
        m_messageRetentionHasBeenSet = true;
    }

    if (value.HasMember("MaxMessageDelay") && !value["MaxMessageDelay"].IsNull())
    {
        if (!value["MaxMessageDelay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FusionInstanceItem.MaxMessageDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMessageDelay = value["MaxMessageDelay"].GetInt64();
        m_maxMessageDelayHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FusionInstanceItem.RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("InstanceItemExtraInfo") && !value["InstanceItemExtraInfo"].IsNull())
    {
        if (!value["InstanceItemExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FusionInstanceItem.InstanceItemExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceItemExtraInfo.Deserialize(value["InstanceItemExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceItemExtraInfoHasBeenSet = true;
    }

    if (value.HasMember("DestroyTime") && !value["DestroyTime"].IsNull())
    {
        if (!value["DestroyTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FusionInstanceItem.DestroyTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_destroyTime = value["DestroyTime"].GetInt64();
        m_destroyTimeHasBeenSet = true;
    }

    if (value.HasMember("ZoneIds") && !value["ZoneIds"].IsNull())
    {
        if (!value["ZoneIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FusionInstanceItem.ZoneIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ZoneIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_zoneIds.push_back((*itr).GetInt64());
        }
        m_zoneIdsHasBeenSet = true;
    }

    if (value.HasMember("EnableDeletionProtection") && !value["EnableDeletionProtection"].IsNull())
    {
        if (!value["EnableDeletionProtection"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FusionInstanceItem.EnableDeletionProtection` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableDeletionProtection = value["EnableDeletionProtection"].GetBool();
        m_enableDeletionProtectionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FusionInstanceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_instanceItemExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceItemExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceItemExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_destroyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestroyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_destroyTime, allocator);
    }

    if (m_zoneIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zoneIds.begin(); itr != m_zoneIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_enableDeletionProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDeletionProtection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableDeletionProtection, allocator);
    }

}


string FusionInstanceItem::GetInstanceId() const
{
    return m_instanceId;
}

void FusionInstanceItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool FusionInstanceItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string FusionInstanceItem::GetInstanceName() const
{
    return m_instanceName;
}

void FusionInstanceItem::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool FusionInstanceItem::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string FusionInstanceItem::GetVersion() const
{
    return m_version;
}

void FusionInstanceItem::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool FusionInstanceItem::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string FusionInstanceItem::GetInstanceType() const
{
    return m_instanceType;
}

void FusionInstanceItem::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool FusionInstanceItem::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string FusionInstanceItem::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void FusionInstanceItem::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool FusionInstanceItem::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

int64_t FusionInstanceItem::GetTopicNumLimit() const
{
    return m_topicNumLimit;
}

void FusionInstanceItem::SetTopicNumLimit(const int64_t& _topicNumLimit)
{
    m_topicNumLimit = _topicNumLimit;
    m_topicNumLimitHasBeenSet = true;
}

bool FusionInstanceItem::TopicNumLimitHasBeenSet() const
{
    return m_topicNumLimitHasBeenSet;
}

int64_t FusionInstanceItem::GetGroupNumLimit() const
{
    return m_groupNumLimit;
}

void FusionInstanceItem::SetGroupNumLimit(const int64_t& _groupNumLimit)
{
    m_groupNumLimit = _groupNumLimit;
    m_groupNumLimitHasBeenSet = true;
}

bool FusionInstanceItem::GroupNumLimitHasBeenSet() const
{
    return m_groupNumLimitHasBeenSet;
}

string FusionInstanceItem::GetPayMode() const
{
    return m_payMode;
}

void FusionInstanceItem::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool FusionInstanceItem::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t FusionInstanceItem::GetExpiryTime() const
{
    return m_expiryTime;
}

void FusionInstanceItem::SetExpiryTime(const int64_t& _expiryTime)
{
    m_expiryTime = _expiryTime;
    m_expiryTimeHasBeenSet = true;
}

bool FusionInstanceItem::ExpiryTimeHasBeenSet() const
{
    return m_expiryTimeHasBeenSet;
}

string FusionInstanceItem::GetRemark() const
{
    return m_remark;
}

void FusionInstanceItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool FusionInstanceItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t FusionInstanceItem::GetTopicNum() const
{
    return m_topicNum;
}

void FusionInstanceItem::SetTopicNum(const int64_t& _topicNum)
{
    m_topicNum = _topicNum;
    m_topicNumHasBeenSet = true;
}

bool FusionInstanceItem::TopicNumHasBeenSet() const
{
    return m_topicNumHasBeenSet;
}

int64_t FusionInstanceItem::GetGroupNum() const
{
    return m_groupNum;
}

void FusionInstanceItem::SetGroupNum(const int64_t& _groupNum)
{
    m_groupNum = _groupNum;
    m_groupNumHasBeenSet = true;
}

bool FusionInstanceItem::GroupNumHasBeenSet() const
{
    return m_groupNumHasBeenSet;
}

vector<Tag> FusionInstanceItem::GetTagList() const
{
    return m_tagList;
}

void FusionInstanceItem::SetTagList(const vector<Tag>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool FusionInstanceItem::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

string FusionInstanceItem::GetSkuCode() const
{
    return m_skuCode;
}

void FusionInstanceItem::SetSkuCode(const string& _skuCode)
{
    m_skuCode = _skuCode;
    m_skuCodeHasBeenSet = true;
}

bool FusionInstanceItem::SkuCodeHasBeenSet() const
{
    return m_skuCodeHasBeenSet;
}

int64_t FusionInstanceItem::GetTpsLimit() const
{
    return m_tpsLimit;
}

void FusionInstanceItem::SetTpsLimit(const int64_t& _tpsLimit)
{
    m_tpsLimit = _tpsLimit;
    m_tpsLimitHasBeenSet = true;
}

bool FusionInstanceItem::TpsLimitHasBeenSet() const
{
    return m_tpsLimitHasBeenSet;
}

int64_t FusionInstanceItem::GetScaledTpsLimit() const
{
    return m_scaledTpsLimit;
}

void FusionInstanceItem::SetScaledTpsLimit(const int64_t& _scaledTpsLimit)
{
    m_scaledTpsLimit = _scaledTpsLimit;
    m_scaledTpsLimitHasBeenSet = true;
}

bool FusionInstanceItem::ScaledTpsLimitHasBeenSet() const
{
    return m_scaledTpsLimitHasBeenSet;
}

int64_t FusionInstanceItem::GetMessageRetention() const
{
    return m_messageRetention;
}

void FusionInstanceItem::SetMessageRetention(const int64_t& _messageRetention)
{
    m_messageRetention = _messageRetention;
    m_messageRetentionHasBeenSet = true;
}

bool FusionInstanceItem::MessageRetentionHasBeenSet() const
{
    return m_messageRetentionHasBeenSet;
}

int64_t FusionInstanceItem::GetMaxMessageDelay() const
{
    return m_maxMessageDelay;
}

void FusionInstanceItem::SetMaxMessageDelay(const int64_t& _maxMessageDelay)
{
    m_maxMessageDelay = _maxMessageDelay;
    m_maxMessageDelayHasBeenSet = true;
}

bool FusionInstanceItem::MaxMessageDelayHasBeenSet() const
{
    return m_maxMessageDelayHasBeenSet;
}

int64_t FusionInstanceItem::GetRenewFlag() const
{
    return m_renewFlag;
}

void FusionInstanceItem::SetRenewFlag(const int64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool FusionInstanceItem::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

InstanceItemExtraInfo FusionInstanceItem::GetInstanceItemExtraInfo() const
{
    return m_instanceItemExtraInfo;
}

void FusionInstanceItem::SetInstanceItemExtraInfo(const InstanceItemExtraInfo& _instanceItemExtraInfo)
{
    m_instanceItemExtraInfo = _instanceItemExtraInfo;
    m_instanceItemExtraInfoHasBeenSet = true;
}

bool FusionInstanceItem::InstanceItemExtraInfoHasBeenSet() const
{
    return m_instanceItemExtraInfoHasBeenSet;
}

int64_t FusionInstanceItem::GetDestroyTime() const
{
    return m_destroyTime;
}

void FusionInstanceItem::SetDestroyTime(const int64_t& _destroyTime)
{
    m_destroyTime = _destroyTime;
    m_destroyTimeHasBeenSet = true;
}

bool FusionInstanceItem::DestroyTimeHasBeenSet() const
{
    return m_destroyTimeHasBeenSet;
}

vector<int64_t> FusionInstanceItem::GetZoneIds() const
{
    return m_zoneIds;
}

void FusionInstanceItem::SetZoneIds(const vector<int64_t>& _zoneIds)
{
    m_zoneIds = _zoneIds;
    m_zoneIdsHasBeenSet = true;
}

bool FusionInstanceItem::ZoneIdsHasBeenSet() const
{
    return m_zoneIdsHasBeenSet;
}

bool FusionInstanceItem::GetEnableDeletionProtection() const
{
    return m_enableDeletionProtection;
}

void FusionInstanceItem::SetEnableDeletionProtection(const bool& _enableDeletionProtection)
{
    m_enableDeletionProtection = _enableDeletionProtection;
    m_enableDeletionProtectionHasBeenSet = true;
}

bool FusionInstanceItem::EnableDeletionProtectionHasBeenSet() const
{
    return m_enableDeletionProtectionHasBeenSet;
}


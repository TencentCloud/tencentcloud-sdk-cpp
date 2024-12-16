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

#include <tencentcloud/trocket/v20230308/model/DescribeInstanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

DescribeInstanceResponse::DescribeInstanceResponse() :
    m_instanceTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_topicNumHasBeenSet(false),
    m_topicNumLimitHasBeenSet(false),
    m_groupNumHasBeenSet(false),
    m_groupNumLimitHasBeenSet(false),
    m_messageRetentionHasBeenSet(false),
    m_retentionUpperLimitHasBeenSet(false),
    m_retentionLowerLimitHasBeenSet(false),
    m_tpsLimitHasBeenSet(false),
    m_scaledTpsLimitHasBeenSet(false),
    m_maxMessageDelayHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_sendReceiveRatioHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_endpointListHasBeenSet(false),
    m_topicQueueNumUpperLimitHasBeenSet(false),
    m_topicQueueNumLowerLimitHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_skuCodeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_scaledTpsEnabledHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_expiryTimeHasBeenSet(false),
    m_roleNumLimitHasBeenSet(false),
    m_aclEnabledHasBeenSet(false),
    m_topicNumLowerLimitHasBeenSet(false),
    m_topicNumUpperLimitHasBeenSet(false),
    m_zoneIdsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeInstanceResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("InstanceType") && !rsp["InstanceType"].IsNull())
    {
        if (!rsp["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(rsp["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceName") && !rsp["InstanceName"].IsNull())
    {
        if (!rsp["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(rsp["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (rsp.HasMember("TopicNum") && !rsp["TopicNum"].IsNull())
    {
        if (!rsp["TopicNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNum = rsp["TopicNum"].GetInt64();
        m_topicNumHasBeenSet = true;
    }

    if (rsp.HasMember("TopicNumLimit") && !rsp["TopicNumLimit"].IsNull())
    {
        if (!rsp["TopicNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNumLimit = rsp["TopicNumLimit"].GetInt64();
        m_topicNumLimitHasBeenSet = true;
    }

    if (rsp.HasMember("GroupNum") && !rsp["GroupNum"].IsNull())
    {
        if (!rsp["GroupNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupNum = rsp["GroupNum"].GetInt64();
        m_groupNumHasBeenSet = true;
    }

    if (rsp.HasMember("GroupNumLimit") && !rsp["GroupNumLimit"].IsNull())
    {
        if (!rsp["GroupNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupNumLimit = rsp["GroupNumLimit"].GetInt64();
        m_groupNumLimitHasBeenSet = true;
    }

    if (rsp.HasMember("MessageRetention") && !rsp["MessageRetention"].IsNull())
    {
        if (!rsp["MessageRetention"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MessageRetention` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_messageRetention = rsp["MessageRetention"].GetInt64();
        m_messageRetentionHasBeenSet = true;
    }

    if (rsp.HasMember("RetentionUpperLimit") && !rsp["RetentionUpperLimit"].IsNull())
    {
        if (!rsp["RetentionUpperLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionUpperLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionUpperLimit = rsp["RetentionUpperLimit"].GetInt64();
        m_retentionUpperLimitHasBeenSet = true;
    }

    if (rsp.HasMember("RetentionLowerLimit") && !rsp["RetentionLowerLimit"].IsNull())
    {
        if (!rsp["RetentionLowerLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionLowerLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionLowerLimit = rsp["RetentionLowerLimit"].GetInt64();
        m_retentionLowerLimitHasBeenSet = true;
    }

    if (rsp.HasMember("TpsLimit") && !rsp["TpsLimit"].IsNull())
    {
        if (!rsp["TpsLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TpsLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tpsLimit = rsp["TpsLimit"].GetInt64();
        m_tpsLimitHasBeenSet = true;
    }

    if (rsp.HasMember("ScaledTpsLimit") && !rsp["ScaledTpsLimit"].IsNull())
    {
        if (!rsp["ScaledTpsLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScaledTpsLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scaledTpsLimit = rsp["ScaledTpsLimit"].GetInt64();
        m_scaledTpsLimitHasBeenSet = true;
    }

    if (rsp.HasMember("MaxMessageDelay") && !rsp["MaxMessageDelay"].IsNull())
    {
        if (!rsp["MaxMessageDelay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxMessageDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMessageDelay = rsp["MaxMessageDelay"].GetInt64();
        m_maxMessageDelayHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedTime") && !rsp["CreatedTime"].IsNull())
    {
        if (!rsp["CreatedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = rsp["CreatedTime"].GetInt64();
        m_createdTimeHasBeenSet = true;
    }

    if (rsp.HasMember("SendReceiveRatio") && !rsp["SendReceiveRatio"].IsNull())
    {
        if (!rsp["SendReceiveRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SendReceiveRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sendReceiveRatio = rsp["SendReceiveRatio"].GetDouble();
        m_sendReceiveRatioHasBeenSet = true;
    }

    if (rsp.HasMember("TagList") && !rsp["TagList"].IsNull())
    {
        if (!rsp["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TagList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TagList"];
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

    if (rsp.HasMember("EndpointList") && !rsp["EndpointList"].IsNull())
    {
        if (!rsp["EndpointList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EndpointList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["EndpointList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Endpoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_endpointList.push_back(item);
        }
        m_endpointListHasBeenSet = true;
    }

    if (rsp.HasMember("TopicQueueNumUpperLimit") && !rsp["TopicQueueNumUpperLimit"].IsNull())
    {
        if (!rsp["TopicQueueNumUpperLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicQueueNumUpperLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicQueueNumUpperLimit = rsp["TopicQueueNumUpperLimit"].GetInt64();
        m_topicQueueNumUpperLimitHasBeenSet = true;
    }

    if (rsp.HasMember("TopicQueueNumLowerLimit") && !rsp["TopicQueueNumLowerLimit"].IsNull())
    {
        if (!rsp["TopicQueueNumLowerLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicQueueNumLowerLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicQueueNumLowerLimit = rsp["TopicQueueNumLowerLimit"].GetInt64();
        m_topicQueueNumLowerLimitHasBeenSet = true;
    }

    if (rsp.HasMember("Remark") && !rsp["Remark"].IsNull())
    {
        if (!rsp["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(rsp["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceStatus") && !rsp["InstanceStatus"].IsNull())
    {
        if (!rsp["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(rsp["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (rsp.HasMember("SkuCode") && !rsp["SkuCode"].IsNull())
    {
        if (!rsp["SkuCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkuCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skuCode = string(rsp["SkuCode"].GetString());
        m_skuCodeHasBeenSet = true;
    }

    if (rsp.HasMember("PayMode") && !rsp["PayMode"].IsNull())
    {
        if (!rsp["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(rsp["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (rsp.HasMember("ScaledTpsEnabled") && !rsp["ScaledTpsEnabled"].IsNull())
    {
        if (!rsp["ScaledTpsEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ScaledTpsEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_scaledTpsEnabled = rsp["ScaledTpsEnabled"].GetBool();
        m_scaledTpsEnabledHasBeenSet = true;
    }

    if (rsp.HasMember("RenewFlag") && !rsp["RenewFlag"].IsNull())
    {
        if (!rsp["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = rsp["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (rsp.HasMember("ExpiryTime") && !rsp["ExpiryTime"].IsNull())
    {
        if (!rsp["ExpiryTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpiryTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiryTime = rsp["ExpiryTime"].GetInt64();
        m_expiryTimeHasBeenSet = true;
    }

    if (rsp.HasMember("RoleNumLimit") && !rsp["RoleNumLimit"].IsNull())
    {
        if (!rsp["RoleNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roleNumLimit = rsp["RoleNumLimit"].GetInt64();
        m_roleNumLimitHasBeenSet = true;
    }

    if (rsp.HasMember("AclEnabled") && !rsp["AclEnabled"].IsNull())
    {
        if (!rsp["AclEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AclEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_aclEnabled = rsp["AclEnabled"].GetBool();
        m_aclEnabledHasBeenSet = true;
    }

    if (rsp.HasMember("TopicNumLowerLimit") && !rsp["TopicNumLowerLimit"].IsNull())
    {
        if (!rsp["TopicNumLowerLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicNumLowerLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNumLowerLimit = rsp["TopicNumLowerLimit"].GetInt64();
        m_topicNumLowerLimitHasBeenSet = true;
    }

    if (rsp.HasMember("TopicNumUpperLimit") && !rsp["TopicNumUpperLimit"].IsNull())
    {
        if (!rsp["TopicNumUpperLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicNumUpperLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNumUpperLimit = rsp["TopicNumUpperLimit"].GetInt64();
        m_topicNumUpperLimitHasBeenSet = true;
    }

    if (rsp.HasMember("ZoneIds") && !rsp["ZoneIds"].IsNull())
    {
        if (!rsp["ZoneIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ZoneIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_zoneIds.push_back((*itr).GetInt64());
        }
        m_zoneIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeInstanceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

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

    if (m_topicNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicNum, allocator);
    }

    if (m_topicNumLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNumLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicNumLimit, allocator);
    }

    if (m_groupNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupNum, allocator);
    }

    if (m_groupNumLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupNumLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupNumLimit, allocator);
    }

    if (m_messageRetentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageRetention";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageRetention, allocator);
    }

    if (m_retentionUpperLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionUpperLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionUpperLimit, allocator);
    }

    if (m_retentionLowerLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionLowerLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionLowerLimit, allocator);
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

    if (m_maxMessageDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMessageDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxMessageDelay, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdTime, allocator);
    }

    if (m_sendReceiveRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendReceiveRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendReceiveRatio, allocator);
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

    if (m_endpointListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_endpointList.begin(); itr != m_endpointList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_topicQueueNumUpperLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicQueueNumUpperLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicQueueNumUpperLimit, allocator);
    }

    if (m_topicQueueNumLowerLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicQueueNumLowerLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicQueueNumLowerLimit, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_skuCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkuCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skuCode.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_scaledTpsEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaledTpsEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scaledTpsEnabled, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_expiryTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiryTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiryTime, allocator);
    }

    if (m_roleNumLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleNumLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roleNumLimit, allocator);
    }

    if (m_aclEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aclEnabled, allocator);
    }

    if (m_topicNumLowerLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNumLowerLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicNumLowerLimit, allocator);
    }

    if (m_topicNumUpperLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNumUpperLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicNumUpperLimit, allocator);
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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeInstanceResponse::GetInstanceType() const
{
    return m_instanceType;
}

bool DescribeInstanceResponse::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string DescribeInstanceResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeInstanceResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeInstanceResponse::GetInstanceName() const
{
    return m_instanceName;
}

bool DescribeInstanceResponse::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t DescribeInstanceResponse::GetTopicNum() const
{
    return m_topicNum;
}

bool DescribeInstanceResponse::TopicNumHasBeenSet() const
{
    return m_topicNumHasBeenSet;
}

int64_t DescribeInstanceResponse::GetTopicNumLimit() const
{
    return m_topicNumLimit;
}

bool DescribeInstanceResponse::TopicNumLimitHasBeenSet() const
{
    return m_topicNumLimitHasBeenSet;
}

int64_t DescribeInstanceResponse::GetGroupNum() const
{
    return m_groupNum;
}

bool DescribeInstanceResponse::GroupNumHasBeenSet() const
{
    return m_groupNumHasBeenSet;
}

int64_t DescribeInstanceResponse::GetGroupNumLimit() const
{
    return m_groupNumLimit;
}

bool DescribeInstanceResponse::GroupNumLimitHasBeenSet() const
{
    return m_groupNumLimitHasBeenSet;
}

int64_t DescribeInstanceResponse::GetMessageRetention() const
{
    return m_messageRetention;
}

bool DescribeInstanceResponse::MessageRetentionHasBeenSet() const
{
    return m_messageRetentionHasBeenSet;
}

int64_t DescribeInstanceResponse::GetRetentionUpperLimit() const
{
    return m_retentionUpperLimit;
}

bool DescribeInstanceResponse::RetentionUpperLimitHasBeenSet() const
{
    return m_retentionUpperLimitHasBeenSet;
}

int64_t DescribeInstanceResponse::GetRetentionLowerLimit() const
{
    return m_retentionLowerLimit;
}

bool DescribeInstanceResponse::RetentionLowerLimitHasBeenSet() const
{
    return m_retentionLowerLimitHasBeenSet;
}

int64_t DescribeInstanceResponse::GetTpsLimit() const
{
    return m_tpsLimit;
}

bool DescribeInstanceResponse::TpsLimitHasBeenSet() const
{
    return m_tpsLimitHasBeenSet;
}

int64_t DescribeInstanceResponse::GetScaledTpsLimit() const
{
    return m_scaledTpsLimit;
}

bool DescribeInstanceResponse::ScaledTpsLimitHasBeenSet() const
{
    return m_scaledTpsLimitHasBeenSet;
}

int64_t DescribeInstanceResponse::GetMaxMessageDelay() const
{
    return m_maxMessageDelay;
}

bool DescribeInstanceResponse::MaxMessageDelayHasBeenSet() const
{
    return m_maxMessageDelayHasBeenSet;
}

int64_t DescribeInstanceResponse::GetCreatedTime() const
{
    return m_createdTime;
}

bool DescribeInstanceResponse::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

double DescribeInstanceResponse::GetSendReceiveRatio() const
{
    return m_sendReceiveRatio;
}

bool DescribeInstanceResponse::SendReceiveRatioHasBeenSet() const
{
    return m_sendReceiveRatioHasBeenSet;
}

vector<Tag> DescribeInstanceResponse::GetTagList() const
{
    return m_tagList;
}

bool DescribeInstanceResponse::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

vector<Endpoint> DescribeInstanceResponse::GetEndpointList() const
{
    return m_endpointList;
}

bool DescribeInstanceResponse::EndpointListHasBeenSet() const
{
    return m_endpointListHasBeenSet;
}

int64_t DescribeInstanceResponse::GetTopicQueueNumUpperLimit() const
{
    return m_topicQueueNumUpperLimit;
}

bool DescribeInstanceResponse::TopicQueueNumUpperLimitHasBeenSet() const
{
    return m_topicQueueNumUpperLimitHasBeenSet;
}

int64_t DescribeInstanceResponse::GetTopicQueueNumLowerLimit() const
{
    return m_topicQueueNumLowerLimit;
}

bool DescribeInstanceResponse::TopicQueueNumLowerLimitHasBeenSet() const
{
    return m_topicQueueNumLowerLimitHasBeenSet;
}

string DescribeInstanceResponse::GetRemark() const
{
    return m_remark;
}

bool DescribeInstanceResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DescribeInstanceResponse::GetInstanceStatus() const
{
    return m_instanceStatus;
}

bool DescribeInstanceResponse::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string DescribeInstanceResponse::GetSkuCode() const
{
    return m_skuCode;
}

bool DescribeInstanceResponse::SkuCodeHasBeenSet() const
{
    return m_skuCodeHasBeenSet;
}

string DescribeInstanceResponse::GetPayMode() const
{
    return m_payMode;
}

bool DescribeInstanceResponse::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

bool DescribeInstanceResponse::GetScaledTpsEnabled() const
{
    return m_scaledTpsEnabled;
}

bool DescribeInstanceResponse::ScaledTpsEnabledHasBeenSet() const
{
    return m_scaledTpsEnabledHasBeenSet;
}

int64_t DescribeInstanceResponse::GetRenewFlag() const
{
    return m_renewFlag;
}

bool DescribeInstanceResponse::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

int64_t DescribeInstanceResponse::GetExpiryTime() const
{
    return m_expiryTime;
}

bool DescribeInstanceResponse::ExpiryTimeHasBeenSet() const
{
    return m_expiryTimeHasBeenSet;
}

int64_t DescribeInstanceResponse::GetRoleNumLimit() const
{
    return m_roleNumLimit;
}

bool DescribeInstanceResponse::RoleNumLimitHasBeenSet() const
{
    return m_roleNumLimitHasBeenSet;
}

bool DescribeInstanceResponse::GetAclEnabled() const
{
    return m_aclEnabled;
}

bool DescribeInstanceResponse::AclEnabledHasBeenSet() const
{
    return m_aclEnabledHasBeenSet;
}

int64_t DescribeInstanceResponse::GetTopicNumLowerLimit() const
{
    return m_topicNumLowerLimit;
}

bool DescribeInstanceResponse::TopicNumLowerLimitHasBeenSet() const
{
    return m_topicNumLowerLimitHasBeenSet;
}

int64_t DescribeInstanceResponse::GetTopicNumUpperLimit() const
{
    return m_topicNumUpperLimit;
}

bool DescribeInstanceResponse::TopicNumUpperLimitHasBeenSet() const
{
    return m_topicNumUpperLimitHasBeenSet;
}

vector<int64_t> DescribeInstanceResponse::GetZoneIds() const
{
    return m_zoneIds;
}

bool DescribeInstanceResponse::ZoneIdsHasBeenSet() const
{
    return m_zoneIdsHasBeenSet;
}



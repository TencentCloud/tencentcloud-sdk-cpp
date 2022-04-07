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

#include <tencentcloud/tdmq/v20200217/model/CmqQueue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

CmqQueue::CmqQueue() :
    m_queueIdHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_qpsHasBeenSet(false),
    m_bpsHasBeenSet(false),
    m_maxDelaySecondsHasBeenSet(false),
    m_maxMsgHeapNumHasBeenSet(false),
    m_pollingWaitSecondsHasBeenSet(false),
    m_msgRetentionSecondsHasBeenSet(false),
    m_visibilityTimeoutHasBeenSet(false),
    m_maxMsgSizeHasBeenSet(false),
    m_rewindSecondsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastModifyTimeHasBeenSet(false),
    m_activeMsgNumHasBeenSet(false),
    m_inactiveMsgNumHasBeenSet(false),
    m_delayMsgNumHasBeenSet(false),
    m_rewindMsgNumHasBeenSet(false),
    m_minMsgTimeHasBeenSet(false),
    m_transactionHasBeenSet(false),
    m_deadLetterSourceHasBeenSet(false),
    m_deadLetterPolicyHasBeenSet(false),
    m_transactionPolicyHasBeenSet(false),
    m_createUinHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_traceHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_maxUnackedMsgNumHasBeenSet(false),
    m_maxMsgBacklogSizeHasBeenSet(false),
    m_retentionSizeInMBHasBeenSet(false)
{
}

CoreInternalOutcome CmqQueue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QueueId") && !value["QueueId"].IsNull())
    {
        if (!value["QueueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.QueueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueId = string(value["QueueId"].GetString());
        m_queueIdHasBeenSet = true;
    }

    if (value.HasMember("QueueName") && !value["QueueName"].IsNull())
    {
        if (!value["QueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(value["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }

    if (value.HasMember("Qps") && !value["Qps"].IsNull())
    {
        if (!value["Qps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.Qps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qps = value["Qps"].GetUint64();
        m_qpsHasBeenSet = true;
    }

    if (value.HasMember("Bps") && !value["Bps"].IsNull())
    {
        if (!value["Bps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.Bps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bps = value["Bps"].GetUint64();
        m_bpsHasBeenSet = true;
    }

    if (value.HasMember("MaxDelaySeconds") && !value["MaxDelaySeconds"].IsNull())
    {
        if (!value["MaxDelaySeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.MaxDelaySeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDelaySeconds = value["MaxDelaySeconds"].GetUint64();
        m_maxDelaySecondsHasBeenSet = true;
    }

    if (value.HasMember("MaxMsgHeapNum") && !value["MaxMsgHeapNum"].IsNull())
    {
        if (!value["MaxMsgHeapNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.MaxMsgHeapNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMsgHeapNum = value["MaxMsgHeapNum"].GetUint64();
        m_maxMsgHeapNumHasBeenSet = true;
    }

    if (value.HasMember("PollingWaitSeconds") && !value["PollingWaitSeconds"].IsNull())
    {
        if (!value["PollingWaitSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.PollingWaitSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pollingWaitSeconds = value["PollingWaitSeconds"].GetUint64();
        m_pollingWaitSecondsHasBeenSet = true;
    }

    if (value.HasMember("MsgRetentionSeconds") && !value["MsgRetentionSeconds"].IsNull())
    {
        if (!value["MsgRetentionSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.MsgRetentionSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_msgRetentionSeconds = value["MsgRetentionSeconds"].GetUint64();
        m_msgRetentionSecondsHasBeenSet = true;
    }

    if (value.HasMember("VisibilityTimeout") && !value["VisibilityTimeout"].IsNull())
    {
        if (!value["VisibilityTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.VisibilityTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_visibilityTimeout = value["VisibilityTimeout"].GetUint64();
        m_visibilityTimeoutHasBeenSet = true;
    }

    if (value.HasMember("MaxMsgSize") && !value["MaxMsgSize"].IsNull())
    {
        if (!value["MaxMsgSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.MaxMsgSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMsgSize = value["MaxMsgSize"].GetUint64();
        m_maxMsgSizeHasBeenSet = true;
    }

    if (value.HasMember("RewindSeconds") && !value["RewindSeconds"].IsNull())
    {
        if (!value["RewindSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.RewindSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rewindSeconds = value["RewindSeconds"].GetUint64();
        m_rewindSecondsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LastModifyTime") && !value["LastModifyTime"].IsNull())
    {
        if (!value["LastModifyTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.LastModifyTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifyTime = value["LastModifyTime"].GetUint64();
        m_lastModifyTimeHasBeenSet = true;
    }

    if (value.HasMember("ActiveMsgNum") && !value["ActiveMsgNum"].IsNull())
    {
        if (!value["ActiveMsgNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.ActiveMsgNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_activeMsgNum = value["ActiveMsgNum"].GetUint64();
        m_activeMsgNumHasBeenSet = true;
    }

    if (value.HasMember("InactiveMsgNum") && !value["InactiveMsgNum"].IsNull())
    {
        if (!value["InactiveMsgNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.InactiveMsgNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_inactiveMsgNum = value["InactiveMsgNum"].GetUint64();
        m_inactiveMsgNumHasBeenSet = true;
    }

    if (value.HasMember("DelayMsgNum") && !value["DelayMsgNum"].IsNull())
    {
        if (!value["DelayMsgNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.DelayMsgNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_delayMsgNum = value["DelayMsgNum"].GetUint64();
        m_delayMsgNumHasBeenSet = true;
    }

    if (value.HasMember("RewindMsgNum") && !value["RewindMsgNum"].IsNull())
    {
        if (!value["RewindMsgNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.RewindMsgNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rewindMsgNum = value["RewindMsgNum"].GetUint64();
        m_rewindMsgNumHasBeenSet = true;
    }

    if (value.HasMember("MinMsgTime") && !value["MinMsgTime"].IsNull())
    {
        if (!value["MinMsgTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.MinMsgTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minMsgTime = value["MinMsgTime"].GetUint64();
        m_minMsgTimeHasBeenSet = true;
    }

    if (value.HasMember("Transaction") && !value["Transaction"].IsNull())
    {
        if (!value["Transaction"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.Transaction` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_transaction = value["Transaction"].GetBool();
        m_transactionHasBeenSet = true;
    }

    if (value.HasMember("DeadLetterSource") && !value["DeadLetterSource"].IsNull())
    {
        if (!value["DeadLetterSource"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CmqQueue.DeadLetterSource` is not array type"));

        const rapidjson::Value &tmpValue = value["DeadLetterSource"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CmqDeadLetterSource item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deadLetterSource.push_back(item);
        }
        m_deadLetterSourceHasBeenSet = true;
    }

    if (value.HasMember("DeadLetterPolicy") && !value["DeadLetterPolicy"].IsNull())
    {
        if (!value["DeadLetterPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.DeadLetterPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deadLetterPolicy.Deserialize(value["DeadLetterPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deadLetterPolicyHasBeenSet = true;
    }

    if (value.HasMember("TransactionPolicy") && !value["TransactionPolicy"].IsNull())
    {
        if (!value["TransactionPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.TransactionPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_transactionPolicy.Deserialize(value["TransactionPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_transactionPolicyHasBeenSet = true;
    }

    if (value.HasMember("CreateUin") && !value["CreateUin"].IsNull())
    {
        if (!value["CreateUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.CreateUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createUin = value["CreateUin"].GetUint64();
        m_createUinHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CmqQueue.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Trace") && !value["Trace"].IsNull())
    {
        if (!value["Trace"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.Trace` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_trace = value["Trace"].GetBool();
        m_traceHasBeenSet = true;
    }

    if (value.HasMember("TenantId") && !value["TenantId"].IsNull())
    {
        if (!value["TenantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.TenantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tenantId = string(value["TenantId"].GetString());
        m_tenantIdHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("MaxUnackedMsgNum") && !value["MaxUnackedMsgNum"].IsNull())
    {
        if (!value["MaxUnackedMsgNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.MaxUnackedMsgNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxUnackedMsgNum = value["MaxUnackedMsgNum"].GetInt64();
        m_maxUnackedMsgNumHasBeenSet = true;
    }

    if (value.HasMember("MaxMsgBacklogSize") && !value["MaxMsgBacklogSize"].IsNull())
    {
        if (!value["MaxMsgBacklogSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.MaxMsgBacklogSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMsgBacklogSize = value["MaxMsgBacklogSize"].GetInt64();
        m_maxMsgBacklogSizeHasBeenSet = true;
    }

    if (value.HasMember("RetentionSizeInMB") && !value["RetentionSizeInMB"].IsNull())
    {
        if (!value["RetentionSizeInMB"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqQueue.RetentionSizeInMB` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionSizeInMB = value["RetentionSizeInMB"].GetUint64();
        m_retentionSizeInMBHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CmqQueue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_queueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueId.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_qpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qps, allocator);
    }

    if (m_bpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bps, allocator);
    }

    if (m_maxDelaySecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDelaySeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDelaySeconds, allocator);
    }

    if (m_maxMsgHeapNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMsgHeapNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxMsgHeapNum, allocator);
    }

    if (m_pollingWaitSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PollingWaitSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pollingWaitSeconds, allocator);
    }

    if (m_msgRetentionSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgRetentionSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgRetentionSeconds, allocator);
    }

    if (m_visibilityTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisibilityTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_visibilityTimeout, allocator);
    }

    if (m_maxMsgSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMsgSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxMsgSize, allocator);
    }

    if (m_rewindSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RewindSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rewindSeconds, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_lastModifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastModifyTime, allocator);
    }

    if (m_activeMsgNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveMsgNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeMsgNum, allocator);
    }

    if (m_inactiveMsgNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InactiveMsgNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inactiveMsgNum, allocator);
    }

    if (m_delayMsgNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayMsgNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delayMsgNum, allocator);
    }

    if (m_rewindMsgNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RewindMsgNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rewindMsgNum, allocator);
    }

    if (m_minMsgTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinMsgTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minMsgTime, allocator);
    }

    if (m_transactionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transaction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transaction, allocator);
    }

    if (m_deadLetterSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLetterSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deadLetterSource.begin(); itr != m_deadLetterSource.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deadLetterPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLetterPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deadLetterPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_transactionPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transactionPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createUin, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_traceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trace, allocator);
    }

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tenantId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_maxUnackedMsgNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxUnackedMsgNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxUnackedMsgNum, allocator);
    }

    if (m_maxMsgBacklogSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMsgBacklogSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxMsgBacklogSize, allocator);
    }

    if (m_retentionSizeInMBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionSizeInMB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionSizeInMB, allocator);
    }

}


string CmqQueue::GetQueueId() const
{
    return m_queueId;
}

void CmqQueue::SetQueueId(const string& _queueId)
{
    m_queueId = _queueId;
    m_queueIdHasBeenSet = true;
}

bool CmqQueue::QueueIdHasBeenSet() const
{
    return m_queueIdHasBeenSet;
}

string CmqQueue::GetQueueName() const
{
    return m_queueName;
}

void CmqQueue::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool CmqQueue::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

uint64_t CmqQueue::GetQps() const
{
    return m_qps;
}

void CmqQueue::SetQps(const uint64_t& _qps)
{
    m_qps = _qps;
    m_qpsHasBeenSet = true;
}

bool CmqQueue::QpsHasBeenSet() const
{
    return m_qpsHasBeenSet;
}

uint64_t CmqQueue::GetBps() const
{
    return m_bps;
}

void CmqQueue::SetBps(const uint64_t& _bps)
{
    m_bps = _bps;
    m_bpsHasBeenSet = true;
}

bool CmqQueue::BpsHasBeenSet() const
{
    return m_bpsHasBeenSet;
}

uint64_t CmqQueue::GetMaxDelaySeconds() const
{
    return m_maxDelaySeconds;
}

void CmqQueue::SetMaxDelaySeconds(const uint64_t& _maxDelaySeconds)
{
    m_maxDelaySeconds = _maxDelaySeconds;
    m_maxDelaySecondsHasBeenSet = true;
}

bool CmqQueue::MaxDelaySecondsHasBeenSet() const
{
    return m_maxDelaySecondsHasBeenSet;
}

uint64_t CmqQueue::GetMaxMsgHeapNum() const
{
    return m_maxMsgHeapNum;
}

void CmqQueue::SetMaxMsgHeapNum(const uint64_t& _maxMsgHeapNum)
{
    m_maxMsgHeapNum = _maxMsgHeapNum;
    m_maxMsgHeapNumHasBeenSet = true;
}

bool CmqQueue::MaxMsgHeapNumHasBeenSet() const
{
    return m_maxMsgHeapNumHasBeenSet;
}

uint64_t CmqQueue::GetPollingWaitSeconds() const
{
    return m_pollingWaitSeconds;
}

void CmqQueue::SetPollingWaitSeconds(const uint64_t& _pollingWaitSeconds)
{
    m_pollingWaitSeconds = _pollingWaitSeconds;
    m_pollingWaitSecondsHasBeenSet = true;
}

bool CmqQueue::PollingWaitSecondsHasBeenSet() const
{
    return m_pollingWaitSecondsHasBeenSet;
}

uint64_t CmqQueue::GetMsgRetentionSeconds() const
{
    return m_msgRetentionSeconds;
}

void CmqQueue::SetMsgRetentionSeconds(const uint64_t& _msgRetentionSeconds)
{
    m_msgRetentionSeconds = _msgRetentionSeconds;
    m_msgRetentionSecondsHasBeenSet = true;
}

bool CmqQueue::MsgRetentionSecondsHasBeenSet() const
{
    return m_msgRetentionSecondsHasBeenSet;
}

uint64_t CmqQueue::GetVisibilityTimeout() const
{
    return m_visibilityTimeout;
}

void CmqQueue::SetVisibilityTimeout(const uint64_t& _visibilityTimeout)
{
    m_visibilityTimeout = _visibilityTimeout;
    m_visibilityTimeoutHasBeenSet = true;
}

bool CmqQueue::VisibilityTimeoutHasBeenSet() const
{
    return m_visibilityTimeoutHasBeenSet;
}

uint64_t CmqQueue::GetMaxMsgSize() const
{
    return m_maxMsgSize;
}

void CmqQueue::SetMaxMsgSize(const uint64_t& _maxMsgSize)
{
    m_maxMsgSize = _maxMsgSize;
    m_maxMsgSizeHasBeenSet = true;
}

bool CmqQueue::MaxMsgSizeHasBeenSet() const
{
    return m_maxMsgSizeHasBeenSet;
}

uint64_t CmqQueue::GetRewindSeconds() const
{
    return m_rewindSeconds;
}

void CmqQueue::SetRewindSeconds(const uint64_t& _rewindSeconds)
{
    m_rewindSeconds = _rewindSeconds;
    m_rewindSecondsHasBeenSet = true;
}

bool CmqQueue::RewindSecondsHasBeenSet() const
{
    return m_rewindSecondsHasBeenSet;
}

uint64_t CmqQueue::GetCreateTime() const
{
    return m_createTime;
}

void CmqQueue::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CmqQueue::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t CmqQueue::GetLastModifyTime() const
{
    return m_lastModifyTime;
}

void CmqQueue::SetLastModifyTime(const uint64_t& _lastModifyTime)
{
    m_lastModifyTime = _lastModifyTime;
    m_lastModifyTimeHasBeenSet = true;
}

bool CmqQueue::LastModifyTimeHasBeenSet() const
{
    return m_lastModifyTimeHasBeenSet;
}

uint64_t CmqQueue::GetActiveMsgNum() const
{
    return m_activeMsgNum;
}

void CmqQueue::SetActiveMsgNum(const uint64_t& _activeMsgNum)
{
    m_activeMsgNum = _activeMsgNum;
    m_activeMsgNumHasBeenSet = true;
}

bool CmqQueue::ActiveMsgNumHasBeenSet() const
{
    return m_activeMsgNumHasBeenSet;
}

uint64_t CmqQueue::GetInactiveMsgNum() const
{
    return m_inactiveMsgNum;
}

void CmqQueue::SetInactiveMsgNum(const uint64_t& _inactiveMsgNum)
{
    m_inactiveMsgNum = _inactiveMsgNum;
    m_inactiveMsgNumHasBeenSet = true;
}

bool CmqQueue::InactiveMsgNumHasBeenSet() const
{
    return m_inactiveMsgNumHasBeenSet;
}

uint64_t CmqQueue::GetDelayMsgNum() const
{
    return m_delayMsgNum;
}

void CmqQueue::SetDelayMsgNum(const uint64_t& _delayMsgNum)
{
    m_delayMsgNum = _delayMsgNum;
    m_delayMsgNumHasBeenSet = true;
}

bool CmqQueue::DelayMsgNumHasBeenSet() const
{
    return m_delayMsgNumHasBeenSet;
}

uint64_t CmqQueue::GetRewindMsgNum() const
{
    return m_rewindMsgNum;
}

void CmqQueue::SetRewindMsgNum(const uint64_t& _rewindMsgNum)
{
    m_rewindMsgNum = _rewindMsgNum;
    m_rewindMsgNumHasBeenSet = true;
}

bool CmqQueue::RewindMsgNumHasBeenSet() const
{
    return m_rewindMsgNumHasBeenSet;
}

uint64_t CmqQueue::GetMinMsgTime() const
{
    return m_minMsgTime;
}

void CmqQueue::SetMinMsgTime(const uint64_t& _minMsgTime)
{
    m_minMsgTime = _minMsgTime;
    m_minMsgTimeHasBeenSet = true;
}

bool CmqQueue::MinMsgTimeHasBeenSet() const
{
    return m_minMsgTimeHasBeenSet;
}

bool CmqQueue::GetTransaction() const
{
    return m_transaction;
}

void CmqQueue::SetTransaction(const bool& _transaction)
{
    m_transaction = _transaction;
    m_transactionHasBeenSet = true;
}

bool CmqQueue::TransactionHasBeenSet() const
{
    return m_transactionHasBeenSet;
}

vector<CmqDeadLetterSource> CmqQueue::GetDeadLetterSource() const
{
    return m_deadLetterSource;
}

void CmqQueue::SetDeadLetterSource(const vector<CmqDeadLetterSource>& _deadLetterSource)
{
    m_deadLetterSource = _deadLetterSource;
    m_deadLetterSourceHasBeenSet = true;
}

bool CmqQueue::DeadLetterSourceHasBeenSet() const
{
    return m_deadLetterSourceHasBeenSet;
}

CmqDeadLetterPolicy CmqQueue::GetDeadLetterPolicy() const
{
    return m_deadLetterPolicy;
}

void CmqQueue::SetDeadLetterPolicy(const CmqDeadLetterPolicy& _deadLetterPolicy)
{
    m_deadLetterPolicy = _deadLetterPolicy;
    m_deadLetterPolicyHasBeenSet = true;
}

bool CmqQueue::DeadLetterPolicyHasBeenSet() const
{
    return m_deadLetterPolicyHasBeenSet;
}

CmqTransactionPolicy CmqQueue::GetTransactionPolicy() const
{
    return m_transactionPolicy;
}

void CmqQueue::SetTransactionPolicy(const CmqTransactionPolicy& _transactionPolicy)
{
    m_transactionPolicy = _transactionPolicy;
    m_transactionPolicyHasBeenSet = true;
}

bool CmqQueue::TransactionPolicyHasBeenSet() const
{
    return m_transactionPolicyHasBeenSet;
}

uint64_t CmqQueue::GetCreateUin() const
{
    return m_createUin;
}

void CmqQueue::SetCreateUin(const uint64_t& _createUin)
{
    m_createUin = _createUin;
    m_createUinHasBeenSet = true;
}

bool CmqQueue::CreateUinHasBeenSet() const
{
    return m_createUinHasBeenSet;
}

vector<Tag> CmqQueue::GetTags() const
{
    return m_tags;
}

void CmqQueue::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CmqQueue::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool CmqQueue::GetTrace() const
{
    return m_trace;
}

void CmqQueue::SetTrace(const bool& _trace)
{
    m_trace = _trace;
    m_traceHasBeenSet = true;
}

bool CmqQueue::TraceHasBeenSet() const
{
    return m_traceHasBeenSet;
}

string CmqQueue::GetTenantId() const
{
    return m_tenantId;
}

void CmqQueue::SetTenantId(const string& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool CmqQueue::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

string CmqQueue::GetNamespaceName() const
{
    return m_namespaceName;
}

void CmqQueue::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool CmqQueue::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

int64_t CmqQueue::GetStatus() const
{
    return m_status;
}

void CmqQueue::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CmqQueue::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t CmqQueue::GetMaxUnackedMsgNum() const
{
    return m_maxUnackedMsgNum;
}

void CmqQueue::SetMaxUnackedMsgNum(const int64_t& _maxUnackedMsgNum)
{
    m_maxUnackedMsgNum = _maxUnackedMsgNum;
    m_maxUnackedMsgNumHasBeenSet = true;
}

bool CmqQueue::MaxUnackedMsgNumHasBeenSet() const
{
    return m_maxUnackedMsgNumHasBeenSet;
}

int64_t CmqQueue::GetMaxMsgBacklogSize() const
{
    return m_maxMsgBacklogSize;
}

void CmqQueue::SetMaxMsgBacklogSize(const int64_t& _maxMsgBacklogSize)
{
    m_maxMsgBacklogSize = _maxMsgBacklogSize;
    m_maxMsgBacklogSizeHasBeenSet = true;
}

bool CmqQueue::MaxMsgBacklogSizeHasBeenSet() const
{
    return m_maxMsgBacklogSizeHasBeenSet;
}

uint64_t CmqQueue::GetRetentionSizeInMB() const
{
    return m_retentionSizeInMB;
}

void CmqQueue::SetRetentionSizeInMB(const uint64_t& _retentionSizeInMB)
{
    m_retentionSizeInMB = _retentionSizeInMB;
    m_retentionSizeInMBHasBeenSet = true;
}

bool CmqQueue::RetentionSizeInMBHasBeenSet() const
{
    return m_retentionSizeInMBHasBeenSet;
}


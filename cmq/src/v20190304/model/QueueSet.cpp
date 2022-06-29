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

#include <tencentcloud/cmq/v20190304/model/QueueSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cmq::V20190304::Model;
using namespace std;

QueueSet::QueueSet() :
    m_queueIdHasBeenSet(false),
    m_rewindSecondsHasBeenSet(false),
    m_createUinHasBeenSet(false),
    m_lastModifyTimeHasBeenSet(false),
    m_visibilityTimeoutHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_traceHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_rewindMsgNumHasBeenSet(false),
    m_maxDelaySecondsHasBeenSet(false),
    m_transactionPolicyHasBeenSet(false),
    m_msgRetentionSecondsHasBeenSet(false),
    m_delayMsgNumHasBeenSet(false),
    m_maxMsgHeapNumHasBeenSet(false),
    m_pollingWaitSecondsHasBeenSet(false),
    m_bpsHasBeenSet(false),
    m_inactiveMsgNumHasBeenSet(false),
    m_deadLetterPolicyHasBeenSet(false),
    m_activeMsgNumHasBeenSet(false),
    m_maxMsgSizeHasBeenSet(false),
    m_minMsgTimeHasBeenSet(false),
    m_deadLetterSourceHasBeenSet(false),
    m_transactionHasBeenSet(false),
    m_qpsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_migrateHasBeenSet(false)
{
}

CoreInternalOutcome QueueSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QueueId") && !value["QueueId"].IsNull())
    {
        if (!value["QueueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueueSet.QueueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueId = string(value["QueueId"].GetString());
        m_queueIdHasBeenSet = true;
    }

    if (value.HasMember("RewindSeconds") && !value["RewindSeconds"].IsNull())
    {
        if (!value["RewindSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueSet.RewindSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rewindSeconds = value["RewindSeconds"].GetUint64();
        m_rewindSecondsHasBeenSet = true;
    }

    if (value.HasMember("CreateUin") && !value["CreateUin"].IsNull())
    {
        if (!value["CreateUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueSet.CreateUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createUin = value["CreateUin"].GetUint64();
        m_createUinHasBeenSet = true;
    }

    if (value.HasMember("LastModifyTime") && !value["LastModifyTime"].IsNull())
    {
        if (!value["LastModifyTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueSet.LastModifyTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifyTime = value["LastModifyTime"].GetUint64();
        m_lastModifyTimeHasBeenSet = true;
    }

    if (value.HasMember("VisibilityTimeout") && !value["VisibilityTimeout"].IsNull())
    {
        if (!value["VisibilityTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueSet.VisibilityTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_visibilityTimeout = value["VisibilityTimeout"].GetUint64();
        m_visibilityTimeoutHasBeenSet = true;
    }

    if (value.HasMember("QueueName") && !value["QueueName"].IsNull())
    {
        if (!value["QueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueueSet.QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(value["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }

    if (value.HasMember("Trace") && !value["Trace"].IsNull())
    {
        if (!value["Trace"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QueueSet.Trace` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_trace = value["Trace"].GetBool();
        m_traceHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueueSet.Tags` is not array type"));

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

    if (value.HasMember("RewindMsgNum") && !value["RewindMsgNum"].IsNull())
    {
        if (!value["RewindMsgNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueSet.RewindMsgNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rewindMsgNum = value["RewindMsgNum"].GetUint64();
        m_rewindMsgNumHasBeenSet = true;
    }

    if (value.HasMember("MaxDelaySeconds") && !value["MaxDelaySeconds"].IsNull())
    {
        if (!value["MaxDelaySeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueSet.MaxDelaySeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDelaySeconds = value["MaxDelaySeconds"].GetUint64();
        m_maxDelaySecondsHasBeenSet = true;
    }

    if (value.HasMember("TransactionPolicy") && !value["TransactionPolicy"].IsNull())
    {
        if (!value["TransactionPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QueueSet.TransactionPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_transactionPolicy.Deserialize(value["TransactionPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_transactionPolicyHasBeenSet = true;
    }

    if (value.HasMember("MsgRetentionSeconds") && !value["MsgRetentionSeconds"].IsNull())
    {
        if (!value["MsgRetentionSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueSet.MsgRetentionSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_msgRetentionSeconds = value["MsgRetentionSeconds"].GetUint64();
        m_msgRetentionSecondsHasBeenSet = true;
    }

    if (value.HasMember("DelayMsgNum") && !value["DelayMsgNum"].IsNull())
    {
        if (!value["DelayMsgNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueSet.DelayMsgNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_delayMsgNum = value["DelayMsgNum"].GetUint64();
        m_delayMsgNumHasBeenSet = true;
    }

    if (value.HasMember("MaxMsgHeapNum") && !value["MaxMsgHeapNum"].IsNull())
    {
        if (!value["MaxMsgHeapNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueSet.MaxMsgHeapNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMsgHeapNum = value["MaxMsgHeapNum"].GetUint64();
        m_maxMsgHeapNumHasBeenSet = true;
    }

    if (value.HasMember("PollingWaitSeconds") && !value["PollingWaitSeconds"].IsNull())
    {
        if (!value["PollingWaitSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueSet.PollingWaitSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pollingWaitSeconds = value["PollingWaitSeconds"].GetUint64();
        m_pollingWaitSecondsHasBeenSet = true;
    }

    if (value.HasMember("Bps") && !value["Bps"].IsNull())
    {
        if (!value["Bps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueSet.Bps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bps = value["Bps"].GetUint64();
        m_bpsHasBeenSet = true;
    }

    if (value.HasMember("InactiveMsgNum") && !value["InactiveMsgNum"].IsNull())
    {
        if (!value["InactiveMsgNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueSet.InactiveMsgNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_inactiveMsgNum = value["InactiveMsgNum"].GetUint64();
        m_inactiveMsgNumHasBeenSet = true;
    }

    if (value.HasMember("DeadLetterPolicy") && !value["DeadLetterPolicy"].IsNull())
    {
        if (!value["DeadLetterPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QueueSet.DeadLetterPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deadLetterPolicy.Deserialize(value["DeadLetterPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deadLetterPolicyHasBeenSet = true;
    }

    if (value.HasMember("ActiveMsgNum") && !value["ActiveMsgNum"].IsNull())
    {
        if (!value["ActiveMsgNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueSet.ActiveMsgNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_activeMsgNum = value["ActiveMsgNum"].GetUint64();
        m_activeMsgNumHasBeenSet = true;
    }

    if (value.HasMember("MaxMsgSize") && !value["MaxMsgSize"].IsNull())
    {
        if (!value["MaxMsgSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueSet.MaxMsgSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMsgSize = value["MaxMsgSize"].GetUint64();
        m_maxMsgSizeHasBeenSet = true;
    }

    if (value.HasMember("MinMsgTime") && !value["MinMsgTime"].IsNull())
    {
        if (!value["MinMsgTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueSet.MinMsgTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minMsgTime = value["MinMsgTime"].GetUint64();
        m_minMsgTimeHasBeenSet = true;
    }

    if (value.HasMember("DeadLetterSource") && !value["DeadLetterSource"].IsNull())
    {
        if (!value["DeadLetterSource"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueueSet.DeadLetterSource` is not array type"));

        const rapidjson::Value &tmpValue = value["DeadLetterSource"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeadLetterSource item;
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

    if (value.HasMember("Transaction") && !value["Transaction"].IsNull())
    {
        if (!value["Transaction"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QueueSet.Transaction` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_transaction = value["Transaction"].GetBool();
        m_transactionHasBeenSet = true;
    }

    if (value.HasMember("Qps") && !value["Qps"].IsNull())
    {
        if (!value["Qps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueSet.Qps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qps = value["Qps"].GetUint64();
        m_qpsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueSet.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Migrate") && !value["Migrate"].IsNull())
    {
        if (!value["Migrate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueSet.Migrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_migrate = value["Migrate"].GetInt64();
        m_migrateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueueSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_queueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueId.c_str(), allocator).Move(), allocator);
    }

    if (m_rewindSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RewindSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rewindSeconds, allocator);
    }

    if (m_createUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createUin, allocator);
    }

    if (m_lastModifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastModifyTime, allocator);
    }

    if (m_visibilityTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisibilityTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_visibilityTimeout, allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_traceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trace, allocator);
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

    if (m_rewindMsgNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RewindMsgNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rewindMsgNum, allocator);
    }

    if (m_maxDelaySecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDelaySeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDelaySeconds, allocator);
    }

    if (m_transactionPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transactionPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_msgRetentionSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgRetentionSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgRetentionSeconds, allocator);
    }

    if (m_delayMsgNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayMsgNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delayMsgNum, allocator);
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

    if (m_bpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bps, allocator);
    }

    if (m_inactiveMsgNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InactiveMsgNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inactiveMsgNum, allocator);
    }

    if (m_deadLetterPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLetterPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deadLetterPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_activeMsgNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveMsgNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeMsgNum, allocator);
    }

    if (m_maxMsgSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMsgSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxMsgSize, allocator);
    }

    if (m_minMsgTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinMsgTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minMsgTime, allocator);
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

    if (m_transactionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transaction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transaction, allocator);
    }

    if (m_qpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qps, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_migrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Migrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_migrate, allocator);
    }

}


string QueueSet::GetQueueId() const
{
    return m_queueId;
}

void QueueSet::SetQueueId(const string& _queueId)
{
    m_queueId = _queueId;
    m_queueIdHasBeenSet = true;
}

bool QueueSet::QueueIdHasBeenSet() const
{
    return m_queueIdHasBeenSet;
}

uint64_t QueueSet::GetRewindSeconds() const
{
    return m_rewindSeconds;
}

void QueueSet::SetRewindSeconds(const uint64_t& _rewindSeconds)
{
    m_rewindSeconds = _rewindSeconds;
    m_rewindSecondsHasBeenSet = true;
}

bool QueueSet::RewindSecondsHasBeenSet() const
{
    return m_rewindSecondsHasBeenSet;
}

uint64_t QueueSet::GetCreateUin() const
{
    return m_createUin;
}

void QueueSet::SetCreateUin(const uint64_t& _createUin)
{
    m_createUin = _createUin;
    m_createUinHasBeenSet = true;
}

bool QueueSet::CreateUinHasBeenSet() const
{
    return m_createUinHasBeenSet;
}

uint64_t QueueSet::GetLastModifyTime() const
{
    return m_lastModifyTime;
}

void QueueSet::SetLastModifyTime(const uint64_t& _lastModifyTime)
{
    m_lastModifyTime = _lastModifyTime;
    m_lastModifyTimeHasBeenSet = true;
}

bool QueueSet::LastModifyTimeHasBeenSet() const
{
    return m_lastModifyTimeHasBeenSet;
}

uint64_t QueueSet::GetVisibilityTimeout() const
{
    return m_visibilityTimeout;
}

void QueueSet::SetVisibilityTimeout(const uint64_t& _visibilityTimeout)
{
    m_visibilityTimeout = _visibilityTimeout;
    m_visibilityTimeoutHasBeenSet = true;
}

bool QueueSet::VisibilityTimeoutHasBeenSet() const
{
    return m_visibilityTimeoutHasBeenSet;
}

string QueueSet::GetQueueName() const
{
    return m_queueName;
}

void QueueSet::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool QueueSet::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

bool QueueSet::GetTrace() const
{
    return m_trace;
}

void QueueSet::SetTrace(const bool& _trace)
{
    m_trace = _trace;
    m_traceHasBeenSet = true;
}

bool QueueSet::TraceHasBeenSet() const
{
    return m_traceHasBeenSet;
}

vector<Tag> QueueSet::GetTags() const
{
    return m_tags;
}

void QueueSet::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool QueueSet::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

uint64_t QueueSet::GetRewindMsgNum() const
{
    return m_rewindMsgNum;
}

void QueueSet::SetRewindMsgNum(const uint64_t& _rewindMsgNum)
{
    m_rewindMsgNum = _rewindMsgNum;
    m_rewindMsgNumHasBeenSet = true;
}

bool QueueSet::RewindMsgNumHasBeenSet() const
{
    return m_rewindMsgNumHasBeenSet;
}

uint64_t QueueSet::GetMaxDelaySeconds() const
{
    return m_maxDelaySeconds;
}

void QueueSet::SetMaxDelaySeconds(const uint64_t& _maxDelaySeconds)
{
    m_maxDelaySeconds = _maxDelaySeconds;
    m_maxDelaySecondsHasBeenSet = true;
}

bool QueueSet::MaxDelaySecondsHasBeenSet() const
{
    return m_maxDelaySecondsHasBeenSet;
}

TransactionPolicy QueueSet::GetTransactionPolicy() const
{
    return m_transactionPolicy;
}

void QueueSet::SetTransactionPolicy(const TransactionPolicy& _transactionPolicy)
{
    m_transactionPolicy = _transactionPolicy;
    m_transactionPolicyHasBeenSet = true;
}

bool QueueSet::TransactionPolicyHasBeenSet() const
{
    return m_transactionPolicyHasBeenSet;
}

uint64_t QueueSet::GetMsgRetentionSeconds() const
{
    return m_msgRetentionSeconds;
}

void QueueSet::SetMsgRetentionSeconds(const uint64_t& _msgRetentionSeconds)
{
    m_msgRetentionSeconds = _msgRetentionSeconds;
    m_msgRetentionSecondsHasBeenSet = true;
}

bool QueueSet::MsgRetentionSecondsHasBeenSet() const
{
    return m_msgRetentionSecondsHasBeenSet;
}

uint64_t QueueSet::GetDelayMsgNum() const
{
    return m_delayMsgNum;
}

void QueueSet::SetDelayMsgNum(const uint64_t& _delayMsgNum)
{
    m_delayMsgNum = _delayMsgNum;
    m_delayMsgNumHasBeenSet = true;
}

bool QueueSet::DelayMsgNumHasBeenSet() const
{
    return m_delayMsgNumHasBeenSet;
}

uint64_t QueueSet::GetMaxMsgHeapNum() const
{
    return m_maxMsgHeapNum;
}

void QueueSet::SetMaxMsgHeapNum(const uint64_t& _maxMsgHeapNum)
{
    m_maxMsgHeapNum = _maxMsgHeapNum;
    m_maxMsgHeapNumHasBeenSet = true;
}

bool QueueSet::MaxMsgHeapNumHasBeenSet() const
{
    return m_maxMsgHeapNumHasBeenSet;
}

uint64_t QueueSet::GetPollingWaitSeconds() const
{
    return m_pollingWaitSeconds;
}

void QueueSet::SetPollingWaitSeconds(const uint64_t& _pollingWaitSeconds)
{
    m_pollingWaitSeconds = _pollingWaitSeconds;
    m_pollingWaitSecondsHasBeenSet = true;
}

bool QueueSet::PollingWaitSecondsHasBeenSet() const
{
    return m_pollingWaitSecondsHasBeenSet;
}

uint64_t QueueSet::GetBps() const
{
    return m_bps;
}

void QueueSet::SetBps(const uint64_t& _bps)
{
    m_bps = _bps;
    m_bpsHasBeenSet = true;
}

bool QueueSet::BpsHasBeenSet() const
{
    return m_bpsHasBeenSet;
}

uint64_t QueueSet::GetInactiveMsgNum() const
{
    return m_inactiveMsgNum;
}

void QueueSet::SetInactiveMsgNum(const uint64_t& _inactiveMsgNum)
{
    m_inactiveMsgNum = _inactiveMsgNum;
    m_inactiveMsgNumHasBeenSet = true;
}

bool QueueSet::InactiveMsgNumHasBeenSet() const
{
    return m_inactiveMsgNumHasBeenSet;
}

DeadLetterPolicy QueueSet::GetDeadLetterPolicy() const
{
    return m_deadLetterPolicy;
}

void QueueSet::SetDeadLetterPolicy(const DeadLetterPolicy& _deadLetterPolicy)
{
    m_deadLetterPolicy = _deadLetterPolicy;
    m_deadLetterPolicyHasBeenSet = true;
}

bool QueueSet::DeadLetterPolicyHasBeenSet() const
{
    return m_deadLetterPolicyHasBeenSet;
}

uint64_t QueueSet::GetActiveMsgNum() const
{
    return m_activeMsgNum;
}

void QueueSet::SetActiveMsgNum(const uint64_t& _activeMsgNum)
{
    m_activeMsgNum = _activeMsgNum;
    m_activeMsgNumHasBeenSet = true;
}

bool QueueSet::ActiveMsgNumHasBeenSet() const
{
    return m_activeMsgNumHasBeenSet;
}

uint64_t QueueSet::GetMaxMsgSize() const
{
    return m_maxMsgSize;
}

void QueueSet::SetMaxMsgSize(const uint64_t& _maxMsgSize)
{
    m_maxMsgSize = _maxMsgSize;
    m_maxMsgSizeHasBeenSet = true;
}

bool QueueSet::MaxMsgSizeHasBeenSet() const
{
    return m_maxMsgSizeHasBeenSet;
}

uint64_t QueueSet::GetMinMsgTime() const
{
    return m_minMsgTime;
}

void QueueSet::SetMinMsgTime(const uint64_t& _minMsgTime)
{
    m_minMsgTime = _minMsgTime;
    m_minMsgTimeHasBeenSet = true;
}

bool QueueSet::MinMsgTimeHasBeenSet() const
{
    return m_minMsgTimeHasBeenSet;
}

vector<DeadLetterSource> QueueSet::GetDeadLetterSource() const
{
    return m_deadLetterSource;
}

void QueueSet::SetDeadLetterSource(const vector<DeadLetterSource>& _deadLetterSource)
{
    m_deadLetterSource = _deadLetterSource;
    m_deadLetterSourceHasBeenSet = true;
}

bool QueueSet::DeadLetterSourceHasBeenSet() const
{
    return m_deadLetterSourceHasBeenSet;
}

bool QueueSet::GetTransaction() const
{
    return m_transaction;
}

void QueueSet::SetTransaction(const bool& _transaction)
{
    m_transaction = _transaction;
    m_transactionHasBeenSet = true;
}

bool QueueSet::TransactionHasBeenSet() const
{
    return m_transactionHasBeenSet;
}

uint64_t QueueSet::GetQps() const
{
    return m_qps;
}

void QueueSet::SetQps(const uint64_t& _qps)
{
    m_qps = _qps;
    m_qpsHasBeenSet = true;
}

bool QueueSet::QpsHasBeenSet() const
{
    return m_qpsHasBeenSet;
}

uint64_t QueueSet::GetCreateTime() const
{
    return m_createTime;
}

void QueueSet::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool QueueSet::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t QueueSet::GetMigrate() const
{
    return m_migrate;
}

void QueueSet::SetMigrate(const int64_t& _migrate)
{
    m_migrate = _migrate;
    m_migrateHasBeenSet = true;
}

bool QueueSet::MigrateHasBeenSet() const
{
    return m_migrateHasBeenSet;
}


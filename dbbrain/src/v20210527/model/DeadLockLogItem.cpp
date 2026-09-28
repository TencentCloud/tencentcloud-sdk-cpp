/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/dbbrain/v20210527/model/DeadLockLogItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DeadLockLogItem::DeadLockLogItem() :
    m_instanceIdHasBeenSet(false),
    m_timestampSourceHasBeenSet(false),
    m_partialReasonCodeHasBeenSet(false),
    m_victimProcessIdsHasBeenSet(false),
    m_payloadTruncatedHasBeenSet(false),
    m_sourceUuidsHasBeenSet(false),
    m_observedTransactionCountHasBeenSet(false),
    m_eventTimestampHasBeenSet(false),
    m_graphStatusHasBeenSet(false),
    m_xmlIncludedHasBeenSet(false),
    m_processCountHasBeenSet(false),
    m_transactionsHasBeenSet(false),
    m_deadlockIdHasBeenSet(false),
    m_xmlReportHasBeenSet(false),
    m_originalXmlBytesHasBeenSet(false),
    m_victimSessionIdsHasBeenSet(false),
    m_isPartialHasBeenSet(false),
    m_databaseNamesHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_deadlockSignatureHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_associationStatusHasBeenSet(false),
    m_transactionCountHasBeenSet(false)
{
}

CoreInternalOutcome DeadLockLogItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLockLogItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("TimestampSource") && !value["TimestampSource"].IsNull())
    {
        if (!value["TimestampSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLockLogItem.TimestampSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestampSource = string(value["TimestampSource"].GetString());
        m_timestampSourceHasBeenSet = true;
    }

    if (value.HasMember("PartialReasonCode") && !value["PartialReasonCode"].IsNull())
    {
        if (!value["PartialReasonCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLockLogItem.PartialReasonCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partialReasonCode = string(value["PartialReasonCode"].GetString());
        m_partialReasonCodeHasBeenSet = true;
    }

    if (value.HasMember("VictimProcessIds") && !value["VictimProcessIds"].IsNull())
    {
        if (!value["VictimProcessIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeadLockLogItem.VictimProcessIds` is not array type"));

        const rapidjson::Value &tmpValue = value["VictimProcessIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_victimProcessIds.push_back((*itr).GetString());
        }
        m_victimProcessIdsHasBeenSet = true;
    }

    if (value.HasMember("PayloadTruncated") && !value["PayloadTruncated"].IsNull())
    {
        if (!value["PayloadTruncated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLockLogItem.PayloadTruncated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_payloadTruncated = value["PayloadTruncated"].GetBool();
        m_payloadTruncatedHasBeenSet = true;
    }

    if (value.HasMember("SourceUuids") && !value["SourceUuids"].IsNull())
    {
        if (!value["SourceUuids"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeadLockLogItem.SourceUuids` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceUuids"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sourceUuids.push_back((*itr).GetString());
        }
        m_sourceUuidsHasBeenSet = true;
    }

    if (value.HasMember("ObservedTransactionCount") && !value["ObservedTransactionCount"].IsNull())
    {
        if (!value["ObservedTransactionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLockLogItem.ObservedTransactionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_observedTransactionCount = value["ObservedTransactionCount"].GetInt64();
        m_observedTransactionCountHasBeenSet = true;
    }

    if (value.HasMember("EventTimestamp") && !value["EventTimestamp"].IsNull())
    {
        if (!value["EventTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLockLogItem.EventTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventTimestamp = string(value["EventTimestamp"].GetString());
        m_eventTimestampHasBeenSet = true;
    }

    if (value.HasMember("GraphStatus") && !value["GraphStatus"].IsNull())
    {
        if (!value["GraphStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLockLogItem.GraphStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_graphStatus = string(value["GraphStatus"].GetString());
        m_graphStatusHasBeenSet = true;
    }

    if (value.HasMember("XmlIncluded") && !value["XmlIncluded"].IsNull())
    {
        if (!value["XmlIncluded"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLockLogItem.XmlIncluded` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_xmlIncluded = value["XmlIncluded"].GetBool();
        m_xmlIncludedHasBeenSet = true;
    }

    if (value.HasMember("ProcessCount") && !value["ProcessCount"].IsNull())
    {
        if (!value["ProcessCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLockLogItem.ProcessCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_processCount = value["ProcessCount"].GetInt64();
        m_processCountHasBeenSet = true;
    }

    if (value.HasMember("Transactions") && !value["Transactions"].IsNull())
    {
        if (!value["Transactions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeadLockLogItem.Transactions` is not array type"));

        const rapidjson::Value &tmpValue = value["Transactions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeadlockTransaction item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_transactions.push_back(item);
        }
        m_transactionsHasBeenSet = true;
    }

    if (value.HasMember("DeadlockId") && !value["DeadlockId"].IsNull())
    {
        if (!value["DeadlockId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLockLogItem.DeadlockId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadlockId = string(value["DeadlockId"].GetString());
        m_deadlockIdHasBeenSet = true;
    }

    if (value.HasMember("XmlReport") && !value["XmlReport"].IsNull())
    {
        if (!value["XmlReport"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLockLogItem.XmlReport` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_xmlReport = string(value["XmlReport"].GetString());
        m_xmlReportHasBeenSet = true;
    }

    if (value.HasMember("OriginalXmlBytes") && !value["OriginalXmlBytes"].IsNull())
    {
        if (!value["OriginalXmlBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLockLogItem.OriginalXmlBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originalXmlBytes = value["OriginalXmlBytes"].GetInt64();
        m_originalXmlBytesHasBeenSet = true;
    }

    if (value.HasMember("VictimSessionIds") && !value["VictimSessionIds"].IsNull())
    {
        if (!value["VictimSessionIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeadLockLogItem.VictimSessionIds` is not array type"));

        const rapidjson::Value &tmpValue = value["VictimSessionIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_victimSessionIds.push_back((*itr).GetInt64());
        }
        m_victimSessionIdsHasBeenSet = true;
    }

    if (value.HasMember("IsPartial") && !value["IsPartial"].IsNull())
    {
        if (!value["IsPartial"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLockLogItem.IsPartial` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPartial = value["IsPartial"].GetBool();
        m_isPartialHasBeenSet = true;
    }

    if (value.HasMember("DatabaseNames") && !value["DatabaseNames"].IsNull())
    {
        if (!value["DatabaseNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeadLockLogItem.DatabaseNames` is not array type"));

        const rapidjson::Value &tmpValue = value["DatabaseNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_databaseNames.push_back((*itr).GetString());
        }
        m_databaseNamesHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLockLogItem.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("DeadlockSignature") && !value["DeadlockSignature"].IsNull())
    {
        if (!value["DeadlockSignature"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLockLogItem.DeadlockSignature` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadlockSignature = string(value["DeadlockSignature"].GetString());
        m_deadlockSignatureHasBeenSet = true;
    }

    if (value.HasMember("Resources") && !value["Resources"].IsNull())
    {
        if (!value["Resources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeadLockLogItem.Resources` is not array type"));

        const rapidjson::Value &tmpValue = value["Resources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeadlockResource item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resources.push_back(item);
        }
        m_resourcesHasBeenSet = true;
    }

    if (value.HasMember("AssociationStatus") && !value["AssociationStatus"].IsNull())
    {
        if (!value["AssociationStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLockLogItem.AssociationStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_associationStatus = string(value["AssociationStatus"].GetString());
        m_associationStatusHasBeenSet = true;
    }

    if (value.HasMember("TransactionCount") && !value["TransactionCount"].IsNull())
    {
        if (!value["TransactionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLockLogItem.TransactionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transactionCount = value["TransactionCount"].GetInt64();
        m_transactionCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeadLockLogItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimestampSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestampSource.c_str(), allocator).Move(), allocator);
    }

    if (m_partialReasonCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartialReasonCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partialReasonCode.c_str(), allocator).Move(), allocator);
    }

    if (m_victimProcessIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VictimProcessIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_victimProcessIds.begin(); itr != m_victimProcessIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_payloadTruncatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayloadTruncated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payloadTruncated, allocator);
    }

    if (m_sourceUuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceUuids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceUuids.begin(); itr != m_sourceUuids.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_observedTransactionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObservedTransactionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_observedTransactionCount, allocator);
    }

    if (m_eventTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_graphStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GraphStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_graphStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_xmlIncludedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XmlIncluded";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_xmlIncluded, allocator);
    }

    if (m_processCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processCount, allocator);
    }

    if (m_transactionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transactions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_transactions.begin(); itr != m_transactions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deadlockIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadlockId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadlockId.c_str(), allocator).Move(), allocator);
    }

    if (m_xmlReportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XmlReport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_xmlReport.c_str(), allocator).Move(), allocator);
    }

    if (m_originalXmlBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalXmlBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalXmlBytes, allocator);
    }

    if (m_victimSessionIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VictimSessionIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_victimSessionIds.begin(); itr != m_victimSessionIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_isPartialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPartial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPartial, allocator);
    }

    if (m_databaseNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_databaseNames.begin(); itr != m_databaseNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlockSignatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadlockSignature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadlockSignature.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resources.begin(); itr != m_resources.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_associationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_associationStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_transactionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transactionCount, allocator);
    }

}


string DeadLockLogItem::GetInstanceId() const
{
    return m_instanceId;
}

void DeadLockLogItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DeadLockLogItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DeadLockLogItem::GetTimestampSource() const
{
    return m_timestampSource;
}

void DeadLockLogItem::SetTimestampSource(const string& _timestampSource)
{
    m_timestampSource = _timestampSource;
    m_timestampSourceHasBeenSet = true;
}

bool DeadLockLogItem::TimestampSourceHasBeenSet() const
{
    return m_timestampSourceHasBeenSet;
}

string DeadLockLogItem::GetPartialReasonCode() const
{
    return m_partialReasonCode;
}

void DeadLockLogItem::SetPartialReasonCode(const string& _partialReasonCode)
{
    m_partialReasonCode = _partialReasonCode;
    m_partialReasonCodeHasBeenSet = true;
}

bool DeadLockLogItem::PartialReasonCodeHasBeenSet() const
{
    return m_partialReasonCodeHasBeenSet;
}

vector<string> DeadLockLogItem::GetVictimProcessIds() const
{
    return m_victimProcessIds;
}

void DeadLockLogItem::SetVictimProcessIds(const vector<string>& _victimProcessIds)
{
    m_victimProcessIds = _victimProcessIds;
    m_victimProcessIdsHasBeenSet = true;
}

bool DeadLockLogItem::VictimProcessIdsHasBeenSet() const
{
    return m_victimProcessIdsHasBeenSet;
}

bool DeadLockLogItem::GetPayloadTruncated() const
{
    return m_payloadTruncated;
}

void DeadLockLogItem::SetPayloadTruncated(const bool& _payloadTruncated)
{
    m_payloadTruncated = _payloadTruncated;
    m_payloadTruncatedHasBeenSet = true;
}

bool DeadLockLogItem::PayloadTruncatedHasBeenSet() const
{
    return m_payloadTruncatedHasBeenSet;
}

vector<string> DeadLockLogItem::GetSourceUuids() const
{
    return m_sourceUuids;
}

void DeadLockLogItem::SetSourceUuids(const vector<string>& _sourceUuids)
{
    m_sourceUuids = _sourceUuids;
    m_sourceUuidsHasBeenSet = true;
}

bool DeadLockLogItem::SourceUuidsHasBeenSet() const
{
    return m_sourceUuidsHasBeenSet;
}

int64_t DeadLockLogItem::GetObservedTransactionCount() const
{
    return m_observedTransactionCount;
}

void DeadLockLogItem::SetObservedTransactionCount(const int64_t& _observedTransactionCount)
{
    m_observedTransactionCount = _observedTransactionCount;
    m_observedTransactionCountHasBeenSet = true;
}

bool DeadLockLogItem::ObservedTransactionCountHasBeenSet() const
{
    return m_observedTransactionCountHasBeenSet;
}

string DeadLockLogItem::GetEventTimestamp() const
{
    return m_eventTimestamp;
}

void DeadLockLogItem::SetEventTimestamp(const string& _eventTimestamp)
{
    m_eventTimestamp = _eventTimestamp;
    m_eventTimestampHasBeenSet = true;
}

bool DeadLockLogItem::EventTimestampHasBeenSet() const
{
    return m_eventTimestampHasBeenSet;
}

string DeadLockLogItem::GetGraphStatus() const
{
    return m_graphStatus;
}

void DeadLockLogItem::SetGraphStatus(const string& _graphStatus)
{
    m_graphStatus = _graphStatus;
    m_graphStatusHasBeenSet = true;
}

bool DeadLockLogItem::GraphStatusHasBeenSet() const
{
    return m_graphStatusHasBeenSet;
}

bool DeadLockLogItem::GetXmlIncluded() const
{
    return m_xmlIncluded;
}

void DeadLockLogItem::SetXmlIncluded(const bool& _xmlIncluded)
{
    m_xmlIncluded = _xmlIncluded;
    m_xmlIncludedHasBeenSet = true;
}

bool DeadLockLogItem::XmlIncludedHasBeenSet() const
{
    return m_xmlIncludedHasBeenSet;
}

int64_t DeadLockLogItem::GetProcessCount() const
{
    return m_processCount;
}

void DeadLockLogItem::SetProcessCount(const int64_t& _processCount)
{
    m_processCount = _processCount;
    m_processCountHasBeenSet = true;
}

bool DeadLockLogItem::ProcessCountHasBeenSet() const
{
    return m_processCountHasBeenSet;
}

vector<DeadlockTransaction> DeadLockLogItem::GetTransactions() const
{
    return m_transactions;
}

void DeadLockLogItem::SetTransactions(const vector<DeadlockTransaction>& _transactions)
{
    m_transactions = _transactions;
    m_transactionsHasBeenSet = true;
}

bool DeadLockLogItem::TransactionsHasBeenSet() const
{
    return m_transactionsHasBeenSet;
}

string DeadLockLogItem::GetDeadlockId() const
{
    return m_deadlockId;
}

void DeadLockLogItem::SetDeadlockId(const string& _deadlockId)
{
    m_deadlockId = _deadlockId;
    m_deadlockIdHasBeenSet = true;
}

bool DeadLockLogItem::DeadlockIdHasBeenSet() const
{
    return m_deadlockIdHasBeenSet;
}

string DeadLockLogItem::GetXmlReport() const
{
    return m_xmlReport;
}

void DeadLockLogItem::SetXmlReport(const string& _xmlReport)
{
    m_xmlReport = _xmlReport;
    m_xmlReportHasBeenSet = true;
}

bool DeadLockLogItem::XmlReportHasBeenSet() const
{
    return m_xmlReportHasBeenSet;
}

int64_t DeadLockLogItem::GetOriginalXmlBytes() const
{
    return m_originalXmlBytes;
}

void DeadLockLogItem::SetOriginalXmlBytes(const int64_t& _originalXmlBytes)
{
    m_originalXmlBytes = _originalXmlBytes;
    m_originalXmlBytesHasBeenSet = true;
}

bool DeadLockLogItem::OriginalXmlBytesHasBeenSet() const
{
    return m_originalXmlBytesHasBeenSet;
}

vector<int64_t> DeadLockLogItem::GetVictimSessionIds() const
{
    return m_victimSessionIds;
}

void DeadLockLogItem::SetVictimSessionIds(const vector<int64_t>& _victimSessionIds)
{
    m_victimSessionIds = _victimSessionIds;
    m_victimSessionIdsHasBeenSet = true;
}

bool DeadLockLogItem::VictimSessionIdsHasBeenSet() const
{
    return m_victimSessionIdsHasBeenSet;
}

bool DeadLockLogItem::GetIsPartial() const
{
    return m_isPartial;
}

void DeadLockLogItem::SetIsPartial(const bool& _isPartial)
{
    m_isPartial = _isPartial;
    m_isPartialHasBeenSet = true;
}

bool DeadLockLogItem::IsPartialHasBeenSet() const
{
    return m_isPartialHasBeenSet;
}

vector<string> DeadLockLogItem::GetDatabaseNames() const
{
    return m_databaseNames;
}

void DeadLockLogItem::SetDatabaseNames(const vector<string>& _databaseNames)
{
    m_databaseNames = _databaseNames;
    m_databaseNamesHasBeenSet = true;
}

bool DeadLockLogItem::DatabaseNamesHasBeenSet() const
{
    return m_databaseNamesHasBeenSet;
}

string DeadLockLogItem::GetEventId() const
{
    return m_eventId;
}

void DeadLockLogItem::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool DeadLockLogItem::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string DeadLockLogItem::GetDeadlockSignature() const
{
    return m_deadlockSignature;
}

void DeadLockLogItem::SetDeadlockSignature(const string& _deadlockSignature)
{
    m_deadlockSignature = _deadlockSignature;
    m_deadlockSignatureHasBeenSet = true;
}

bool DeadLockLogItem::DeadlockSignatureHasBeenSet() const
{
    return m_deadlockSignatureHasBeenSet;
}

vector<DeadlockResource> DeadLockLogItem::GetResources() const
{
    return m_resources;
}

void DeadLockLogItem::SetResources(const vector<DeadlockResource>& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool DeadLockLogItem::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

string DeadLockLogItem::GetAssociationStatus() const
{
    return m_associationStatus;
}

void DeadLockLogItem::SetAssociationStatus(const string& _associationStatus)
{
    m_associationStatus = _associationStatus;
    m_associationStatusHasBeenSet = true;
}

bool DeadLockLogItem::AssociationStatusHasBeenSet() const
{
    return m_associationStatusHasBeenSet;
}

int64_t DeadLockLogItem::GetTransactionCount() const
{
    return m_transactionCount;
}

void DeadLockLogItem::SetTransactionCount(const int64_t& _transactionCount)
{
    m_transactionCount = _transactionCount;
    m_transactionCountHasBeenSet = true;
}

bool DeadLockLogItem::TransactionCountHasBeenSet() const
{
    return m_transactionCountHasBeenSet;
}


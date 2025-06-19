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

#include <tencentcloud/tdmq/v20200217/model/RabbitMQVirtualHostInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RabbitMQVirtualHostInfo::RabbitMQVirtualHostInfo() :
    m_instanceIdHasBeenSet(false),
    m_virtualHostHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_virtualHostStatisticsHasBeenSet(false),
    m_traceFlagHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHeapCountHasBeenSet(false),
    m_messageRateInHasBeenSet(false),
    m_messageRateOutHasBeenSet(false),
    m_mirrorQueuePolicyFlagHasBeenSet(false),
    m_createTsHasBeenSet(false),
    m_modifyTsHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQVirtualHostInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVirtualHostInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("VirtualHost") && !value["VirtualHost"].IsNull())
    {
        if (!value["VirtualHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVirtualHostInfo.VirtualHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualHost = string(value["VirtualHost"].GetString());
        m_virtualHostHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVirtualHostInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RabbitMQVirtualHostInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVirtualHostInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVirtualHostInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("VirtualHostStatistics") && !value["VirtualHostStatistics"].IsNull())
    {
        if (!value["VirtualHostStatistics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVirtualHostInfo.VirtualHostStatistics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_virtualHostStatistics.Deserialize(value["VirtualHostStatistics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_virtualHostStatisticsHasBeenSet = true;
    }

    if (value.HasMember("TraceFlag") && !value["TraceFlag"].IsNull())
    {
        if (!value["TraceFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVirtualHostInfo.TraceFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_traceFlag = value["TraceFlag"].GetBool();
        m_traceFlagHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVirtualHostInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("MessageHeapCount") && !value["MessageHeapCount"].IsNull())
    {
        if (!value["MessageHeapCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVirtualHostInfo.MessageHeapCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_messageHeapCount = value["MessageHeapCount"].GetInt64();
        m_messageHeapCountHasBeenSet = true;
    }

    if (value.HasMember("MessageRateIn") && !value["MessageRateIn"].IsNull())
    {
        if (!value["MessageRateIn"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVirtualHostInfo.MessageRateIn` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_messageRateIn = value["MessageRateIn"].GetDouble();
        m_messageRateInHasBeenSet = true;
    }

    if (value.HasMember("MessageRateOut") && !value["MessageRateOut"].IsNull())
    {
        if (!value["MessageRateOut"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVirtualHostInfo.MessageRateOut` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_messageRateOut = value["MessageRateOut"].GetDouble();
        m_messageRateOutHasBeenSet = true;
    }

    if (value.HasMember("MirrorQueuePolicyFlag") && !value["MirrorQueuePolicyFlag"].IsNull())
    {
        if (!value["MirrorQueuePolicyFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVirtualHostInfo.MirrorQueuePolicyFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_mirrorQueuePolicyFlag = value["MirrorQueuePolicyFlag"].GetBool();
        m_mirrorQueuePolicyFlagHasBeenSet = true;
    }

    if (value.HasMember("CreateTs") && !value["CreateTs"].IsNull())
    {
        if (!value["CreateTs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVirtualHostInfo.CreateTs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTs = value["CreateTs"].GetUint64();
        m_createTsHasBeenSet = true;
    }

    if (value.HasMember("ModifyTs") && !value["ModifyTs"].IsNull())
    {
        if (!value["ModifyTs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVirtualHostInfo.ModifyTs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTs = value["ModifyTs"].GetUint64();
        m_modifyTsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQVirtualHostInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virtualHost.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualHostStatisticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualHostStatistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_virtualHostStatistics.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_traceFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_traceFlag, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHeapCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageHeapCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageHeapCount, allocator);
    }

    if (m_messageRateInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageRateIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageRateIn, allocator);
    }

    if (m_messageRateOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageRateOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageRateOut, allocator);
    }

    if (m_mirrorQueuePolicyFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MirrorQueuePolicyFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mirrorQueuePolicyFlag, allocator);
    }

    if (m_createTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTs, allocator);
    }

    if (m_modifyTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modifyTs, allocator);
    }

}


string RabbitMQVirtualHostInfo::GetInstanceId() const
{
    return m_instanceId;
}

void RabbitMQVirtualHostInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RabbitMQVirtualHostInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RabbitMQVirtualHostInfo::GetVirtualHost() const
{
    return m_virtualHost;
}

void RabbitMQVirtualHostInfo::SetVirtualHost(const string& _virtualHost)
{
    m_virtualHost = _virtualHost;
    m_virtualHostHasBeenSet = true;
}

bool RabbitMQVirtualHostInfo::VirtualHostHasBeenSet() const
{
    return m_virtualHostHasBeenSet;
}

string RabbitMQVirtualHostInfo::GetDescription() const
{
    return m_description;
}

void RabbitMQVirtualHostInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RabbitMQVirtualHostInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> RabbitMQVirtualHostInfo::GetTags() const
{
    return m_tags;
}

void RabbitMQVirtualHostInfo::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool RabbitMQVirtualHostInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string RabbitMQVirtualHostInfo::GetCreateTime() const
{
    return m_createTime;
}

void RabbitMQVirtualHostInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RabbitMQVirtualHostInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RabbitMQVirtualHostInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void RabbitMQVirtualHostInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool RabbitMQVirtualHostInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

RabbitMQVirtualHostStatistics RabbitMQVirtualHostInfo::GetVirtualHostStatistics() const
{
    return m_virtualHostStatistics;
}

void RabbitMQVirtualHostInfo::SetVirtualHostStatistics(const RabbitMQVirtualHostStatistics& _virtualHostStatistics)
{
    m_virtualHostStatistics = _virtualHostStatistics;
    m_virtualHostStatisticsHasBeenSet = true;
}

bool RabbitMQVirtualHostInfo::VirtualHostStatisticsHasBeenSet() const
{
    return m_virtualHostStatisticsHasBeenSet;
}

bool RabbitMQVirtualHostInfo::GetTraceFlag() const
{
    return m_traceFlag;
}

void RabbitMQVirtualHostInfo::SetTraceFlag(const bool& _traceFlag)
{
    m_traceFlag = _traceFlag;
    m_traceFlagHasBeenSet = true;
}

bool RabbitMQVirtualHostInfo::TraceFlagHasBeenSet() const
{
    return m_traceFlagHasBeenSet;
}

string RabbitMQVirtualHostInfo::GetStatus() const
{
    return m_status;
}

void RabbitMQVirtualHostInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RabbitMQVirtualHostInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t RabbitMQVirtualHostInfo::GetMessageHeapCount() const
{
    return m_messageHeapCount;
}

void RabbitMQVirtualHostInfo::SetMessageHeapCount(const int64_t& _messageHeapCount)
{
    m_messageHeapCount = _messageHeapCount;
    m_messageHeapCountHasBeenSet = true;
}

bool RabbitMQVirtualHostInfo::MessageHeapCountHasBeenSet() const
{
    return m_messageHeapCountHasBeenSet;
}

double RabbitMQVirtualHostInfo::GetMessageRateIn() const
{
    return m_messageRateIn;
}

void RabbitMQVirtualHostInfo::SetMessageRateIn(const double& _messageRateIn)
{
    m_messageRateIn = _messageRateIn;
    m_messageRateInHasBeenSet = true;
}

bool RabbitMQVirtualHostInfo::MessageRateInHasBeenSet() const
{
    return m_messageRateInHasBeenSet;
}

double RabbitMQVirtualHostInfo::GetMessageRateOut() const
{
    return m_messageRateOut;
}

void RabbitMQVirtualHostInfo::SetMessageRateOut(const double& _messageRateOut)
{
    m_messageRateOut = _messageRateOut;
    m_messageRateOutHasBeenSet = true;
}

bool RabbitMQVirtualHostInfo::MessageRateOutHasBeenSet() const
{
    return m_messageRateOutHasBeenSet;
}

bool RabbitMQVirtualHostInfo::GetMirrorQueuePolicyFlag() const
{
    return m_mirrorQueuePolicyFlag;
}

void RabbitMQVirtualHostInfo::SetMirrorQueuePolicyFlag(const bool& _mirrorQueuePolicyFlag)
{
    m_mirrorQueuePolicyFlag = _mirrorQueuePolicyFlag;
    m_mirrorQueuePolicyFlagHasBeenSet = true;
}

bool RabbitMQVirtualHostInfo::MirrorQueuePolicyFlagHasBeenSet() const
{
    return m_mirrorQueuePolicyFlagHasBeenSet;
}

uint64_t RabbitMQVirtualHostInfo::GetCreateTs() const
{
    return m_createTs;
}

void RabbitMQVirtualHostInfo::SetCreateTs(const uint64_t& _createTs)
{
    m_createTs = _createTs;
    m_createTsHasBeenSet = true;
}

bool RabbitMQVirtualHostInfo::CreateTsHasBeenSet() const
{
    return m_createTsHasBeenSet;
}

uint64_t RabbitMQVirtualHostInfo::GetModifyTs() const
{
    return m_modifyTs;
}

void RabbitMQVirtualHostInfo::SetModifyTs(const uint64_t& _modifyTs)
{
    m_modifyTs = _modifyTs;
    m_modifyTsHasBeenSet = true;
}

bool RabbitMQVirtualHostInfo::ModifyTsHasBeenSet() const
{
    return m_modifyTsHasBeenSet;
}


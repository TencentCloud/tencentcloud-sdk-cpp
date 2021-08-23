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

#include <tencentcloud/tdmq/v20200217/model/ConsumersSchedule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

ConsumersSchedule::ConsumersSchedule() :
    m_partitionsHasBeenSet(false),
    m_numberOfEntriesHasBeenSet(false),
    m_msgBacklogHasBeenSet(false),
    m_msgRateOutHasBeenSet(false),
    m_msgThroughputOutHasBeenSet(false),
    m_msgRateExpiredHasBeenSet(false)
{
}

CoreInternalOutcome ConsumersSchedule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Partitions") && !value["Partitions"].IsNull())
    {
        if (!value["Partitions"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumersSchedule.Partitions` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_partitions = value["Partitions"].GetUint64();
        m_partitionsHasBeenSet = true;
    }

    if (value.HasMember("NumberOfEntries") && !value["NumberOfEntries"].IsNull())
    {
        if (!value["NumberOfEntries"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumersSchedule.NumberOfEntries` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_numberOfEntries = value["NumberOfEntries"].GetUint64();
        m_numberOfEntriesHasBeenSet = true;
    }

    if (value.HasMember("MsgBacklog") && !value["MsgBacklog"].IsNull())
    {
        if (!value["MsgBacklog"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumersSchedule.MsgBacklog` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_msgBacklog = value["MsgBacklog"].GetUint64();
        m_msgBacklogHasBeenSet = true;
    }

    if (value.HasMember("MsgRateOut") && !value["MsgRateOut"].IsNull())
    {
        if (!value["MsgRateOut"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumersSchedule.MsgRateOut` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgRateOut = string(value["MsgRateOut"].GetString());
        m_msgRateOutHasBeenSet = true;
    }

    if (value.HasMember("MsgThroughputOut") && !value["MsgThroughputOut"].IsNull())
    {
        if (!value["MsgThroughputOut"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumersSchedule.MsgThroughputOut` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgThroughputOut = string(value["MsgThroughputOut"].GetString());
        m_msgThroughputOutHasBeenSet = true;
    }

    if (value.HasMember("MsgRateExpired") && !value["MsgRateExpired"].IsNull())
    {
        if (!value["MsgRateExpired"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumersSchedule.MsgRateExpired` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgRateExpired = string(value["MsgRateExpired"].GetString());
        m_msgRateExpiredHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsumersSchedule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_partitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitions, allocator);
    }

    if (m_numberOfEntriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumberOfEntries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numberOfEntries, allocator);
    }

    if (m_msgBacklogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgBacklog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgBacklog, allocator);
    }

    if (m_msgRateOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgRateOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgRateOut.c_str(), allocator).Move(), allocator);
    }

    if (m_msgThroughputOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgThroughputOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgThroughputOut.c_str(), allocator).Move(), allocator);
    }

    if (m_msgRateExpiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgRateExpired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgRateExpired.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ConsumersSchedule::GetPartitions() const
{
    return m_partitions;
}

void ConsumersSchedule::SetPartitions(const uint64_t& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool ConsumersSchedule::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

uint64_t ConsumersSchedule::GetNumberOfEntries() const
{
    return m_numberOfEntries;
}

void ConsumersSchedule::SetNumberOfEntries(const uint64_t& _numberOfEntries)
{
    m_numberOfEntries = _numberOfEntries;
    m_numberOfEntriesHasBeenSet = true;
}

bool ConsumersSchedule::NumberOfEntriesHasBeenSet() const
{
    return m_numberOfEntriesHasBeenSet;
}

uint64_t ConsumersSchedule::GetMsgBacklog() const
{
    return m_msgBacklog;
}

void ConsumersSchedule::SetMsgBacklog(const uint64_t& _msgBacklog)
{
    m_msgBacklog = _msgBacklog;
    m_msgBacklogHasBeenSet = true;
}

bool ConsumersSchedule::MsgBacklogHasBeenSet() const
{
    return m_msgBacklogHasBeenSet;
}

string ConsumersSchedule::GetMsgRateOut() const
{
    return m_msgRateOut;
}

void ConsumersSchedule::SetMsgRateOut(const string& _msgRateOut)
{
    m_msgRateOut = _msgRateOut;
    m_msgRateOutHasBeenSet = true;
}

bool ConsumersSchedule::MsgRateOutHasBeenSet() const
{
    return m_msgRateOutHasBeenSet;
}

string ConsumersSchedule::GetMsgThroughputOut() const
{
    return m_msgThroughputOut;
}

void ConsumersSchedule::SetMsgThroughputOut(const string& _msgThroughputOut)
{
    m_msgThroughputOut = _msgThroughputOut;
    m_msgThroughputOutHasBeenSet = true;
}

bool ConsumersSchedule::MsgThroughputOutHasBeenSet() const
{
    return m_msgThroughputOutHasBeenSet;
}

string ConsumersSchedule::GetMsgRateExpired() const
{
    return m_msgRateExpired;
}

void ConsumersSchedule::SetMsgRateExpired(const string& _msgRateExpired)
{
    m_msgRateExpired = _msgRateExpired;
    m_msgRateExpiredHasBeenSet = true;
}

bool ConsumersSchedule::MsgRateExpiredHasBeenSet() const
{
    return m_msgRateExpiredHasBeenSet;
}


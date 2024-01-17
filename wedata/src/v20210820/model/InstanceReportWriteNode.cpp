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

#include <tencentcloud/wedata/v20210820/model/InstanceReportWriteNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

InstanceReportWriteNode::InstanceReportWriteNode() :
    m_nodeNameHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_totalWriteRecordsHasBeenSet(false),
    m_totalWriteBytesHasBeenSet(false),
    m_recordSpeedHasBeenSet(false),
    m_byteSpeedHasBeenSet(false),
    m_totalErrorRecordsHasBeenSet(false),
    m_waitReaderTimeHasBeenSet(false)
{
}

CoreInternalOutcome InstanceReportWriteNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportWriteNode.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("DataSource") && !value["DataSource"].IsNull())
    {
        if (!value["DataSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportWriteNode.DataSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSource = string(value["DataSource"].GetString());
        m_dataSourceHasBeenSet = true;
    }

    if (value.HasMember("TotalWriteRecords") && !value["TotalWriteRecords"].IsNull())
    {
        if (!value["TotalWriteRecords"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportWriteNode.TotalWriteRecords` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalWriteRecords = value["TotalWriteRecords"].GetUint64();
        m_totalWriteRecordsHasBeenSet = true;
    }

    if (value.HasMember("TotalWriteBytes") && !value["TotalWriteBytes"].IsNull())
    {
        if (!value["TotalWriteBytes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportWriteNode.TotalWriteBytes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalWriteBytes = value["TotalWriteBytes"].GetUint64();
        m_totalWriteBytesHasBeenSet = true;
    }

    if (value.HasMember("RecordSpeed") && !value["RecordSpeed"].IsNull())
    {
        if (!value["RecordSpeed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportWriteNode.RecordSpeed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordSpeed = value["RecordSpeed"].GetUint64();
        m_recordSpeedHasBeenSet = true;
    }

    if (value.HasMember("ByteSpeed") && !value["ByteSpeed"].IsNull())
    {
        if (!value["ByteSpeed"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportWriteNode.ByteSpeed` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_byteSpeed = value["ByteSpeed"].GetDouble();
        m_byteSpeedHasBeenSet = true;
    }

    if (value.HasMember("TotalErrorRecords") && !value["TotalErrorRecords"].IsNull())
    {
        if (!value["TotalErrorRecords"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportWriteNode.TotalErrorRecords` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalErrorRecords = value["TotalErrorRecords"].GetUint64();
        m_totalErrorRecordsHasBeenSet = true;
    }

    if (value.HasMember("WaitReaderTime") && !value["WaitReaderTime"].IsNull())
    {
        if (!value["WaitReaderTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportWriteNode.WaitReaderTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_waitReaderTime = value["WaitReaderTime"].GetDouble();
        m_waitReaderTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceReportWriteNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSource.c_str(), allocator).Move(), allocator);
    }

    if (m_totalWriteRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalWriteRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalWriteRecords, allocator);
    }

    if (m_totalWriteBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalWriteBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalWriteBytes, allocator);
    }

    if (m_recordSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordSpeed, allocator);
    }

    if (m_byteSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ByteSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_byteSpeed, allocator);
    }

    if (m_totalErrorRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalErrorRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalErrorRecords, allocator);
    }

    if (m_waitReaderTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitReaderTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_waitReaderTime, allocator);
    }

}


string InstanceReportWriteNode::GetNodeName() const
{
    return m_nodeName;
}

void InstanceReportWriteNode::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool InstanceReportWriteNode::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string InstanceReportWriteNode::GetDataSource() const
{
    return m_dataSource;
}

void InstanceReportWriteNode::SetDataSource(const string& _dataSource)
{
    m_dataSource = _dataSource;
    m_dataSourceHasBeenSet = true;
}

bool InstanceReportWriteNode::DataSourceHasBeenSet() const
{
    return m_dataSourceHasBeenSet;
}

uint64_t InstanceReportWriteNode::GetTotalWriteRecords() const
{
    return m_totalWriteRecords;
}

void InstanceReportWriteNode::SetTotalWriteRecords(const uint64_t& _totalWriteRecords)
{
    m_totalWriteRecords = _totalWriteRecords;
    m_totalWriteRecordsHasBeenSet = true;
}

bool InstanceReportWriteNode::TotalWriteRecordsHasBeenSet() const
{
    return m_totalWriteRecordsHasBeenSet;
}

uint64_t InstanceReportWriteNode::GetTotalWriteBytes() const
{
    return m_totalWriteBytes;
}

void InstanceReportWriteNode::SetTotalWriteBytes(const uint64_t& _totalWriteBytes)
{
    m_totalWriteBytes = _totalWriteBytes;
    m_totalWriteBytesHasBeenSet = true;
}

bool InstanceReportWriteNode::TotalWriteBytesHasBeenSet() const
{
    return m_totalWriteBytesHasBeenSet;
}

uint64_t InstanceReportWriteNode::GetRecordSpeed() const
{
    return m_recordSpeed;
}

void InstanceReportWriteNode::SetRecordSpeed(const uint64_t& _recordSpeed)
{
    m_recordSpeed = _recordSpeed;
    m_recordSpeedHasBeenSet = true;
}

bool InstanceReportWriteNode::RecordSpeedHasBeenSet() const
{
    return m_recordSpeedHasBeenSet;
}

double InstanceReportWriteNode::GetByteSpeed() const
{
    return m_byteSpeed;
}

void InstanceReportWriteNode::SetByteSpeed(const double& _byteSpeed)
{
    m_byteSpeed = _byteSpeed;
    m_byteSpeedHasBeenSet = true;
}

bool InstanceReportWriteNode::ByteSpeedHasBeenSet() const
{
    return m_byteSpeedHasBeenSet;
}

uint64_t InstanceReportWriteNode::GetTotalErrorRecords() const
{
    return m_totalErrorRecords;
}

void InstanceReportWriteNode::SetTotalErrorRecords(const uint64_t& _totalErrorRecords)
{
    m_totalErrorRecords = _totalErrorRecords;
    m_totalErrorRecordsHasBeenSet = true;
}

bool InstanceReportWriteNode::TotalErrorRecordsHasBeenSet() const
{
    return m_totalErrorRecordsHasBeenSet;
}

double InstanceReportWriteNode::GetWaitReaderTime() const
{
    return m_waitReaderTime;
}

void InstanceReportWriteNode::SetWaitReaderTime(const double& _waitReaderTime)
{
    m_waitReaderTime = _waitReaderTime;
    m_waitReaderTimeHasBeenSet = true;
}

bool InstanceReportWriteNode::WaitReaderTimeHasBeenSet() const
{
    return m_waitReaderTimeHasBeenSet;
}


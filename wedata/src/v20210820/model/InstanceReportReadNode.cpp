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

#include <tencentcloud/wedata/v20210820/model/InstanceReportReadNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

InstanceReportReadNode::InstanceReportReadNode() :
    m_nodeNameHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_totalReadRecordsHasBeenSet(false),
    m_totalReadBytesHasBeenSet(false),
    m_recordSpeedHasBeenSet(false),
    m_byteSpeedHasBeenSet(false),
    m_totalErrorRecordsHasBeenSet(false)
{
}

CoreInternalOutcome InstanceReportReadNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportReadNode.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("DataSource") && !value["DataSource"].IsNull())
    {
        if (!value["DataSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportReadNode.DataSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSource = string(value["DataSource"].GetString());
        m_dataSourceHasBeenSet = true;
    }

    if (value.HasMember("TotalReadRecords") && !value["TotalReadRecords"].IsNull())
    {
        if (!value["TotalReadRecords"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportReadNode.TotalReadRecords` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalReadRecords = value["TotalReadRecords"].GetUint64();
        m_totalReadRecordsHasBeenSet = true;
    }

    if (value.HasMember("TotalReadBytes") && !value["TotalReadBytes"].IsNull())
    {
        if (!value["TotalReadBytes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportReadNode.TotalReadBytes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalReadBytes = value["TotalReadBytes"].GetUint64();
        m_totalReadBytesHasBeenSet = true;
    }

    if (value.HasMember("RecordSpeed") && !value["RecordSpeed"].IsNull())
    {
        if (!value["RecordSpeed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportReadNode.RecordSpeed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordSpeed = value["RecordSpeed"].GetUint64();
        m_recordSpeedHasBeenSet = true;
    }

    if (value.HasMember("ByteSpeed") && !value["ByteSpeed"].IsNull())
    {
        if (!value["ByteSpeed"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportReadNode.ByteSpeed` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_byteSpeed = value["ByteSpeed"].GetDouble();
        m_byteSpeedHasBeenSet = true;
    }

    if (value.HasMember("TotalErrorRecords") && !value["TotalErrorRecords"].IsNull())
    {
        if (!value["TotalErrorRecords"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportReadNode.TotalErrorRecords` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalErrorRecords = value["TotalErrorRecords"].GetUint64();
        m_totalErrorRecordsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceReportReadNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_totalReadRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalReadRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalReadRecords, allocator);
    }

    if (m_totalReadBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalReadBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalReadBytes, allocator);
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

}


string InstanceReportReadNode::GetNodeName() const
{
    return m_nodeName;
}

void InstanceReportReadNode::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool InstanceReportReadNode::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string InstanceReportReadNode::GetDataSource() const
{
    return m_dataSource;
}

void InstanceReportReadNode::SetDataSource(const string& _dataSource)
{
    m_dataSource = _dataSource;
    m_dataSourceHasBeenSet = true;
}

bool InstanceReportReadNode::DataSourceHasBeenSet() const
{
    return m_dataSourceHasBeenSet;
}

uint64_t InstanceReportReadNode::GetTotalReadRecords() const
{
    return m_totalReadRecords;
}

void InstanceReportReadNode::SetTotalReadRecords(const uint64_t& _totalReadRecords)
{
    m_totalReadRecords = _totalReadRecords;
    m_totalReadRecordsHasBeenSet = true;
}

bool InstanceReportReadNode::TotalReadRecordsHasBeenSet() const
{
    return m_totalReadRecordsHasBeenSet;
}

uint64_t InstanceReportReadNode::GetTotalReadBytes() const
{
    return m_totalReadBytes;
}

void InstanceReportReadNode::SetTotalReadBytes(const uint64_t& _totalReadBytes)
{
    m_totalReadBytes = _totalReadBytes;
    m_totalReadBytesHasBeenSet = true;
}

bool InstanceReportReadNode::TotalReadBytesHasBeenSet() const
{
    return m_totalReadBytesHasBeenSet;
}

uint64_t InstanceReportReadNode::GetRecordSpeed() const
{
    return m_recordSpeed;
}

void InstanceReportReadNode::SetRecordSpeed(const uint64_t& _recordSpeed)
{
    m_recordSpeed = _recordSpeed;
    m_recordSpeedHasBeenSet = true;
}

bool InstanceReportReadNode::RecordSpeedHasBeenSet() const
{
    return m_recordSpeedHasBeenSet;
}

double InstanceReportReadNode::GetByteSpeed() const
{
    return m_byteSpeed;
}

void InstanceReportReadNode::SetByteSpeed(const double& _byteSpeed)
{
    m_byteSpeed = _byteSpeed;
    m_byteSpeedHasBeenSet = true;
}

bool InstanceReportReadNode::ByteSpeedHasBeenSet() const
{
    return m_byteSpeedHasBeenSet;
}

uint64_t InstanceReportReadNode::GetTotalErrorRecords() const
{
    return m_totalErrorRecords;
}

void InstanceReportReadNode::SetTotalErrorRecords(const uint64_t& _totalErrorRecords)
{
    m_totalErrorRecords = _totalErrorRecords;
    m_totalErrorRecordsHasBeenSet = true;
}

bool InstanceReportReadNode::TotalErrorRecordsHasBeenSet() const
{
    return m_totalErrorRecordsHasBeenSet;
}


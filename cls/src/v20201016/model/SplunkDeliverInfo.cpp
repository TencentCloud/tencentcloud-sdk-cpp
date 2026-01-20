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

#include <tencentcloud/cls/v20201016/model/SplunkDeliverInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

SplunkDeliverInfo::SplunkDeliverInfo() :
    m_taskIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_netInfoHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_hasServiceLogHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_indexAckHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_dSLFilterHasBeenSet(false)
{
}

CoreInternalOutcome SplunkDeliverInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SplunkDeliverInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SplunkDeliverInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SplunkDeliverInfo.Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SplunkDeliverInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SplunkDeliverInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SplunkDeliverInfo.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SplunkDeliverInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SplunkDeliverInfo.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("NetInfo") && !value["NetInfo"].IsNull())
    {
        if (!value["NetInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SplunkDeliverInfo.NetInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_netInfo.Deserialize(value["NetInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_netInfoHasBeenSet = true;
    }

    if (value.HasMember("Metadata") && !value["Metadata"].IsNull())
    {
        if (!value["Metadata"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SplunkDeliverInfo.Metadata` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metadata.Deserialize(value["Metadata"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metadataHasBeenSet = true;
    }

    if (value.HasMember("HasServiceLog") && !value["HasServiceLog"].IsNull())
    {
        if (!value["HasServiceLog"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SplunkDeliverInfo.HasServiceLog` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hasServiceLog = value["HasServiceLog"].GetInt64();
        m_hasServiceLogHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SplunkDeliverInfo.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SplunkDeliverInfo.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SplunkDeliverInfo.Index` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_index = string(value["Index"].GetString());
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("IndexAck") && !value["IndexAck"].IsNull())
    {
        if (!value["IndexAck"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SplunkDeliverInfo.IndexAck` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_indexAck = value["IndexAck"].GetInt64();
        m_indexAckHasBeenSet = true;
    }

    if (value.HasMember("Channel") && !value["Channel"].IsNull())
    {
        if (!value["Channel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SplunkDeliverInfo.Channel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channel = string(value["Channel"].GetString());
        m_channelHasBeenSet = true;
    }

    if (value.HasMember("DSLFilter") && !value["DSLFilter"].IsNull())
    {
        if (!value["DSLFilter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SplunkDeliverInfo.DSLFilter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dSLFilter = string(value["DSLFilter"].GetString());
        m_dSLFilterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SplunkDeliverInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_netInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_netInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metadata.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hasServiceLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasServiceLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasServiceLog, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_index.c_str(), allocator).Move(), allocator);
    }

    if (m_indexAckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexAck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indexAck, allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }

    if (m_dSLFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DSLFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dSLFilter.c_str(), allocator).Move(), allocator);
    }

}


string SplunkDeliverInfo::GetTaskId() const
{
    return m_taskId;
}

void SplunkDeliverInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool SplunkDeliverInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string SplunkDeliverInfo::GetName() const
{
    return m_name;
}

void SplunkDeliverInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SplunkDeliverInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t SplunkDeliverInfo::GetUin() const
{
    return m_uin;
}

void SplunkDeliverInfo::SetUin(const uint64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool SplunkDeliverInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string SplunkDeliverInfo::GetTopicId() const
{
    return m_topicId;
}

void SplunkDeliverInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool SplunkDeliverInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

int64_t SplunkDeliverInfo::GetStatus() const
{
    return m_status;
}

void SplunkDeliverInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SplunkDeliverInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t SplunkDeliverInfo::GetEnable() const
{
    return m_enable;
}

void SplunkDeliverInfo::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool SplunkDeliverInfo::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

uint64_t SplunkDeliverInfo::GetCreateTime() const
{
    return m_createTime;
}

void SplunkDeliverInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SplunkDeliverInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t SplunkDeliverInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void SplunkDeliverInfo::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SplunkDeliverInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

NetInfo SplunkDeliverInfo::GetNetInfo() const
{
    return m_netInfo;
}

void SplunkDeliverInfo::SetNetInfo(const NetInfo& _netInfo)
{
    m_netInfo = _netInfo;
    m_netInfoHasBeenSet = true;
}

bool SplunkDeliverInfo::NetInfoHasBeenSet() const
{
    return m_netInfoHasBeenSet;
}

MetadataInfo SplunkDeliverInfo::GetMetadata() const
{
    return m_metadata;
}

void SplunkDeliverInfo::SetMetadata(const MetadataInfo& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool SplunkDeliverInfo::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

int64_t SplunkDeliverInfo::GetHasServiceLog() const
{
    return m_hasServiceLog;
}

void SplunkDeliverInfo::SetHasServiceLog(const int64_t& _hasServiceLog)
{
    m_hasServiceLog = _hasServiceLog;
    m_hasServiceLogHasBeenSet = true;
}

bool SplunkDeliverInfo::HasServiceLogHasBeenSet() const
{
    return m_hasServiceLogHasBeenSet;
}

string SplunkDeliverInfo::GetSource() const
{
    return m_source;
}

void SplunkDeliverInfo::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool SplunkDeliverInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string SplunkDeliverInfo::GetSourceType() const
{
    return m_sourceType;
}

void SplunkDeliverInfo::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool SplunkDeliverInfo::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string SplunkDeliverInfo::GetIndex() const
{
    return m_index;
}

void SplunkDeliverInfo::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool SplunkDeliverInfo::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

int64_t SplunkDeliverInfo::GetIndexAck() const
{
    return m_indexAck;
}

void SplunkDeliverInfo::SetIndexAck(const int64_t& _indexAck)
{
    m_indexAck = _indexAck;
    m_indexAckHasBeenSet = true;
}

bool SplunkDeliverInfo::IndexAckHasBeenSet() const
{
    return m_indexAckHasBeenSet;
}

string SplunkDeliverInfo::GetChannel() const
{
    return m_channel;
}

void SplunkDeliverInfo::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool SplunkDeliverInfo::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string SplunkDeliverInfo::GetDSLFilter() const
{
    return m_dSLFilter;
}

void SplunkDeliverInfo::SetDSLFilter(const string& _dSLFilter)
{
    m_dSLFilter = _dSLFilter;
    m_dSLFilterHasBeenSet = true;
}

bool SplunkDeliverInfo::DSLFilterHasBeenSet() const
{
    return m_dSLFilterHasBeenSet;
}


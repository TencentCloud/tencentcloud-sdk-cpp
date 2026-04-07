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

#include <tencentcloud/mps/v20190612/model/AdBreakInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AdBreakInfo::AdBreakInfo() :
    m_sourceLocationIdHasBeenSet(false),
    m_vodSourceNameHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_messageTypeHasBeenSet(false),
    m_timeSignalConfHasBeenSet(false),
    m_spliceInsertConfHasBeenSet(false),
    m_metadatasHasBeenSet(false),
    m_sourceLocationNameHasBeenSet(false)
{
}

CoreInternalOutcome AdBreakInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceLocationId") && !value["SourceLocationId"].IsNull())
    {
        if (!value["SourceLocationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdBreakInfo.SourceLocationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceLocationId = string(value["SourceLocationId"].GetString());
        m_sourceLocationIdHasBeenSet = true;
    }

    if (value.HasMember("VodSourceName") && !value["VodSourceName"].IsNull())
    {
        if (!value["VodSourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdBreakInfo.VodSourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vodSourceName = string(value["VodSourceName"].GetString());
        m_vodSourceNameHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AdBreakInfo.Offset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetUint64();
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("MessageType") && !value["MessageType"].IsNull())
    {
        if (!value["MessageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdBreakInfo.MessageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_messageType = string(value["MessageType"].GetString());
        m_messageTypeHasBeenSet = true;
    }

    if (value.HasMember("TimeSignalConf") && !value["TimeSignalConf"].IsNull())
    {
        if (!value["TimeSignalConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AdBreakInfo.TimeSignalConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_timeSignalConf.Deserialize(value["TimeSignalConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_timeSignalConfHasBeenSet = true;
    }

    if (value.HasMember("SpliceInsertConf") && !value["SpliceInsertConf"].IsNull())
    {
        if (!value["SpliceInsertConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AdBreakInfo.SpliceInsertConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_spliceInsertConf.Deserialize(value["SpliceInsertConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_spliceInsertConfHasBeenSet = true;
    }

    if (value.HasMember("Metadatas") && !value["Metadatas"].IsNull())
    {
        if (!value["Metadatas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdBreakInfo.Metadatas` is not array type"));

        const rapidjson::Value &tmpValue = value["Metadatas"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Metadata item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metadatas.push_back(item);
        }
        m_metadatasHasBeenSet = true;
    }

    if (value.HasMember("SourceLocationName") && !value["SourceLocationName"].IsNull())
    {
        if (!value["SourceLocationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdBreakInfo.SourceLocationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceLocationName = string(value["SourceLocationName"].GetString());
        m_sourceLocationNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdBreakInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceLocationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceLocationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceLocationId.c_str(), allocator).Move(), allocator);
    }

    if (m_vodSourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VodSourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vodSourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_messageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_messageType.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSignalConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSignalConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timeSignalConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_spliceInsertConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpliceInsertConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_spliceInsertConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_metadatasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadatas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metadatas.begin(); itr != m_metadatas.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sourceLocationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceLocationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceLocationName.c_str(), allocator).Move(), allocator);
    }

}


string AdBreakInfo::GetSourceLocationId() const
{
    return m_sourceLocationId;
}

void AdBreakInfo::SetSourceLocationId(const string& _sourceLocationId)
{
    m_sourceLocationId = _sourceLocationId;
    m_sourceLocationIdHasBeenSet = true;
}

bool AdBreakInfo::SourceLocationIdHasBeenSet() const
{
    return m_sourceLocationIdHasBeenSet;
}

string AdBreakInfo::GetVodSourceName() const
{
    return m_vodSourceName;
}

void AdBreakInfo::SetVodSourceName(const string& _vodSourceName)
{
    m_vodSourceName = _vodSourceName;
    m_vodSourceNameHasBeenSet = true;
}

bool AdBreakInfo::VodSourceNameHasBeenSet() const
{
    return m_vodSourceNameHasBeenSet;
}

uint64_t AdBreakInfo::GetOffset() const
{
    return m_offset;
}

void AdBreakInfo::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool AdBreakInfo::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string AdBreakInfo::GetMessageType() const
{
    return m_messageType;
}

void AdBreakInfo::SetMessageType(const string& _messageType)
{
    m_messageType = _messageType;
    m_messageTypeHasBeenSet = true;
}

bool AdBreakInfo::MessageTypeHasBeenSet() const
{
    return m_messageTypeHasBeenSet;
}

TimeSignalInfo AdBreakInfo::GetTimeSignalConf() const
{
    return m_timeSignalConf;
}

void AdBreakInfo::SetTimeSignalConf(const TimeSignalInfo& _timeSignalConf)
{
    m_timeSignalConf = _timeSignalConf;
    m_timeSignalConfHasBeenSet = true;
}

bool AdBreakInfo::TimeSignalConfHasBeenSet() const
{
    return m_timeSignalConfHasBeenSet;
}

SpliceInsertInfo AdBreakInfo::GetSpliceInsertConf() const
{
    return m_spliceInsertConf;
}

void AdBreakInfo::SetSpliceInsertConf(const SpliceInsertInfo& _spliceInsertConf)
{
    m_spliceInsertConf = _spliceInsertConf;
    m_spliceInsertConfHasBeenSet = true;
}

bool AdBreakInfo::SpliceInsertConfHasBeenSet() const
{
    return m_spliceInsertConfHasBeenSet;
}

vector<Metadata> AdBreakInfo::GetMetadatas() const
{
    return m_metadatas;
}

void AdBreakInfo::SetMetadatas(const vector<Metadata>& _metadatas)
{
    m_metadatas = _metadatas;
    m_metadatasHasBeenSet = true;
}

bool AdBreakInfo::MetadatasHasBeenSet() const
{
    return m_metadatasHasBeenSet;
}

string AdBreakInfo::GetSourceLocationName() const
{
    return m_sourceLocationName;
}

void AdBreakInfo::SetSourceLocationName(const string& _sourceLocationName)
{
    m_sourceLocationName = _sourceLocationName;
    m_sourceLocationNameHasBeenSet = true;
}

bool AdBreakInfo::SourceLocationNameHasBeenSet() const
{
    return m_sourceLocationNameHasBeenSet;
}


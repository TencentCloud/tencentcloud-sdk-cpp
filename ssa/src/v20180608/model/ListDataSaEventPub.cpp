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

#include <tencentcloud/ssa/v20180608/model/ListDataSaEventPub.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

ListDataSaEventPub::ListDataSaEventPub() :
    m_timeHasBeenSet(false),
    m_eventType1HasBeenSet(false),
    m_eventType2HasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_dstIpHasBeenSet(false),
    m_dstPortHasBeenSet(false),
    m_assetHasBeenSet(false),
    m_oldIdMd5HasBeenSet(false)
{
}

CoreInternalOutcome ListDataSaEventPub::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDataSaEventPub.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("EventType1") && !value["EventType1"].IsNull())
    {
        if (!value["EventType1"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListDataSaEventPub.EventType1` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventType1 = value["EventType1"].GetInt64();
        m_eventType1HasBeenSet = true;
    }

    if (value.HasMember("EventType2") && !value["EventType2"].IsNull())
    {
        if (!value["EventType2"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListDataSaEventPub.EventType2` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventType2 = value["EventType2"].GetInt64();
        m_eventType2HasBeenSet = true;
    }

    if (value.HasMember("EventName") && !value["EventName"].IsNull())
    {
        if (!value["EventName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDataSaEventPub.EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(value["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListDataSaEventPub.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListDataSaEventPub.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SrcIp") && !value["SrcIp"].IsNull())
    {
        if (!value["SrcIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDataSaEventPub.SrcIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIp = string(value["SrcIp"].GetString());
        m_srcIpHasBeenSet = true;
    }

    if (value.HasMember("DstIp") && !value["DstIp"].IsNull())
    {
        if (!value["DstIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDataSaEventPub.DstIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstIp = string(value["DstIp"].GetString());
        m_dstIpHasBeenSet = true;
    }

    if (value.HasMember("DstPort") && !value["DstPort"].IsNull())
    {
        if (!value["DstPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListDataSaEventPub.DstPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dstPort = value["DstPort"].GetInt64();
        m_dstPortHasBeenSet = true;
    }

    if (value.HasMember("Asset") && !value["Asset"].IsNull())
    {
        if (!value["Asset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDataSaEventPub.Asset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asset = string(value["Asset"].GetString());
        m_assetHasBeenSet = true;
    }

    if (value.HasMember("OldIdMd5") && !value["OldIdMd5"].IsNull())
    {
        if (!value["OldIdMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDataSaEventPub.OldIdMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldIdMd5 = string(value["OldIdMd5"].GetString());
        m_oldIdMd5HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListDataSaEventPub::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_eventType1HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType1";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventType1, allocator);
    }

    if (m_eventType2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventType2, allocator);
    }

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_srcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIp.c_str(), allocator).Move(), allocator);
    }

    if (m_dstIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstIp.c_str(), allocator).Move(), allocator);
    }

    if (m_dstPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dstPort, allocator);
    }

    if (m_assetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Asset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asset.c_str(), allocator).Move(), allocator);
    }

    if (m_oldIdMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldIdMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldIdMd5.c_str(), allocator).Move(), allocator);
    }

}


string ListDataSaEventPub::GetTime() const
{
    return m_time;
}

void ListDataSaEventPub::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool ListDataSaEventPub::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

int64_t ListDataSaEventPub::GetEventType1() const
{
    return m_eventType1;
}

void ListDataSaEventPub::SetEventType1(const int64_t& _eventType1)
{
    m_eventType1 = _eventType1;
    m_eventType1HasBeenSet = true;
}

bool ListDataSaEventPub::EventType1HasBeenSet() const
{
    return m_eventType1HasBeenSet;
}

int64_t ListDataSaEventPub::GetEventType2() const
{
    return m_eventType2;
}

void ListDataSaEventPub::SetEventType2(const int64_t& _eventType2)
{
    m_eventType2 = _eventType2;
    m_eventType2HasBeenSet = true;
}

bool ListDataSaEventPub::EventType2HasBeenSet() const
{
    return m_eventType2HasBeenSet;
}

string ListDataSaEventPub::GetEventName() const
{
    return m_eventName;
}

void ListDataSaEventPub::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool ListDataSaEventPub::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

int64_t ListDataSaEventPub::GetLevel() const
{
    return m_level;
}

void ListDataSaEventPub::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool ListDataSaEventPub::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t ListDataSaEventPub::GetStatus() const
{
    return m_status;
}

void ListDataSaEventPub::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ListDataSaEventPub::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ListDataSaEventPub::GetSrcIp() const
{
    return m_srcIp;
}

void ListDataSaEventPub::SetSrcIp(const string& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool ListDataSaEventPub::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

string ListDataSaEventPub::GetDstIp() const
{
    return m_dstIp;
}

void ListDataSaEventPub::SetDstIp(const string& _dstIp)
{
    m_dstIp = _dstIp;
    m_dstIpHasBeenSet = true;
}

bool ListDataSaEventPub::DstIpHasBeenSet() const
{
    return m_dstIpHasBeenSet;
}

int64_t ListDataSaEventPub::GetDstPort() const
{
    return m_dstPort;
}

void ListDataSaEventPub::SetDstPort(const int64_t& _dstPort)
{
    m_dstPort = _dstPort;
    m_dstPortHasBeenSet = true;
}

bool ListDataSaEventPub::DstPortHasBeenSet() const
{
    return m_dstPortHasBeenSet;
}

string ListDataSaEventPub::GetAsset() const
{
    return m_asset;
}

void ListDataSaEventPub::SetAsset(const string& _asset)
{
    m_asset = _asset;
    m_assetHasBeenSet = true;
}

bool ListDataSaEventPub::AssetHasBeenSet() const
{
    return m_assetHasBeenSet;
}

string ListDataSaEventPub::GetOldIdMd5() const
{
    return m_oldIdMd5;
}

void ListDataSaEventPub::SetOldIdMd5(const string& _oldIdMd5)
{
    m_oldIdMd5 = _oldIdMd5;
    m_oldIdMd5HasBeenSet = true;
}

bool ListDataSaEventPub::OldIdMd5HasBeenSet() const
{
    return m_oldIdMd5HasBeenSet;
}


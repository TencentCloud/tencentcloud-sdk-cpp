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

#include <tencentcloud/waf/v20180125/model/BatchIpAccessControlItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

BatchIpAccessControlItem::BatchIpAccessControlItem() :
    m_idHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_tsVersionHasBeenSet(false),
    m_validTsHasBeenSet(false),
    m_hostsHasBeenSet(false)
{
}

CoreInternalOutcome BatchIpAccessControlItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchIpAccessControlItem.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchIpAccessControlItem.ActionType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = value["ActionType"].GetInt64();
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchIpAccessControlItem.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Note") && !value["Note"].IsNull())
    {
        if (!value["Note"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchIpAccessControlItem.Note` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_note = string(value["Note"].GetString());
        m_noteHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchIpAccessControlItem.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("TsVersion") && !value["TsVersion"].IsNull())
    {
        if (!value["TsVersion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchIpAccessControlItem.TsVersion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tsVersion = value["TsVersion"].GetUint64();
        m_tsVersionHasBeenSet = true;
    }

    if (value.HasMember("ValidTs") && !value["ValidTs"].IsNull())
    {
        if (!value["ValidTs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchIpAccessControlItem.ValidTs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_validTs = value["ValidTs"].GetInt64();
        m_validTsHasBeenSet = true;
    }

    if (value.HasMember("Hosts") && !value["Hosts"].IsNull())
    {
        if (!value["Hosts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BatchIpAccessControlItem.Hosts` is not array type"));

        const rapidjson::Value &tmpValue = value["Hosts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hosts.push_back((*itr).GetString());
        }
        m_hostsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchIpAccessControlItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionType, allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_tsVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TsVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tsVersion, allocator);
    }

    if (m_validTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidTs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validTs, allocator);
    }

    if (m_hostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hosts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hosts.begin(); itr != m_hosts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string BatchIpAccessControlItem::GetId() const
{
    return m_id;
}

void BatchIpAccessControlItem::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BatchIpAccessControlItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t BatchIpAccessControlItem::GetActionType() const
{
    return m_actionType;
}

void BatchIpAccessControlItem::SetActionType(const int64_t& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool BatchIpAccessControlItem::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string BatchIpAccessControlItem::GetIp() const
{
    return m_ip;
}

void BatchIpAccessControlItem::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool BatchIpAccessControlItem::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string BatchIpAccessControlItem::GetNote() const
{
    return m_note;
}

void BatchIpAccessControlItem::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool BatchIpAccessControlItem::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

string BatchIpAccessControlItem::GetSource() const
{
    return m_source;
}

void BatchIpAccessControlItem::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool BatchIpAccessControlItem::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

uint64_t BatchIpAccessControlItem::GetTsVersion() const
{
    return m_tsVersion;
}

void BatchIpAccessControlItem::SetTsVersion(const uint64_t& _tsVersion)
{
    m_tsVersion = _tsVersion;
    m_tsVersionHasBeenSet = true;
}

bool BatchIpAccessControlItem::TsVersionHasBeenSet() const
{
    return m_tsVersionHasBeenSet;
}

int64_t BatchIpAccessControlItem::GetValidTs() const
{
    return m_validTs;
}

void BatchIpAccessControlItem::SetValidTs(const int64_t& _validTs)
{
    m_validTs = _validTs;
    m_validTsHasBeenSet = true;
}

bool BatchIpAccessControlItem::ValidTsHasBeenSet() const
{
    return m_validTsHasBeenSet;
}

vector<string> BatchIpAccessControlItem::GetHosts() const
{
    return m_hosts;
}

void BatchIpAccessControlItem::SetHosts(const vector<string>& _hosts)
{
    m_hosts = _hosts;
    m_hostsHasBeenSet = true;
}

bool BatchIpAccessControlItem::HostsHasBeenSet() const
{
    return m_hostsHasBeenSet;
}


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

#include <tencentcloud/waf/v20180125/model/IpAccessControlParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

IpAccessControlParam::IpAccessControlParam() :
    m_ipListHasBeenSet(false),
    m_validTsHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_noteHasBeenSet(false)
{
}

CoreInternalOutcome IpAccessControlParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IpList") && !value["IpList"].IsNull())
    {
        if (!value["IpList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IpAccessControlParam.IpList` is not array type"));

        const rapidjson::Value &tmpValue = value["IpList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipList.push_back((*itr).GetString());
        }
        m_ipListHasBeenSet = true;
    }

    if (value.HasMember("ValidTs") && !value["ValidTs"].IsNull())
    {
        if (!value["ValidTs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAccessControlParam.ValidTs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_validTs = value["ValidTs"].GetUint64();
        m_validTsHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAccessControlParam.ActionType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = value["ActionType"].GetInt64();
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("Note") && !value["Note"].IsNull())
    {
        if (!value["Note"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAccessControlParam.Note` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_note = string(value["Note"].GetString());
        m_noteHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpAccessControlParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipList.begin(); itr != m_ipList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_validTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidTs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validTs, allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionType, allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }

}


vector<string> IpAccessControlParam::GetIpList() const
{
    return m_ipList;
}

void IpAccessControlParam::SetIpList(const vector<string>& _ipList)
{
    m_ipList = _ipList;
    m_ipListHasBeenSet = true;
}

bool IpAccessControlParam::IpListHasBeenSet() const
{
    return m_ipListHasBeenSet;
}

uint64_t IpAccessControlParam::GetValidTs() const
{
    return m_validTs;
}

void IpAccessControlParam::SetValidTs(const uint64_t& _validTs)
{
    m_validTs = _validTs;
    m_validTsHasBeenSet = true;
}

bool IpAccessControlParam::ValidTsHasBeenSet() const
{
    return m_validTsHasBeenSet;
}

int64_t IpAccessControlParam::GetActionType() const
{
    return m_actionType;
}

void IpAccessControlParam::SetActionType(const int64_t& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool IpAccessControlParam::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string IpAccessControlParam::GetNote() const
{
    return m_note;
}

void IpAccessControlParam::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool IpAccessControlParam::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}


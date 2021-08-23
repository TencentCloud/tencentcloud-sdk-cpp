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

#include <tencentcloud/npp/v20190823/model/RreCallerHandle.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Npp::V20190823::Model;
using namespace std;

RreCallerHandle::RreCallerHandle() :
    m_readPromptHasBeenSet(false),
    m_interruptPromptHasBeenSet(false),
    m_keyListHasBeenSet(false),
    m_repeatTimesHasBeenSet(false),
    m_keyPressUrlHasBeenSet(false),
    m_promptGenderHasBeenSet(false)
{
}

CoreInternalOutcome RreCallerHandle::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReadPrompt") && !value["ReadPrompt"].IsNull())
    {
        if (!value["ReadPrompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RreCallerHandle.ReadPrompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_readPrompt = string(value["ReadPrompt"].GetString());
        m_readPromptHasBeenSet = true;
    }

    if (value.HasMember("InterruptPrompt") && !value["InterruptPrompt"].IsNull())
    {
        if (!value["InterruptPrompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RreCallerHandle.InterruptPrompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_interruptPrompt = string(value["InterruptPrompt"].GetString());
        m_interruptPromptHasBeenSet = true;
    }

    if (value.HasMember("KeyList") && !value["KeyList"].IsNull())
    {
        if (!value["KeyList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RreCallerHandle.KeyList` is not array type"));

        const rapidjson::Value &tmpValue = value["KeyList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_keyList.push_back(item);
        }
        m_keyListHasBeenSet = true;
    }

    if (value.HasMember("RepeatTimes") && !value["RepeatTimes"].IsNull())
    {
        if (!value["RepeatTimes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RreCallerHandle.RepeatTimes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repeatTimes = string(value["RepeatTimes"].GetString());
        m_repeatTimesHasBeenSet = true;
    }

    if (value.HasMember("KeyPressUrl") && !value["KeyPressUrl"].IsNull())
    {
        if (!value["KeyPressUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RreCallerHandle.KeyPressUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyPressUrl = string(value["KeyPressUrl"].GetString());
        m_keyPressUrlHasBeenSet = true;
    }

    if (value.HasMember("PromptGender") && !value["PromptGender"].IsNull())
    {
        if (!value["PromptGender"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RreCallerHandle.PromptGender` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promptGender = string(value["PromptGender"].GetString());
        m_promptGenderHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RreCallerHandle::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_readPromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadPrompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_readPrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_interruptPromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterruptPrompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_interruptPrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_keyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_keyList.begin(); itr != m_keyList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_repeatTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepeatTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repeatTimes.c_str(), allocator).Move(), allocator);
    }

    if (m_keyPressUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyPressUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyPressUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_promptGenderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptGender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promptGender.c_str(), allocator).Move(), allocator);
    }

}


string RreCallerHandle::GetReadPrompt() const
{
    return m_readPrompt;
}

void RreCallerHandle::SetReadPrompt(const string& _readPrompt)
{
    m_readPrompt = _readPrompt;
    m_readPromptHasBeenSet = true;
}

bool RreCallerHandle::ReadPromptHasBeenSet() const
{
    return m_readPromptHasBeenSet;
}

string RreCallerHandle::GetInterruptPrompt() const
{
    return m_interruptPrompt;
}

void RreCallerHandle::SetInterruptPrompt(const string& _interruptPrompt)
{
    m_interruptPrompt = _interruptPrompt;
    m_interruptPromptHasBeenSet = true;
}

bool RreCallerHandle::InterruptPromptHasBeenSet() const
{
    return m_interruptPromptHasBeenSet;
}

vector<KeyList> RreCallerHandle::GetKeyList() const
{
    return m_keyList;
}

void RreCallerHandle::SetKeyList(const vector<KeyList>& _keyList)
{
    m_keyList = _keyList;
    m_keyListHasBeenSet = true;
}

bool RreCallerHandle::KeyListHasBeenSet() const
{
    return m_keyListHasBeenSet;
}

string RreCallerHandle::GetRepeatTimes() const
{
    return m_repeatTimes;
}

void RreCallerHandle::SetRepeatTimes(const string& _repeatTimes)
{
    m_repeatTimes = _repeatTimes;
    m_repeatTimesHasBeenSet = true;
}

bool RreCallerHandle::RepeatTimesHasBeenSet() const
{
    return m_repeatTimesHasBeenSet;
}

string RreCallerHandle::GetKeyPressUrl() const
{
    return m_keyPressUrl;
}

void RreCallerHandle::SetKeyPressUrl(const string& _keyPressUrl)
{
    m_keyPressUrl = _keyPressUrl;
    m_keyPressUrlHasBeenSet = true;
}

bool RreCallerHandle::KeyPressUrlHasBeenSet() const
{
    return m_keyPressUrlHasBeenSet;
}

string RreCallerHandle::GetPromptGender() const
{
    return m_promptGender;
}

void RreCallerHandle::SetPromptGender(const string& _promptGender)
{
    m_promptGender = _promptGender;
    m_promptGenderHasBeenSet = true;
}

bool RreCallerHandle::PromptGenderHasBeenSet() const
{
    return m_promptGenderHasBeenSet;
}


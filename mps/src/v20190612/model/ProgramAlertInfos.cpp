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

#include <tencentcloud/mps/v20190612/model/ProgramAlertInfos.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ProgramAlertInfos::ProgramAlertInfos() :
    m_channelIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_programIdHasBeenSet(false),
    m_programNameHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

CoreInternalOutcome ProgramAlertInfos::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramAlertInfos.ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(value["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramAlertInfos.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }

    if (value.HasMember("ProgramId") && !value["ProgramId"].IsNull())
    {
        if (!value["ProgramId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramAlertInfos.ProgramId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_programId = string(value["ProgramId"].GetString());
        m_programIdHasBeenSet = true;
    }

    if (value.HasMember("ProgramName") && !value["ProgramName"].IsNull())
    {
        if (!value["ProgramName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramAlertInfos.ProgramName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_programName = string(value["ProgramName"].GetString());
        m_programNameHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramAlertInfos.Code` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetUint64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramAlertInfos.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramAlertInfos.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("LastModifiedTime") && !value["LastModifiedTime"].IsNull())
    {
        if (!value["LastModifiedTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramAlertInfos.LastModifiedTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifiedTime = value["LastModifiedTime"].GetUint64();
        m_lastModifiedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProgramAlertInfos::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_programIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_programId.c_str(), allocator).Move(), allocator);
    }

    if (m_programNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_programName.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastModifiedTime, allocator);
    }

}


string ProgramAlertInfos::GetChannelId() const
{
    return m_channelId;
}

void ProgramAlertInfos::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool ProgramAlertInfos::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string ProgramAlertInfos::GetChannelName() const
{
    return m_channelName;
}

void ProgramAlertInfos::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool ProgramAlertInfos::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string ProgramAlertInfos::GetProgramId() const
{
    return m_programId;
}

void ProgramAlertInfos::SetProgramId(const string& _programId)
{
    m_programId = _programId;
    m_programIdHasBeenSet = true;
}

bool ProgramAlertInfos::ProgramIdHasBeenSet() const
{
    return m_programIdHasBeenSet;
}

string ProgramAlertInfos::GetProgramName() const
{
    return m_programName;
}

void ProgramAlertInfos::SetProgramName(const string& _programName)
{
    m_programName = _programName;
    m_programNameHasBeenSet = true;
}

bool ProgramAlertInfos::ProgramNameHasBeenSet() const
{
    return m_programNameHasBeenSet;
}

uint64_t ProgramAlertInfos::GetCode() const
{
    return m_code;
}

void ProgramAlertInfos::SetCode(const uint64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool ProgramAlertInfos::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string ProgramAlertInfos::GetCategory() const
{
    return m_category;
}

void ProgramAlertInfos::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool ProgramAlertInfos::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string ProgramAlertInfos::GetMessage() const
{
    return m_message;
}

void ProgramAlertInfos::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ProgramAlertInfos::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

uint64_t ProgramAlertInfos::GetLastModifiedTime() const
{
    return m_lastModifiedTime;
}

void ProgramAlertInfos::SetLastModifiedTime(const uint64_t& _lastModifiedTime)
{
    m_lastModifiedTime = _lastModifiedTime;
    m_lastModifiedTimeHasBeenSet = true;
}

bool ProgramAlertInfos::LastModifiedTimeHasBeenSet() const
{
    return m_lastModifiedTimeHasBeenSet;
}


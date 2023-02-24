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

#include <tencentcloud/ckafka/v20190819/model/DescribeDatahubTopicResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

DescribeDatahubTopicResp::DescribeDatahubTopicResp() :
    m_nameHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_partitionNumHasBeenSet(false),
    m_retentionMsHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_addressHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDatahubTopicResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTopicResp.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTopicResp.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTopicResp.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("PartitionNum") && !value["PartitionNum"].IsNull())
    {
        if (!value["PartitionNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTopicResp.PartitionNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionNum = value["PartitionNum"].GetUint64();
        m_partitionNumHasBeenSet = true;
    }

    if (value.HasMember("RetentionMs") && !value["RetentionMs"].IsNull())
    {
        if (!value["RetentionMs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTopicResp.RetentionMs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionMs = value["RetentionMs"].GetUint64();
        m_retentionMsHasBeenSet = true;
    }

    if (value.HasMember("Note") && !value["Note"].IsNull())
    {
        if (!value["Note"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTopicResp.Note` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_note = string(value["Note"].GetString());
        m_noteHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTopicResp.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTopicResp.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTopicResp.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTopicResp.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDatahubTopicResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionNum, allocator);
    }

    if (m_retentionMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionMs, allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

}


string DescribeDatahubTopicResp::GetName() const
{
    return m_name;
}

void DescribeDatahubTopicResp::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeDatahubTopicResp::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeDatahubTopicResp::GetTopicName() const
{
    return m_topicName;
}

void DescribeDatahubTopicResp::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool DescribeDatahubTopicResp::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string DescribeDatahubTopicResp::GetTopicId() const
{
    return m_topicId;
}

void DescribeDatahubTopicResp::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool DescribeDatahubTopicResp::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

uint64_t DescribeDatahubTopicResp::GetPartitionNum() const
{
    return m_partitionNum;
}

void DescribeDatahubTopicResp::SetPartitionNum(const uint64_t& _partitionNum)
{
    m_partitionNum = _partitionNum;
    m_partitionNumHasBeenSet = true;
}

bool DescribeDatahubTopicResp::PartitionNumHasBeenSet() const
{
    return m_partitionNumHasBeenSet;
}

uint64_t DescribeDatahubTopicResp::GetRetentionMs() const
{
    return m_retentionMs;
}

void DescribeDatahubTopicResp::SetRetentionMs(const uint64_t& _retentionMs)
{
    m_retentionMs = _retentionMs;
    m_retentionMsHasBeenSet = true;
}

bool DescribeDatahubTopicResp::RetentionMsHasBeenSet() const
{
    return m_retentionMsHasBeenSet;
}

string DescribeDatahubTopicResp::GetNote() const
{
    return m_note;
}

void DescribeDatahubTopicResp::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool DescribeDatahubTopicResp::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

string DescribeDatahubTopicResp::GetUserName() const
{
    return m_userName;
}

void DescribeDatahubTopicResp::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DescribeDatahubTopicResp::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string DescribeDatahubTopicResp::GetPassword() const
{
    return m_password;
}

void DescribeDatahubTopicResp::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool DescribeDatahubTopicResp::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

uint64_t DescribeDatahubTopicResp::GetStatus() const
{
    return m_status;
}

void DescribeDatahubTopicResp::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeDatahubTopicResp::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeDatahubTopicResp::GetAddress() const
{
    return m_address;
}

void DescribeDatahubTopicResp::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool DescribeDatahubTopicResp::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}


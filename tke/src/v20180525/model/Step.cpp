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

#include <tencentcloud/tke/v20180525/model/Step.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

Step::Step() :
    m_nameHasBeenSet(false),
    m_startAtHasBeenSet(false),
    m_endAtHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome Step::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Step.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("StartAt") && !value["StartAt"].IsNull())
    {
        if (!value["StartAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Step.StartAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startAt = string(value["StartAt"].GetString());
        m_startAtHasBeenSet = true;
    }

    if (value.HasMember("EndAt") && !value["EndAt"].IsNull())
    {
        if (!value["EndAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Step.EndAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endAt = string(value["EndAt"].GetString());
        m_endAtHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Step.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Step.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Step::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_startAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startAt.c_str(), allocator).Move(), allocator);
    }

    if (m_endAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endAt.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string Step::GetName() const
{
    return m_name;
}

void Step::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Step::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Step::GetStartAt() const
{
    return m_startAt;
}

void Step::SetStartAt(const string& _startAt)
{
    m_startAt = _startAt;
    m_startAtHasBeenSet = true;
}

bool Step::StartAtHasBeenSet() const
{
    return m_startAtHasBeenSet;
}

string Step::GetEndAt() const
{
    return m_endAt;
}

void Step::SetEndAt(const string& _endAt)
{
    m_endAt = _endAt;
    m_endAtHasBeenSet = true;
}

bool Step::EndAtHasBeenSet() const
{
    return m_endAtHasBeenSet;
}

string Step::GetStatus() const
{
    return m_status;
}

void Step::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Step::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Step::GetMessage() const
{
    return m_message;
}

void Step::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool Step::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}


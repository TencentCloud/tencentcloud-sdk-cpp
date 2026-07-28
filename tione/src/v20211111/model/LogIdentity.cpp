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

#include <tencentcloud/tione/v20211111/model/LogIdentity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

LogIdentity::LogIdentity() :
    m_idHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_pkgIdHasBeenSet(false),
    m_pkgLogIdHasBeenSet(false)
{
}

CoreInternalOutcome LogIdentity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogIdentity.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogIdentity.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogIdentity.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogIdentity.Timestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = string(value["Timestamp"].GetString());
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("PkgId") && !value["PkgId"].IsNull())
    {
        if (!value["PkgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogIdentity.PkgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgId = string(value["PkgId"].GetString());
        m_pkgIdHasBeenSet = true;
    }

    if (value.HasMember("PkgLogId") && !value["PkgLogId"].IsNull())
    {
        if (!value["PkgLogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogIdentity.PkgLogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgLogId = string(value["PkgLogId"].GetString());
        m_pkgLogIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogIdentity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgId.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgLogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgLogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgLogId.c_str(), allocator).Move(), allocator);
    }

}


string LogIdentity::GetId() const
{
    return m_id;
}

void LogIdentity::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool LogIdentity::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string LogIdentity::GetMessage() const
{
    return m_message;
}

void LogIdentity::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool LogIdentity::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string LogIdentity::GetPodName() const
{
    return m_podName;
}

void LogIdentity::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool LogIdentity::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string LogIdentity::GetTimestamp() const
{
    return m_timestamp;
}

void LogIdentity::SetTimestamp(const string& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool LogIdentity::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string LogIdentity::GetPkgId() const
{
    return m_pkgId;
}

void LogIdentity::SetPkgId(const string& _pkgId)
{
    m_pkgId = _pkgId;
    m_pkgIdHasBeenSet = true;
}

bool LogIdentity::PkgIdHasBeenSet() const
{
    return m_pkgIdHasBeenSet;
}

string LogIdentity::GetPkgLogId() const
{
    return m_pkgLogId;
}

void LogIdentity::SetPkgLogId(const string& _pkgLogId)
{
    m_pkgLogId = _pkgLogId;
    m_pkgLogIdHasBeenSet = true;
}

bool LogIdentity::PkgLogIdHasBeenSet() const
{
    return m_pkgLogIdHasBeenSet;
}


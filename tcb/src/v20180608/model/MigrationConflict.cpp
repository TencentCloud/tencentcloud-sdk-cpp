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

#include <tencentcloud/tcb/v20180608/model/MigrationConflict.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

MigrationConflict::MigrationConflict() :
    m_versionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_remoteNameHasBeenSet(false),
    m_localChecksumHasBeenSet(false),
    m_remoteChecksumHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome MigrationConflict::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationConflict.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationConflict.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("RemoteName") && !value["RemoteName"].IsNull())
    {
        if (!value["RemoteName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationConflict.RemoteName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteName = string(value["RemoteName"].GetString());
        m_remoteNameHasBeenSet = true;
    }

    if (value.HasMember("LocalChecksum") && !value["LocalChecksum"].IsNull())
    {
        if (!value["LocalChecksum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationConflict.LocalChecksum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localChecksum = string(value["LocalChecksum"].GetString());
        m_localChecksumHasBeenSet = true;
    }

    if (value.HasMember("RemoteChecksum") && !value["RemoteChecksum"].IsNull())
    {
        if (!value["RemoteChecksum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationConflict.RemoteChecksum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteChecksum = string(value["RemoteChecksum"].GetString());
        m_remoteChecksumHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationConflict.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationConflict.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MigrationConflict::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteName.c_str(), allocator).Move(), allocator);
    }

    if (m_localChecksumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalChecksum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localChecksum.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteChecksumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteChecksum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteChecksum.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string MigrationConflict::GetVersion() const
{
    return m_version;
}

void MigrationConflict::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool MigrationConflict::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string MigrationConflict::GetName() const
{
    return m_name;
}

void MigrationConflict::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MigrationConflict::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MigrationConflict::GetRemoteName() const
{
    return m_remoteName;
}

void MigrationConflict::SetRemoteName(const string& _remoteName)
{
    m_remoteName = _remoteName;
    m_remoteNameHasBeenSet = true;
}

bool MigrationConflict::RemoteNameHasBeenSet() const
{
    return m_remoteNameHasBeenSet;
}

string MigrationConflict::GetLocalChecksum() const
{
    return m_localChecksum;
}

void MigrationConflict::SetLocalChecksum(const string& _localChecksum)
{
    m_localChecksum = _localChecksum;
    m_localChecksumHasBeenSet = true;
}

bool MigrationConflict::LocalChecksumHasBeenSet() const
{
    return m_localChecksumHasBeenSet;
}

string MigrationConflict::GetRemoteChecksum() const
{
    return m_remoteChecksum;
}

void MigrationConflict::SetRemoteChecksum(const string& _remoteChecksum)
{
    m_remoteChecksum = _remoteChecksum;
    m_remoteChecksumHasBeenSet = true;
}

bool MigrationConflict::RemoteChecksumHasBeenSet() const
{
    return m_remoteChecksumHasBeenSet;
}

string MigrationConflict::GetReason() const
{
    return m_reason;
}

void MigrationConflict::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool MigrationConflict::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string MigrationConflict::GetMessage() const
{
    return m_message;
}

void MigrationConflict::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool MigrationConflict::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}


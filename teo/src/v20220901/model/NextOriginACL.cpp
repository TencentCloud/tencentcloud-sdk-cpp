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

#include <tencentcloud/teo/v20220901/model/NextOriginACL.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

NextOriginACL::NextOriginACL() :
    m_versionHasBeenSet(false),
    m_plannedActiveTimeHasBeenSet(false),
    m_entireAddressesHasBeenSet(false),
    m_addedAddressesHasBeenSet(false),
    m_removedAddressesHasBeenSet(false),
    m_noChangeAddressesHasBeenSet(false)
{
}

CoreInternalOutcome NextOriginACL::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NextOriginACL.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("PlannedActiveTime") && !value["PlannedActiveTime"].IsNull())
    {
        if (!value["PlannedActiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NextOriginACL.PlannedActiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_plannedActiveTime = string(value["PlannedActiveTime"].GetString());
        m_plannedActiveTimeHasBeenSet = true;
    }

    if (value.HasMember("EntireAddresses") && !value["EntireAddresses"].IsNull())
    {
        if (!value["EntireAddresses"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NextOriginACL.EntireAddresses` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_entireAddresses.Deserialize(value["EntireAddresses"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_entireAddressesHasBeenSet = true;
    }

    if (value.HasMember("AddedAddresses") && !value["AddedAddresses"].IsNull())
    {
        if (!value["AddedAddresses"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NextOriginACL.AddedAddresses` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_addedAddresses.Deserialize(value["AddedAddresses"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_addedAddressesHasBeenSet = true;
    }

    if (value.HasMember("RemovedAddresses") && !value["RemovedAddresses"].IsNull())
    {
        if (!value["RemovedAddresses"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NextOriginACL.RemovedAddresses` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_removedAddresses.Deserialize(value["RemovedAddresses"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_removedAddressesHasBeenSet = true;
    }

    if (value.HasMember("NoChangeAddresses") && !value["NoChangeAddresses"].IsNull())
    {
        if (!value["NoChangeAddresses"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NextOriginACL.NoChangeAddresses` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_noChangeAddresses.Deserialize(value["NoChangeAddresses"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_noChangeAddressesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NextOriginACL::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_plannedActiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlannedActiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_plannedActiveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_entireAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntireAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_entireAddresses.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_addedAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddedAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_addedAddresses.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_removedAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemovedAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_removedAddresses.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_noChangeAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoChangeAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_noChangeAddresses.ToJsonObject(value[key.c_str()], allocator);
    }

}


string NextOriginACL::GetVersion() const
{
    return m_version;
}

void NextOriginACL::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool NextOriginACL::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string NextOriginACL::GetPlannedActiveTime() const
{
    return m_plannedActiveTime;
}

void NextOriginACL::SetPlannedActiveTime(const string& _plannedActiveTime)
{
    m_plannedActiveTime = _plannedActiveTime;
    m_plannedActiveTimeHasBeenSet = true;
}

bool NextOriginACL::PlannedActiveTimeHasBeenSet() const
{
    return m_plannedActiveTimeHasBeenSet;
}

Addresses NextOriginACL::GetEntireAddresses() const
{
    return m_entireAddresses;
}

void NextOriginACL::SetEntireAddresses(const Addresses& _entireAddresses)
{
    m_entireAddresses = _entireAddresses;
    m_entireAddressesHasBeenSet = true;
}

bool NextOriginACL::EntireAddressesHasBeenSet() const
{
    return m_entireAddressesHasBeenSet;
}

Addresses NextOriginACL::GetAddedAddresses() const
{
    return m_addedAddresses;
}

void NextOriginACL::SetAddedAddresses(const Addresses& _addedAddresses)
{
    m_addedAddresses = _addedAddresses;
    m_addedAddressesHasBeenSet = true;
}

bool NextOriginACL::AddedAddressesHasBeenSet() const
{
    return m_addedAddressesHasBeenSet;
}

Addresses NextOriginACL::GetRemovedAddresses() const
{
    return m_removedAddresses;
}

void NextOriginACL::SetRemovedAddresses(const Addresses& _removedAddresses)
{
    m_removedAddresses = _removedAddresses;
    m_removedAddressesHasBeenSet = true;
}

bool NextOriginACL::RemovedAddressesHasBeenSet() const
{
    return m_removedAddressesHasBeenSet;
}

Addresses NextOriginACL::GetNoChangeAddresses() const
{
    return m_noChangeAddresses;
}

void NextOriginACL::SetNoChangeAddresses(const Addresses& _noChangeAddresses)
{
    m_noChangeAddresses = _noChangeAddresses;
    m_noChangeAddressesHasBeenSet = true;
}

bool NextOriginACL::NoChangeAddressesHasBeenSet() const
{
    return m_noChangeAddressesHasBeenSet;
}


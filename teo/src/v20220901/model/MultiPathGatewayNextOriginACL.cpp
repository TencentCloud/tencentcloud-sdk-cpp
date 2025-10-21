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

#include <tencentcloud/teo/v20220901/model/MultiPathGatewayNextOriginACL.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

MultiPathGatewayNextOriginACL::MultiPathGatewayNextOriginACL() :
    m_versionHasBeenSet(false),
    m_entireAddressesHasBeenSet(false),
    m_addedAddressesHasBeenSet(false),
    m_removedAddressesHasBeenSet(false),
    m_noChangeAddressesHasBeenSet(false)
{
}

CoreInternalOutcome MultiPathGatewayNextOriginACL::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MultiPathGatewayNextOriginACL.Version` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_version = value["Version"].GetInt64();
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("EntireAddresses") && !value["EntireAddresses"].IsNull())
    {
        if (!value["EntireAddresses"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MultiPathGatewayNextOriginACL.EntireAddresses` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MultiPathGatewayNextOriginACL.AddedAddresses` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MultiPathGatewayNextOriginACL.RemovedAddresses` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MultiPathGatewayNextOriginACL.NoChangeAddresses` is not object type").SetRequestId(requestId));
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

void MultiPathGatewayNextOriginACL::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_version, allocator);
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


int64_t MultiPathGatewayNextOriginACL::GetVersion() const
{
    return m_version;
}

void MultiPathGatewayNextOriginACL::SetVersion(const int64_t& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool MultiPathGatewayNextOriginACL::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

Addresses MultiPathGatewayNextOriginACL::GetEntireAddresses() const
{
    return m_entireAddresses;
}

void MultiPathGatewayNextOriginACL::SetEntireAddresses(const Addresses& _entireAddresses)
{
    m_entireAddresses = _entireAddresses;
    m_entireAddressesHasBeenSet = true;
}

bool MultiPathGatewayNextOriginACL::EntireAddressesHasBeenSet() const
{
    return m_entireAddressesHasBeenSet;
}

Addresses MultiPathGatewayNextOriginACL::GetAddedAddresses() const
{
    return m_addedAddresses;
}

void MultiPathGatewayNextOriginACL::SetAddedAddresses(const Addresses& _addedAddresses)
{
    m_addedAddresses = _addedAddresses;
    m_addedAddressesHasBeenSet = true;
}

bool MultiPathGatewayNextOriginACL::AddedAddressesHasBeenSet() const
{
    return m_addedAddressesHasBeenSet;
}

Addresses MultiPathGatewayNextOriginACL::GetRemovedAddresses() const
{
    return m_removedAddresses;
}

void MultiPathGatewayNextOriginACL::SetRemovedAddresses(const Addresses& _removedAddresses)
{
    m_removedAddresses = _removedAddresses;
    m_removedAddressesHasBeenSet = true;
}

bool MultiPathGatewayNextOriginACL::RemovedAddressesHasBeenSet() const
{
    return m_removedAddressesHasBeenSet;
}

Addresses MultiPathGatewayNextOriginACL::GetNoChangeAddresses() const
{
    return m_noChangeAddresses;
}

void MultiPathGatewayNextOriginACL::SetNoChangeAddresses(const Addresses& _noChangeAddresses)
{
    m_noChangeAddresses = _noChangeAddresses;
    m_noChangeAddressesHasBeenSet = true;
}

bool MultiPathGatewayNextOriginACL::NoChangeAddressesHasBeenSet() const
{
    return m_noChangeAddressesHasBeenSet;
}


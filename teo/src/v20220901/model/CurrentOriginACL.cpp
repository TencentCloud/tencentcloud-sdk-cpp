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

#include <tencentcloud/teo/v20220901/model/CurrentOriginACL.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CurrentOriginACL::CurrentOriginACL() :
    m_entireAddressesHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_activeTimeHasBeenSet(false),
    m_isPlanedHasBeenSet(false)
{
}

CoreInternalOutcome CurrentOriginACL::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EntireAddresses") && !value["EntireAddresses"].IsNull())
    {
        if (!value["EntireAddresses"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentOriginACL.EntireAddresses` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_entireAddresses.Deserialize(value["EntireAddresses"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_entireAddressesHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentOriginACL.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("ActiveTime") && !value["ActiveTime"].IsNull())
    {
        if (!value["ActiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentOriginACL.ActiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activeTime = string(value["ActiveTime"].GetString());
        m_activeTimeHasBeenSet = true;
    }

    if (value.HasMember("IsPlaned") && !value["IsPlaned"].IsNull())
    {
        if (!value["IsPlaned"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentOriginACL.IsPlaned` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isPlaned = string(value["IsPlaned"].GetString());
        m_isPlanedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CurrentOriginACL::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_entireAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntireAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_entireAddresses.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_activeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isPlanedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPlaned";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isPlaned.c_str(), allocator).Move(), allocator);
    }

}


Addresses CurrentOriginACL::GetEntireAddresses() const
{
    return m_entireAddresses;
}

void CurrentOriginACL::SetEntireAddresses(const Addresses& _entireAddresses)
{
    m_entireAddresses = _entireAddresses;
    m_entireAddressesHasBeenSet = true;
}

bool CurrentOriginACL::EntireAddressesHasBeenSet() const
{
    return m_entireAddressesHasBeenSet;
}

string CurrentOriginACL::GetVersion() const
{
    return m_version;
}

void CurrentOriginACL::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool CurrentOriginACL::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string CurrentOriginACL::GetActiveTime() const
{
    return m_activeTime;
}

void CurrentOriginACL::SetActiveTime(const string& _activeTime)
{
    m_activeTime = _activeTime;
    m_activeTimeHasBeenSet = true;
}

bool CurrentOriginACL::ActiveTimeHasBeenSet() const
{
    return m_activeTimeHasBeenSet;
}

string CurrentOriginACL::GetIsPlaned() const
{
    return m_isPlaned;
}

void CurrentOriginACL::SetIsPlaned(const string& _isPlaned)
{
    m_isPlaned = _isPlaned;
    m_isPlanedHasBeenSet = true;
}

bool CurrentOriginACL::IsPlanedHasBeenSet() const
{
    return m_isPlanedHasBeenSet;
}


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

#include <tencentcloud/teo/v20220901/model/NSDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

NSDetail::NSDetail() :
    m_cnameSpeedUpHasBeenSet(false),
    m_isFakeHasBeenSet(false),
    m_ownershipVerificationHasBeenSet(false),
    m_originalNameServersHasBeenSet(false),
    m_nameServersHasBeenSet(false),
    m_vanityNameServersHasBeenSet(false),
    m_vanityNameServersIpsHasBeenSet(false)
{
}

CoreInternalOutcome NSDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CnameSpeedUp") && !value["CnameSpeedUp"].IsNull())
    {
        if (!value["CnameSpeedUp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NSDetail.CnameSpeedUp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cnameSpeedUp = string(value["CnameSpeedUp"].GetString());
        m_cnameSpeedUpHasBeenSet = true;
    }

    if (value.HasMember("IsFake") && !value["IsFake"].IsNull())
    {
        if (!value["IsFake"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NSDetail.IsFake` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isFake = value["IsFake"].GetInt64();
        m_isFakeHasBeenSet = true;
    }

    if (value.HasMember("OwnershipVerification") && !value["OwnershipVerification"].IsNull())
    {
        if (!value["OwnershipVerification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NSDetail.OwnershipVerification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ownershipVerification.Deserialize(value["OwnershipVerification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownershipVerificationHasBeenSet = true;
    }

    if (value.HasMember("OriginalNameServers") && !value["OriginalNameServers"].IsNull())
    {
        if (!value["OriginalNameServers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NSDetail.OriginalNameServers` is not array type"));

        const rapidjson::Value &tmpValue = value["OriginalNameServers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_originalNameServers.push_back((*itr).GetString());
        }
        m_originalNameServersHasBeenSet = true;
    }

    if (value.HasMember("NameServers") && !value["NameServers"].IsNull())
    {
        if (!value["NameServers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NSDetail.NameServers` is not array type"));

        const rapidjson::Value &tmpValue = value["NameServers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nameServers.push_back((*itr).GetString());
        }
        m_nameServersHasBeenSet = true;
    }

    if (value.HasMember("VanityNameServers") && !value["VanityNameServers"].IsNull())
    {
        if (!value["VanityNameServers"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NSDetail.VanityNameServers` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vanityNameServers.Deserialize(value["VanityNameServers"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vanityNameServersHasBeenSet = true;
    }

    if (value.HasMember("VanityNameServersIps") && !value["VanityNameServersIps"].IsNull())
    {
        if (!value["VanityNameServersIps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NSDetail.VanityNameServersIps` is not array type"));

        const rapidjson::Value &tmpValue = value["VanityNameServersIps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VanityNameServersIps item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vanityNameServersIps.push_back(item);
        }
        m_vanityNameServersIpsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NSDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cnameSpeedUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CnameSpeedUp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cnameSpeedUp.c_str(), allocator).Move(), allocator);
    }

    if (m_isFakeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFake";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFake, allocator);
    }

    if (m_ownershipVerificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnershipVerification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ownershipVerification.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_originalNameServersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalNameServers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_originalNameServers.begin(); itr != m_originalNameServers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nameServersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameServers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nameServers.begin(); itr != m_nameServers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vanityNameServersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VanityNameServers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vanityNameServers.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vanityNameServersIpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VanityNameServersIps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vanityNameServersIps.begin(); itr != m_vanityNameServersIps.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string NSDetail::GetCnameSpeedUp() const
{
    return m_cnameSpeedUp;
}

void NSDetail::SetCnameSpeedUp(const string& _cnameSpeedUp)
{
    m_cnameSpeedUp = _cnameSpeedUp;
    m_cnameSpeedUpHasBeenSet = true;
}

bool NSDetail::CnameSpeedUpHasBeenSet() const
{
    return m_cnameSpeedUpHasBeenSet;
}

int64_t NSDetail::GetIsFake() const
{
    return m_isFake;
}

void NSDetail::SetIsFake(const int64_t& _isFake)
{
    m_isFake = _isFake;
    m_isFakeHasBeenSet = true;
}

bool NSDetail::IsFakeHasBeenSet() const
{
    return m_isFakeHasBeenSet;
}

OwnershipVerification NSDetail::GetOwnershipVerification() const
{
    return m_ownershipVerification;
}

void NSDetail::SetOwnershipVerification(const OwnershipVerification& _ownershipVerification)
{
    m_ownershipVerification = _ownershipVerification;
    m_ownershipVerificationHasBeenSet = true;
}

bool NSDetail::OwnershipVerificationHasBeenSet() const
{
    return m_ownershipVerificationHasBeenSet;
}

vector<string> NSDetail::GetOriginalNameServers() const
{
    return m_originalNameServers;
}

void NSDetail::SetOriginalNameServers(const vector<string>& _originalNameServers)
{
    m_originalNameServers = _originalNameServers;
    m_originalNameServersHasBeenSet = true;
}

bool NSDetail::OriginalNameServersHasBeenSet() const
{
    return m_originalNameServersHasBeenSet;
}

vector<string> NSDetail::GetNameServers() const
{
    return m_nameServers;
}

void NSDetail::SetNameServers(const vector<string>& _nameServers)
{
    m_nameServers = _nameServers;
    m_nameServersHasBeenSet = true;
}

bool NSDetail::NameServersHasBeenSet() const
{
    return m_nameServersHasBeenSet;
}

VanityNameServers NSDetail::GetVanityNameServers() const
{
    return m_vanityNameServers;
}

void NSDetail::SetVanityNameServers(const VanityNameServers& _vanityNameServers)
{
    m_vanityNameServers = _vanityNameServers;
    m_vanityNameServersHasBeenSet = true;
}

bool NSDetail::VanityNameServersHasBeenSet() const
{
    return m_vanityNameServersHasBeenSet;
}

vector<VanityNameServersIps> NSDetail::GetVanityNameServersIps() const
{
    return m_vanityNameServersIps;
}

void NSDetail::SetVanityNameServersIps(const vector<VanityNameServersIps>& _vanityNameServersIps)
{
    m_vanityNameServersIps = _vanityNameServersIps;
    m_vanityNameServersIpsHasBeenSet = true;
}

bool NSDetail::VanityNameServersIpsHasBeenSet() const
{
    return m_vanityNameServersIpsHasBeenSet;
}


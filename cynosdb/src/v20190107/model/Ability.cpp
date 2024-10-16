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

#include <tencentcloud/cynosdb/v20190107/model/Ability.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

Ability::Ability() :
    m_isSupportSlaveZoneHasBeenSet(false),
    m_nonsupportSlaveZoneReasonHasBeenSet(false),
    m_isSupportRoHasBeenSet(false),
    m_nonsupportRoReasonHasBeenSet(false),
    m_isSupportManualSnapshotHasBeenSet(false),
    m_isSupportTransparentDataEncryptionHasBeenSet(false),
    m_noSupportTransparentDataEncryptionReasonHasBeenSet(false),
    m_isSupportManualLogicHasBeenSet(false)
{
}

CoreInternalOutcome Ability::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsSupportSlaveZone") && !value["IsSupportSlaveZone"].IsNull())
    {
        if (!value["IsSupportSlaveZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ability.IsSupportSlaveZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportSlaveZone = string(value["IsSupportSlaveZone"].GetString());
        m_isSupportSlaveZoneHasBeenSet = true;
    }

    if (value.HasMember("NonsupportSlaveZoneReason") && !value["NonsupportSlaveZoneReason"].IsNull())
    {
        if (!value["NonsupportSlaveZoneReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ability.NonsupportSlaveZoneReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nonsupportSlaveZoneReason = string(value["NonsupportSlaveZoneReason"].GetString());
        m_nonsupportSlaveZoneReasonHasBeenSet = true;
    }

    if (value.HasMember("IsSupportRo") && !value["IsSupportRo"].IsNull())
    {
        if (!value["IsSupportRo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ability.IsSupportRo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportRo = string(value["IsSupportRo"].GetString());
        m_isSupportRoHasBeenSet = true;
    }

    if (value.HasMember("NonsupportRoReason") && !value["NonsupportRoReason"].IsNull())
    {
        if (!value["NonsupportRoReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ability.NonsupportRoReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nonsupportRoReason = string(value["NonsupportRoReason"].GetString());
        m_nonsupportRoReasonHasBeenSet = true;
    }

    if (value.HasMember("IsSupportManualSnapshot") && !value["IsSupportManualSnapshot"].IsNull())
    {
        if (!value["IsSupportManualSnapshot"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ability.IsSupportManualSnapshot` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportManualSnapshot = string(value["IsSupportManualSnapshot"].GetString());
        m_isSupportManualSnapshotHasBeenSet = true;
    }

    if (value.HasMember("IsSupportTransparentDataEncryption") && !value["IsSupportTransparentDataEncryption"].IsNull())
    {
        if (!value["IsSupportTransparentDataEncryption"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ability.IsSupportTransparentDataEncryption` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportTransparentDataEncryption = string(value["IsSupportTransparentDataEncryption"].GetString());
        m_isSupportTransparentDataEncryptionHasBeenSet = true;
    }

    if (value.HasMember("NoSupportTransparentDataEncryptionReason") && !value["NoSupportTransparentDataEncryptionReason"].IsNull())
    {
        if (!value["NoSupportTransparentDataEncryptionReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ability.NoSupportTransparentDataEncryptionReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_noSupportTransparentDataEncryptionReason = string(value["NoSupportTransparentDataEncryptionReason"].GetString());
        m_noSupportTransparentDataEncryptionReasonHasBeenSet = true;
    }

    if (value.HasMember("IsSupportManualLogic") && !value["IsSupportManualLogic"].IsNull())
    {
        if (!value["IsSupportManualLogic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ability.IsSupportManualLogic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportManualLogic = string(value["IsSupportManualLogic"].GetString());
        m_isSupportManualLogicHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Ability::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isSupportSlaveZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportSlaveZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isSupportSlaveZone.c_str(), allocator).Move(), allocator);
    }

    if (m_nonsupportSlaveZoneReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NonsupportSlaveZoneReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nonsupportSlaveZoneReason.c_str(), allocator).Move(), allocator);
    }

    if (m_isSupportRoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportRo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isSupportRo.c_str(), allocator).Move(), allocator);
    }

    if (m_nonsupportRoReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NonsupportRoReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nonsupportRoReason.c_str(), allocator).Move(), allocator);
    }

    if (m_isSupportManualSnapshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportManualSnapshot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isSupportManualSnapshot.c_str(), allocator).Move(), allocator);
    }

    if (m_isSupportTransparentDataEncryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportTransparentDataEncryption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isSupportTransparentDataEncryption.c_str(), allocator).Move(), allocator);
    }

    if (m_noSupportTransparentDataEncryptionReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoSupportTransparentDataEncryptionReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_noSupportTransparentDataEncryptionReason.c_str(), allocator).Move(), allocator);
    }

    if (m_isSupportManualLogicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportManualLogic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isSupportManualLogic.c_str(), allocator).Move(), allocator);
    }

}


string Ability::GetIsSupportSlaveZone() const
{
    return m_isSupportSlaveZone;
}

void Ability::SetIsSupportSlaveZone(const string& _isSupportSlaveZone)
{
    m_isSupportSlaveZone = _isSupportSlaveZone;
    m_isSupportSlaveZoneHasBeenSet = true;
}

bool Ability::IsSupportSlaveZoneHasBeenSet() const
{
    return m_isSupportSlaveZoneHasBeenSet;
}

string Ability::GetNonsupportSlaveZoneReason() const
{
    return m_nonsupportSlaveZoneReason;
}

void Ability::SetNonsupportSlaveZoneReason(const string& _nonsupportSlaveZoneReason)
{
    m_nonsupportSlaveZoneReason = _nonsupportSlaveZoneReason;
    m_nonsupportSlaveZoneReasonHasBeenSet = true;
}

bool Ability::NonsupportSlaveZoneReasonHasBeenSet() const
{
    return m_nonsupportSlaveZoneReasonHasBeenSet;
}

string Ability::GetIsSupportRo() const
{
    return m_isSupportRo;
}

void Ability::SetIsSupportRo(const string& _isSupportRo)
{
    m_isSupportRo = _isSupportRo;
    m_isSupportRoHasBeenSet = true;
}

bool Ability::IsSupportRoHasBeenSet() const
{
    return m_isSupportRoHasBeenSet;
}

string Ability::GetNonsupportRoReason() const
{
    return m_nonsupportRoReason;
}

void Ability::SetNonsupportRoReason(const string& _nonsupportRoReason)
{
    m_nonsupportRoReason = _nonsupportRoReason;
    m_nonsupportRoReasonHasBeenSet = true;
}

bool Ability::NonsupportRoReasonHasBeenSet() const
{
    return m_nonsupportRoReasonHasBeenSet;
}

string Ability::GetIsSupportManualSnapshot() const
{
    return m_isSupportManualSnapshot;
}

void Ability::SetIsSupportManualSnapshot(const string& _isSupportManualSnapshot)
{
    m_isSupportManualSnapshot = _isSupportManualSnapshot;
    m_isSupportManualSnapshotHasBeenSet = true;
}

bool Ability::IsSupportManualSnapshotHasBeenSet() const
{
    return m_isSupportManualSnapshotHasBeenSet;
}

string Ability::GetIsSupportTransparentDataEncryption() const
{
    return m_isSupportTransparentDataEncryption;
}

void Ability::SetIsSupportTransparentDataEncryption(const string& _isSupportTransparentDataEncryption)
{
    m_isSupportTransparentDataEncryption = _isSupportTransparentDataEncryption;
    m_isSupportTransparentDataEncryptionHasBeenSet = true;
}

bool Ability::IsSupportTransparentDataEncryptionHasBeenSet() const
{
    return m_isSupportTransparentDataEncryptionHasBeenSet;
}

string Ability::GetNoSupportTransparentDataEncryptionReason() const
{
    return m_noSupportTransparentDataEncryptionReason;
}

void Ability::SetNoSupportTransparentDataEncryptionReason(const string& _noSupportTransparentDataEncryptionReason)
{
    m_noSupportTransparentDataEncryptionReason = _noSupportTransparentDataEncryptionReason;
    m_noSupportTransparentDataEncryptionReasonHasBeenSet = true;
}

bool Ability::NoSupportTransparentDataEncryptionReasonHasBeenSet() const
{
    return m_noSupportTransparentDataEncryptionReasonHasBeenSet;
}

string Ability::GetIsSupportManualLogic() const
{
    return m_isSupportManualLogic;
}

void Ability::SetIsSupportManualLogic(const string& _isSupportManualLogic)
{
    m_isSupportManualLogic = _isSupportManualLogic;
    m_isSupportManualLogicHasBeenSet = true;
}

bool Ability::IsSupportManualLogicHasBeenSet() const
{
    return m_isSupportManualLogicHasBeenSet;
}


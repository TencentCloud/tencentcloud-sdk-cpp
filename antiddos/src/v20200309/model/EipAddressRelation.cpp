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

#include <tencentcloud/antiddos/v20200309/model/EipAddressRelation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

EipAddressRelation::EipAddressRelation() :
    m_eipAddressRegionHasBeenSet(false),
    m_eipBoundRscInsHasBeenSet(false),
    m_eipBoundRscEniHasBeenSet(false),
    m_eipBoundRscVipHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome EipAddressRelation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EipAddressRegion") && !value["EipAddressRegion"].IsNull())
    {
        if (!value["EipAddressRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipAddressRelation.EipAddressRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eipAddressRegion = string(value["EipAddressRegion"].GetString());
        m_eipAddressRegionHasBeenSet = true;
    }

    if (value.HasMember("EipBoundRscIns") && !value["EipBoundRscIns"].IsNull())
    {
        if (!value["EipBoundRscIns"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipAddressRelation.EipBoundRscIns` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eipBoundRscIns = string(value["EipBoundRscIns"].GetString());
        m_eipBoundRscInsHasBeenSet = true;
    }

    if (value.HasMember("EipBoundRscEni") && !value["EipBoundRscEni"].IsNull())
    {
        if (!value["EipBoundRscEni"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipAddressRelation.EipBoundRscEni` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eipBoundRscEni = string(value["EipBoundRscEni"].GetString());
        m_eipBoundRscEniHasBeenSet = true;
    }

    if (value.HasMember("EipBoundRscVip") && !value["EipBoundRscVip"].IsNull())
    {
        if (!value["EipBoundRscVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipAddressRelation.EipBoundRscVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eipBoundRscVip = string(value["EipBoundRscVip"].GetString());
        m_eipBoundRscVipHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipAddressRelation.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EipAddressRelation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eipAddressRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipAddressRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eipAddressRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_eipBoundRscInsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipBoundRscIns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eipBoundRscIns.c_str(), allocator).Move(), allocator);
    }

    if (m_eipBoundRscEniHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipBoundRscEni";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eipBoundRscEni.c_str(), allocator).Move(), allocator);
    }

    if (m_eipBoundRscVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipBoundRscVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eipBoundRscVip.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

}


string EipAddressRelation::GetEipAddressRegion() const
{
    return m_eipAddressRegion;
}

void EipAddressRelation::SetEipAddressRegion(const string& _eipAddressRegion)
{
    m_eipAddressRegion = _eipAddressRegion;
    m_eipAddressRegionHasBeenSet = true;
}

bool EipAddressRelation::EipAddressRegionHasBeenSet() const
{
    return m_eipAddressRegionHasBeenSet;
}

string EipAddressRelation::GetEipBoundRscIns() const
{
    return m_eipBoundRscIns;
}

void EipAddressRelation::SetEipBoundRscIns(const string& _eipBoundRscIns)
{
    m_eipBoundRscIns = _eipBoundRscIns;
    m_eipBoundRscInsHasBeenSet = true;
}

bool EipAddressRelation::EipBoundRscInsHasBeenSet() const
{
    return m_eipBoundRscInsHasBeenSet;
}

string EipAddressRelation::GetEipBoundRscEni() const
{
    return m_eipBoundRscEni;
}

void EipAddressRelation::SetEipBoundRscEni(const string& _eipBoundRscEni)
{
    m_eipBoundRscEni = _eipBoundRscEni;
    m_eipBoundRscEniHasBeenSet = true;
}

bool EipAddressRelation::EipBoundRscEniHasBeenSet() const
{
    return m_eipBoundRscEniHasBeenSet;
}

string EipAddressRelation::GetEipBoundRscVip() const
{
    return m_eipBoundRscVip;
}

void EipAddressRelation::SetEipBoundRscVip(const string& _eipBoundRscVip)
{
    m_eipBoundRscVip = _eipBoundRscVip;
    m_eipBoundRscVipHasBeenSet = true;
}

bool EipAddressRelation::EipBoundRscVipHasBeenSet() const
{
    return m_eipBoundRscVipHasBeenSet;
}

string EipAddressRelation::GetModifyTime() const
{
    return m_modifyTime;
}

void EipAddressRelation::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool EipAddressRelation::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}


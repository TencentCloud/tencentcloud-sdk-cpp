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

#include <tencentcloud/cfw/v20190904/model/AclRegInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

AclRegInfo::AclRegInfo() :
    m_regionCodeHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_parentHasBeenSet(false),
    m_zhKeyHasBeenSet(false),
    m_enKeyHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_isCityHasBeenSet(false),
    m_numHasBeenSet(false),
    m_forBypassHasBeenSet(false),
    m_forSerialHasBeenSet(false),
    m_forNatHasBeenSet(false)
{
}

CoreInternalOutcome AclRegInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionCode") && !value["RegionCode"].IsNull())
    {
        if (!value["RegionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclRegInfo.RegionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionCode = string(value["RegionCode"].GetString());
        m_regionCodeHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclRegInfo.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("Parent") && !value["Parent"].IsNull())
    {
        if (!value["Parent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclRegInfo.Parent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parent = string(value["Parent"].GetString());
        m_parentHasBeenSet = true;
    }

    if (value.HasMember("ZhKey") && !value["ZhKey"].IsNull())
    {
        if (!value["ZhKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclRegInfo.ZhKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zhKey = string(value["ZhKey"].GetString());
        m_zhKeyHasBeenSet = true;
    }

    if (value.HasMember("EnKey") && !value["EnKey"].IsNull())
    {
        if (!value["EnKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclRegInfo.EnKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enKey = string(value["EnKey"].GetString());
        m_enKeyHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AclRegInfo.Area` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_area = value["Area"].GetInt64();
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("IsCity") && !value["IsCity"].IsNull())
    {
        if (!value["IsCity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AclRegInfo.IsCity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isCity = value["IsCity"].GetInt64();
        m_isCityHasBeenSet = true;
    }

    if (value.HasMember("Num") && !value["Num"].IsNull())
    {
        if (!value["Num"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AclRegInfo.Num` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_num = value["Num"].GetInt64();
        m_numHasBeenSet = true;
    }

    if (value.HasMember("ForBypass") && !value["ForBypass"].IsNull())
    {
        if (!value["ForBypass"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AclRegInfo.ForBypass` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_forBypass = value["ForBypass"].GetInt64();
        m_forBypassHasBeenSet = true;
    }

    if (value.HasMember("ForSerial") && !value["ForSerial"].IsNull())
    {
        if (!value["ForSerial"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AclRegInfo.ForSerial` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_forSerial = value["ForSerial"].GetInt64();
        m_forSerialHasBeenSet = true;
    }

    if (value.HasMember("ForNat") && !value["ForNat"].IsNull())
    {
        if (!value["ForNat"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AclRegInfo.ForNat` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_forNat = value["ForNat"].GetInt64();
        m_forNatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AclRegInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_parentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parent.c_str(), allocator).Move(), allocator);
    }

    if (m_zhKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZhKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zhKey.c_str(), allocator).Move(), allocator);
    }

    if (m_enKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enKey.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_area, allocator);
    }

    if (m_isCityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCity, allocator);
    }

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_num, allocator);
    }

    if (m_forBypassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForBypass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forBypass, allocator);
    }

    if (m_forSerialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForSerial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forSerial, allocator);
    }

    if (m_forNatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForNat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forNat, allocator);
    }

}


string AclRegInfo::GetRegionCode() const
{
    return m_regionCode;
}

void AclRegInfo::SetRegionCode(const string& _regionCode)
{
    m_regionCode = _regionCode;
    m_regionCodeHasBeenSet = true;
}

bool AclRegInfo::RegionCodeHasBeenSet() const
{
    return m_regionCodeHasBeenSet;
}

string AclRegInfo::GetRegionName() const
{
    return m_regionName;
}

void AclRegInfo::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool AclRegInfo::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string AclRegInfo::GetParent() const
{
    return m_parent;
}

void AclRegInfo::SetParent(const string& _parent)
{
    m_parent = _parent;
    m_parentHasBeenSet = true;
}

bool AclRegInfo::ParentHasBeenSet() const
{
    return m_parentHasBeenSet;
}

string AclRegInfo::GetZhKey() const
{
    return m_zhKey;
}

void AclRegInfo::SetZhKey(const string& _zhKey)
{
    m_zhKey = _zhKey;
    m_zhKeyHasBeenSet = true;
}

bool AclRegInfo::ZhKeyHasBeenSet() const
{
    return m_zhKeyHasBeenSet;
}

string AclRegInfo::GetEnKey() const
{
    return m_enKey;
}

void AclRegInfo::SetEnKey(const string& _enKey)
{
    m_enKey = _enKey;
    m_enKeyHasBeenSet = true;
}

bool AclRegInfo::EnKeyHasBeenSet() const
{
    return m_enKeyHasBeenSet;
}

int64_t AclRegInfo::GetArea() const
{
    return m_area;
}

void AclRegInfo::SetArea(const int64_t& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool AclRegInfo::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

int64_t AclRegInfo::GetIsCity() const
{
    return m_isCity;
}

void AclRegInfo::SetIsCity(const int64_t& _isCity)
{
    m_isCity = _isCity;
    m_isCityHasBeenSet = true;
}

bool AclRegInfo::IsCityHasBeenSet() const
{
    return m_isCityHasBeenSet;
}

int64_t AclRegInfo::GetNum() const
{
    return m_num;
}

void AclRegInfo::SetNum(const int64_t& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool AclRegInfo::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

int64_t AclRegInfo::GetForBypass() const
{
    return m_forBypass;
}

void AclRegInfo::SetForBypass(const int64_t& _forBypass)
{
    m_forBypass = _forBypass;
    m_forBypassHasBeenSet = true;
}

bool AclRegInfo::ForBypassHasBeenSet() const
{
    return m_forBypassHasBeenSet;
}

int64_t AclRegInfo::GetForSerial() const
{
    return m_forSerial;
}

void AclRegInfo::SetForSerial(const int64_t& _forSerial)
{
    m_forSerial = _forSerial;
    m_forSerialHasBeenSet = true;
}

bool AclRegInfo::ForSerialHasBeenSet() const
{
    return m_forSerialHasBeenSet;
}

int64_t AclRegInfo::GetForNat() const
{
    return m_forNat;
}

void AclRegInfo::SetForNat(const int64_t& _forNat)
{
    m_forNat = _forNat;
    m_forNatHasBeenSet = true;
}

bool AclRegInfo::ForNatHasBeenSet() const
{
    return m_forNatHasBeenSet;
}


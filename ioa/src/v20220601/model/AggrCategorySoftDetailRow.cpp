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

#include <tencentcloud/ioa/v20220601/model/AggrCategorySoftDetailRow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

AggrCategorySoftDetailRow::AggrCategorySoftDetailRow() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_piracyRiskHasBeenSet(false),
    m_osTypeHasBeenSet(false),
    m_corpNameHasBeenSet(false),
    m_installedDeviceNumHasBeenSet(false),
    m_piracyInstalledDeviceNumHasBeenSet(false),
    m_installedUserNumHasBeenSet(false),
    m_piracyInstalledUserNumHasBeenSet(false),
    m_authNumHasBeenSet(false),
    m_genuineRateHasBeenSet(false),
    m_upgradableDeviceNumHasBeenSet(false)
{
}

CoreInternalOutcome AggrCategorySoftDetailRow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AggrCategorySoftDetailRow.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggrCategorySoftDetailRow.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("PiracyRisk") && !value["PiracyRisk"].IsNull())
    {
        if (!value["PiracyRisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AggrCategorySoftDetailRow.PiracyRisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_piracyRisk = value["PiracyRisk"].GetInt64();
        m_piracyRiskHasBeenSet = true;
    }

    if (value.HasMember("OsType") && !value["OsType"].IsNull())
    {
        if (!value["OsType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AggrCategorySoftDetailRow.OsType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_osType = value["OsType"].GetInt64();
        m_osTypeHasBeenSet = true;
    }

    if (value.HasMember("CorpName") && !value["CorpName"].IsNull())
    {
        if (!value["CorpName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggrCategorySoftDetailRow.CorpName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_corpName = string(value["CorpName"].GetString());
        m_corpNameHasBeenSet = true;
    }

    if (value.HasMember("InstalledDeviceNum") && !value["InstalledDeviceNum"].IsNull())
    {
        if (!value["InstalledDeviceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AggrCategorySoftDetailRow.InstalledDeviceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_installedDeviceNum = value["InstalledDeviceNum"].GetInt64();
        m_installedDeviceNumHasBeenSet = true;
    }

    if (value.HasMember("PiracyInstalledDeviceNum") && !value["PiracyInstalledDeviceNum"].IsNull())
    {
        if (!value["PiracyInstalledDeviceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AggrCategorySoftDetailRow.PiracyInstalledDeviceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_piracyInstalledDeviceNum = value["PiracyInstalledDeviceNum"].GetInt64();
        m_piracyInstalledDeviceNumHasBeenSet = true;
    }

    if (value.HasMember("InstalledUserNum") && !value["InstalledUserNum"].IsNull())
    {
        if (!value["InstalledUserNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AggrCategorySoftDetailRow.InstalledUserNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_installedUserNum = value["InstalledUserNum"].GetInt64();
        m_installedUserNumHasBeenSet = true;
    }

    if (value.HasMember("PiracyInstalledUserNum") && !value["PiracyInstalledUserNum"].IsNull())
    {
        if (!value["PiracyInstalledUserNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AggrCategorySoftDetailRow.PiracyInstalledUserNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_piracyInstalledUserNum = value["PiracyInstalledUserNum"].GetInt64();
        m_piracyInstalledUserNumHasBeenSet = true;
    }

    if (value.HasMember("AuthNum") && !value["AuthNum"].IsNull())
    {
        if (!value["AuthNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AggrCategorySoftDetailRow.AuthNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authNum = value["AuthNum"].GetInt64();
        m_authNumHasBeenSet = true;
    }

    if (value.HasMember("GenuineRate") && !value["GenuineRate"].IsNull())
    {
        if (!value["GenuineRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AggrCategorySoftDetailRow.GenuineRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_genuineRate = value["GenuineRate"].GetDouble();
        m_genuineRateHasBeenSet = true;
    }

    if (value.HasMember("UpgradableDeviceNum") && !value["UpgradableDeviceNum"].IsNull())
    {
        if (!value["UpgradableDeviceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AggrCategorySoftDetailRow.UpgradableDeviceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_upgradableDeviceNum = value["UpgradableDeviceNum"].GetInt64();
        m_upgradableDeviceNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AggrCategorySoftDetailRow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_piracyRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PiracyRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_piracyRisk, allocator);
    }

    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_osType, allocator);
    }

    if (m_corpNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_corpName.c_str(), allocator).Move(), allocator);
    }

    if (m_installedDeviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstalledDeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_installedDeviceNum, allocator);
    }

    if (m_piracyInstalledDeviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PiracyInstalledDeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_piracyInstalledDeviceNum, allocator);
    }

    if (m_installedUserNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstalledUserNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_installedUserNum, allocator);
    }

    if (m_piracyInstalledUserNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PiracyInstalledUserNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_piracyInstalledUserNum, allocator);
    }

    if (m_authNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authNum, allocator);
    }

    if (m_genuineRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenuineRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_genuineRate, allocator);
    }

    if (m_upgradableDeviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradableDeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upgradableDeviceNum, allocator);
    }

}


int64_t AggrCategorySoftDetailRow::GetID() const
{
    return m_iD;
}

void AggrCategorySoftDetailRow::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool AggrCategorySoftDetailRow::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string AggrCategorySoftDetailRow::GetName() const
{
    return m_name;
}

void AggrCategorySoftDetailRow::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AggrCategorySoftDetailRow::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t AggrCategorySoftDetailRow::GetPiracyRisk() const
{
    return m_piracyRisk;
}

void AggrCategorySoftDetailRow::SetPiracyRisk(const int64_t& _piracyRisk)
{
    m_piracyRisk = _piracyRisk;
    m_piracyRiskHasBeenSet = true;
}

bool AggrCategorySoftDetailRow::PiracyRiskHasBeenSet() const
{
    return m_piracyRiskHasBeenSet;
}

int64_t AggrCategorySoftDetailRow::GetOsType() const
{
    return m_osType;
}

void AggrCategorySoftDetailRow::SetOsType(const int64_t& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool AggrCategorySoftDetailRow::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

string AggrCategorySoftDetailRow::GetCorpName() const
{
    return m_corpName;
}

void AggrCategorySoftDetailRow::SetCorpName(const string& _corpName)
{
    m_corpName = _corpName;
    m_corpNameHasBeenSet = true;
}

bool AggrCategorySoftDetailRow::CorpNameHasBeenSet() const
{
    return m_corpNameHasBeenSet;
}

int64_t AggrCategorySoftDetailRow::GetInstalledDeviceNum() const
{
    return m_installedDeviceNum;
}

void AggrCategorySoftDetailRow::SetInstalledDeviceNum(const int64_t& _installedDeviceNum)
{
    m_installedDeviceNum = _installedDeviceNum;
    m_installedDeviceNumHasBeenSet = true;
}

bool AggrCategorySoftDetailRow::InstalledDeviceNumHasBeenSet() const
{
    return m_installedDeviceNumHasBeenSet;
}

int64_t AggrCategorySoftDetailRow::GetPiracyInstalledDeviceNum() const
{
    return m_piracyInstalledDeviceNum;
}

void AggrCategorySoftDetailRow::SetPiracyInstalledDeviceNum(const int64_t& _piracyInstalledDeviceNum)
{
    m_piracyInstalledDeviceNum = _piracyInstalledDeviceNum;
    m_piracyInstalledDeviceNumHasBeenSet = true;
}

bool AggrCategorySoftDetailRow::PiracyInstalledDeviceNumHasBeenSet() const
{
    return m_piracyInstalledDeviceNumHasBeenSet;
}

int64_t AggrCategorySoftDetailRow::GetInstalledUserNum() const
{
    return m_installedUserNum;
}

void AggrCategorySoftDetailRow::SetInstalledUserNum(const int64_t& _installedUserNum)
{
    m_installedUserNum = _installedUserNum;
    m_installedUserNumHasBeenSet = true;
}

bool AggrCategorySoftDetailRow::InstalledUserNumHasBeenSet() const
{
    return m_installedUserNumHasBeenSet;
}

int64_t AggrCategorySoftDetailRow::GetPiracyInstalledUserNum() const
{
    return m_piracyInstalledUserNum;
}

void AggrCategorySoftDetailRow::SetPiracyInstalledUserNum(const int64_t& _piracyInstalledUserNum)
{
    m_piracyInstalledUserNum = _piracyInstalledUserNum;
    m_piracyInstalledUserNumHasBeenSet = true;
}

bool AggrCategorySoftDetailRow::PiracyInstalledUserNumHasBeenSet() const
{
    return m_piracyInstalledUserNumHasBeenSet;
}

int64_t AggrCategorySoftDetailRow::GetAuthNum() const
{
    return m_authNum;
}

void AggrCategorySoftDetailRow::SetAuthNum(const int64_t& _authNum)
{
    m_authNum = _authNum;
    m_authNumHasBeenSet = true;
}

bool AggrCategorySoftDetailRow::AuthNumHasBeenSet() const
{
    return m_authNumHasBeenSet;
}

double AggrCategorySoftDetailRow::GetGenuineRate() const
{
    return m_genuineRate;
}

void AggrCategorySoftDetailRow::SetGenuineRate(const double& _genuineRate)
{
    m_genuineRate = _genuineRate;
    m_genuineRateHasBeenSet = true;
}

bool AggrCategorySoftDetailRow::GenuineRateHasBeenSet() const
{
    return m_genuineRateHasBeenSet;
}

int64_t AggrCategorySoftDetailRow::GetUpgradableDeviceNum() const
{
    return m_upgradableDeviceNum;
}

void AggrCategorySoftDetailRow::SetUpgradableDeviceNum(const int64_t& _upgradableDeviceNum)
{
    m_upgradableDeviceNum = _upgradableDeviceNum;
    m_upgradableDeviceNumHasBeenSet = true;
}

bool AggrCategorySoftDetailRow::UpgradableDeviceNumHasBeenSet() const
{
    return m_upgradableDeviceNumHasBeenSet;
}


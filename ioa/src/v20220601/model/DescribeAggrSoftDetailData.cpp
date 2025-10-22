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

#include <tencentcloud/ioa/v20220601/model/DescribeAggrSoftDetailData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeAggrSoftDetailData::DescribeAggrSoftDetailData() :
    m_nameHasBeenSet(false),
    m_osTypeHasBeenSet(false),
    m_piracyRiskHasBeenSet(false),
    m_corpHasBeenSet(false),
    m_softVersionDistHasBeenSet(false),
    m_piracyVersionDistHasBeenSet(false),
    m_installedDeviceNumHasBeenSet(false),
    m_piracyInstalledDeviceNumHasBeenSet(false),
    m_installedUserNumHasBeenSet(false),
    m_piracyInstalledUserNumHasBeenSet(false),
    m_authNumHasBeenSet(false),
    m_genuineRateHasBeenSet(false),
    m_upgradableDeviceNumHasBeenSet(false),
    m_upgradableVersionsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAggrSoftDetailData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAggrSoftDetailData.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("OsType") && !value["OsType"].IsNull())
    {
        if (!value["OsType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAggrSoftDetailData.OsType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_osType = value["OsType"].GetInt64();
        m_osTypeHasBeenSet = true;
    }

    if (value.HasMember("PiracyRisk") && !value["PiracyRisk"].IsNull())
    {
        if (!value["PiracyRisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAggrSoftDetailData.PiracyRisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_piracyRisk = value["PiracyRisk"].GetInt64();
        m_piracyRiskHasBeenSet = true;
    }

    if (value.HasMember("Corp") && !value["Corp"].IsNull())
    {
        if (!value["Corp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAggrSoftDetailData.Corp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_corp = string(value["Corp"].GetString());
        m_corpHasBeenSet = true;
    }

    if (value.HasMember("SoftVersionDist") && !value["SoftVersionDist"].IsNull())
    {
        if (!value["SoftVersionDist"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeAggrSoftDetailData.SoftVersionDist` is not array type"));

        const rapidjson::Value &tmpValue = value["SoftVersionDist"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SoftVersionAndNum item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_softVersionDist.push_back(item);
        }
        m_softVersionDistHasBeenSet = true;
    }

    if (value.HasMember("PiracyVersionDist") && !value["PiracyVersionDist"].IsNull())
    {
        if (!value["PiracyVersionDist"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeAggrSoftDetailData.PiracyVersionDist` is not array type"));

        const rapidjson::Value &tmpValue = value["PiracyVersionDist"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SoftVersionAndNum item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_piracyVersionDist.push_back(item);
        }
        m_piracyVersionDistHasBeenSet = true;
    }

    if (value.HasMember("InstalledDeviceNum") && !value["InstalledDeviceNum"].IsNull())
    {
        if (!value["InstalledDeviceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAggrSoftDetailData.InstalledDeviceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_installedDeviceNum = value["InstalledDeviceNum"].GetInt64();
        m_installedDeviceNumHasBeenSet = true;
    }

    if (value.HasMember("PiracyInstalledDeviceNum") && !value["PiracyInstalledDeviceNum"].IsNull())
    {
        if (!value["PiracyInstalledDeviceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAggrSoftDetailData.PiracyInstalledDeviceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_piracyInstalledDeviceNum = value["PiracyInstalledDeviceNum"].GetInt64();
        m_piracyInstalledDeviceNumHasBeenSet = true;
    }

    if (value.HasMember("InstalledUserNum") && !value["InstalledUserNum"].IsNull())
    {
        if (!value["InstalledUserNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAggrSoftDetailData.InstalledUserNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_installedUserNum = value["InstalledUserNum"].GetInt64();
        m_installedUserNumHasBeenSet = true;
    }

    if (value.HasMember("PiracyInstalledUserNum") && !value["PiracyInstalledUserNum"].IsNull())
    {
        if (!value["PiracyInstalledUserNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAggrSoftDetailData.PiracyInstalledUserNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_piracyInstalledUserNum = value["PiracyInstalledUserNum"].GetInt64();
        m_piracyInstalledUserNumHasBeenSet = true;
    }

    if (value.HasMember("AuthNum") && !value["AuthNum"].IsNull())
    {
        if (!value["AuthNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAggrSoftDetailData.AuthNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authNum = value["AuthNum"].GetInt64();
        m_authNumHasBeenSet = true;
    }

    if (value.HasMember("GenuineRate") && !value["GenuineRate"].IsNull())
    {
        if (!value["GenuineRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAggrSoftDetailData.GenuineRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_genuineRate = value["GenuineRate"].GetDouble();
        m_genuineRateHasBeenSet = true;
    }

    if (value.HasMember("UpgradableDeviceNum") && !value["UpgradableDeviceNum"].IsNull())
    {
        if (!value["UpgradableDeviceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAggrSoftDetailData.UpgradableDeviceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_upgradableDeviceNum = value["UpgradableDeviceNum"].GetInt64();
        m_upgradableDeviceNumHasBeenSet = true;
    }

    if (value.HasMember("UpgradableVersions") && !value["UpgradableVersions"].IsNull())
    {
        if (!value["UpgradableVersions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeAggrSoftDetailData.UpgradableVersions` is not array type"));

        const rapidjson::Value &tmpValue = value["UpgradableVersions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_upgradableVersions.push_back((*itr).GetString());
        }
        m_upgradableVersionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeAggrSoftDetailData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_osType, allocator);
    }

    if (m_piracyRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PiracyRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_piracyRisk, allocator);
    }

    if (m_corpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Corp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_corp.c_str(), allocator).Move(), allocator);
    }

    if (m_softVersionDistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoftVersionDist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_softVersionDist.begin(); itr != m_softVersionDist.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_piracyVersionDistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PiracyVersionDist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_piracyVersionDist.begin(); itr != m_piracyVersionDist.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_upgradableVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradableVersions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_upgradableVersions.begin(); itr != m_upgradableVersions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DescribeAggrSoftDetailData::GetName() const
{
    return m_name;
}

void DescribeAggrSoftDetailData::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeAggrSoftDetailData::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DescribeAggrSoftDetailData::GetOsType() const
{
    return m_osType;
}

void DescribeAggrSoftDetailData::SetOsType(const int64_t& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool DescribeAggrSoftDetailData::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

int64_t DescribeAggrSoftDetailData::GetPiracyRisk() const
{
    return m_piracyRisk;
}

void DescribeAggrSoftDetailData::SetPiracyRisk(const int64_t& _piracyRisk)
{
    m_piracyRisk = _piracyRisk;
    m_piracyRiskHasBeenSet = true;
}

bool DescribeAggrSoftDetailData::PiracyRiskHasBeenSet() const
{
    return m_piracyRiskHasBeenSet;
}

string DescribeAggrSoftDetailData::GetCorp() const
{
    return m_corp;
}

void DescribeAggrSoftDetailData::SetCorp(const string& _corp)
{
    m_corp = _corp;
    m_corpHasBeenSet = true;
}

bool DescribeAggrSoftDetailData::CorpHasBeenSet() const
{
    return m_corpHasBeenSet;
}

vector<SoftVersionAndNum> DescribeAggrSoftDetailData::GetSoftVersionDist() const
{
    return m_softVersionDist;
}

void DescribeAggrSoftDetailData::SetSoftVersionDist(const vector<SoftVersionAndNum>& _softVersionDist)
{
    m_softVersionDist = _softVersionDist;
    m_softVersionDistHasBeenSet = true;
}

bool DescribeAggrSoftDetailData::SoftVersionDistHasBeenSet() const
{
    return m_softVersionDistHasBeenSet;
}

vector<SoftVersionAndNum> DescribeAggrSoftDetailData::GetPiracyVersionDist() const
{
    return m_piracyVersionDist;
}

void DescribeAggrSoftDetailData::SetPiracyVersionDist(const vector<SoftVersionAndNum>& _piracyVersionDist)
{
    m_piracyVersionDist = _piracyVersionDist;
    m_piracyVersionDistHasBeenSet = true;
}

bool DescribeAggrSoftDetailData::PiracyVersionDistHasBeenSet() const
{
    return m_piracyVersionDistHasBeenSet;
}

int64_t DescribeAggrSoftDetailData::GetInstalledDeviceNum() const
{
    return m_installedDeviceNum;
}

void DescribeAggrSoftDetailData::SetInstalledDeviceNum(const int64_t& _installedDeviceNum)
{
    m_installedDeviceNum = _installedDeviceNum;
    m_installedDeviceNumHasBeenSet = true;
}

bool DescribeAggrSoftDetailData::InstalledDeviceNumHasBeenSet() const
{
    return m_installedDeviceNumHasBeenSet;
}

int64_t DescribeAggrSoftDetailData::GetPiracyInstalledDeviceNum() const
{
    return m_piracyInstalledDeviceNum;
}

void DescribeAggrSoftDetailData::SetPiracyInstalledDeviceNum(const int64_t& _piracyInstalledDeviceNum)
{
    m_piracyInstalledDeviceNum = _piracyInstalledDeviceNum;
    m_piracyInstalledDeviceNumHasBeenSet = true;
}

bool DescribeAggrSoftDetailData::PiracyInstalledDeviceNumHasBeenSet() const
{
    return m_piracyInstalledDeviceNumHasBeenSet;
}

int64_t DescribeAggrSoftDetailData::GetInstalledUserNum() const
{
    return m_installedUserNum;
}

void DescribeAggrSoftDetailData::SetInstalledUserNum(const int64_t& _installedUserNum)
{
    m_installedUserNum = _installedUserNum;
    m_installedUserNumHasBeenSet = true;
}

bool DescribeAggrSoftDetailData::InstalledUserNumHasBeenSet() const
{
    return m_installedUserNumHasBeenSet;
}

int64_t DescribeAggrSoftDetailData::GetPiracyInstalledUserNum() const
{
    return m_piracyInstalledUserNum;
}

void DescribeAggrSoftDetailData::SetPiracyInstalledUserNum(const int64_t& _piracyInstalledUserNum)
{
    m_piracyInstalledUserNum = _piracyInstalledUserNum;
    m_piracyInstalledUserNumHasBeenSet = true;
}

bool DescribeAggrSoftDetailData::PiracyInstalledUserNumHasBeenSet() const
{
    return m_piracyInstalledUserNumHasBeenSet;
}

int64_t DescribeAggrSoftDetailData::GetAuthNum() const
{
    return m_authNum;
}

void DescribeAggrSoftDetailData::SetAuthNum(const int64_t& _authNum)
{
    m_authNum = _authNum;
    m_authNumHasBeenSet = true;
}

bool DescribeAggrSoftDetailData::AuthNumHasBeenSet() const
{
    return m_authNumHasBeenSet;
}

double DescribeAggrSoftDetailData::GetGenuineRate() const
{
    return m_genuineRate;
}

void DescribeAggrSoftDetailData::SetGenuineRate(const double& _genuineRate)
{
    m_genuineRate = _genuineRate;
    m_genuineRateHasBeenSet = true;
}

bool DescribeAggrSoftDetailData::GenuineRateHasBeenSet() const
{
    return m_genuineRateHasBeenSet;
}

int64_t DescribeAggrSoftDetailData::GetUpgradableDeviceNum() const
{
    return m_upgradableDeviceNum;
}

void DescribeAggrSoftDetailData::SetUpgradableDeviceNum(const int64_t& _upgradableDeviceNum)
{
    m_upgradableDeviceNum = _upgradableDeviceNum;
    m_upgradableDeviceNumHasBeenSet = true;
}

bool DescribeAggrSoftDetailData::UpgradableDeviceNumHasBeenSet() const
{
    return m_upgradableDeviceNumHasBeenSet;
}

vector<string> DescribeAggrSoftDetailData::GetUpgradableVersions() const
{
    return m_upgradableVersions;
}

void DescribeAggrSoftDetailData::SetUpgradableVersions(const vector<string>& _upgradableVersions)
{
    m_upgradableVersions = _upgradableVersions;
    m_upgradableVersionsHasBeenSet = true;
}

bool DescribeAggrSoftDetailData::UpgradableVersionsHasBeenSet() const
{
    return m_upgradableVersionsHasBeenSet;
}


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

#include <tencentcloud/ioa/v20220601/model/SoftwareInformationData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

SoftwareInformationData::SoftwareInformationData() :
    m_nameHasBeenSet(false),
    m_installDateHasBeenSet(false),
    m_softwareIdHasBeenSet(false),
    m_midHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_corpNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_piracyRiskHasBeenSet(false)
{
}

CoreInternalOutcome SoftwareInformationData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SoftwareInformationData.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("InstallDate") && !value["InstallDate"].IsNull())
    {
        if (!value["InstallDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SoftwareInformationData.InstallDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_installDate = string(value["InstallDate"].GetString());
        m_installDateHasBeenSet = true;
    }

    if (value.HasMember("SoftwareId") && !value["SoftwareId"].IsNull())
    {
        if (!value["SoftwareId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SoftwareInformationData.SoftwareId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_softwareId = value["SoftwareId"].GetInt64();
        m_softwareIdHasBeenSet = true;
    }

    if (value.HasMember("Mid") && !value["Mid"].IsNull())
    {
        if (!value["Mid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SoftwareInformationData.Mid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mid = string(value["Mid"].GetString());
        m_midHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SoftwareInformationData.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("CorpName") && !value["CorpName"].IsNull())
    {
        if (!value["CorpName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SoftwareInformationData.CorpName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_corpName = string(value["CorpName"].GetString());
        m_corpNameHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SoftwareInformationData.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("PiracyRisk") && !value["PiracyRisk"].IsNull())
    {
        if (!value["PiracyRisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SoftwareInformationData.PiracyRisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_piracyRisk = value["PiracyRisk"].GetInt64();
        m_piracyRiskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SoftwareInformationData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_installDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstallDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_installDate.c_str(), allocator).Move(), allocator);
    }

    if (m_softwareIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoftwareId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_softwareId, allocator);
    }

    if (m_midHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mid.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_corpNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_corpName.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_piracyRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PiracyRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_piracyRisk, allocator);
    }

}


string SoftwareInformationData::GetName() const
{
    return m_name;
}

void SoftwareInformationData::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SoftwareInformationData::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SoftwareInformationData::GetInstallDate() const
{
    return m_installDate;
}

void SoftwareInformationData::SetInstallDate(const string& _installDate)
{
    m_installDate = _installDate;
    m_installDateHasBeenSet = true;
}

bool SoftwareInformationData::InstallDateHasBeenSet() const
{
    return m_installDateHasBeenSet;
}

int64_t SoftwareInformationData::GetSoftwareId() const
{
    return m_softwareId;
}

void SoftwareInformationData::SetSoftwareId(const int64_t& _softwareId)
{
    m_softwareId = _softwareId;
    m_softwareIdHasBeenSet = true;
}

bool SoftwareInformationData::SoftwareIdHasBeenSet() const
{
    return m_softwareIdHasBeenSet;
}

string SoftwareInformationData::GetMid() const
{
    return m_mid;
}

void SoftwareInformationData::SetMid(const string& _mid)
{
    m_mid = _mid;
    m_midHasBeenSet = true;
}

bool SoftwareInformationData::MidHasBeenSet() const
{
    return m_midHasBeenSet;
}

string SoftwareInformationData::GetVersion() const
{
    return m_version;
}

void SoftwareInformationData::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool SoftwareInformationData::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string SoftwareInformationData::GetCorpName() const
{
    return m_corpName;
}

void SoftwareInformationData::SetCorpName(const string& _corpName)
{
    m_corpName = _corpName;
    m_corpNameHasBeenSet = true;
}

bool SoftwareInformationData::CorpNameHasBeenSet() const
{
    return m_corpNameHasBeenSet;
}

int64_t SoftwareInformationData::GetId() const
{
    return m_id;
}

void SoftwareInformationData::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SoftwareInformationData::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t SoftwareInformationData::GetPiracyRisk() const
{
    return m_piracyRisk;
}

void SoftwareInformationData::SetPiracyRisk(const int64_t& _piracyRisk)
{
    m_piracyRisk = _piracyRisk;
    m_piracyRiskHasBeenSet = true;
}

bool SoftwareInformationData::PiracyRiskHasBeenSet() const
{
    return m_piracyRiskHasBeenSet;
}


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

#include <tencentcloud/iss/v20230517/model/DescribeGatewayVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

DescribeGatewayVersion::DescribeGatewayVersion() :
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_latestVersionHasBeenSet(false),
    m_isUpdateHasBeenSet(false),
    m_upgradeInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeGatewayVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeGatewayVersion.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeGatewayVersion.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("LatestVersion") && !value["LatestVersion"].IsNull())
    {
        if (!value["LatestVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeGatewayVersion.LatestVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestVersion = string(value["LatestVersion"].GetString());
        m_latestVersionHasBeenSet = true;
    }

    if (value.HasMember("IsUpdate") && !value["IsUpdate"].IsNull())
    {
        if (!value["IsUpdate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeGatewayVersion.IsUpdate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUpdate = value["IsUpdate"].GetBool();
        m_isUpdateHasBeenSet = true;
    }

    if (value.HasMember("UpgradeInfo") && !value["UpgradeInfo"].IsNull())
    {
        if (!value["UpgradeInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeGatewayVersion.UpgradeInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["UpgradeInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_upgradeInfo.push_back((*itr).GetString());
        }
        m_upgradeInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeGatewayVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_latestVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_isUpdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUpdate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUpdate, allocator);
    }

    if (m_upgradeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_upgradeInfo.begin(); itr != m_upgradeInfo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DescribeGatewayVersion::GetName() const
{
    return m_name;
}

void DescribeGatewayVersion::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeGatewayVersion::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeGatewayVersion::GetVersion() const
{
    return m_version;
}

void DescribeGatewayVersion::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool DescribeGatewayVersion::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string DescribeGatewayVersion::GetLatestVersion() const
{
    return m_latestVersion;
}

void DescribeGatewayVersion::SetLatestVersion(const string& _latestVersion)
{
    m_latestVersion = _latestVersion;
    m_latestVersionHasBeenSet = true;
}

bool DescribeGatewayVersion::LatestVersionHasBeenSet() const
{
    return m_latestVersionHasBeenSet;
}

bool DescribeGatewayVersion::GetIsUpdate() const
{
    return m_isUpdate;
}

void DescribeGatewayVersion::SetIsUpdate(const bool& _isUpdate)
{
    m_isUpdate = _isUpdate;
    m_isUpdateHasBeenSet = true;
}

bool DescribeGatewayVersion::IsUpdateHasBeenSet() const
{
    return m_isUpdateHasBeenSet;
}

vector<string> DescribeGatewayVersion::GetUpgradeInfo() const
{
    return m_upgradeInfo;
}

void DescribeGatewayVersion::SetUpgradeInfo(const vector<string>& _upgradeInfo)
{
    m_upgradeInfo = _upgradeInfo;
    m_upgradeInfoHasBeenSet = true;
}

bool DescribeGatewayVersion::UpgradeInfoHasBeenSet() const
{
    return m_upgradeInfoHasBeenSet;
}


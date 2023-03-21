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

#include <tencentcloud/postgres/v20170312/model/Version.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

Version::Version() :
    m_dBEngineHasBeenSet(false),
    m_dBVersionHasBeenSet(false),
    m_dBMajorVersionHasBeenSet(false),
    m_dBKernelVersionHasBeenSet(false),
    m_supportedFeatureNamesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_availableUpgradeTargetHasBeenSet(false)
{
}

CoreInternalOutcome Version::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DBEngine") && !value["DBEngine"].IsNull())
    {
        if (!value["DBEngine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Version.DBEngine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBEngine = string(value["DBEngine"].GetString());
        m_dBEngineHasBeenSet = true;
    }

    if (value.HasMember("DBVersion") && !value["DBVersion"].IsNull())
    {
        if (!value["DBVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Version.DBVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBVersion = string(value["DBVersion"].GetString());
        m_dBVersionHasBeenSet = true;
    }

    if (value.HasMember("DBMajorVersion") && !value["DBMajorVersion"].IsNull())
    {
        if (!value["DBMajorVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Version.DBMajorVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBMajorVersion = string(value["DBMajorVersion"].GetString());
        m_dBMajorVersionHasBeenSet = true;
    }

    if (value.HasMember("DBKernelVersion") && !value["DBKernelVersion"].IsNull())
    {
        if (!value["DBKernelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Version.DBKernelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBKernelVersion = string(value["DBKernelVersion"].GetString());
        m_dBKernelVersionHasBeenSet = true;
    }

    if (value.HasMember("SupportedFeatureNames") && !value["SupportedFeatureNames"].IsNull())
    {
        if (!value["SupportedFeatureNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Version.SupportedFeatureNames` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportedFeatureNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportedFeatureNames.push_back((*itr).GetString());
        }
        m_supportedFeatureNamesHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Version.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AvailableUpgradeTarget") && !value["AvailableUpgradeTarget"].IsNull())
    {
        if (!value["AvailableUpgradeTarget"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Version.AvailableUpgradeTarget` is not array type"));

        const rapidjson::Value &tmpValue = value["AvailableUpgradeTarget"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_availableUpgradeTarget.push_back((*itr).GetString());
        }
        m_availableUpgradeTargetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Version::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dBEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBEngine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBEngine.c_str(), allocator).Move(), allocator);
    }

    if (m_dBVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_dBMajorVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBMajorVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBMajorVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_dBKernelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBKernelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBKernelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_supportedFeatureNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportedFeatureNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportedFeatureNames.begin(); itr != m_supportedFeatureNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_availableUpgradeTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableUpgradeTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_availableUpgradeTarget.begin(); itr != m_availableUpgradeTarget.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string Version::GetDBEngine() const
{
    return m_dBEngine;
}

void Version::SetDBEngine(const string& _dBEngine)
{
    m_dBEngine = _dBEngine;
    m_dBEngineHasBeenSet = true;
}

bool Version::DBEngineHasBeenSet() const
{
    return m_dBEngineHasBeenSet;
}

string Version::GetDBVersion() const
{
    return m_dBVersion;
}

void Version::SetDBVersion(const string& _dBVersion)
{
    m_dBVersion = _dBVersion;
    m_dBVersionHasBeenSet = true;
}

bool Version::DBVersionHasBeenSet() const
{
    return m_dBVersionHasBeenSet;
}

string Version::GetDBMajorVersion() const
{
    return m_dBMajorVersion;
}

void Version::SetDBMajorVersion(const string& _dBMajorVersion)
{
    m_dBMajorVersion = _dBMajorVersion;
    m_dBMajorVersionHasBeenSet = true;
}

bool Version::DBMajorVersionHasBeenSet() const
{
    return m_dBMajorVersionHasBeenSet;
}

string Version::GetDBKernelVersion() const
{
    return m_dBKernelVersion;
}

void Version::SetDBKernelVersion(const string& _dBKernelVersion)
{
    m_dBKernelVersion = _dBKernelVersion;
    m_dBKernelVersionHasBeenSet = true;
}

bool Version::DBKernelVersionHasBeenSet() const
{
    return m_dBKernelVersionHasBeenSet;
}

vector<string> Version::GetSupportedFeatureNames() const
{
    return m_supportedFeatureNames;
}

void Version::SetSupportedFeatureNames(const vector<string>& _supportedFeatureNames)
{
    m_supportedFeatureNames = _supportedFeatureNames;
    m_supportedFeatureNamesHasBeenSet = true;
}

bool Version::SupportedFeatureNamesHasBeenSet() const
{
    return m_supportedFeatureNamesHasBeenSet;
}

string Version::GetStatus() const
{
    return m_status;
}

void Version::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Version::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> Version::GetAvailableUpgradeTarget() const
{
    return m_availableUpgradeTarget;
}

void Version::SetAvailableUpgradeTarget(const vector<string>& _availableUpgradeTarget)
{
    m_availableUpgradeTarget = _availableUpgradeTarget;
    m_availableUpgradeTargetHasBeenSet = true;
}

bool Version::AvailableUpgradeTargetHasBeenSet() const
{
    return m_availableUpgradeTargetHasBeenSet;
}


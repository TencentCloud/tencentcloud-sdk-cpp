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

#include <tencentcloud/ssm/v20190923/model/SecretAccountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssm::V20190923::Model;
using namespace std;

SecretAccountInfo::SecretAccountInfo() :
    m_accountNameHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_rotatedTimeHasBeenSet(false)
{
}

CoreInternalOutcome SecretAccountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountName") && !value["AccountName"].IsNull())
    {
        if (!value["AccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecretAccountInfo.AccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountName = string(value["AccountName"].GetString());
        m_accountNameHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecretAccountInfo.Host` is not array type"));

        const rapidjson::Value &tmpValue = value["Host"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_host.push_back((*itr).GetString());
        }
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecretAccountInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("RotatedTime") && !value["RotatedTime"].IsNull())
    {
        if (!value["RotatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecretAccountInfo.RotatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rotatedTime = string(value["RotatedTime"].GetString());
        m_rotatedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecretAccountInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_host.begin(); itr != m_host.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_rotatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RotatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rotatedTime.c_str(), allocator).Move(), allocator);
    }

}


string SecretAccountInfo::GetAccountName() const
{
    return m_accountName;
}

void SecretAccountInfo::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool SecretAccountInfo::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

vector<string> SecretAccountInfo::GetHost() const
{
    return m_host;
}

void SecretAccountInfo::SetHost(const vector<string>& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool SecretAccountInfo::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string SecretAccountInfo::GetVersion() const
{
    return m_version;
}

void SecretAccountInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool SecretAccountInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string SecretAccountInfo::GetRotatedTime() const
{
    return m_rotatedTime;
}

void SecretAccountInfo::SetRotatedTime(const string& _rotatedTime)
{
    m_rotatedTime = _rotatedTime;
    m_rotatedTimeHasBeenSet = true;
}

bool SecretAccountInfo::RotatedTimeHasBeenSet() const
{
    return m_rotatedTimeHasBeenSet;
}


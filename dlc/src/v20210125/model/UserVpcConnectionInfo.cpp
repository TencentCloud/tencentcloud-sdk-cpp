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

#include <tencentcloud/dlc/v20210125/model/UserVpcConnectionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

UserVpcConnectionInfo::UserVpcConnectionInfo() :
    m_engineNetworkIdHasBeenSet(false),
    m_userVpcIdHasBeenSet(false),
    m_userVpcEndpointIdHasBeenSet(false),
    m_userVpcEndpointNameHasBeenSet(false),
    m_accessConnectionInfosHasBeenSet(false)
{
}

CoreInternalOutcome UserVpcConnectionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EngineNetworkId") && !value["EngineNetworkId"].IsNull())
    {
        if (!value["EngineNetworkId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserVpcConnectionInfo.EngineNetworkId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineNetworkId = string(value["EngineNetworkId"].GetString());
        m_engineNetworkIdHasBeenSet = true;
    }

    if (value.HasMember("UserVpcId") && !value["UserVpcId"].IsNull())
    {
        if (!value["UserVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserVpcConnectionInfo.UserVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userVpcId = string(value["UserVpcId"].GetString());
        m_userVpcIdHasBeenSet = true;
    }

    if (value.HasMember("UserVpcEndpointId") && !value["UserVpcEndpointId"].IsNull())
    {
        if (!value["UserVpcEndpointId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserVpcConnectionInfo.UserVpcEndpointId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userVpcEndpointId = string(value["UserVpcEndpointId"].GetString());
        m_userVpcEndpointIdHasBeenSet = true;
    }

    if (value.HasMember("UserVpcEndpointName") && !value["UserVpcEndpointName"].IsNull())
    {
        if (!value["UserVpcEndpointName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserVpcConnectionInfo.UserVpcEndpointName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userVpcEndpointName = string(value["UserVpcEndpointName"].GetString());
        m_userVpcEndpointNameHasBeenSet = true;
    }

    if (value.HasMember("AccessConnectionInfos") && !value["AccessConnectionInfos"].IsNull())
    {
        if (!value["AccessConnectionInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserVpcConnectionInfo.AccessConnectionInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["AccessConnectionInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_accessConnectionInfos.push_back((*itr).GetString());
        }
        m_accessConnectionInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserVpcConnectionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_engineNetworkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineNetworkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineNetworkId.c_str(), allocator).Move(), allocator);
    }

    if (m_userVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_userVpcEndpointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserVpcEndpointId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userVpcEndpointId.c_str(), allocator).Move(), allocator);
    }

    if (m_userVpcEndpointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserVpcEndpointName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userVpcEndpointName.c_str(), allocator).Move(), allocator);
    }

    if (m_accessConnectionInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessConnectionInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accessConnectionInfos.begin(); itr != m_accessConnectionInfos.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string UserVpcConnectionInfo::GetEngineNetworkId() const
{
    return m_engineNetworkId;
}

void UserVpcConnectionInfo::SetEngineNetworkId(const string& _engineNetworkId)
{
    m_engineNetworkId = _engineNetworkId;
    m_engineNetworkIdHasBeenSet = true;
}

bool UserVpcConnectionInfo::EngineNetworkIdHasBeenSet() const
{
    return m_engineNetworkIdHasBeenSet;
}

string UserVpcConnectionInfo::GetUserVpcId() const
{
    return m_userVpcId;
}

void UserVpcConnectionInfo::SetUserVpcId(const string& _userVpcId)
{
    m_userVpcId = _userVpcId;
    m_userVpcIdHasBeenSet = true;
}

bool UserVpcConnectionInfo::UserVpcIdHasBeenSet() const
{
    return m_userVpcIdHasBeenSet;
}

string UserVpcConnectionInfo::GetUserVpcEndpointId() const
{
    return m_userVpcEndpointId;
}

void UserVpcConnectionInfo::SetUserVpcEndpointId(const string& _userVpcEndpointId)
{
    m_userVpcEndpointId = _userVpcEndpointId;
    m_userVpcEndpointIdHasBeenSet = true;
}

bool UserVpcConnectionInfo::UserVpcEndpointIdHasBeenSet() const
{
    return m_userVpcEndpointIdHasBeenSet;
}

string UserVpcConnectionInfo::GetUserVpcEndpointName() const
{
    return m_userVpcEndpointName;
}

void UserVpcConnectionInfo::SetUserVpcEndpointName(const string& _userVpcEndpointName)
{
    m_userVpcEndpointName = _userVpcEndpointName;
    m_userVpcEndpointNameHasBeenSet = true;
}

bool UserVpcConnectionInfo::UserVpcEndpointNameHasBeenSet() const
{
    return m_userVpcEndpointNameHasBeenSet;
}

vector<string> UserVpcConnectionInfo::GetAccessConnectionInfos() const
{
    return m_accessConnectionInfos;
}

void UserVpcConnectionInfo::SetAccessConnectionInfos(const vector<string>& _accessConnectionInfos)
{
    m_accessConnectionInfos = _accessConnectionInfos;
    m_accessConnectionInfosHasBeenSet = true;
}

bool UserVpcConnectionInfo::AccessConnectionInfosHasBeenSet() const
{
    return m_accessConnectionInfosHasBeenSet;
}


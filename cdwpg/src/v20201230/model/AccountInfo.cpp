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

#include <tencentcloud/cdwpg/v20201230/model/AccountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

AccountInfo::AccountInfo() :
    m_instanceIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_permsHasBeenSet(false)
{
}

CoreInternalOutcome AccountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Perms") && !value["Perms"].IsNull())
    {
        if (!value["Perms"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccountInfo.Perms` is not array type"));

        const rapidjson::Value &tmpValue = value["Perms"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_perms.push_back((*itr).GetString());
        }
        m_permsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_permsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Perms";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_perms.begin(); itr != m_perms.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AccountInfo::GetInstanceId() const
{
    return m_instanceId;
}

void AccountInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AccountInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AccountInfo::GetUserName() const
{
    return m_userName;
}

void AccountInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool AccountInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

vector<string> AccountInfo::GetPerms() const
{
    return m_perms;
}

void AccountInfo::SetPerms(const vector<string>& _perms)
{
    m_perms = _perms;
    m_permsHasBeenSet = true;
}

bool AccountInfo::PermsHasBeenSet() const
{
    return m_permsHasBeenSet;
}


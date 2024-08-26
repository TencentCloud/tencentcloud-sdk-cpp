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

#include <tencentcloud/cdwdoris/v20211228/model/UserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

UserInfo::UserInfo() :
    m_instanceIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passWordHasBeenSet(false),
    m_whiteHostHasBeenSet(false),
    m_oldWhiteHostHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_oldPwdHasBeenSet(false),
    m_camUinHasBeenSet(false),
    m_camRangerGroupIdsHasBeenSet(false)
{
}

CoreInternalOutcome UserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("PassWord") && !value["PassWord"].IsNull())
    {
        if (!value["PassWord"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.PassWord` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passWord = string(value["PassWord"].GetString());
        m_passWordHasBeenSet = true;
    }

    if (value.HasMember("WhiteHost") && !value["WhiteHost"].IsNull())
    {
        if (!value["WhiteHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.WhiteHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_whiteHost = string(value["WhiteHost"].GetString());
        m_whiteHostHasBeenSet = true;
    }

    if (value.HasMember("OldWhiteHost") && !value["OldWhiteHost"].IsNull())
    {
        if (!value["OldWhiteHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.OldWhiteHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldWhiteHost = string(value["OldWhiteHost"].GetString());
        m_oldWhiteHostHasBeenSet = true;
    }

    if (value.HasMember("Describe") && !value["Describe"].IsNull())
    {
        if (!value["Describe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.Describe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_describe = string(value["Describe"].GetString());
        m_describeHasBeenSet = true;
    }

    if (value.HasMember("OldPwd") && !value["OldPwd"].IsNull())
    {
        if (!value["OldPwd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.OldPwd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldPwd = string(value["OldPwd"].GetString());
        m_oldPwdHasBeenSet = true;
    }

    if (value.HasMember("CamUin") && !value["CamUin"].IsNull())
    {
        if (!value["CamUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.CamUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_camUin = string(value["CamUin"].GetString());
        m_camUinHasBeenSet = true;
    }

    if (value.HasMember("CamRangerGroupIds") && !value["CamRangerGroupIds"].IsNull())
    {
        if (!value["CamRangerGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserInfo.CamRangerGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["CamRangerGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_camRangerGroupIds.push_back((*itr).GetInt64());
        }
        m_camRangerGroupIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_passWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassWord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passWord.c_str(), allocator).Move(), allocator);
    }

    if (m_whiteHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_whiteHost.c_str(), allocator).Move(), allocator);
    }

    if (m_oldWhiteHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldWhiteHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldWhiteHost.c_str(), allocator).Move(), allocator);
    }

    if (m_describeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_describe.c_str(), allocator).Move(), allocator);
    }

    if (m_oldPwdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldPwd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldPwd.c_str(), allocator).Move(), allocator);
    }

    if (m_camUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CamUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_camUin.c_str(), allocator).Move(), allocator);
    }

    if (m_camRangerGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CamRangerGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_camRangerGroupIds.begin(); itr != m_camRangerGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string UserInfo::GetInstanceId() const
{
    return m_instanceId;
}

void UserInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UserInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UserInfo::GetUserName() const
{
    return m_userName;
}

void UserInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool UserInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string UserInfo::GetPassWord() const
{
    return m_passWord;
}

void UserInfo::SetPassWord(const string& _passWord)
{
    m_passWord = _passWord;
    m_passWordHasBeenSet = true;
}

bool UserInfo::PassWordHasBeenSet() const
{
    return m_passWordHasBeenSet;
}

string UserInfo::GetWhiteHost() const
{
    return m_whiteHost;
}

void UserInfo::SetWhiteHost(const string& _whiteHost)
{
    m_whiteHost = _whiteHost;
    m_whiteHostHasBeenSet = true;
}

bool UserInfo::WhiteHostHasBeenSet() const
{
    return m_whiteHostHasBeenSet;
}

string UserInfo::GetOldWhiteHost() const
{
    return m_oldWhiteHost;
}

void UserInfo::SetOldWhiteHost(const string& _oldWhiteHost)
{
    m_oldWhiteHost = _oldWhiteHost;
    m_oldWhiteHostHasBeenSet = true;
}

bool UserInfo::OldWhiteHostHasBeenSet() const
{
    return m_oldWhiteHostHasBeenSet;
}

string UserInfo::GetDescribe() const
{
    return m_describe;
}

void UserInfo::SetDescribe(const string& _describe)
{
    m_describe = _describe;
    m_describeHasBeenSet = true;
}

bool UserInfo::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

string UserInfo::GetOldPwd() const
{
    return m_oldPwd;
}

void UserInfo::SetOldPwd(const string& _oldPwd)
{
    m_oldPwd = _oldPwd;
    m_oldPwdHasBeenSet = true;
}

bool UserInfo::OldPwdHasBeenSet() const
{
    return m_oldPwdHasBeenSet;
}

string UserInfo::GetCamUin() const
{
    return m_camUin;
}

void UserInfo::SetCamUin(const string& _camUin)
{
    m_camUin = _camUin;
    m_camUinHasBeenSet = true;
}

bool UserInfo::CamUinHasBeenSet() const
{
    return m_camUinHasBeenSet;
}

vector<int64_t> UserInfo::GetCamRangerGroupIds() const
{
    return m_camRangerGroupIds;
}

void UserInfo::SetCamRangerGroupIds(const vector<int64_t>& _camRangerGroupIds)
{
    m_camRangerGroupIds = _camRangerGroupIds;
    m_camRangerGroupIdsHasBeenSet = true;
}

bool UserInfo::CamRangerGroupIdsHasBeenSet() const
{
    return m_camRangerGroupIdsHasBeenSet;
}


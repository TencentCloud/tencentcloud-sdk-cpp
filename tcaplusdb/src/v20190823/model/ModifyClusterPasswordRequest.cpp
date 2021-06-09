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

#include <tencentcloud/tcaplusdb/v20190823/model/ModifyClusterPasswordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

ModifyClusterPasswordRequest::ModifyClusterPasswordRequest() :
    m_clusterIdHasBeenSet(false),
    m_oldPasswordHasBeenSet(false),
    m_oldPasswordExpireTimeHasBeenSet(false),
    m_newPasswordHasBeenSet(false),
    m_modeHasBeenSet(false)
{
}

string ModifyClusterPasswordRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_oldPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_oldPasswordExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldPasswordExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldPasswordExpireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_newPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyClusterPasswordRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyClusterPasswordRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyClusterPasswordRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ModifyClusterPasswordRequest::GetOldPassword() const
{
    return m_oldPassword;
}

void ModifyClusterPasswordRequest::SetOldPassword(const string& _oldPassword)
{
    m_oldPassword = _oldPassword;
    m_oldPasswordHasBeenSet = true;
}

bool ModifyClusterPasswordRequest::OldPasswordHasBeenSet() const
{
    return m_oldPasswordHasBeenSet;
}

string ModifyClusterPasswordRequest::GetOldPasswordExpireTime() const
{
    return m_oldPasswordExpireTime;
}

void ModifyClusterPasswordRequest::SetOldPasswordExpireTime(const string& _oldPasswordExpireTime)
{
    m_oldPasswordExpireTime = _oldPasswordExpireTime;
    m_oldPasswordExpireTimeHasBeenSet = true;
}

bool ModifyClusterPasswordRequest::OldPasswordExpireTimeHasBeenSet() const
{
    return m_oldPasswordExpireTimeHasBeenSet;
}

string ModifyClusterPasswordRequest::GetNewPassword() const
{
    return m_newPassword;
}

void ModifyClusterPasswordRequest::SetNewPassword(const string& _newPassword)
{
    m_newPassword = _newPassword;
    m_newPasswordHasBeenSet = true;
}

bool ModifyClusterPasswordRequest::NewPasswordHasBeenSet() const
{
    return m_newPasswordHasBeenSet;
}

string ModifyClusterPasswordRequest::GetMode() const
{
    return m_mode;
}

void ModifyClusterPasswordRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ModifyClusterPasswordRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}



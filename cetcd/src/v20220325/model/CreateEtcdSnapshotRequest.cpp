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

#include <tencentcloud/cetcd/v20220325/model/CreateEtcdSnapshotRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cetcd::V20220325::Model;
using namespace std;

CreateEtcdSnapshotRequest::CreateEtcdSnapshotRequest() :
    m_instanceIdHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_userHasBeenSet(false),
    m_passwordHasBeenSet(false)
{
}

string CreateEtcdSnapshotRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotName.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateEtcdSnapshotRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateEtcdSnapshotRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateEtcdSnapshotRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateEtcdSnapshotRequest::GetSnapshotName() const
{
    return m_snapshotName;
}

void CreateEtcdSnapshotRequest::SetSnapshotName(const string& _snapshotName)
{
    m_snapshotName = _snapshotName;
    m_snapshotNameHasBeenSet = true;
}

bool CreateEtcdSnapshotRequest::SnapshotNameHasBeenSet() const
{
    return m_snapshotNameHasBeenSet;
}

string CreateEtcdSnapshotRequest::GetUser() const
{
    return m_user;
}

void CreateEtcdSnapshotRequest::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool CreateEtcdSnapshotRequest::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string CreateEtcdSnapshotRequest::GetPassword() const
{
    return m_password;
}

void CreateEtcdSnapshotRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateEtcdSnapshotRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}



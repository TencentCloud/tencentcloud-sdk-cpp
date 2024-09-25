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

#include <tencentcloud/tcb/v20180608/model/DeleteCloudBaseRunServerVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DeleteCloudBaseRunServerVersionRequest::DeleteCloudBaseRunServerVersionRequest() :
    m_envIdHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_isDeleteServerHasBeenSet(false),
    m_isDeleteImageHasBeenSet(false),
    m_operatorRemarkHasBeenSet(false),
    m_delayedDeletionTimeHasBeenSet(false)
{
}

string DeleteCloudBaseRunServerVersionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_serverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverName.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_isDeleteServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDeleteServer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDeleteServer, allocator);
    }

    if (m_isDeleteImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDeleteImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDeleteImage, allocator);
    }

    if (m_operatorRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorRemark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operatorRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_delayedDeletionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayedDeletionTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_delayedDeletionTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteCloudBaseRunServerVersionRequest::GetEnvId() const
{
    return m_envId;
}

void DeleteCloudBaseRunServerVersionRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DeleteCloudBaseRunServerVersionRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DeleteCloudBaseRunServerVersionRequest::GetServerName() const
{
    return m_serverName;
}

void DeleteCloudBaseRunServerVersionRequest::SetServerName(const string& _serverName)
{
    m_serverName = _serverName;
    m_serverNameHasBeenSet = true;
}

bool DeleteCloudBaseRunServerVersionRequest::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

string DeleteCloudBaseRunServerVersionRequest::GetVersionName() const
{
    return m_versionName;
}

void DeleteCloudBaseRunServerVersionRequest::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool DeleteCloudBaseRunServerVersionRequest::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

bool DeleteCloudBaseRunServerVersionRequest::GetIsDeleteServer() const
{
    return m_isDeleteServer;
}

void DeleteCloudBaseRunServerVersionRequest::SetIsDeleteServer(const bool& _isDeleteServer)
{
    m_isDeleteServer = _isDeleteServer;
    m_isDeleteServerHasBeenSet = true;
}

bool DeleteCloudBaseRunServerVersionRequest::IsDeleteServerHasBeenSet() const
{
    return m_isDeleteServerHasBeenSet;
}

bool DeleteCloudBaseRunServerVersionRequest::GetIsDeleteImage() const
{
    return m_isDeleteImage;
}

void DeleteCloudBaseRunServerVersionRequest::SetIsDeleteImage(const bool& _isDeleteImage)
{
    m_isDeleteImage = _isDeleteImage;
    m_isDeleteImageHasBeenSet = true;
}

bool DeleteCloudBaseRunServerVersionRequest::IsDeleteImageHasBeenSet() const
{
    return m_isDeleteImageHasBeenSet;
}

string DeleteCloudBaseRunServerVersionRequest::GetOperatorRemark() const
{
    return m_operatorRemark;
}

void DeleteCloudBaseRunServerVersionRequest::SetOperatorRemark(const string& _operatorRemark)
{
    m_operatorRemark = _operatorRemark;
    m_operatorRemarkHasBeenSet = true;
}

bool DeleteCloudBaseRunServerVersionRequest::OperatorRemarkHasBeenSet() const
{
    return m_operatorRemarkHasBeenSet;
}

int64_t DeleteCloudBaseRunServerVersionRequest::GetDelayedDeletionTime() const
{
    return m_delayedDeletionTime;
}

void DeleteCloudBaseRunServerVersionRequest::SetDelayedDeletionTime(const int64_t& _delayedDeletionTime)
{
    m_delayedDeletionTime = _delayedDeletionTime;
    m_delayedDeletionTimeHasBeenSet = true;
}

bool DeleteCloudBaseRunServerVersionRequest::DelayedDeletionTimeHasBeenSet() const
{
    return m_delayedDeletionTimeHasBeenSet;
}



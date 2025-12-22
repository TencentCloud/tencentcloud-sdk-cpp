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

#include <tencentcloud/tcbr/v20220217/model/SubmitServerRollbackRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

SubmitServerRollbackRequest::SubmitServerRollbackRequest() :
    m_envIdHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_currentVersionNameHasBeenSet(false),
    m_rollbackVersionNameHasBeenSet(false),
    m_operatorRemarkHasBeenSet(false)
{
}

string SubmitServerRollbackRequest::ToJsonString() const
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

    if (m_currentVersionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentVersionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currentVersionName.c_str(), allocator).Move(), allocator);
    }

    if (m_rollbackVersionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackVersionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rollbackVersionName.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorRemark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operatorRemark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitServerRollbackRequest::GetEnvId() const
{
    return m_envId;
}

void SubmitServerRollbackRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool SubmitServerRollbackRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string SubmitServerRollbackRequest::GetServerName() const
{
    return m_serverName;
}

void SubmitServerRollbackRequest::SetServerName(const string& _serverName)
{
    m_serverName = _serverName;
    m_serverNameHasBeenSet = true;
}

bool SubmitServerRollbackRequest::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

string SubmitServerRollbackRequest::GetCurrentVersionName() const
{
    return m_currentVersionName;
}

void SubmitServerRollbackRequest::SetCurrentVersionName(const string& _currentVersionName)
{
    m_currentVersionName = _currentVersionName;
    m_currentVersionNameHasBeenSet = true;
}

bool SubmitServerRollbackRequest::CurrentVersionNameHasBeenSet() const
{
    return m_currentVersionNameHasBeenSet;
}

string SubmitServerRollbackRequest::GetRollbackVersionName() const
{
    return m_rollbackVersionName;
}

void SubmitServerRollbackRequest::SetRollbackVersionName(const string& _rollbackVersionName)
{
    m_rollbackVersionName = _rollbackVersionName;
    m_rollbackVersionNameHasBeenSet = true;
}

bool SubmitServerRollbackRequest::RollbackVersionNameHasBeenSet() const
{
    return m_rollbackVersionNameHasBeenSet;
}

string SubmitServerRollbackRequest::GetOperatorRemark() const
{
    return m_operatorRemark;
}

void SubmitServerRollbackRequest::SetOperatorRemark(const string& _operatorRemark)
{
    m_operatorRemark = _operatorRemark;
    m_operatorRemarkHasBeenSet = true;
}

bool SubmitServerRollbackRequest::OperatorRemarkHasBeenSet() const
{
    return m_operatorRemarkHasBeenSet;
}



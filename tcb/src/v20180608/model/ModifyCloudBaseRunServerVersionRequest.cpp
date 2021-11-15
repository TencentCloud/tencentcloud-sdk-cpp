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

#include <tencentcloud/tcb/v20180608/model/ModifyCloudBaseRunServerVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

ModifyCloudBaseRunServerVersionRequest::ModifyCloudBaseRunServerVersionRequest() :
    m_envIdHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_envParamsHasBeenSet(false),
    m_minNumHasBeenSet(false),
    m_maxNumHasBeenSet(false),
    m_containerPortHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_customLogsHasBeenSet(false),
    m_isResetRemarkHasBeenSet(false),
    m_basicModifyHasBeenSet(false),
    m_operatorRemarkHasBeenSet(false)
{
}

string ModifyCloudBaseRunServerVersionRequest::ToJsonString() const
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

    if (m_envParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envParams.c_str(), allocator).Move(), allocator);
    }

    if (m_minNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_minNum.c_str(), allocator).Move(), allocator);
    }

    if (m_maxNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_maxNum.c_str(), allocator).Move(), allocator);
    }

    if (m_containerPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_containerPort.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_customLogsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomLogs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customLogs.c_str(), allocator).Move(), allocator);
    }

    if (m_isResetRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsResetRemark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isResetRemark, allocator);
    }

    if (m_basicModifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicModify";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_basicModify, allocator);
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


string ModifyCloudBaseRunServerVersionRequest::GetEnvId() const
{
    return m_envId;
}

void ModifyCloudBaseRunServerVersionRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool ModifyCloudBaseRunServerVersionRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string ModifyCloudBaseRunServerVersionRequest::GetServerName() const
{
    return m_serverName;
}

void ModifyCloudBaseRunServerVersionRequest::SetServerName(const string& _serverName)
{
    m_serverName = _serverName;
    m_serverNameHasBeenSet = true;
}

bool ModifyCloudBaseRunServerVersionRequest::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

string ModifyCloudBaseRunServerVersionRequest::GetVersionName() const
{
    return m_versionName;
}

void ModifyCloudBaseRunServerVersionRequest::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool ModifyCloudBaseRunServerVersionRequest::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

string ModifyCloudBaseRunServerVersionRequest::GetEnvParams() const
{
    return m_envParams;
}

void ModifyCloudBaseRunServerVersionRequest::SetEnvParams(const string& _envParams)
{
    m_envParams = _envParams;
    m_envParamsHasBeenSet = true;
}

bool ModifyCloudBaseRunServerVersionRequest::EnvParamsHasBeenSet() const
{
    return m_envParamsHasBeenSet;
}

string ModifyCloudBaseRunServerVersionRequest::GetMinNum() const
{
    return m_minNum;
}

void ModifyCloudBaseRunServerVersionRequest::SetMinNum(const string& _minNum)
{
    m_minNum = _minNum;
    m_minNumHasBeenSet = true;
}

bool ModifyCloudBaseRunServerVersionRequest::MinNumHasBeenSet() const
{
    return m_minNumHasBeenSet;
}

string ModifyCloudBaseRunServerVersionRequest::GetMaxNum() const
{
    return m_maxNum;
}

void ModifyCloudBaseRunServerVersionRequest::SetMaxNum(const string& _maxNum)
{
    m_maxNum = _maxNum;
    m_maxNumHasBeenSet = true;
}

bool ModifyCloudBaseRunServerVersionRequest::MaxNumHasBeenSet() const
{
    return m_maxNumHasBeenSet;
}

string ModifyCloudBaseRunServerVersionRequest::GetContainerPort() const
{
    return m_containerPort;
}

void ModifyCloudBaseRunServerVersionRequest::SetContainerPort(const string& _containerPort)
{
    m_containerPort = _containerPort;
    m_containerPortHasBeenSet = true;
}

bool ModifyCloudBaseRunServerVersionRequest::ContainerPortHasBeenSet() const
{
    return m_containerPortHasBeenSet;
}

string ModifyCloudBaseRunServerVersionRequest::GetRemark() const
{
    return m_remark;
}

void ModifyCloudBaseRunServerVersionRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyCloudBaseRunServerVersionRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string ModifyCloudBaseRunServerVersionRequest::GetCustomLogs() const
{
    return m_customLogs;
}

void ModifyCloudBaseRunServerVersionRequest::SetCustomLogs(const string& _customLogs)
{
    m_customLogs = _customLogs;
    m_customLogsHasBeenSet = true;
}

bool ModifyCloudBaseRunServerVersionRequest::CustomLogsHasBeenSet() const
{
    return m_customLogsHasBeenSet;
}

bool ModifyCloudBaseRunServerVersionRequest::GetIsResetRemark() const
{
    return m_isResetRemark;
}

void ModifyCloudBaseRunServerVersionRequest::SetIsResetRemark(const bool& _isResetRemark)
{
    m_isResetRemark = _isResetRemark;
    m_isResetRemarkHasBeenSet = true;
}

bool ModifyCloudBaseRunServerVersionRequest::IsResetRemarkHasBeenSet() const
{
    return m_isResetRemarkHasBeenSet;
}

bool ModifyCloudBaseRunServerVersionRequest::GetBasicModify() const
{
    return m_basicModify;
}

void ModifyCloudBaseRunServerVersionRequest::SetBasicModify(const bool& _basicModify)
{
    m_basicModify = _basicModify;
    m_basicModifyHasBeenSet = true;
}

bool ModifyCloudBaseRunServerVersionRequest::BasicModifyHasBeenSet() const
{
    return m_basicModifyHasBeenSet;
}

string ModifyCloudBaseRunServerVersionRequest::GetOperatorRemark() const
{
    return m_operatorRemark;
}

void ModifyCloudBaseRunServerVersionRequest::SetOperatorRemark(const string& _operatorRemark)
{
    m_operatorRemark = _operatorRemark;
    m_operatorRemarkHasBeenSet = true;
}

bool ModifyCloudBaseRunServerVersionRequest::OperatorRemarkHasBeenSet() const
{
    return m_operatorRemarkHasBeenSet;
}



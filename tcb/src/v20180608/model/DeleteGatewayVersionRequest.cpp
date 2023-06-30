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

#include <tencentcloud/tcb/v20180608/model/DeleteGatewayVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DeleteGatewayVersionRequest::DeleteGatewayVersionRequest() :
    m_envIdHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_isDeleteServerHasBeenSet(false),
    m_isDeleteImageHasBeenSet(false),
    m_isForceHasBeenSet(false),
    m_operatorRemarkHasBeenSet(false)
{
}

string DeleteGatewayVersionRequest::ToJsonString() const
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

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
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

    if (m_isForceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsForce";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isForce, allocator);
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


string DeleteGatewayVersionRequest::GetEnvId() const
{
    return m_envId;
}

void DeleteGatewayVersionRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DeleteGatewayVersionRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DeleteGatewayVersionRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void DeleteGatewayVersionRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool DeleteGatewayVersionRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string DeleteGatewayVersionRequest::GetVersionName() const
{
    return m_versionName;
}

void DeleteGatewayVersionRequest::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool DeleteGatewayVersionRequest::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

bool DeleteGatewayVersionRequest::GetIsDeleteServer() const
{
    return m_isDeleteServer;
}

void DeleteGatewayVersionRequest::SetIsDeleteServer(const bool& _isDeleteServer)
{
    m_isDeleteServer = _isDeleteServer;
    m_isDeleteServerHasBeenSet = true;
}

bool DeleteGatewayVersionRequest::IsDeleteServerHasBeenSet() const
{
    return m_isDeleteServerHasBeenSet;
}

bool DeleteGatewayVersionRequest::GetIsDeleteImage() const
{
    return m_isDeleteImage;
}

void DeleteGatewayVersionRequest::SetIsDeleteImage(const bool& _isDeleteImage)
{
    m_isDeleteImage = _isDeleteImage;
    m_isDeleteImageHasBeenSet = true;
}

bool DeleteGatewayVersionRequest::IsDeleteImageHasBeenSet() const
{
    return m_isDeleteImageHasBeenSet;
}

bool DeleteGatewayVersionRequest::GetIsForce() const
{
    return m_isForce;
}

void DeleteGatewayVersionRequest::SetIsForce(const bool& _isForce)
{
    m_isForce = _isForce;
    m_isForceHasBeenSet = true;
}

bool DeleteGatewayVersionRequest::IsForceHasBeenSet() const
{
    return m_isForceHasBeenSet;
}

string DeleteGatewayVersionRequest::GetOperatorRemark() const
{
    return m_operatorRemark;
}

void DeleteGatewayVersionRequest::SetOperatorRemark(const string& _operatorRemark)
{
    m_operatorRemark = _operatorRemark;
    m_operatorRemarkHasBeenSet = true;
}

bool DeleteGatewayVersionRequest::OperatorRemarkHasBeenSet() const
{
    return m_operatorRemarkHasBeenSet;
}



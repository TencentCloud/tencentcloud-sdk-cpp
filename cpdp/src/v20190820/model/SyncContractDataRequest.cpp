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

#include <tencentcloud/cpdp/v20190820/model/SyncContractDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

SyncContractDataRequest::SyncContractDataRequest() :
    m_midasAppIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_outContractCodeHasBeenSet(false),
    m_contractStatusHasBeenSet(false),
    m_contractSyncInfoHasBeenSet(false),
    m_midasSignatureHasBeenSet(false),
    m_midasSecretIdHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_sceneInfoHasBeenSet(false),
    m_midasEnvironmentHasBeenSet(false)
{
}

string SyncContractDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_midasAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }

    if (m_outContractCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutContractCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outContractCode.c_str(), allocator).Move(), allocator);
    }

    if (m_contractStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contractStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_contractSyncInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractSyncInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_contractSyncInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_midasSignatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasSignature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasSignature.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasSecretId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userType.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sceneInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_midasEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasEnvironment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SyncContractDataRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void SyncContractDataRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool SyncContractDataRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string SyncContractDataRequest::GetUserId() const
{
    return m_userId;
}

void SyncContractDataRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool SyncContractDataRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string SyncContractDataRequest::GetChannel() const
{
    return m_channel;
}

void SyncContractDataRequest::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool SyncContractDataRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string SyncContractDataRequest::GetOutContractCode() const
{
    return m_outContractCode;
}

void SyncContractDataRequest::SetOutContractCode(const string& _outContractCode)
{
    m_outContractCode = _outContractCode;
    m_outContractCodeHasBeenSet = true;
}

bool SyncContractDataRequest::OutContractCodeHasBeenSet() const
{
    return m_outContractCodeHasBeenSet;
}

string SyncContractDataRequest::GetContractStatus() const
{
    return m_contractStatus;
}

void SyncContractDataRequest::SetContractStatus(const string& _contractStatus)
{
    m_contractStatus = _contractStatus;
    m_contractStatusHasBeenSet = true;
}

bool SyncContractDataRequest::ContractStatusHasBeenSet() const
{
    return m_contractStatusHasBeenSet;
}

ContractSyncInfo SyncContractDataRequest::GetContractSyncInfo() const
{
    return m_contractSyncInfo;
}

void SyncContractDataRequest::SetContractSyncInfo(const ContractSyncInfo& _contractSyncInfo)
{
    m_contractSyncInfo = _contractSyncInfo;
    m_contractSyncInfoHasBeenSet = true;
}

bool SyncContractDataRequest::ContractSyncInfoHasBeenSet() const
{
    return m_contractSyncInfoHasBeenSet;
}

string SyncContractDataRequest::GetMidasSignature() const
{
    return m_midasSignature;
}

void SyncContractDataRequest::SetMidasSignature(const string& _midasSignature)
{
    m_midasSignature = _midasSignature;
    m_midasSignatureHasBeenSet = true;
}

bool SyncContractDataRequest::MidasSignatureHasBeenSet() const
{
    return m_midasSignatureHasBeenSet;
}

string SyncContractDataRequest::GetMidasSecretId() const
{
    return m_midasSecretId;
}

void SyncContractDataRequest::SetMidasSecretId(const string& _midasSecretId)
{
    m_midasSecretId = _midasSecretId;
    m_midasSecretIdHasBeenSet = true;
}

bool SyncContractDataRequest::MidasSecretIdHasBeenSet() const
{
    return m_midasSecretIdHasBeenSet;
}

string SyncContractDataRequest::GetSubAppId() const
{
    return m_subAppId;
}

void SyncContractDataRequest::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool SyncContractDataRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string SyncContractDataRequest::GetUserType() const
{
    return m_userType;
}

void SyncContractDataRequest::SetUserType(const string& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool SyncContractDataRequest::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

SceneInfo SyncContractDataRequest::GetSceneInfo() const
{
    return m_sceneInfo;
}

void SyncContractDataRequest::SetSceneInfo(const SceneInfo& _sceneInfo)
{
    m_sceneInfo = _sceneInfo;
    m_sceneInfoHasBeenSet = true;
}

bool SyncContractDataRequest::SceneInfoHasBeenSet() const
{
    return m_sceneInfoHasBeenSet;
}

string SyncContractDataRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void SyncContractDataRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool SyncContractDataRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}



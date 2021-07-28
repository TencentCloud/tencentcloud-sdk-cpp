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

#include <tencentcloud/cpdp/v20190820/model/TerminateContractRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

TerminateContractRequest::TerminateContractRequest() :
    m_midasAppIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_terminateModeHasBeenSet(false),
    m_midasSecretIdHasBeenSet(false),
    m_midasSignatureHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_outContractCodeHasBeenSet(false),
    m_contractSceneIdHasBeenSet(false),
    m_channelContractCodeHasBeenSet(false),
    m_externalContractDataHasBeenSet(false),
    m_terminationReasonHasBeenSet(false),
    m_midasEnvironmentHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_contractMethodHasBeenSet(false),
    m_migrateModeHasBeenSet(false)
{
}

string TerminateContractRequest::ToJsonString() const
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

    if (m_terminateModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerminateMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_terminateMode.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasSecretId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSignatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasSignature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasSignature.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_outContractCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutContractCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outContractCode.c_str(), allocator).Move(), allocator);
    }

    if (m_contractSceneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractSceneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contractSceneId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelContractCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelContractCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelContractCode.c_str(), allocator).Move(), allocator);
    }

    if (m_externalContractDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalContractData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_externalContractData.c_str(), allocator).Move(), allocator);
    }

    if (m_terminationReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerminationReason";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_terminationReason.c_str(), allocator).Move(), allocator);
    }

    if (m_midasEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasEnvironment.c_str(), allocator).Move(), allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userType.c_str(), allocator).Move(), allocator);
    }

    if (m_contractMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contractMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_migrateModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_migrateMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TerminateContractRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void TerminateContractRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool TerminateContractRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string TerminateContractRequest::GetUserId() const
{
    return m_userId;
}

void TerminateContractRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool TerminateContractRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string TerminateContractRequest::GetChannel() const
{
    return m_channel;
}

void TerminateContractRequest::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool TerminateContractRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string TerminateContractRequest::GetTerminateMode() const
{
    return m_terminateMode;
}

void TerminateContractRequest::SetTerminateMode(const string& _terminateMode)
{
    m_terminateMode = _terminateMode;
    m_terminateModeHasBeenSet = true;
}

bool TerminateContractRequest::TerminateModeHasBeenSet() const
{
    return m_terminateModeHasBeenSet;
}

string TerminateContractRequest::GetMidasSecretId() const
{
    return m_midasSecretId;
}

void TerminateContractRequest::SetMidasSecretId(const string& _midasSecretId)
{
    m_midasSecretId = _midasSecretId;
    m_midasSecretIdHasBeenSet = true;
}

bool TerminateContractRequest::MidasSecretIdHasBeenSet() const
{
    return m_midasSecretIdHasBeenSet;
}

string TerminateContractRequest::GetMidasSignature() const
{
    return m_midasSignature;
}

void TerminateContractRequest::SetMidasSignature(const string& _midasSignature)
{
    m_midasSignature = _midasSignature;
    m_midasSignatureHasBeenSet = true;
}

bool TerminateContractRequest::MidasSignatureHasBeenSet() const
{
    return m_midasSignatureHasBeenSet;
}

string TerminateContractRequest::GetSubAppId() const
{
    return m_subAppId;
}

void TerminateContractRequest::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool TerminateContractRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string TerminateContractRequest::GetOutContractCode() const
{
    return m_outContractCode;
}

void TerminateContractRequest::SetOutContractCode(const string& _outContractCode)
{
    m_outContractCode = _outContractCode;
    m_outContractCodeHasBeenSet = true;
}

bool TerminateContractRequest::OutContractCodeHasBeenSet() const
{
    return m_outContractCodeHasBeenSet;
}

string TerminateContractRequest::GetContractSceneId() const
{
    return m_contractSceneId;
}

void TerminateContractRequest::SetContractSceneId(const string& _contractSceneId)
{
    m_contractSceneId = _contractSceneId;
    m_contractSceneIdHasBeenSet = true;
}

bool TerminateContractRequest::ContractSceneIdHasBeenSet() const
{
    return m_contractSceneIdHasBeenSet;
}

string TerminateContractRequest::GetChannelContractCode() const
{
    return m_channelContractCode;
}

void TerminateContractRequest::SetChannelContractCode(const string& _channelContractCode)
{
    m_channelContractCode = _channelContractCode;
    m_channelContractCodeHasBeenSet = true;
}

bool TerminateContractRequest::ChannelContractCodeHasBeenSet() const
{
    return m_channelContractCodeHasBeenSet;
}

string TerminateContractRequest::GetExternalContractData() const
{
    return m_externalContractData;
}

void TerminateContractRequest::SetExternalContractData(const string& _externalContractData)
{
    m_externalContractData = _externalContractData;
    m_externalContractDataHasBeenSet = true;
}

bool TerminateContractRequest::ExternalContractDataHasBeenSet() const
{
    return m_externalContractDataHasBeenSet;
}

string TerminateContractRequest::GetTerminationReason() const
{
    return m_terminationReason;
}

void TerminateContractRequest::SetTerminationReason(const string& _terminationReason)
{
    m_terminationReason = _terminationReason;
    m_terminationReasonHasBeenSet = true;
}

bool TerminateContractRequest::TerminationReasonHasBeenSet() const
{
    return m_terminationReasonHasBeenSet;
}

string TerminateContractRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void TerminateContractRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool TerminateContractRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}

string TerminateContractRequest::GetUserType() const
{
    return m_userType;
}

void TerminateContractRequest::SetUserType(const string& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool TerminateContractRequest::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

string TerminateContractRequest::GetContractMethod() const
{
    return m_contractMethod;
}

void TerminateContractRequest::SetContractMethod(const string& _contractMethod)
{
    m_contractMethod = _contractMethod;
    m_contractMethodHasBeenSet = true;
}

bool TerminateContractRequest::ContractMethodHasBeenSet() const
{
    return m_contractMethodHasBeenSet;
}

string TerminateContractRequest::GetMigrateMode() const
{
    return m_migrateMode;
}

void TerminateContractRequest::SetMigrateMode(const string& _migrateMode)
{
    m_migrateMode = _migrateMode;
    m_migrateModeHasBeenSet = true;
}

bool TerminateContractRequest::MigrateModeHasBeenSet() const
{
    return m_migrateModeHasBeenSet;
}



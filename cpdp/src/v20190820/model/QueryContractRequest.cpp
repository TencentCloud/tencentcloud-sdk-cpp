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

#include <tencentcloud/cpdp/v20190820/model/QueryContractRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryContractRequest::QueryContractRequest() :
    m_midasAppIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_contractQueryModeHasBeenSet(false),
    m_midasSignatureHasBeenSet(false),
    m_midasSecretIdHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_outContractCodeHasBeenSet(false),
    m_contractSceneIdHasBeenSet(false),
    m_channelContractCodeHasBeenSet(false),
    m_externalContractDataHasBeenSet(false),
    m_midasEnvironmentHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_migrateModeHasBeenSet(false),
    m_contractMethodHasBeenSet(false)
{
}

string QueryContractRequest::ToJsonString() const
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

    if (m_contractQueryModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractQueryMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contractQueryMode.c_str(), allocator).Move(), allocator);
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

    if (m_migrateModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_migrateMode.c_str(), allocator).Move(), allocator);
    }

    if (m_contractMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contractMethod.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryContractRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void QueryContractRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool QueryContractRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string QueryContractRequest::GetUserId() const
{
    return m_userId;
}

void QueryContractRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool QueryContractRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string QueryContractRequest::GetChannel() const
{
    return m_channel;
}

void QueryContractRequest::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool QueryContractRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string QueryContractRequest::GetContractQueryMode() const
{
    return m_contractQueryMode;
}

void QueryContractRequest::SetContractQueryMode(const string& _contractQueryMode)
{
    m_contractQueryMode = _contractQueryMode;
    m_contractQueryModeHasBeenSet = true;
}

bool QueryContractRequest::ContractQueryModeHasBeenSet() const
{
    return m_contractQueryModeHasBeenSet;
}

string QueryContractRequest::GetMidasSignature() const
{
    return m_midasSignature;
}

void QueryContractRequest::SetMidasSignature(const string& _midasSignature)
{
    m_midasSignature = _midasSignature;
    m_midasSignatureHasBeenSet = true;
}

bool QueryContractRequest::MidasSignatureHasBeenSet() const
{
    return m_midasSignatureHasBeenSet;
}

string QueryContractRequest::GetMidasSecretId() const
{
    return m_midasSecretId;
}

void QueryContractRequest::SetMidasSecretId(const string& _midasSecretId)
{
    m_midasSecretId = _midasSecretId;
    m_midasSecretIdHasBeenSet = true;
}

bool QueryContractRequest::MidasSecretIdHasBeenSet() const
{
    return m_midasSecretIdHasBeenSet;
}

string QueryContractRequest::GetSubAppId() const
{
    return m_subAppId;
}

void QueryContractRequest::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool QueryContractRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string QueryContractRequest::GetOutContractCode() const
{
    return m_outContractCode;
}

void QueryContractRequest::SetOutContractCode(const string& _outContractCode)
{
    m_outContractCode = _outContractCode;
    m_outContractCodeHasBeenSet = true;
}

bool QueryContractRequest::OutContractCodeHasBeenSet() const
{
    return m_outContractCodeHasBeenSet;
}

string QueryContractRequest::GetContractSceneId() const
{
    return m_contractSceneId;
}

void QueryContractRequest::SetContractSceneId(const string& _contractSceneId)
{
    m_contractSceneId = _contractSceneId;
    m_contractSceneIdHasBeenSet = true;
}

bool QueryContractRequest::ContractSceneIdHasBeenSet() const
{
    return m_contractSceneIdHasBeenSet;
}

string QueryContractRequest::GetChannelContractCode() const
{
    return m_channelContractCode;
}

void QueryContractRequest::SetChannelContractCode(const string& _channelContractCode)
{
    m_channelContractCode = _channelContractCode;
    m_channelContractCodeHasBeenSet = true;
}

bool QueryContractRequest::ChannelContractCodeHasBeenSet() const
{
    return m_channelContractCodeHasBeenSet;
}

string QueryContractRequest::GetExternalContractData() const
{
    return m_externalContractData;
}

void QueryContractRequest::SetExternalContractData(const string& _externalContractData)
{
    m_externalContractData = _externalContractData;
    m_externalContractDataHasBeenSet = true;
}

bool QueryContractRequest::ExternalContractDataHasBeenSet() const
{
    return m_externalContractDataHasBeenSet;
}

string QueryContractRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void QueryContractRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool QueryContractRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}

string QueryContractRequest::GetUserType() const
{
    return m_userType;
}

void QueryContractRequest::SetUserType(const string& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool QueryContractRequest::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

string QueryContractRequest::GetMigrateMode() const
{
    return m_migrateMode;
}

void QueryContractRequest::SetMigrateMode(const string& _migrateMode)
{
    m_migrateMode = _migrateMode;
    m_migrateModeHasBeenSet = true;
}

bool QueryContractRequest::MigrateModeHasBeenSet() const
{
    return m_migrateModeHasBeenSet;
}

string QueryContractRequest::GetContractMethod() const
{
    return m_contractMethod;
}

void QueryContractRequest::SetContractMethod(const string& _contractMethod)
{
    m_contractMethod = _contractMethod;
    m_contractMethodHasBeenSet = true;
}

bool QueryContractRequest::ContractMethodHasBeenSet() const
{
    return m_contractMethodHasBeenSet;
}



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

#include <tencentcloud/ess/v20201111/model/CreatePreparedPersonalEsignRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreatePreparedPersonalEsignRequest::CreatePreparedPersonalEsignRequest() :
    m_userNameHasBeenSet(false),
    m_idCardNumberHasBeenSet(false),
    m_sealNameHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_idCardTypeHasBeenSet(false),
    m_sealImageHasBeenSet(false),
    m_sealImageCompressHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_enableAutoSignHasBeenSet(false),
    m_sealColorHasBeenSet(false),
    m_processSealHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_sceneKeyHasBeenSet(false)
{
}

string CreatePreparedPersonalEsignRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_sealNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealName.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_idCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_sealImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealImage.c_str(), allocator).Move(), allocator);
    }

    if (m_sealImageCompressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealImageCompress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sealImageCompress, allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_enableAutoSignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAutoSign";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableAutoSign, allocator);
    }

    if (m_sealColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealColor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealColor.c_str(), allocator).Move(), allocator);
    }

    if (m_processSealHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessSeal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_processSeal, allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_licenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_licenseType, allocator);
    }

    if (m_sceneKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sceneKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePreparedPersonalEsignRequest::GetUserName() const
{
    return m_userName;
}

void CreatePreparedPersonalEsignRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool CreatePreparedPersonalEsignRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string CreatePreparedPersonalEsignRequest::GetIdCardNumber() const
{
    return m_idCardNumber;
}

void CreatePreparedPersonalEsignRequest::SetIdCardNumber(const string& _idCardNumber)
{
    m_idCardNumber = _idCardNumber;
    m_idCardNumberHasBeenSet = true;
}

bool CreatePreparedPersonalEsignRequest::IdCardNumberHasBeenSet() const
{
    return m_idCardNumberHasBeenSet;
}

string CreatePreparedPersonalEsignRequest::GetSealName() const
{
    return m_sealName;
}

void CreatePreparedPersonalEsignRequest::SetSealName(const string& _sealName)
{
    m_sealName = _sealName;
    m_sealNameHasBeenSet = true;
}

bool CreatePreparedPersonalEsignRequest::SealNameHasBeenSet() const
{
    return m_sealNameHasBeenSet;
}

UserInfo CreatePreparedPersonalEsignRequest::GetOperator() const
{
    return m_operator;
}

void CreatePreparedPersonalEsignRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreatePreparedPersonalEsignRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreatePreparedPersonalEsignRequest::GetIdCardType() const
{
    return m_idCardType;
}

void CreatePreparedPersonalEsignRequest::SetIdCardType(const string& _idCardType)
{
    m_idCardType = _idCardType;
    m_idCardTypeHasBeenSet = true;
}

bool CreatePreparedPersonalEsignRequest::IdCardTypeHasBeenSet() const
{
    return m_idCardTypeHasBeenSet;
}

string CreatePreparedPersonalEsignRequest::GetSealImage() const
{
    return m_sealImage;
}

void CreatePreparedPersonalEsignRequest::SetSealImage(const string& _sealImage)
{
    m_sealImage = _sealImage;
    m_sealImageHasBeenSet = true;
}

bool CreatePreparedPersonalEsignRequest::SealImageHasBeenSet() const
{
    return m_sealImageHasBeenSet;
}

bool CreatePreparedPersonalEsignRequest::GetSealImageCompress() const
{
    return m_sealImageCompress;
}

void CreatePreparedPersonalEsignRequest::SetSealImageCompress(const bool& _sealImageCompress)
{
    m_sealImageCompress = _sealImageCompress;
    m_sealImageCompressHasBeenSet = true;
}

bool CreatePreparedPersonalEsignRequest::SealImageCompressHasBeenSet() const
{
    return m_sealImageCompressHasBeenSet;
}

string CreatePreparedPersonalEsignRequest::GetMobile() const
{
    return m_mobile;
}

void CreatePreparedPersonalEsignRequest::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool CreatePreparedPersonalEsignRequest::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

bool CreatePreparedPersonalEsignRequest::GetEnableAutoSign() const
{
    return m_enableAutoSign;
}

void CreatePreparedPersonalEsignRequest::SetEnableAutoSign(const bool& _enableAutoSign)
{
    m_enableAutoSign = _enableAutoSign;
    m_enableAutoSignHasBeenSet = true;
}

bool CreatePreparedPersonalEsignRequest::EnableAutoSignHasBeenSet() const
{
    return m_enableAutoSignHasBeenSet;
}

string CreatePreparedPersonalEsignRequest::GetSealColor() const
{
    return m_sealColor;
}

void CreatePreparedPersonalEsignRequest::SetSealColor(const string& _sealColor)
{
    m_sealColor = _sealColor;
    m_sealColorHasBeenSet = true;
}

bool CreatePreparedPersonalEsignRequest::SealColorHasBeenSet() const
{
    return m_sealColorHasBeenSet;
}

bool CreatePreparedPersonalEsignRequest::GetProcessSeal() const
{
    return m_processSeal;
}

void CreatePreparedPersonalEsignRequest::SetProcessSeal(const bool& _processSeal)
{
    m_processSeal = _processSeal;
    m_processSealHasBeenSet = true;
}

bool CreatePreparedPersonalEsignRequest::ProcessSealHasBeenSet() const
{
    return m_processSealHasBeenSet;
}

string CreatePreparedPersonalEsignRequest::GetFileId() const
{
    return m_fileId;
}

void CreatePreparedPersonalEsignRequest::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool CreatePreparedPersonalEsignRequest::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

Agent CreatePreparedPersonalEsignRequest::GetAgent() const
{
    return m_agent;
}

void CreatePreparedPersonalEsignRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreatePreparedPersonalEsignRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

int64_t CreatePreparedPersonalEsignRequest::GetLicenseType() const
{
    return m_licenseType;
}

void CreatePreparedPersonalEsignRequest::SetLicenseType(const int64_t& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool CreatePreparedPersonalEsignRequest::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

string CreatePreparedPersonalEsignRequest::GetSceneKey() const
{
    return m_sceneKey;
}

void CreatePreparedPersonalEsignRequest::SetSceneKey(const string& _sceneKey)
{
    m_sceneKey = _sceneKey;
    m_sceneKeyHasBeenSet = true;
}

bool CreatePreparedPersonalEsignRequest::SceneKeyHasBeenSet() const
{
    return m_sceneKeyHasBeenSet;
}



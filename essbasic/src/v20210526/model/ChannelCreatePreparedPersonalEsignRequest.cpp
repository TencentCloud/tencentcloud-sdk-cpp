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

#include <tencentcloud/essbasic/v20210526/model/ChannelCreatePreparedPersonalEsignRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelCreatePreparedPersonalEsignRequest::ChannelCreatePreparedPersonalEsignRequest() :
    m_agentHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_idCardNumberHasBeenSet(false),
    m_sealNameHasBeenSet(false),
    m_sealImageHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_idCardTypeHasBeenSet(false),
    m_sealImageCompressHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_enableAutoSignHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_sceneKeyHasBeenSet(false)
{
}

string ChannelCreatePreparedPersonalEsignRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

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

    if (m_sealImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealImage.c_str(), allocator).Move(), allocator);
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


Agent ChannelCreatePreparedPersonalEsignRequest::GetAgent() const
{
    return m_agent;
}

void ChannelCreatePreparedPersonalEsignRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelCreatePreparedPersonalEsignRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string ChannelCreatePreparedPersonalEsignRequest::GetUserName() const
{
    return m_userName;
}

void ChannelCreatePreparedPersonalEsignRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ChannelCreatePreparedPersonalEsignRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ChannelCreatePreparedPersonalEsignRequest::GetIdCardNumber() const
{
    return m_idCardNumber;
}

void ChannelCreatePreparedPersonalEsignRequest::SetIdCardNumber(const string& _idCardNumber)
{
    m_idCardNumber = _idCardNumber;
    m_idCardNumberHasBeenSet = true;
}

bool ChannelCreatePreparedPersonalEsignRequest::IdCardNumberHasBeenSet() const
{
    return m_idCardNumberHasBeenSet;
}

string ChannelCreatePreparedPersonalEsignRequest::GetSealName() const
{
    return m_sealName;
}

void ChannelCreatePreparedPersonalEsignRequest::SetSealName(const string& _sealName)
{
    m_sealName = _sealName;
    m_sealNameHasBeenSet = true;
}

bool ChannelCreatePreparedPersonalEsignRequest::SealNameHasBeenSet() const
{
    return m_sealNameHasBeenSet;
}

string ChannelCreatePreparedPersonalEsignRequest::GetSealImage() const
{
    return m_sealImage;
}

void ChannelCreatePreparedPersonalEsignRequest::SetSealImage(const string& _sealImage)
{
    m_sealImage = _sealImage;
    m_sealImageHasBeenSet = true;
}

bool ChannelCreatePreparedPersonalEsignRequest::SealImageHasBeenSet() const
{
    return m_sealImageHasBeenSet;
}

UserInfo ChannelCreatePreparedPersonalEsignRequest::GetOperator() const
{
    return m_operator;
}

void ChannelCreatePreparedPersonalEsignRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ChannelCreatePreparedPersonalEsignRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string ChannelCreatePreparedPersonalEsignRequest::GetIdCardType() const
{
    return m_idCardType;
}

void ChannelCreatePreparedPersonalEsignRequest::SetIdCardType(const string& _idCardType)
{
    m_idCardType = _idCardType;
    m_idCardTypeHasBeenSet = true;
}

bool ChannelCreatePreparedPersonalEsignRequest::IdCardTypeHasBeenSet() const
{
    return m_idCardTypeHasBeenSet;
}

bool ChannelCreatePreparedPersonalEsignRequest::GetSealImageCompress() const
{
    return m_sealImageCompress;
}

void ChannelCreatePreparedPersonalEsignRequest::SetSealImageCompress(const bool& _sealImageCompress)
{
    m_sealImageCompress = _sealImageCompress;
    m_sealImageCompressHasBeenSet = true;
}

bool ChannelCreatePreparedPersonalEsignRequest::SealImageCompressHasBeenSet() const
{
    return m_sealImageCompressHasBeenSet;
}

string ChannelCreatePreparedPersonalEsignRequest::GetMobile() const
{
    return m_mobile;
}

void ChannelCreatePreparedPersonalEsignRequest::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool ChannelCreatePreparedPersonalEsignRequest::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

bool ChannelCreatePreparedPersonalEsignRequest::GetEnableAutoSign() const
{
    return m_enableAutoSign;
}

void ChannelCreatePreparedPersonalEsignRequest::SetEnableAutoSign(const bool& _enableAutoSign)
{
    m_enableAutoSign = _enableAutoSign;
    m_enableAutoSignHasBeenSet = true;
}

bool ChannelCreatePreparedPersonalEsignRequest::EnableAutoSignHasBeenSet() const
{
    return m_enableAutoSignHasBeenSet;
}

int64_t ChannelCreatePreparedPersonalEsignRequest::GetLicenseType() const
{
    return m_licenseType;
}

void ChannelCreatePreparedPersonalEsignRequest::SetLicenseType(const int64_t& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool ChannelCreatePreparedPersonalEsignRequest::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

string ChannelCreatePreparedPersonalEsignRequest::GetSceneKey() const
{
    return m_sceneKey;
}

void ChannelCreatePreparedPersonalEsignRequest::SetSceneKey(const string& _sceneKey)
{
    m_sceneKey = _sceneKey;
    m_sceneKeyHasBeenSet = true;
}

bool ChannelCreatePreparedPersonalEsignRequest::SceneKeyHasBeenSet() const
{
    return m_sceneKeyHasBeenSet;
}



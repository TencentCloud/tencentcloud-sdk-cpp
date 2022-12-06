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

#include <tencentcloud/trdp/v20220726/model/EvaluateUserRiskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trdp::V20220726::Model;
using namespace std;

EvaluateUserRiskRequest::EvaluateUserRiskRequest() :
    m_accountHasBeenSet(false),
    m_userHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_deviceFingerprintHasBeenSet(false),
    m_sceneCodeHasBeenSet(false),
    m_deviceDetailHasBeenSet(false),
    m_marketingHasBeenSet(false)
{
}

string EvaluateUserRiskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_account.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_user.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceFingerprintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceFingerprint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deviceFingerprint.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sceneCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sceneCode.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceDetail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deviceDetail.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_marketingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Marketing";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_marketing.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


AccountInfo EvaluateUserRiskRequest::GetAccount() const
{
    return m_account;
}

void EvaluateUserRiskRequest::SetAccount(const AccountInfo& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool EvaluateUserRiskRequest::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

UserInfo EvaluateUserRiskRequest::GetUser() const
{
    return m_user;
}

void EvaluateUserRiskRequest::SetUser(const UserInfo& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool EvaluateUserRiskRequest::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string EvaluateUserRiskRequest::GetModelId() const
{
    return m_modelId;
}

void EvaluateUserRiskRequest::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool EvaluateUserRiskRequest::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

DeviceFingerprintInfo EvaluateUserRiskRequest::GetDeviceFingerprint() const
{
    return m_deviceFingerprint;
}

void EvaluateUserRiskRequest::SetDeviceFingerprint(const DeviceFingerprintInfo& _deviceFingerprint)
{
    m_deviceFingerprint = _deviceFingerprint;
    m_deviceFingerprintHasBeenSet = true;
}

bool EvaluateUserRiskRequest::DeviceFingerprintHasBeenSet() const
{
    return m_deviceFingerprintHasBeenSet;
}

string EvaluateUserRiskRequest::GetSceneCode() const
{
    return m_sceneCode;
}

void EvaluateUserRiskRequest::SetSceneCode(const string& _sceneCode)
{
    m_sceneCode = _sceneCode;
    m_sceneCodeHasBeenSet = true;
}

bool EvaluateUserRiskRequest::SceneCodeHasBeenSet() const
{
    return m_sceneCodeHasBeenSet;
}

DeviceDetailInfo EvaluateUserRiskRequest::GetDeviceDetail() const
{
    return m_deviceDetail;
}

void EvaluateUserRiskRequest::SetDeviceDetail(const DeviceDetailInfo& _deviceDetail)
{
    m_deviceDetail = _deviceDetail;
    m_deviceDetailHasBeenSet = true;
}

bool EvaluateUserRiskRequest::DeviceDetailHasBeenSet() const
{
    return m_deviceDetailHasBeenSet;
}

MarketingInfo EvaluateUserRiskRequest::GetMarketing() const
{
    return m_marketing;
}

void EvaluateUserRiskRequest::SetMarketing(const MarketingInfo& _marketing)
{
    m_marketing = _marketing;
    m_marketingHasBeenSet = true;
}

bool EvaluateUserRiskRequest::MarketingHasBeenSet() const
{
    return m_marketingHasBeenSet;
}



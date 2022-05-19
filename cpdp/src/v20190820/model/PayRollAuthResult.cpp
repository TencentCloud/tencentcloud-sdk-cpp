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

#include <tencentcloud/cpdp/v20190820/model/PayRollAuthResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

PayRollAuthResult::PayRollAuthResult() :
    m_authFailedReasonHasBeenSet(false),
    m_authNumberHasBeenSet(false),
    m_authSceneHasBeenSet(false),
    m_authSourceHasBeenSet(false),
    m_authStatusHasBeenSet(false),
    m_authTimeHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_merchantIdHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_subMerchantIdHasBeenSet(false)
{
}

CoreInternalOutcome PayRollAuthResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuthFailedReason") && !value["AuthFailedReason"].IsNull())
    {
        if (!value["AuthFailedReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayRollAuthResult.AuthFailedReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authFailedReason = string(value["AuthFailedReason"].GetString());
        m_authFailedReasonHasBeenSet = true;
    }

    if (value.HasMember("AuthNumber") && !value["AuthNumber"].IsNull())
    {
        if (!value["AuthNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayRollAuthResult.AuthNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authNumber = string(value["AuthNumber"].GetString());
        m_authNumberHasBeenSet = true;
    }

    if (value.HasMember("AuthScene") && !value["AuthScene"].IsNull())
    {
        if (!value["AuthScene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayRollAuthResult.AuthScene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authScene = string(value["AuthScene"].GetString());
        m_authSceneHasBeenSet = true;
    }

    if (value.HasMember("AuthSource") && !value["AuthSource"].IsNull())
    {
        if (!value["AuthSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayRollAuthResult.AuthSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authSource = string(value["AuthSource"].GetString());
        m_authSourceHasBeenSet = true;
    }

    if (value.HasMember("AuthStatus") && !value["AuthStatus"].IsNull())
    {
        if (!value["AuthStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayRollAuthResult.AuthStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authStatus = string(value["AuthStatus"].GetString());
        m_authStatusHasBeenSet = true;
    }

    if (value.HasMember("AuthTime") && !value["AuthTime"].IsNull())
    {
        if (!value["AuthTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayRollAuthResult.AuthTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authTime = string(value["AuthTime"].GetString());
        m_authTimeHasBeenSet = true;
    }

    if (value.HasMember("CompanyName") && !value["CompanyName"].IsNull())
    {
        if (!value["CompanyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayRollAuthResult.CompanyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyName = string(value["CompanyName"].GetString());
        m_companyNameHasBeenSet = true;
    }

    if (value.HasMember("MerchantId") && !value["MerchantId"].IsNull())
    {
        if (!value["MerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayRollAuthResult.MerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantId = string(value["MerchantId"].GetString());
        m_merchantIdHasBeenSet = true;
    }

    if (value.HasMember("OpenId") && !value["OpenId"].IsNull())
    {
        if (!value["OpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayRollAuthResult.OpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openId = string(value["OpenId"].GetString());
        m_openIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayRollAuthResult.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("SubMerchantId") && !value["SubMerchantId"].IsNull())
    {
        if (!value["SubMerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayRollAuthResult.SubMerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subMerchantId = string(value["SubMerchantId"].GetString());
        m_subMerchantIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PayRollAuthResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_authFailedReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthFailedReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authFailedReason.c_str(), allocator).Move(), allocator);
    }

    if (m_authNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_authSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthScene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authScene.c_str(), allocator).Move(), allocator);
    }

    if (m_authSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authSource.c_str(), allocator).Move(), allocator);
    }

    if (m_authStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_authTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authTime.c_str(), allocator).Move(), allocator);
    }

    if (m_companyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyName.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_subMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subMerchantId.c_str(), allocator).Move(), allocator);
    }

}


string PayRollAuthResult::GetAuthFailedReason() const
{
    return m_authFailedReason;
}

void PayRollAuthResult::SetAuthFailedReason(const string& _authFailedReason)
{
    m_authFailedReason = _authFailedReason;
    m_authFailedReasonHasBeenSet = true;
}

bool PayRollAuthResult::AuthFailedReasonHasBeenSet() const
{
    return m_authFailedReasonHasBeenSet;
}

string PayRollAuthResult::GetAuthNumber() const
{
    return m_authNumber;
}

void PayRollAuthResult::SetAuthNumber(const string& _authNumber)
{
    m_authNumber = _authNumber;
    m_authNumberHasBeenSet = true;
}

bool PayRollAuthResult::AuthNumberHasBeenSet() const
{
    return m_authNumberHasBeenSet;
}

string PayRollAuthResult::GetAuthScene() const
{
    return m_authScene;
}

void PayRollAuthResult::SetAuthScene(const string& _authScene)
{
    m_authScene = _authScene;
    m_authSceneHasBeenSet = true;
}

bool PayRollAuthResult::AuthSceneHasBeenSet() const
{
    return m_authSceneHasBeenSet;
}

string PayRollAuthResult::GetAuthSource() const
{
    return m_authSource;
}

void PayRollAuthResult::SetAuthSource(const string& _authSource)
{
    m_authSource = _authSource;
    m_authSourceHasBeenSet = true;
}

bool PayRollAuthResult::AuthSourceHasBeenSet() const
{
    return m_authSourceHasBeenSet;
}

string PayRollAuthResult::GetAuthStatus() const
{
    return m_authStatus;
}

void PayRollAuthResult::SetAuthStatus(const string& _authStatus)
{
    m_authStatus = _authStatus;
    m_authStatusHasBeenSet = true;
}

bool PayRollAuthResult::AuthStatusHasBeenSet() const
{
    return m_authStatusHasBeenSet;
}

string PayRollAuthResult::GetAuthTime() const
{
    return m_authTime;
}

void PayRollAuthResult::SetAuthTime(const string& _authTime)
{
    m_authTime = _authTime;
    m_authTimeHasBeenSet = true;
}

bool PayRollAuthResult::AuthTimeHasBeenSet() const
{
    return m_authTimeHasBeenSet;
}

string PayRollAuthResult::GetCompanyName() const
{
    return m_companyName;
}

void PayRollAuthResult::SetCompanyName(const string& _companyName)
{
    m_companyName = _companyName;
    m_companyNameHasBeenSet = true;
}

bool PayRollAuthResult::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

string PayRollAuthResult::GetMerchantId() const
{
    return m_merchantId;
}

void PayRollAuthResult::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool PayRollAuthResult::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string PayRollAuthResult::GetOpenId() const
{
    return m_openId;
}

void PayRollAuthResult::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool PayRollAuthResult::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string PayRollAuthResult::GetProjectName() const
{
    return m_projectName;
}

void PayRollAuthResult::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool PayRollAuthResult::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string PayRollAuthResult::GetSubMerchantId() const
{
    return m_subMerchantId;
}

void PayRollAuthResult::SetSubMerchantId(const string& _subMerchantId)
{
    m_subMerchantId = _subMerchantId;
    m_subMerchantIdHasBeenSet = true;
}

bool PayRollAuthResult::SubMerchantIdHasBeenSet() const
{
    return m_subMerchantIdHasBeenSet;
}


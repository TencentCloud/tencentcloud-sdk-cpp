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

#include <tencentcloud/cpdp/v20190820/model/QueryWechatAuthResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryWechatAuthResult::QueryWechatAuthResult() :
    m_authNoHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_mchIdHasBeenSet(false),
    m_subMchIdHasBeenSet(false),
    m_authSceneHasBeenSet(false),
    m_authSourceHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_employerNameHasBeenSet(false),
    m_authTimeHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_authStateHasBeenSet(false),
    m_authFailReasonHasBeenSet(false)
{
}

CoreInternalOutcome QueryWechatAuthResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuthNo") && !value["AuthNo"].IsNull())
    {
        if (!value["AuthNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryWechatAuthResult.AuthNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authNo = string(value["AuthNo"].GetString());
        m_authNoHasBeenSet = true;
    }

    if (value.HasMember("OpenId") && !value["OpenId"].IsNull())
    {
        if (!value["OpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryWechatAuthResult.OpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openId = string(value["OpenId"].GetString());
        m_openIdHasBeenSet = true;
    }

    if (value.HasMember("MchId") && !value["MchId"].IsNull())
    {
        if (!value["MchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryWechatAuthResult.MchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mchId = string(value["MchId"].GetString());
        m_mchIdHasBeenSet = true;
    }

    if (value.HasMember("SubMchId") && !value["SubMchId"].IsNull())
    {
        if (!value["SubMchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryWechatAuthResult.SubMchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subMchId = string(value["SubMchId"].GetString());
        m_subMchIdHasBeenSet = true;
    }

    if (value.HasMember("AuthScene") && !value["AuthScene"].IsNull())
    {
        if (!value["AuthScene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryWechatAuthResult.AuthScene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authScene = string(value["AuthScene"].GetString());
        m_authSceneHasBeenSet = true;
    }

    if (value.HasMember("AuthSource") && !value["AuthSource"].IsNull())
    {
        if (!value["AuthSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryWechatAuthResult.AuthSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authSource = string(value["AuthSource"].GetString());
        m_authSourceHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryWechatAuthResult.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("EmployerName") && !value["EmployerName"].IsNull())
    {
        if (!value["EmployerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryWechatAuthResult.EmployerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_employerName = string(value["EmployerName"].GetString());
        m_employerNameHasBeenSet = true;
    }

    if (value.HasMember("AuthTime") && !value["AuthTime"].IsNull())
    {
        if (!value["AuthTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryWechatAuthResult.AuthTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authTime = string(value["AuthTime"].GetString());
        m_authTimeHasBeenSet = true;
    }

    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryWechatAuthResult.AuthType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authType = string(value["AuthType"].GetString());
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("AuthState") && !value["AuthState"].IsNull())
    {
        if (!value["AuthState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryWechatAuthResult.AuthState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authState = string(value["AuthState"].GetString());
        m_authStateHasBeenSet = true;
    }

    if (value.HasMember("AuthFailReason") && !value["AuthFailReason"].IsNull())
    {
        if (!value["AuthFailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryWechatAuthResult.AuthFailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authFailReason = string(value["AuthFailReason"].GetString());
        m_authFailReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryWechatAuthResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_authNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authNo.c_str(), allocator).Move(), allocator);
    }

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_mchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mchId.c_str(), allocator).Move(), allocator);
    }

    if (m_subMchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subMchId.c_str(), allocator).Move(), allocator);
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

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_employerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmployerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_employerName.c_str(), allocator).Move(), allocator);
    }

    if (m_authTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authTime.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_authStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authState.c_str(), allocator).Move(), allocator);
    }

    if (m_authFailReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthFailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authFailReason.c_str(), allocator).Move(), allocator);
    }

}


string QueryWechatAuthResult::GetAuthNo() const
{
    return m_authNo;
}

void QueryWechatAuthResult::SetAuthNo(const string& _authNo)
{
    m_authNo = _authNo;
    m_authNoHasBeenSet = true;
}

bool QueryWechatAuthResult::AuthNoHasBeenSet() const
{
    return m_authNoHasBeenSet;
}

string QueryWechatAuthResult::GetOpenId() const
{
    return m_openId;
}

void QueryWechatAuthResult::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool QueryWechatAuthResult::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string QueryWechatAuthResult::GetMchId() const
{
    return m_mchId;
}

void QueryWechatAuthResult::SetMchId(const string& _mchId)
{
    m_mchId = _mchId;
    m_mchIdHasBeenSet = true;
}

bool QueryWechatAuthResult::MchIdHasBeenSet() const
{
    return m_mchIdHasBeenSet;
}

string QueryWechatAuthResult::GetSubMchId() const
{
    return m_subMchId;
}

void QueryWechatAuthResult::SetSubMchId(const string& _subMchId)
{
    m_subMchId = _subMchId;
    m_subMchIdHasBeenSet = true;
}

bool QueryWechatAuthResult::SubMchIdHasBeenSet() const
{
    return m_subMchIdHasBeenSet;
}

string QueryWechatAuthResult::GetAuthScene() const
{
    return m_authScene;
}

void QueryWechatAuthResult::SetAuthScene(const string& _authScene)
{
    m_authScene = _authScene;
    m_authSceneHasBeenSet = true;
}

bool QueryWechatAuthResult::AuthSceneHasBeenSet() const
{
    return m_authSceneHasBeenSet;
}

string QueryWechatAuthResult::GetAuthSource() const
{
    return m_authSource;
}

void QueryWechatAuthResult::SetAuthSource(const string& _authSource)
{
    m_authSource = _authSource;
    m_authSourceHasBeenSet = true;
}

bool QueryWechatAuthResult::AuthSourceHasBeenSet() const
{
    return m_authSourceHasBeenSet;
}

string QueryWechatAuthResult::GetProjectName() const
{
    return m_projectName;
}

void QueryWechatAuthResult::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool QueryWechatAuthResult::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string QueryWechatAuthResult::GetEmployerName() const
{
    return m_employerName;
}

void QueryWechatAuthResult::SetEmployerName(const string& _employerName)
{
    m_employerName = _employerName;
    m_employerNameHasBeenSet = true;
}

bool QueryWechatAuthResult::EmployerNameHasBeenSet() const
{
    return m_employerNameHasBeenSet;
}

string QueryWechatAuthResult::GetAuthTime() const
{
    return m_authTime;
}

void QueryWechatAuthResult::SetAuthTime(const string& _authTime)
{
    m_authTime = _authTime;
    m_authTimeHasBeenSet = true;
}

bool QueryWechatAuthResult::AuthTimeHasBeenSet() const
{
    return m_authTimeHasBeenSet;
}

string QueryWechatAuthResult::GetAuthType() const
{
    return m_authType;
}

void QueryWechatAuthResult::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool QueryWechatAuthResult::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string QueryWechatAuthResult::GetAuthState() const
{
    return m_authState;
}

void QueryWechatAuthResult::SetAuthState(const string& _authState)
{
    m_authState = _authState;
    m_authStateHasBeenSet = true;
}

bool QueryWechatAuthResult::AuthStateHasBeenSet() const
{
    return m_authStateHasBeenSet;
}

string QueryWechatAuthResult::GetAuthFailReason() const
{
    return m_authFailReason;
}

void QueryWechatAuthResult::SetAuthFailReason(const string& _authFailReason)
{
    m_authFailReason = _authFailReason;
    m_authFailReasonHasBeenSet = true;
}

bool QueryWechatAuthResult::AuthFailReasonHasBeenSet() const
{
    return m_authFailReasonHasBeenSet;
}


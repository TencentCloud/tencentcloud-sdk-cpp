/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tcb/v20180608/model/AccessSourceSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

AccessSourceSetting::AccessSourceSetting() :
    m_sourceTypeHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_wOAAuthHasBeenSet(false),
    m_authTokenHasBeenSet(false),
    m_vPCWhiteListHasBeenSet(false)
{
}

CoreInternalOutcome AccessSourceSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessSourceSetting.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessSourceSetting.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("WOAAuth") && !value["WOAAuth"].IsNull())
    {
        if (!value["WOAAuth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessSourceSetting.WOAAuth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wOAAuth = string(value["WOAAuth"].GetString());
        m_wOAAuthHasBeenSet = true;
    }

    if (value.HasMember("AuthToken") && !value["AuthToken"].IsNull())
    {
        if (!value["AuthToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessSourceSetting.AuthToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authToken = string(value["AuthToken"].GetString());
        m_authTokenHasBeenSet = true;
    }

    if (value.HasMember("VPCWhiteList") && !value["VPCWhiteList"].IsNull())
    {
        if (!value["VPCWhiteList"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccessSourceSetting.VPCWhiteList` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vPCWhiteList.Deserialize(value["VPCWhiteList"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vPCWhiteListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessSourceSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_wOAAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WOAAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wOAAuth.c_str(), allocator).Move(), allocator);
    }

    if (m_authTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authToken.c_str(), allocator).Move(), allocator);
    }

    if (m_vPCWhiteListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPCWhiteList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vPCWhiteList.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AccessSourceSetting::GetSourceType() const
{
    return m_sourceType;
}

void AccessSourceSetting::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool AccessSourceSetting::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string AccessSourceSetting::GetAction() const
{
    return m_action;
}

void AccessSourceSetting::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool AccessSourceSetting::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string AccessSourceSetting::GetWOAAuth() const
{
    return m_wOAAuth;
}

void AccessSourceSetting::SetWOAAuth(const string& _wOAAuth)
{
    m_wOAAuth = _wOAAuth;
    m_wOAAuthHasBeenSet = true;
}

bool AccessSourceSetting::WOAAuthHasBeenSet() const
{
    return m_wOAAuthHasBeenSet;
}

string AccessSourceSetting::GetAuthToken() const
{
    return m_authToken;
}

void AccessSourceSetting::SetAuthToken(const string& _authToken)
{
    m_authToken = _authToken;
    m_authTokenHasBeenSet = true;
}

bool AccessSourceSetting::AuthTokenHasBeenSet() const
{
    return m_authTokenHasBeenSet;
}

VPCWhiteListConfig AccessSourceSetting::GetVPCWhiteList() const
{
    return m_vPCWhiteList;
}

void AccessSourceSetting::SetVPCWhiteList(const VPCWhiteListConfig& _vPCWhiteList)
{
    m_vPCWhiteList = _vPCWhiteList;
    m_vPCWhiteListHasBeenSet = true;
}

bool AccessSourceSetting::VPCWhiteListHasBeenSet() const
{
    return m_vPCWhiteListHasBeenSet;
}


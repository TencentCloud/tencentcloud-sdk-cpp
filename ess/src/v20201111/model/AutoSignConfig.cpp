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

#include <tencentcloud/ess/v20201111/model/AutoSignConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

AutoSignConfig::AutoSignConfig() :
    m_userInfoHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_certInfoCallbackHasBeenSet(false),
    m_userDefineSealHasBeenSet(false),
    m_sealImgCallbackHasBeenSet(false),
    m_verifyChannelsHasBeenSet(false)
{
}

CoreInternalOutcome AutoSignConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserInfo") && !value["UserInfo"].IsNull())
    {
        if (!value["UserInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSignConfig.UserInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userInfo.Deserialize(value["UserInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userInfoHasBeenSet = true;
    }

    if (value.HasMember("CallbackUrl") && !value["CallbackUrl"].IsNull())
    {
        if (!value["CallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSignConfig.CallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackUrl = string(value["CallbackUrl"].GetString());
        m_callbackUrlHasBeenSet = true;
    }

    if (value.HasMember("CertInfoCallback") && !value["CertInfoCallback"].IsNull())
    {
        if (!value["CertInfoCallback"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSignConfig.CertInfoCallback` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_certInfoCallback = value["CertInfoCallback"].GetBool();
        m_certInfoCallbackHasBeenSet = true;
    }

    if (value.HasMember("UserDefineSeal") && !value["UserDefineSeal"].IsNull())
    {
        if (!value["UserDefineSeal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSignConfig.UserDefineSeal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_userDefineSeal = value["UserDefineSeal"].GetBool();
        m_userDefineSealHasBeenSet = true;
    }

    if (value.HasMember("SealImgCallback") && !value["SealImgCallback"].IsNull())
    {
        if (!value["SealImgCallback"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSignConfig.SealImgCallback` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sealImgCallback = value["SealImgCallback"].GetBool();
        m_sealImgCallbackHasBeenSet = true;
    }

    if (value.HasMember("VerifyChannels") && !value["VerifyChannels"].IsNull())
    {
        if (!value["VerifyChannels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AutoSignConfig.VerifyChannels` is not array type"));

        const rapidjson::Value &tmpValue = value["VerifyChannels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_verifyChannels.push_back((*itr).GetString());
        }
        m_verifyChannelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoSignConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_certInfoCallbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertInfoCallback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certInfoCallback, allocator);
    }

    if (m_userDefineSealHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDefineSeal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userDefineSeal, allocator);
    }

    if (m_sealImgCallbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealImgCallback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sealImgCallback, allocator);
    }

    if (m_verifyChannelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyChannels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_verifyChannels.begin(); itr != m_verifyChannels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


UserThreeFactor AutoSignConfig::GetUserInfo() const
{
    return m_userInfo;
}

void AutoSignConfig::SetUserInfo(const UserThreeFactor& _userInfo)
{
    m_userInfo = _userInfo;
    m_userInfoHasBeenSet = true;
}

bool AutoSignConfig::UserInfoHasBeenSet() const
{
    return m_userInfoHasBeenSet;
}

string AutoSignConfig::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void AutoSignConfig::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool AutoSignConfig::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

bool AutoSignConfig::GetCertInfoCallback() const
{
    return m_certInfoCallback;
}

void AutoSignConfig::SetCertInfoCallback(const bool& _certInfoCallback)
{
    m_certInfoCallback = _certInfoCallback;
    m_certInfoCallbackHasBeenSet = true;
}

bool AutoSignConfig::CertInfoCallbackHasBeenSet() const
{
    return m_certInfoCallbackHasBeenSet;
}

bool AutoSignConfig::GetUserDefineSeal() const
{
    return m_userDefineSeal;
}

void AutoSignConfig::SetUserDefineSeal(const bool& _userDefineSeal)
{
    m_userDefineSeal = _userDefineSeal;
    m_userDefineSealHasBeenSet = true;
}

bool AutoSignConfig::UserDefineSealHasBeenSet() const
{
    return m_userDefineSealHasBeenSet;
}

bool AutoSignConfig::GetSealImgCallback() const
{
    return m_sealImgCallback;
}

void AutoSignConfig::SetSealImgCallback(const bool& _sealImgCallback)
{
    m_sealImgCallback = _sealImgCallback;
    m_sealImgCallbackHasBeenSet = true;
}

bool AutoSignConfig::SealImgCallbackHasBeenSet() const
{
    return m_sealImgCallbackHasBeenSet;
}

vector<string> AutoSignConfig::GetVerifyChannels() const
{
    return m_verifyChannels;
}

void AutoSignConfig::SetVerifyChannels(const vector<string>& _verifyChannels)
{
    m_verifyChannels = _verifyChannels;
    m_verifyChannelsHasBeenSet = true;
}

bool AutoSignConfig::VerifyChannelsHasBeenSet() const
{
    return m_verifyChannelsHasBeenSet;
}


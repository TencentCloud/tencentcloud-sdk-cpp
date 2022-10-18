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

#include <tencentcloud/cpdp/v20190820/model/OpenBankOrderRedirectInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

OpenBankOrderRedirectInfo::OpenBankOrderRedirectInfo() :
    m_qRCodeUrlHasBeenSet(false),
    m_qRCodeKeyHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_mpAppIdHasBeenSet(false),
    m_mpPathHasBeenSet(false),
    m_mpUserNameHasBeenSet(false),
    m_formInfoHasBeenSet(false)
{
}

CoreInternalOutcome OpenBankOrderRedirectInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QRCodeUrl") && !value["QRCodeUrl"].IsNull())
    {
        if (!value["QRCodeUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankOrderRedirectInfo.QRCodeUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qRCodeUrl = string(value["QRCodeUrl"].GetString());
        m_qRCodeUrlHasBeenSet = true;
    }

    if (value.HasMember("QRCodeKey") && !value["QRCodeKey"].IsNull())
    {
        if (!value["QRCodeKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankOrderRedirectInfo.QRCodeKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qRCodeKey = string(value["QRCodeKey"].GetString());
        m_qRCodeKeyHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankOrderRedirectInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankOrderRedirectInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("MpAppId") && !value["MpAppId"].IsNull())
    {
        if (!value["MpAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankOrderRedirectInfo.MpAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mpAppId = string(value["MpAppId"].GetString());
        m_mpAppIdHasBeenSet = true;
    }

    if (value.HasMember("MpPath") && !value["MpPath"].IsNull())
    {
        if (!value["MpPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankOrderRedirectInfo.MpPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mpPath = string(value["MpPath"].GetString());
        m_mpPathHasBeenSet = true;
    }

    if (value.HasMember("MpUserName") && !value["MpUserName"].IsNull())
    {
        if (!value["MpUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankOrderRedirectInfo.MpUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mpUserName = string(value["MpUserName"].GetString());
        m_mpUserNameHasBeenSet = true;
    }

    if (value.HasMember("FormInfo") && !value["FormInfo"].IsNull())
    {
        if (!value["FormInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankOrderRedirectInfo.FormInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_formInfo.Deserialize(value["FormInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_formInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpenBankOrderRedirectInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_qRCodeUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QRCodeUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qRCodeUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_qRCodeKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QRCodeKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qRCodeKey.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_mpAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MpAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mpAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_mpPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MpPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mpPath.c_str(), allocator).Move(), allocator);
    }

    if (m_mpUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MpUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mpUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_formInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_formInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string OpenBankOrderRedirectInfo::GetQRCodeUrl() const
{
    return m_qRCodeUrl;
}

void OpenBankOrderRedirectInfo::SetQRCodeUrl(const string& _qRCodeUrl)
{
    m_qRCodeUrl = _qRCodeUrl;
    m_qRCodeUrlHasBeenSet = true;
}

bool OpenBankOrderRedirectInfo::QRCodeUrlHasBeenSet() const
{
    return m_qRCodeUrlHasBeenSet;
}

string OpenBankOrderRedirectInfo::GetQRCodeKey() const
{
    return m_qRCodeKey;
}

void OpenBankOrderRedirectInfo::SetQRCodeKey(const string& _qRCodeKey)
{
    m_qRCodeKey = _qRCodeKey;
    m_qRCodeKeyHasBeenSet = true;
}

bool OpenBankOrderRedirectInfo::QRCodeKeyHasBeenSet() const
{
    return m_qRCodeKeyHasBeenSet;
}

string OpenBankOrderRedirectInfo::GetUrl() const
{
    return m_url;
}

void OpenBankOrderRedirectInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool OpenBankOrderRedirectInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string OpenBankOrderRedirectInfo::GetExpireTime() const
{
    return m_expireTime;
}

void OpenBankOrderRedirectInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool OpenBankOrderRedirectInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string OpenBankOrderRedirectInfo::GetMpAppId() const
{
    return m_mpAppId;
}

void OpenBankOrderRedirectInfo::SetMpAppId(const string& _mpAppId)
{
    m_mpAppId = _mpAppId;
    m_mpAppIdHasBeenSet = true;
}

bool OpenBankOrderRedirectInfo::MpAppIdHasBeenSet() const
{
    return m_mpAppIdHasBeenSet;
}

string OpenBankOrderRedirectInfo::GetMpPath() const
{
    return m_mpPath;
}

void OpenBankOrderRedirectInfo::SetMpPath(const string& _mpPath)
{
    m_mpPath = _mpPath;
    m_mpPathHasBeenSet = true;
}

bool OpenBankOrderRedirectInfo::MpPathHasBeenSet() const
{
    return m_mpPathHasBeenSet;
}

string OpenBankOrderRedirectInfo::GetMpUserName() const
{
    return m_mpUserName;
}

void OpenBankOrderRedirectInfo::SetMpUserName(const string& _mpUserName)
{
    m_mpUserName = _mpUserName;
    m_mpUserNameHasBeenSet = true;
}

bool OpenBankOrderRedirectInfo::MpUserNameHasBeenSet() const
{
    return m_mpUserNameHasBeenSet;
}

OpenBankFormInfo OpenBankOrderRedirectInfo::GetFormInfo() const
{
    return m_formInfo;
}

void OpenBankOrderRedirectInfo::SetFormInfo(const OpenBankFormInfo& _formInfo)
{
    m_formInfo = _formInfo;
    m_formInfoHasBeenSet = true;
}

bool OpenBankOrderRedirectInfo::FormInfoHasBeenSet() const
{
    return m_formInfoHasBeenSet;
}


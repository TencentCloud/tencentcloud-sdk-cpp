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

#include <tencentcloud/ctem/v20231128/model/DisplayFakeWechatOfficial.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplayFakeWechatOfficial::DisplayFakeWechatOfficial() :
    m_idHasBeenSet(false),
    m_displayToolCommonHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_wechatIdHasBeenSet(false),
    m_avatarHasBeenSet(false),
    m_qrCodeHasBeenSet(false),
    m_handlingStatusHasBeenSet(false),
    m_shutdownStatusHasBeenSet(false),
    m_shutdownTimeHasBeenSet(false)
{
}

CoreInternalOutcome DisplayFakeWechatOfficial::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeWechatOfficial.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DisplayToolCommon") && !value["DisplayToolCommon"].IsNull())
    {
        if (!value["DisplayToolCommon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeWechatOfficial.DisplayToolCommon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_displayToolCommon.Deserialize(value["DisplayToolCommon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_displayToolCommonHasBeenSet = true;
    }

    if (value.HasMember("AccountName") && !value["AccountName"].IsNull())
    {
        if (!value["AccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeWechatOfficial.AccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountName = string(value["AccountName"].GetString());
        m_accountNameHasBeenSet = true;
    }

    if (value.HasMember("WechatId") && !value["WechatId"].IsNull())
    {
        if (!value["WechatId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeWechatOfficial.WechatId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wechatId = string(value["WechatId"].GetString());
        m_wechatIdHasBeenSet = true;
    }

    if (value.HasMember("Avatar") && !value["Avatar"].IsNull())
    {
        if (!value["Avatar"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeWechatOfficial.Avatar` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avatar = string(value["Avatar"].GetString());
        m_avatarHasBeenSet = true;
    }

    if (value.HasMember("QrCode") && !value["QrCode"].IsNull())
    {
        if (!value["QrCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeWechatOfficial.QrCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qrCode = string(value["QrCode"].GetString());
        m_qrCodeHasBeenSet = true;
    }

    if (value.HasMember("HandlingStatus") && !value["HandlingStatus"].IsNull())
    {
        if (!value["HandlingStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeWechatOfficial.HandlingStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_handlingStatus = value["HandlingStatus"].GetInt64();
        m_handlingStatusHasBeenSet = true;
    }

    if (value.HasMember("ShutdownStatus") && !value["ShutdownStatus"].IsNull())
    {
        if (!value["ShutdownStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeWechatOfficial.ShutdownStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shutdownStatus = value["ShutdownStatus"].GetInt64();
        m_shutdownStatusHasBeenSet = true;
    }

    if (value.HasMember("ShutdownTime") && !value["ShutdownTime"].IsNull())
    {
        if (!value["ShutdownTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeWechatOfficial.ShutdownTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shutdownTime = string(value["ShutdownTime"].GetString());
        m_shutdownTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplayFakeWechatOfficial::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_displayToolCommonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayToolCommon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_displayToolCommon.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_wechatIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wechatId.c_str(), allocator).Move(), allocator);
    }

    if (m_avatarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Avatar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avatar.c_str(), allocator).Move(), allocator);
    }

    if (m_qrCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qrCode.c_str(), allocator).Move(), allocator);
    }

    if (m_handlingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandlingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_handlingStatus, allocator);
    }

    if (m_shutdownStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShutdownStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shutdownStatus, allocator);
    }

    if (m_shutdownTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShutdownTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shutdownTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t DisplayFakeWechatOfficial::GetId() const
{
    return m_id;
}

void DisplayFakeWechatOfficial::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisplayFakeWechatOfficial::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

DisplayToolCommon DisplayFakeWechatOfficial::GetDisplayToolCommon() const
{
    return m_displayToolCommon;
}

void DisplayFakeWechatOfficial::SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon)
{
    m_displayToolCommon = _displayToolCommon;
    m_displayToolCommonHasBeenSet = true;
}

bool DisplayFakeWechatOfficial::DisplayToolCommonHasBeenSet() const
{
    return m_displayToolCommonHasBeenSet;
}

string DisplayFakeWechatOfficial::GetAccountName() const
{
    return m_accountName;
}

void DisplayFakeWechatOfficial::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool DisplayFakeWechatOfficial::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

string DisplayFakeWechatOfficial::GetWechatId() const
{
    return m_wechatId;
}

void DisplayFakeWechatOfficial::SetWechatId(const string& _wechatId)
{
    m_wechatId = _wechatId;
    m_wechatIdHasBeenSet = true;
}

bool DisplayFakeWechatOfficial::WechatIdHasBeenSet() const
{
    return m_wechatIdHasBeenSet;
}

string DisplayFakeWechatOfficial::GetAvatar() const
{
    return m_avatar;
}

void DisplayFakeWechatOfficial::SetAvatar(const string& _avatar)
{
    m_avatar = _avatar;
    m_avatarHasBeenSet = true;
}

bool DisplayFakeWechatOfficial::AvatarHasBeenSet() const
{
    return m_avatarHasBeenSet;
}

string DisplayFakeWechatOfficial::GetQrCode() const
{
    return m_qrCode;
}

void DisplayFakeWechatOfficial::SetQrCode(const string& _qrCode)
{
    m_qrCode = _qrCode;
    m_qrCodeHasBeenSet = true;
}

bool DisplayFakeWechatOfficial::QrCodeHasBeenSet() const
{
    return m_qrCodeHasBeenSet;
}

int64_t DisplayFakeWechatOfficial::GetHandlingStatus() const
{
    return m_handlingStatus;
}

void DisplayFakeWechatOfficial::SetHandlingStatus(const int64_t& _handlingStatus)
{
    m_handlingStatus = _handlingStatus;
    m_handlingStatusHasBeenSet = true;
}

bool DisplayFakeWechatOfficial::HandlingStatusHasBeenSet() const
{
    return m_handlingStatusHasBeenSet;
}

int64_t DisplayFakeWechatOfficial::GetShutdownStatus() const
{
    return m_shutdownStatus;
}

void DisplayFakeWechatOfficial::SetShutdownStatus(const int64_t& _shutdownStatus)
{
    m_shutdownStatus = _shutdownStatus;
    m_shutdownStatusHasBeenSet = true;
}

bool DisplayFakeWechatOfficial::ShutdownStatusHasBeenSet() const
{
    return m_shutdownStatusHasBeenSet;
}

string DisplayFakeWechatOfficial::GetShutdownTime() const
{
    return m_shutdownTime;
}

void DisplayFakeWechatOfficial::SetShutdownTime(const string& _shutdownTime)
{
    m_shutdownTime = _shutdownTime;
    m_shutdownTimeHasBeenSet = true;
}

bool DisplayFakeWechatOfficial::ShutdownTimeHasBeenSet() const
{
    return m_shutdownTimeHasBeenSet;
}


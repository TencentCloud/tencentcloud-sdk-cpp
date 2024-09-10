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

#include <tencentcloud/dnspod/v20210323/model/DomainShareUserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

DomainShareUserInfo::DomainShareUserInfo() :
    m_domainShareIdHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_qCloudUINHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subDomainHasBeenSet(false)
{
}

CoreInternalOutcome DomainShareUserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainShareId") && !value["DomainShareId"].IsNull())
    {
        if (!value["DomainShareId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainShareUserInfo.DomainShareId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_domainShareId = value["DomainShareId"].GetUint64();
        m_domainShareIdHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainShareUserInfo.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainShareUserInfo.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (value.HasMember("QCloudUIN") && !value["QCloudUIN"].IsNull())
    {
        if (!value["QCloudUIN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainShareUserInfo.QCloudUIN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qCloudUIN = string(value["QCloudUIN"].GetString());
        m_qCloudUINHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainShareUserInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SubDomain") && !value["SubDomain"].IsNull())
    {
        if (!value["SubDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainShareUserInfo.SubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subDomain = string(value["SubDomain"].GetString());
        m_subDomainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainShareUserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainShareIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainShareId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainShareId, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_nicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickname.c_str(), allocator).Move(), allocator);
    }

    if (m_qCloudUINHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QCloudUIN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qCloudUIN.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_subDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subDomain.c_str(), allocator).Move(), allocator);
    }

}


uint64_t DomainShareUserInfo::GetDomainShareId() const
{
    return m_domainShareId;
}

void DomainShareUserInfo::SetDomainShareId(const uint64_t& _domainShareId)
{
    m_domainShareId = _domainShareId;
    m_domainShareIdHasBeenSet = true;
}

bool DomainShareUserInfo::DomainShareIdHasBeenSet() const
{
    return m_domainShareIdHasBeenSet;
}

string DomainShareUserInfo::GetMode() const
{
    return m_mode;
}

void DomainShareUserInfo::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DomainShareUserInfo::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string DomainShareUserInfo::GetNickname() const
{
    return m_nickname;
}

void DomainShareUserInfo::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool DomainShareUserInfo::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

string DomainShareUserInfo::GetQCloudUIN() const
{
    return m_qCloudUIN;
}

void DomainShareUserInfo::SetQCloudUIN(const string& _qCloudUIN)
{
    m_qCloudUIN = _qCloudUIN;
    m_qCloudUINHasBeenSet = true;
}

bool DomainShareUserInfo::QCloudUINHasBeenSet() const
{
    return m_qCloudUINHasBeenSet;
}

string DomainShareUserInfo::GetStatus() const
{
    return m_status;
}

void DomainShareUserInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DomainShareUserInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DomainShareUserInfo::GetSubDomain() const
{
    return m_subDomain;
}

void DomainShareUserInfo::SetSubDomain(const string& _subDomain)
{
    m_subDomain = _subDomain;
    m_subDomainHasBeenSet = true;
}

bool DomainShareUserInfo::SubDomainHasBeenSet() const
{
    return m_subDomainHasBeenSet;
}


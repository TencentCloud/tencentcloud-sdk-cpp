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

#include <tencentcloud/pds/v20210701/model/UserInfos.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pds::V20210701::Model;
using namespace std;

UserInfos::UserInfos() :
    m_phoneNumHasBeenSet(false),
    m_openidHasBeenSet(false),
    m_iPHasBeenSet(false),
    m_wiFiBssidHasBeenSet(false),
    m_iMEIHasBeenSet(false),
    m_oAIDHasBeenSet(false),
    m_iDFAHasBeenSet(false)
{
}

CoreInternalOutcome UserInfos::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PhoneNum") && !value["PhoneNum"].IsNull())
    {
        if (!value["PhoneNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfos.PhoneNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNum = string(value["PhoneNum"].GetString());
        m_phoneNumHasBeenSet = true;
    }

    if (value.HasMember("Openid") && !value["Openid"].IsNull())
    {
        if (!value["Openid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfos.Openid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openid = string(value["Openid"].GetString());
        m_openidHasBeenSet = true;
    }

    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfos.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("WiFiBssid") && !value["WiFiBssid"].IsNull())
    {
        if (!value["WiFiBssid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfos.WiFiBssid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wiFiBssid = string(value["WiFiBssid"].GetString());
        m_wiFiBssidHasBeenSet = true;
    }

    if (value.HasMember("IMEI") && !value["IMEI"].IsNull())
    {
        if (!value["IMEI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfos.IMEI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iMEI = string(value["IMEI"].GetString());
        m_iMEIHasBeenSet = true;
    }

    if (value.HasMember("OAID") && !value["OAID"].IsNull())
    {
        if (!value["OAID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfos.OAID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oAID = string(value["OAID"].GetString());
        m_oAIDHasBeenSet = true;
    }

    if (value.HasMember("IDFA") && !value["IDFA"].IsNull())
    {
        if (!value["IDFA"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfos.IDFA` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iDFA = string(value["IDFA"].GetString());
        m_iDFAHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserInfos::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_phoneNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNum.c_str(), allocator).Move(), allocator);
    }

    if (m_openidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Openid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openid.c_str(), allocator).Move(), allocator);
    }

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_wiFiBssidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WiFiBssid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wiFiBssid.c_str(), allocator).Move(), allocator);
    }

    if (m_iMEIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IMEI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iMEI.c_str(), allocator).Move(), allocator);
    }

    if (m_oAIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OAID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oAID.c_str(), allocator).Move(), allocator);
    }

    if (m_iDFAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDFA";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iDFA.c_str(), allocator).Move(), allocator);
    }

}


string UserInfos::GetPhoneNum() const
{
    return m_phoneNum;
}

void UserInfos::SetPhoneNum(const string& _phoneNum)
{
    m_phoneNum = _phoneNum;
    m_phoneNumHasBeenSet = true;
}

bool UserInfos::PhoneNumHasBeenSet() const
{
    return m_phoneNumHasBeenSet;
}

string UserInfos::GetOpenid() const
{
    return m_openid;
}

void UserInfos::SetOpenid(const string& _openid)
{
    m_openid = _openid;
    m_openidHasBeenSet = true;
}

bool UserInfos::OpenidHasBeenSet() const
{
    return m_openidHasBeenSet;
}

string UserInfos::GetIP() const
{
    return m_iP;
}

void UserInfos::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool UserInfos::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

string UserInfos::GetWiFiBssid() const
{
    return m_wiFiBssid;
}

void UserInfos::SetWiFiBssid(const string& _wiFiBssid)
{
    m_wiFiBssid = _wiFiBssid;
    m_wiFiBssidHasBeenSet = true;
}

bool UserInfos::WiFiBssidHasBeenSet() const
{
    return m_wiFiBssidHasBeenSet;
}

string UserInfos::GetIMEI() const
{
    return m_iMEI;
}

void UserInfos::SetIMEI(const string& _iMEI)
{
    m_iMEI = _iMEI;
    m_iMEIHasBeenSet = true;
}

bool UserInfos::IMEIHasBeenSet() const
{
    return m_iMEIHasBeenSet;
}

string UserInfos::GetOAID() const
{
    return m_oAID;
}

void UserInfos::SetOAID(const string& _oAID)
{
    m_oAID = _oAID;
    m_oAIDHasBeenSet = true;
}

bool UserInfos::OAIDHasBeenSet() const
{
    return m_oAIDHasBeenSet;
}

string UserInfos::GetIDFA() const
{
    return m_iDFA;
}

void UserInfos::SetIDFA(const string& _iDFA)
{
    m_iDFA = _iDFA;
    m_iDFAHasBeenSet = true;
}

bool UserInfos::IDFAHasBeenSet() const
{
    return m_iDFAHasBeenSet;
}


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

#include <tencentcloud/rce/v20201103/model/QQAccountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

QQAccountInfo::QQAccountInfo() :
    m_qQOpenIdHasBeenSet(false),
    m_appIdUserHasBeenSet(false),
    m_associateAccountHasBeenSet(false),
    m_mobilePhoneHasBeenSet(false),
    m_deviceIdHasBeenSet(false)
{
}

CoreInternalOutcome QQAccountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QQOpenId") && !value["QQOpenId"].IsNull())
    {
        if (!value["QQOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QQAccountInfo.QQOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qQOpenId = string(value["QQOpenId"].GetString());
        m_qQOpenIdHasBeenSet = true;
    }

    if (value.HasMember("AppIdUser") && !value["AppIdUser"].IsNull())
    {
        if (!value["AppIdUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QQAccountInfo.AppIdUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appIdUser = string(value["AppIdUser"].GetString());
        m_appIdUserHasBeenSet = true;
    }

    if (value.HasMember("AssociateAccount") && !value["AssociateAccount"].IsNull())
    {
        if (!value["AssociateAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QQAccountInfo.AssociateAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_associateAccount = string(value["AssociateAccount"].GetString());
        m_associateAccountHasBeenSet = true;
    }

    if (value.HasMember("MobilePhone") && !value["MobilePhone"].IsNull())
    {
        if (!value["MobilePhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QQAccountInfo.MobilePhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobilePhone = string(value["MobilePhone"].GetString());
        m_mobilePhoneHasBeenSet = true;
    }

    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QQAccountInfo.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QQAccountInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_qQOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QQOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qQOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppIdUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appIdUser.c_str(), allocator).Move(), allocator);
    }

    if (m_associateAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociateAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_associateAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_mobilePhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MobilePhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobilePhone.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

}


string QQAccountInfo::GetQQOpenId() const
{
    return m_qQOpenId;
}

void QQAccountInfo::SetQQOpenId(const string& _qQOpenId)
{
    m_qQOpenId = _qQOpenId;
    m_qQOpenIdHasBeenSet = true;
}

bool QQAccountInfo::QQOpenIdHasBeenSet() const
{
    return m_qQOpenIdHasBeenSet;
}

string QQAccountInfo::GetAppIdUser() const
{
    return m_appIdUser;
}

void QQAccountInfo::SetAppIdUser(const string& _appIdUser)
{
    m_appIdUser = _appIdUser;
    m_appIdUserHasBeenSet = true;
}

bool QQAccountInfo::AppIdUserHasBeenSet() const
{
    return m_appIdUserHasBeenSet;
}

string QQAccountInfo::GetAssociateAccount() const
{
    return m_associateAccount;
}

void QQAccountInfo::SetAssociateAccount(const string& _associateAccount)
{
    m_associateAccount = _associateAccount;
    m_associateAccountHasBeenSet = true;
}

bool QQAccountInfo::AssociateAccountHasBeenSet() const
{
    return m_associateAccountHasBeenSet;
}

string QQAccountInfo::GetMobilePhone() const
{
    return m_mobilePhone;
}

void QQAccountInfo::SetMobilePhone(const string& _mobilePhone)
{
    m_mobilePhone = _mobilePhone;
    m_mobilePhoneHasBeenSet = true;
}

bool QQAccountInfo::MobilePhoneHasBeenSet() const
{
    return m_mobilePhoneHasBeenSet;
}

string QQAccountInfo::GetDeviceId() const
{
    return m_deviceId;
}

void QQAccountInfo::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool QQAccountInfo::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}


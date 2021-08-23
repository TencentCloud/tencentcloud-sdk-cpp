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

#include <tencentcloud/rce/v20201103/model/OtherAccountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

OtherAccountInfo::OtherAccountInfo() :
    m_accountIdHasBeenSet(false),
    m_mobilePhoneHasBeenSet(false),
    m_deviceIdHasBeenSet(false)
{
}

CoreInternalOutcome OtherAccountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountId") && !value["AccountId"].IsNull())
    {
        if (!value["AccountId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtherAccountInfo.AccountId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountId = string(value["AccountId"].GetString());
        m_accountIdHasBeenSet = true;
    }

    if (value.HasMember("MobilePhone") && !value["MobilePhone"].IsNull())
    {
        if (!value["MobilePhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtherAccountInfo.MobilePhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobilePhone = string(value["MobilePhone"].GetString());
        m_mobilePhoneHasBeenSet = true;
    }

    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtherAccountInfo.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OtherAccountInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountId.c_str(), allocator).Move(), allocator);
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


string OtherAccountInfo::GetAccountId() const
{
    return m_accountId;
}

void OtherAccountInfo::SetAccountId(const string& _accountId)
{
    m_accountId = _accountId;
    m_accountIdHasBeenSet = true;
}

bool OtherAccountInfo::AccountIdHasBeenSet() const
{
    return m_accountIdHasBeenSet;
}

string OtherAccountInfo::GetMobilePhone() const
{
    return m_mobilePhone;
}

void OtherAccountInfo::SetMobilePhone(const string& _mobilePhone)
{
    m_mobilePhone = _mobilePhone;
    m_mobilePhoneHasBeenSet = true;
}

bool OtherAccountInfo::MobilePhoneHasBeenSet() const
{
    return m_mobilePhoneHasBeenSet;
}

string OtherAccountInfo::GetDeviceId() const
{
    return m_deviceId;
}

void OtherAccountInfo::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool OtherAccountInfo::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}


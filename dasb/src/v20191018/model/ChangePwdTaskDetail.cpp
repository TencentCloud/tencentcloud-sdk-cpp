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

#include <tencentcloud/dasb/v20191018/model/ChangePwdTaskDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

ChangePwdTaskDetail::ChangePwdTaskDetail() :
    m_deviceHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_lastChangeStatusHasBeenSet(false)
{
}

CoreInternalOutcome ChangePwdTaskDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Device") && !value["Device"].IsNull())
    {
        if (!value["Device"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChangePwdTaskDetail.Device` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_device.Deserialize(value["Device"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deviceHasBeenSet = true;
    }

    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChangePwdTaskDetail.Account` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_account = string(value["Account"].GetString());
        m_accountHasBeenSet = true;
    }

    if (value.HasMember("LastChangeStatus") && !value["LastChangeStatus"].IsNull())
    {
        if (!value["LastChangeStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ChangePwdTaskDetail.LastChangeStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastChangeStatus = value["LastChangeStatus"].GetUint64();
        m_lastChangeStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChangePwdTaskDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Device";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_device.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_account.c_str(), allocator).Move(), allocator);
    }

    if (m_lastChangeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastChangeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastChangeStatus, allocator);
    }

}


Device ChangePwdTaskDetail::GetDevice() const
{
    return m_device;
}

void ChangePwdTaskDetail::SetDevice(const Device& _device)
{
    m_device = _device;
    m_deviceHasBeenSet = true;
}

bool ChangePwdTaskDetail::DeviceHasBeenSet() const
{
    return m_deviceHasBeenSet;
}

string ChangePwdTaskDetail::GetAccount() const
{
    return m_account;
}

void ChangePwdTaskDetail::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool ChangePwdTaskDetail::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

uint64_t ChangePwdTaskDetail::GetLastChangeStatus() const
{
    return m_lastChangeStatus;
}

void ChangePwdTaskDetail::SetLastChangeStatus(const uint64_t& _lastChangeStatus)
{
    m_lastChangeStatus = _lastChangeStatus;
    m_lastChangeStatusHasBeenSet = true;
}

bool ChangePwdTaskDetail::LastChangeStatusHasBeenSet() const
{
    return m_lastChangeStatusHasBeenSet;
}


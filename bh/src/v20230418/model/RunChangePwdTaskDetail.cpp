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

#include <tencentcloud/bh/v20230418/model/RunChangePwdTaskDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

RunChangePwdTaskDetail::RunChangePwdTaskDetail() :
    m_deviceIdHasBeenSet(false),
    m_accountHasBeenSet(false)
{
}

CoreInternalOutcome RunChangePwdTaskDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RunChangePwdTaskDetail.DeviceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = value["DeviceId"].GetUint64();
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunChangePwdTaskDetail.Account` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_account = string(value["Account"].GetString());
        m_accountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RunChangePwdTaskDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceId, allocator);
    }

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_account.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RunChangePwdTaskDetail::GetDeviceId() const
{
    return m_deviceId;
}

void RunChangePwdTaskDetail::SetDeviceId(const uint64_t& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool RunChangePwdTaskDetail::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string RunChangePwdTaskDetail::GetAccount() const
{
    return m_account;
}

void RunChangePwdTaskDetail::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool RunChangePwdTaskDetail::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}


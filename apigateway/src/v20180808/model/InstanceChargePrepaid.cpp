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

#include <tencentcloud/apigateway/v20180808/model/InstanceChargePrepaid.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

InstanceChargePrepaid::InstanceChargePrepaid() :
    m_renewFlagHasBeenSet(false),
    m_expiredTimeHasBeenSet(false)
{
}

CoreInternalOutcome InstanceChargePrepaid::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceChargePrepaid.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceChargePrepaid.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceChargePrepaid::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

}


string InstanceChargePrepaid::GetRenewFlag() const
{
    return m_renewFlag;
}

void InstanceChargePrepaid::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool InstanceChargePrepaid::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string InstanceChargePrepaid::GetExpiredTime() const
{
    return m_expiredTime;
}

void InstanceChargePrepaid::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool InstanceChargePrepaid::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}


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

#include <tencentcloud/thpc/v20230321/model/SpaceChargePrepaid.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

SpaceChargePrepaid::SpaceChargePrepaid() :
    m_periodHasBeenSet(false),
    m_renewFlagHasBeenSet(false)
{
}

CoreInternalOutcome SpaceChargePrepaid::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceChargePrepaid.Period` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetInt64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceChargePrepaid.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpaceChargePrepaid::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

}


int64_t SpaceChargePrepaid::GetPeriod() const
{
    return m_period;
}

void SpaceChargePrepaid::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool SpaceChargePrepaid::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string SpaceChargePrepaid::GetRenewFlag() const
{
    return m_renewFlag;
}

void SpaceChargePrepaid::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool SpaceChargePrepaid::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}


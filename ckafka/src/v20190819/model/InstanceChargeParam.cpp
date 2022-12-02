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

#include <tencentcloud/ckafka/v20190819/model/InstanceChargeParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

InstanceChargeParam::InstanceChargeParam() :
    m_instanceChargeTypeHasBeenSet(false),
    m_instanceChargePeriodHasBeenSet(false)
{
}

CoreInternalOutcome InstanceChargeParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceChargeParam.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargePeriod") && !value["InstanceChargePeriod"].IsNull())
    {
        if (!value["InstanceChargePeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceChargeParam.InstanceChargePeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargePeriod = value["InstanceChargePeriod"].GetInt64();
        m_instanceChargePeriodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceChargeParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceChargePeriod, allocator);
    }

}


string InstanceChargeParam::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void InstanceChargeParam::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool InstanceChargeParam::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

int64_t InstanceChargeParam::GetInstanceChargePeriod() const
{
    return m_instanceChargePeriod;
}

void InstanceChargeParam::SetInstanceChargePeriod(const int64_t& _instanceChargePeriod)
{
    m_instanceChargePeriod = _instanceChargePeriod;
    m_instanceChargePeriodHasBeenSet = true;
}

bool InstanceChargeParam::InstanceChargePeriodHasBeenSet() const
{
    return m_instanceChargePeriodHasBeenSet;
}


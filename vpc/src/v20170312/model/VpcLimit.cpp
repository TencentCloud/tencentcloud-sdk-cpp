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

#include <tencentcloud/vpc/v20170312/model/VpcLimit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

VpcLimit::VpcLimit() :
    m_limitTypeHasBeenSet(false),
    m_limitValueHasBeenSet(false)
{
}

CoreInternalOutcome VpcLimit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LimitType") && !value["LimitType"].IsNull())
    {
        if (!value["LimitType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcLimit.LimitType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_limitType = string(value["LimitType"].GetString());
        m_limitTypeHasBeenSet = true;
    }

    if (value.HasMember("LimitValue") && !value["LimitValue"].IsNull())
    {
        if (!value["LimitValue"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcLimit.LimitValue` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_limitValue = value["LimitValue"].GetUint64();
        m_limitValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcLimit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_limitTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_limitType.c_str(), allocator).Move(), allocator);
    }

    if (m_limitValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limitValue, allocator);
    }

}


string VpcLimit::GetLimitType() const
{
    return m_limitType;
}

void VpcLimit::SetLimitType(const string& _limitType)
{
    m_limitType = _limitType;
    m_limitTypeHasBeenSet = true;
}

bool VpcLimit::LimitTypeHasBeenSet() const
{
    return m_limitTypeHasBeenSet;
}

uint64_t VpcLimit::GetLimitValue() const
{
    return m_limitValue;
}

void VpcLimit::SetLimitValue(const uint64_t& _limitValue)
{
    m_limitValue = _limitValue;
    m_limitValueHasBeenSet = true;
}

bool VpcLimit::LimitValueHasBeenSet() const
{
    return m_limitValueHasBeenSet;
}


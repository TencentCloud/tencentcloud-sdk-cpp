/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tke/v20180525/model/SubnetAllocation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

SubnetAllocation::SubnetAllocation() :
    m_subnetIdHasBeenSet(false),
    m_ratioHasBeenSet(false)
{
}

CoreInternalOutcome SubnetAllocation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetAllocation.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetAllocation.Ratio` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ratio = value["Ratio"].GetUint64();
        m_ratioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubnetAllocation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_ratioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ratio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ratio, allocator);
    }

}


string SubnetAllocation::GetSubnetId() const
{
    return m_subnetId;
}

void SubnetAllocation::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool SubnetAllocation::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

uint64_t SubnetAllocation::GetRatio() const
{
    return m_ratio;
}

void SubnetAllocation::SetRatio(const uint64_t& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool SubnetAllocation::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}


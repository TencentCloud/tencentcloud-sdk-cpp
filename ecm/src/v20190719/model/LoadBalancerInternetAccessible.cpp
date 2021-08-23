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

#include <tencentcloud/ecm/v20190719/model/LoadBalancerInternetAccessible.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

LoadBalancerInternetAccessible::LoadBalancerInternetAccessible() :
    m_internetMaxBandwidthOutHasBeenSet(false)
{
}

CoreInternalOutcome LoadBalancerInternetAccessible::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InternetMaxBandwidthOut") && !value["InternetMaxBandwidthOut"].IsNull())
    {
        if (!value["InternetMaxBandwidthOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerInternetAccessible.InternetMaxBandwidthOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_internetMaxBandwidthOut = value["InternetMaxBandwidthOut"].GetInt64();
        m_internetMaxBandwidthOutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoadBalancerInternetAccessible::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

}


int64_t LoadBalancerInternetAccessible::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void LoadBalancerInternetAccessible::SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool LoadBalancerInternetAccessible::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}


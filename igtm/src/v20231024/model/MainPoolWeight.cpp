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

#include <tencentcloud/igtm/v20231024/model/MainPoolWeight.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

MainPoolWeight::MainPoolWeight() :
    m_poolIdHasBeenSet(false),
    m_weightHasBeenSet(false)
{
}

CoreInternalOutcome MainPoolWeight::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PoolId") && !value["PoolId"].IsNull())
    {
        if (!value["PoolId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MainPoolWeight.PoolId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_poolId = value["PoolId"].GetUint64();
        m_poolIdHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MainPoolWeight.Weight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetUint64();
        m_weightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MainPoolWeight::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_poolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_poolId, allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

}


uint64_t MainPoolWeight::GetPoolId() const
{
    return m_poolId;
}

void MainPoolWeight::SetPoolId(const uint64_t& _poolId)
{
    m_poolId = _poolId;
    m_poolIdHasBeenSet = true;
}

bool MainPoolWeight::PoolIdHasBeenSet() const
{
    return m_poolIdHasBeenSet;
}

uint64_t MainPoolWeight::GetWeight() const
{
    return m_weight;
}

void MainPoolWeight::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool MainPoolWeight::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}


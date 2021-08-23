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

#include <tencentcloud/tke/v20180525/model/InstanceUpgradeClusterStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

InstanceUpgradeClusterStatus::InstanceUpgradeClusterStatus() :
    m_podTotalHasBeenSet(false),
    m_notReadyPodHasBeenSet(false)
{
}

CoreInternalOutcome InstanceUpgradeClusterStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PodTotal") && !value["PodTotal"].IsNull())
    {
        if (!value["PodTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceUpgradeClusterStatus.PodTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_podTotal = value["PodTotal"].GetInt64();
        m_podTotalHasBeenSet = true;
    }

    if (value.HasMember("NotReadyPod") && !value["NotReadyPod"].IsNull())
    {
        if (!value["NotReadyPod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceUpgradeClusterStatus.NotReadyPod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notReadyPod = value["NotReadyPod"].GetInt64();
        m_notReadyPodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceUpgradeClusterStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_podTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_podTotal, allocator);
    }

    if (m_notReadyPodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotReadyPod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notReadyPod, allocator);
    }

}


int64_t InstanceUpgradeClusterStatus::GetPodTotal() const
{
    return m_podTotal;
}

void InstanceUpgradeClusterStatus::SetPodTotal(const int64_t& _podTotal)
{
    m_podTotal = _podTotal;
    m_podTotalHasBeenSet = true;
}

bool InstanceUpgradeClusterStatus::PodTotalHasBeenSet() const
{
    return m_podTotalHasBeenSet;
}

int64_t InstanceUpgradeClusterStatus::GetNotReadyPod() const
{
    return m_notReadyPod;
}

void InstanceUpgradeClusterStatus::SetNotReadyPod(const int64_t& _notReadyPod)
{
    m_notReadyPod = _notReadyPod;
    m_notReadyPodHasBeenSet = true;
}

bool InstanceUpgradeClusterStatus::NotReadyPodHasBeenSet() const
{
    return m_notReadyPodHasBeenSet;
}


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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEUPGRADECLUSTERSTATUS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEUPGRADECLUSTERSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 节点升级过程中集群当前状态
                */
                class InstanceUpgradeClusterStatus : public AbstractModel
                {
                public:
                    InstanceUpgradeClusterStatus();
                    ~InstanceUpgradeClusterStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取pod总数
                     * @return PodTotal pod总数
                     * 
                     */
                    int64_t GetPodTotal() const;

                    /**
                     * 设置pod总数
                     * @param _podTotal pod总数
                     * 
                     */
                    void SetPodTotal(const int64_t& _podTotal);

                    /**
                     * 判断参数 PodTotal 是否已赋值
                     * @return PodTotal 是否已赋值
                     * 
                     */
                    bool PodTotalHasBeenSet() const;

                    /**
                     * 获取NotReady pod总数
                     * @return NotReadyPod NotReady pod总数
                     * 
                     */
                    int64_t GetNotReadyPod() const;

                    /**
                     * 设置NotReady pod总数
                     * @param _notReadyPod NotReady pod总数
                     * 
                     */
                    void SetNotReadyPod(const int64_t& _notReadyPod);

                    /**
                     * 判断参数 NotReadyPod 是否已赋值
                     * @return NotReadyPod 是否已赋值
                     * 
                     */
                    bool NotReadyPodHasBeenSet() const;

                private:

                    /**
                     * pod总数
                     */
                    int64_t m_podTotal;
                    bool m_podTotalHasBeenSet;

                    /**
                     * NotReady pod总数
                     */
                    int64_t m_notReadyPod;
                    bool m_notReadyPodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEUPGRADECLUSTERSTATUS_H_

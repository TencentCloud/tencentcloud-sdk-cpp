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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGECLUSTERSTATUSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGECLUSTERSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ClusterCondition.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeTKEEdgeClusterStatus返回参数结构体
                */
                class DescribeTKEEdgeClusterStatusResponse : public AbstractModel
                {
                public:
                    DescribeTKEEdgeClusterStatusResponse();
                    ~DescribeTKEEdgeClusterStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群当前状态
                     * @return Phase 集群当前状态
                     */
                    std::string GetPhase() const;

                    /**
                     * 判断参数 Phase 是否已赋值
                     * @return Phase 是否已赋值
                     */
                    bool PhaseHasBeenSet() const;

                    /**
                     * 获取集群过程数组
                     * @return Conditions 集群过程数组
                     */
                    std::vector<ClusterCondition> GetConditions() const;

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     */
                    bool ConditionsHasBeenSet() const;

                private:

                    /**
                     * 集群当前状态
                     */
                    std::string m_phase;
                    bool m_phaseHasBeenSet;

                    /**
                     * 集群过程数组
                     */
                    std::vector<ClusterCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGECLUSTERSTATUSRESPONSE_H_

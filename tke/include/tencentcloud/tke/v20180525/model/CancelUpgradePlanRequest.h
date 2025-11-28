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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CANCELUPGRADEPLANREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CANCELUPGRADEPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CancelUpgradePlan请求参数结构体
                */
                class CancelUpgradePlanRequest : public AbstractModel
                {
                public:
                    CancelUpgradePlanRequest();
                    ~CancelUpgradePlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterID 集群ID
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置集群ID
                     * @param _clusterID 集群ID
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取升级计划ID
                     * @return PlanID 升级计划ID
                     * 
                     */
                    int64_t GetPlanID() const;

                    /**
                     * 设置升级计划ID
                     * @param _planID 升级计划ID
                     * 
                     */
                    void SetPlanID(const int64_t& _planID);

                    /**
                     * 判断参数 PlanID 是否已赋值
                     * @return PlanID 是否已赋值
                     * 
                     */
                    bool PlanIDHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * 升级计划ID
                     */
                    int64_t m_planID;
                    bool m_planIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CANCELUPGRADEPLANREQUEST_H_

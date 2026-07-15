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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_RENEWOCEANUSCLUSTERREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_RENEWOCEANUSCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * RenewOceanusCluster请求参数结构体
                */
                class RenewOceanusClusterRequest : public AbstractModel
                {
                public:
                    RenewOceanusClusterRequest();
                    ~RenewOceanusClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID</p><p>参数格式：cluster-xxx</p>
                     * @return ClusterId <p>集群ID</p><p>参数格式：cluster-xxx</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p><p>参数格式：cluster-xxx</p>
                     * @param _clusterId <p>集群ID</p><p>参数格式：cluster-xxx</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>续费的时长，单位为月，只支持包年包月集群</p><p>取值范围：[1, 36]</p>
                     * @return Period <p>续费的时长，单位为月，只支持包年包月集群</p><p>取值范围：[1, 36]</p>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>续费的时长，单位为月，只支持包年包月集群</p><p>取值范围：[1, 36]</p>
                     * @param _period <p>续费的时长，单位为月，只支持包年包月集群</p><p>取值范围：[1, 36]</p>
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p><p>参数格式：cluster-xxx</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>续费的时长，单位为月，只支持包年包月集群</p><p>取值范围：[1, 36]</p>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_RENEWOCEANUSCLUSTERREQUEST_H_

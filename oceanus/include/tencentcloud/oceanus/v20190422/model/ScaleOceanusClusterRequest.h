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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_SCALEOCEANUSCLUSTERREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_SCALEOCEANUSCLUSTERREQUEST_H_

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
                * ScaleOceanusCluster请求参数结构体
                */
                class ScaleOceanusClusterRequest : public AbstractModel
                {
                public:
                    ScaleOceanusClusterRequest();
                    ~ScaleOceanusClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
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
                     * 获取<p>集群的目标CU，需大于12CU，并且集群CU需要满足 12 + 7*n (n&gt;=0)</p>
                     * @return NewCU <p>集群的目标CU，需大于12CU，并且集群CU需要满足 12 + 7*n (n&gt;=0)</p>
                     * 
                     */
                    int64_t GetNewCU() const;

                    /**
                     * 设置<p>集群的目标CU，需大于12CU，并且集群CU需要满足 12 + 7*n (n&gt;=0)</p>
                     * @param _newCU <p>集群的目标CU，需大于12CU，并且集群CU需要满足 12 + 7*n (n&gt;=0)</p>
                     * 
                     */
                    void SetNewCU(const int64_t& _newCU);

                    /**
                     * 判断参数 NewCU 是否已赋值
                     * @return NewCU 是否已赋值
                     * 
                     */
                    bool NewCUHasBeenSet() const;

                    /**
                     * 获取<p>扩容集群或者缩容集群</p><p>枚举值：</p><ul><li>ScaleDown： 缩容集群</li><li>ScaleUp： 扩容集群</li></ul><p>默认值：ScaleUp</p>
                     * @return ScaleMode <p>扩容集群或者缩容集群</p><p>枚举值：</p><ul><li>ScaleDown： 缩容集群</li><li>ScaleUp： 扩容集群</li></ul><p>默认值：ScaleUp</p>
                     * 
                     */
                    std::string GetScaleMode() const;

                    /**
                     * 设置<p>扩容集群或者缩容集群</p><p>枚举值：</p><ul><li>ScaleDown： 缩容集群</li><li>ScaleUp： 扩容集群</li></ul><p>默认值：ScaleUp</p>
                     * @param _scaleMode <p>扩容集群或者缩容集群</p><p>枚举值：</p><ul><li>ScaleDown： 缩容集群</li><li>ScaleUp： 扩容集群</li></ul><p>默认值：ScaleUp</p>
                     * 
                     */
                    void SetScaleMode(const std::string& _scaleMode);

                    /**
                     * 判断参数 ScaleMode 是否已赋值
                     * @return ScaleMode 是否已赋值
                     * 
                     */
                    bool ScaleModeHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群的目标CU，需大于12CU，并且集群CU需要满足 12 + 7*n (n&gt;=0)</p>
                     */
                    int64_t m_newCU;
                    bool m_newCUHasBeenSet;

                    /**
                     * <p>扩容集群或者缩容集群</p><p>枚举值：</p><ul><li>ScaleDown： 缩容集群</li><li>ScaleUp： 扩容集群</li></ul><p>默认值：ScaleUp</p>
                     */
                    std::string m_scaleMode;
                    bool m_scaleModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_SCALEOCEANUSCLUSTERREQUEST_H_

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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBERESOURCEUSAGERESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBERESOURCEUSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ResourceUsage.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeResourceUsage返回参数结构体
                */
                class DescribeResourceUsageResponse : public AbstractModel
                {
                public:
                    DescribeResourceUsageResponse();
                    ~DescribeResourceUsageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取CRD使用量
                     * @return CRDUsage CRD使用量
                     * 
                     */
                    ResourceUsage GetCRDUsage() const;

                    /**
                     * 判断参数 CRDUsage 是否已赋值
                     * @return CRDUsage 是否已赋值
                     * 
                     */
                    bool CRDUsageHasBeenSet() const;

                    /**
                     * 获取Pod使用量
                     * @return PodUsage Pod使用量
                     * 
                     */
                    uint64_t GetPodUsage() const;

                    /**
                     * 判断参数 PodUsage 是否已赋值
                     * @return PodUsage 是否已赋值
                     * 
                     */
                    bool PodUsageHasBeenSet() const;

                    /**
                     * 获取ReplicaSet使用量
                     * @return RSUsage ReplicaSet使用量
                     * 
                     */
                    uint64_t GetRSUsage() const;

                    /**
                     * 判断参数 RSUsage 是否已赋值
                     * @return RSUsage 是否已赋值
                     * 
                     */
                    bool RSUsageHasBeenSet() const;

                    /**
                     * 获取ConfigMap使用量
                     * @return ConfigMapUsage ConfigMap使用量
                     * 
                     */
                    uint64_t GetConfigMapUsage() const;

                    /**
                     * 判断参数 ConfigMapUsage 是否已赋值
                     * @return ConfigMapUsage 是否已赋值
                     * 
                     */
                    bool ConfigMapUsageHasBeenSet() const;

                    /**
                     * 获取其他资源使用量
                     * @return OtherUsage 其他资源使用量
                     * 
                     */
                    ResourceUsage GetOtherUsage() const;

                    /**
                     * 判断参数 OtherUsage 是否已赋值
                     * @return OtherUsage 是否已赋值
                     * 
                     */
                    bool OtherUsageHasBeenSet() const;

                private:

                    /**
                     * CRD使用量
                     */
                    ResourceUsage m_cRDUsage;
                    bool m_cRDUsageHasBeenSet;

                    /**
                     * Pod使用量
                     */
                    uint64_t m_podUsage;
                    bool m_podUsageHasBeenSet;

                    /**
                     * ReplicaSet使用量
                     */
                    uint64_t m_rSUsage;
                    bool m_rSUsageHasBeenSet;

                    /**
                     * ConfigMap使用量
                     */
                    uint64_t m_configMapUsage;
                    bool m_configMapUsageHasBeenSet;

                    /**
                     * 其他资源使用量
                     */
                    ResourceUsage m_otherUsage;
                    bool m_otherUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBERESOURCEUSAGERESPONSE_H_

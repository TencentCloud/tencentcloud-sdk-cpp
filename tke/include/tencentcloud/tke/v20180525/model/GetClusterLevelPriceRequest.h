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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_GETCLUSTERLEVELPRICEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_GETCLUSTERLEVELPRICEREQUEST_H_

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
                * GetClusterLevelPrice请求参数结构体
                */
                class GetClusterLevelPriceRequest : public AbstractModel
                {
                public:
                    GetClusterLevelPriceRequest();
                    ~GetClusterLevelPriceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群规格，托管集群询价
                     * @return ClusterLevel 集群规格，托管集群询价
                     * 
                     */
                    std::string GetClusterLevel() const;

                    /**
                     * 设置集群规格，托管集群询价
                     * @param _clusterLevel 集群规格，托管集群询价
                     * 
                     */
                    void SetClusterLevel(const std::string& _clusterLevel);

                    /**
                     * 判断参数 ClusterLevel 是否已赋值
                     * @return ClusterLevel 是否已赋值
                     * 
                     */
                    bool ClusterLevelHasBeenSet() const;

                private:

                    /**
                     * 集群规格，托管集群询价
                     */
                    std::string m_clusterLevel;
                    bool m_clusterLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_GETCLUSTERLEVELPRICEREQUEST_H_

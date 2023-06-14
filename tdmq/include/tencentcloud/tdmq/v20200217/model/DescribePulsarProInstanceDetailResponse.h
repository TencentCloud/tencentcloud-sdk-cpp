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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEPULSARPROINSTANCEDETAILRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEPULSARPROINSTANCEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/PulsarProClusterInfo.h>
#include <tencentcloud/tdmq/v20200217/model/PulsarNetworkAccessPointInfo.h>
#include <tencentcloud/tdmq/v20200217/model/PulsarProClusterSpecInfo.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribePulsarProInstanceDetail返回参数结构体
                */
                class DescribePulsarProInstanceDetailResponse : public AbstractModel
                {
                public:
                    DescribePulsarProInstanceDetailResponse();
                    ~DescribePulsarProInstanceDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群信息
                     * @return ClusterInfo 集群信息
                     * 
                     */
                    PulsarProClusterInfo GetClusterInfo() const;

                    /**
                     * 判断参数 ClusterInfo 是否已赋值
                     * @return ClusterInfo 是否已赋值
                     * 
                     */
                    bool ClusterInfoHasBeenSet() const;

                    /**
                     * 获取集群网络接入点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetworkAccessPointInfos 集群网络接入点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PulsarNetworkAccessPointInfo> GetNetworkAccessPointInfos() const;

                    /**
                     * 判断参数 NetworkAccessPointInfos 是否已赋值
                     * @return NetworkAccessPointInfos 是否已赋值
                     * 
                     */
                    bool NetworkAccessPointInfosHasBeenSet() const;

                    /**
                     * 获取集群规格信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterSpecInfo 集群规格信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PulsarProClusterSpecInfo GetClusterSpecInfo() const;

                    /**
                     * 判断参数 ClusterSpecInfo 是否已赋值
                     * @return ClusterSpecInfo 是否已赋值
                     * 
                     */
                    bool ClusterSpecInfoHasBeenSet() const;

                private:

                    /**
                     * 集群信息
                     */
                    PulsarProClusterInfo m_clusterInfo;
                    bool m_clusterInfoHasBeenSet;

                    /**
                     * 集群网络接入点信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PulsarNetworkAccessPointInfo> m_networkAccessPointInfos;
                    bool m_networkAccessPointInfosHasBeenSet;

                    /**
                     * 集群规格信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PulsarProClusterSpecInfo m_clusterSpecInfo;
                    bool m_clusterSpecInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEPULSARPROINSTANCEDETAILRESPONSE_H_

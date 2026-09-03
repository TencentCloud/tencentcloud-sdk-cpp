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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEEMRCLUSTERINFORESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEEMRCLUSTERINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/EmrResourceUsage.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeEmrClusterInfo返回参数结构体
                */
                class DescribeEmrClusterInfoResponse : public AbstractModel
                {
                public:
                    DescribeEmrClusterInfoResponse();
                    ~DescribeEmrClusterInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>EMR 集群 ID，例如 emr-40ybwbbn</p>
                     * @return ClusterId <p>EMR 集群 ID，例如 emr-40ybwbbn</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>EMR 集群名称</p>
                     * @return ClusterName <p>EMR 集群名称</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>集群绑定的 COS Bucket 名称</p>
                     * @return CosBucket <p>集群绑定的 COS Bucket 名称</p>
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 判断参数 CosBucket 是否已赋值
                     * @return CosBucket 是否已赋值
                     * 
                     */
                    bool CosBucketHasBeenSet() const;

                    /**
                     * 获取<p>关联的 TKE 集群 ID，例如 cls-xxxxxxxx</p>
                     * @return TkeClusterId <p>关联的 TKE 集群 ID，例如 cls-xxxxxxxx</p>
                     * 
                     */
                    std::string GetTkeClusterId() const;

                    /**
                     * 判断参数 TkeClusterId 是否已赋值
                     * @return TkeClusterId 是否已赋值
                     * 
                     */
                    bool TkeClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>集群资源用量（Cpu / Mem）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceUsage <p>集群资源用量（Cpu / Mem）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EmrResourceUsage GetResourceUsage() const;

                    /**
                     * 判断参数 ResourceUsage 是否已赋值
                     * @return ResourceUsage 是否已赋值
                     * 
                     */
                    bool ResourceUsageHasBeenSet() const;

                private:

                    /**
                     * <p>EMR 集群 ID，例如 emr-40ybwbbn</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>EMR 集群名称</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>集群绑定的 COS Bucket 名称</p>
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * <p>关联的 TKE 集群 ID，例如 cls-xxxxxxxx</p>
                     */
                    std::string m_tkeClusterId;
                    bool m_tkeClusterIdHasBeenSet;

                    /**
                     * <p>集群资源用量（Cpu / Mem）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EmrResourceUsage m_resourceUsage;
                    bool m_resourceUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEEMRCLUSTERINFORESPONSE_H_

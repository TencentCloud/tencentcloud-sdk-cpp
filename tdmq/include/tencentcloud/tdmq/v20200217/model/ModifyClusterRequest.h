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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYCLUSTERREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * ModifyCluster请求参数结构体
                */
                class ModifyClusterRequest : public AbstractModel
                {
                public:
                    ModifyClusterRequest();
                    ~ModifyClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pulsar 集群的ID，需要更新的集群Id。
                     * @return ClusterId Pulsar 集群的ID，需要更新的集群Id。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Pulsar 集群的ID，需要更新的集群Id。
                     * @param _clusterId Pulsar 集群的ID，需要更新的集群Id。
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
                     * 获取更新后的集群名称。
                     * @return ClusterName 更新后的集群名称。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置更新后的集群名称。
                     * @param _clusterName 更新后的集群名称。
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取说明信息。长度限制为 128 字节
                     * @return Remark 说明信息。长度限制为 128 字节
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置说明信息。长度限制为 128 字节
                     * @param _remark 说明信息。长度限制为 128 字节
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取开启公网访问，只能为true
                     * @return PublicAccessEnabled 开启公网访问，只能为true
                     * 
                     */
                    bool GetPublicAccessEnabled() const;

                    /**
                     * 设置开启公网访问，只能为true
                     * @param _publicAccessEnabled 开启公网访问，只能为true
                     * 
                     */
                    void SetPublicAccessEnabled(const bool& _publicAccessEnabled);

                    /**
                     * 判断参数 PublicAccessEnabled 是否已赋值
                     * @return PublicAccessEnabled 是否已赋值
                     * 
                     */
                    bool PublicAccessEnabledHasBeenSet() const;

                private:

                    /**
                     * Pulsar 集群的ID，需要更新的集群Id。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 更新后的集群名称。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 说明信息。长度限制为 128 字节
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 开启公网访问，只能为true
                     */
                    bool m_publicAccessEnabled;
                    bool m_publicAccessEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYCLUSTERREQUEST_H_

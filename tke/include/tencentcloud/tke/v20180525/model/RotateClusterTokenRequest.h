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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ROTATECLUSTERTOKENREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ROTATECLUSTERTOKENREQUEST_H_

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
                * RotateClusterToken请求参数结构体
                */
                class RotateClusterTokenRequest : public AbstractModel
                {
                public:
                    RotateClusterTokenRequest();
                    ~RotateClusterTokenRequest() = default;
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
                     * 获取<p>集群类型，枚举类型：TKEServerless、TKE，为对应集群类型。默认TKE</p>
                     * @return ClusterType <p>集群类型，枚举类型：TKEServerless、TKE，为对应集群类型。默认TKE</p>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>集群类型，枚举类型：TKEServerless、TKE，为对应集群类型。默认TKE</p>
                     * @param _clusterType <p>集群类型，枚举类型：TKEServerless、TKE，为对应集群类型。默认TKE</p>
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取<p>执行操作，枚举类型：CreateNewToken、RevokeOldToken、RecoverOldToken。<br>CreateNewToken：创建新的token并使之生效，注意默认最多有两个token同时生效，需要多个token生效，Force必须为true。<br>RevokeOldToken：删除老的token并使之失效，此时ClusterToken是必传。<br>RecoverOldToken：恢复老的token并使之生效，此时ClusterToken是必传，必须有对应的RevokeOldToken任务且任务成功才可以调用。</p>
                     * @return Operation <p>执行操作，枚举类型：CreateNewToken、RevokeOldToken、RecoverOldToken。<br>CreateNewToken：创建新的token并使之生效，注意默认最多有两个token同时生效，需要多个token生效，Force必须为true。<br>RevokeOldToken：删除老的token并使之失效，此时ClusterToken是必传。<br>RecoverOldToken：恢复老的token并使之生效，此时ClusterToken是必传，必须有对应的RevokeOldToken任务且任务成功才可以调用。</p>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置<p>执行操作，枚举类型：CreateNewToken、RevokeOldToken、RecoverOldToken。<br>CreateNewToken：创建新的token并使之生效，注意默认最多有两个token同时生效，需要多个token生效，Force必须为true。<br>RevokeOldToken：删除老的token并使之失效，此时ClusterToken是必传。<br>RecoverOldToken：恢复老的token并使之生效，此时ClusterToken是必传，必须有对应的RevokeOldToken任务且任务成功才可以调用。</p>
                     * @param _operation <p>执行操作，枚举类型：CreateNewToken、RevokeOldToken、RecoverOldToken。<br>CreateNewToken：创建新的token并使之生效，注意默认最多有两个token同时生效，需要多个token生效，Force必须为true。<br>RevokeOldToken：删除老的token并使之失效，此时ClusterToken是必传。<br>RecoverOldToken：恢复老的token并使之生效，此时ClusterToken是必传，必须有对应的RevokeOldToken任务且任务成功才可以调用。</p>
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取<p>集群token，只有Operation为RevokeOldToken和RecoverOldToken时需要传入。</p>
                     * @return ClusterToken <p>集群token，只有Operation为RevokeOldToken和RecoverOldToken时需要传入。</p>
                     * 
                     */
                    std::string GetClusterToken() const;

                    /**
                     * 设置<p>集群token，只有Operation为RevokeOldToken和RecoverOldToken时需要传入。</p>
                     * @param _clusterToken <p>集群token，只有Operation为RevokeOldToken和RecoverOldToken时需要传入。</p>
                     * 
                     */
                    void SetClusterToken(const std::string& _clusterToken);

                    /**
                     * 判断参数 ClusterToken 是否已赋值
                     * @return ClusterToken 是否已赋值
                     * 
                     */
                    bool ClusterTokenHasBeenSet() const;

                    /**
                     * 获取<p>默认false，只有Operation为CreateNewToken时需要，设置为true时，才可以超过两个token。</p>
                     * @return Force <p>默认false，只有Operation为CreateNewToken时需要，设置为true时，才可以超过两个token。</p>
                     * 
                     */
                    bool GetForce() const;

                    /**
                     * 设置<p>默认false，只有Operation为CreateNewToken时需要，设置为true时，才可以超过两个token。</p>
                     * @param _force <p>默认false，只有Operation为CreateNewToken时需要，设置为true时，才可以超过两个token。</p>
                     * 
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群类型，枚举类型：TKEServerless、TKE，为对应集群类型。默认TKE</p>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>执行操作，枚举类型：CreateNewToken、RevokeOldToken、RecoverOldToken。<br>CreateNewToken：创建新的token并使之生效，注意默认最多有两个token同时生效，需要多个token生效，Force必须为true。<br>RevokeOldToken：删除老的token并使之失效，此时ClusterToken是必传。<br>RecoverOldToken：恢复老的token并使之生效，此时ClusterToken是必传，必须有对应的RevokeOldToken任务且任务成功才可以调用。</p>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * <p>集群token，只有Operation为RevokeOldToken和RecoverOldToken时需要传入。</p>
                     */
                    std::string m_clusterToken;
                    bool m_clusterTokenHasBeenSet;

                    /**
                     * <p>默认false，只有Operation为CreateNewToken时需要，设置为true时，才可以超过两个token。</p>
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ROTATECLUSTERTOKENREQUEST_H_

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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_UNINSTALLCLUSTERAGENTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_UNINSTALLCLUSTERAGENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * UninstallClusterAgent请求参数结构体
                */
                class UninstallClusterAgentRequest : public AbstractModel
                {
                public:
                    UninstallClusterAgentRequest();
                    ~UninstallClusterAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群CA证书MD5列表（单/批量统一）<br>用途：指定需要卸载容器安全Agent的集群<br>取值参考：通过 DescribeClusterListV2 接口返回项中的 ClusterCaMD5 字段获取<br>说明：capi 层不对该字段做存在性/类型校验，按 cluster_ca_md5 透传到接入侧 ClusterUninstall RPC</p>
                     * @return ClusterCaMD5List <p>集群CA证书MD5列表（单/批量统一）<br>用途：指定需要卸载容器安全Agent的集群<br>取值参考：通过 DescribeClusterListV2 接口返回项中的 ClusterCaMD5 字段获取<br>说明：capi 层不对该字段做存在性/类型校验，按 cluster_ca_md5 透传到接入侧 ClusterUninstall RPC</p>
                     * 
                     */
                    std::vector<std::string> GetClusterCaMD5List() const;

                    /**
                     * 设置<p>集群CA证书MD5列表（单/批量统一）<br>用途：指定需要卸载容器安全Agent的集群<br>取值参考：通过 DescribeClusterListV2 接口返回项中的 ClusterCaMD5 字段获取<br>说明：capi 层不对该字段做存在性/类型校验，按 cluster_ca_md5 透传到接入侧 ClusterUninstall RPC</p>
                     * @param _clusterCaMD5List <p>集群CA证书MD5列表（单/批量统一）<br>用途：指定需要卸载容器安全Agent的集群<br>取值参考：通过 DescribeClusterListV2 接口返回项中的 ClusterCaMD5 字段获取<br>说明：capi 层不对该字段做存在性/类型校验，按 cluster_ca_md5 透传到接入侧 ClusterUninstall RPC</p>
                     * 
                     */
                    void SetClusterCaMD5List(const std::vector<std::string>& _clusterCaMD5List);

                    /**
                     * 判断参数 ClusterCaMD5List 是否已赋值
                     * @return ClusterCaMD5List 是否已赋值
                     * 
                     */
                    bool ClusterCaMD5ListHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * <p>集群CA证书MD5列表（单/批量统一）<br>用途：指定需要卸载容器安全Agent的集群<br>取值参考：通过 DescribeClusterListV2 接口返回项中的 ClusterCaMD5 字段获取<br>说明：capi 层不对该字段做存在性/类型校验，按 cluster_ca_md5 透传到接入侧 ClusterUninstall RPC</p>
                     */
                    std::vector<std::string> m_clusterCaMD5List;
                    bool m_clusterCaMD5ListHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_UNINSTALLCLUSTERAGENTREQUEST_H_

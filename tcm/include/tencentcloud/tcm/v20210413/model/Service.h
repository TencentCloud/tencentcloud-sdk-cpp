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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_SERVICE_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_SERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * Service信息
                */
                class Service : public AbstractModel
                {
                public:
                    Service();
                    ~Service() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ClusterIP/NodePort/LoadBalancer
                     * @return Type ClusterIP/NodePort/LoadBalancer
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置ClusterIP/NodePort/LoadBalancer
                     * @param _type ClusterIP/NodePort/LoadBalancer
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取是否开启LB直通Pod
                     * @return CLBDirectAccess 是否开启LB直通Pod
                     * 
                     */
                    bool GetCLBDirectAccess() const;

                    /**
                     * 设置是否开启LB直通Pod
                     * @param _cLBDirectAccess 是否开启LB直通Pod
                     * 
                     */
                    void SetCLBDirectAccess(const bool& _cLBDirectAccess);

                    /**
                     * 判断参数 CLBDirectAccess 是否已赋值
                     * @return CLBDirectAccess 是否已赋值
                     * 
                     */
                    bool CLBDirectAccessHasBeenSet() const;

                    /**
                     * 获取服务是否希望将外部流量路由到节点本地或集群范围的端点。 有两个可用选项：Cluster（默认）和 Local。Cluster 隐藏了客户端源 IP，可能导致第二跳到另一个节点；Local 保留客户端源 IP 并避免 LoadBalancer 和 NodePort 类型服务的第二跳。
                     * @return ExternalTrafficPolicy 服务是否希望将外部流量路由到节点本地或集群范围的端点。 有两个可用选项：Cluster（默认）和 Local。Cluster 隐藏了客户端源 IP，可能导致第二跳到另一个节点；Local 保留客户端源 IP 并避免 LoadBalancer 和 NodePort 类型服务的第二跳。
                     * 
                     */
                    std::string GetExternalTrafficPolicy() const;

                    /**
                     * 设置服务是否希望将外部流量路由到节点本地或集群范围的端点。 有两个可用选项：Cluster（默认）和 Local。Cluster 隐藏了客户端源 IP，可能导致第二跳到另一个节点；Local 保留客户端源 IP 并避免 LoadBalancer 和 NodePort 类型服务的第二跳。
                     * @param _externalTrafficPolicy 服务是否希望将外部流量路由到节点本地或集群范围的端点。 有两个可用选项：Cluster（默认）和 Local。Cluster 隐藏了客户端源 IP，可能导致第二跳到另一个节点；Local 保留客户端源 IP 并避免 LoadBalancer 和 NodePort 类型服务的第二跳。
                     * 
                     */
                    void SetExternalTrafficPolicy(const std::string& _externalTrafficPolicy);

                    /**
                     * 判断参数 ExternalTrafficPolicy 是否已赋值
                     * @return ExternalTrafficPolicy 是否已赋值
                     * 
                     */
                    bool ExternalTrafficPolicyHasBeenSet() const;

                private:

                    /**
                     * ClusterIP/NodePort/LoadBalancer
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 是否开启LB直通Pod
                     */
                    bool m_cLBDirectAccess;
                    bool m_cLBDirectAccessHasBeenSet;

                    /**
                     * 服务是否希望将外部流量路由到节点本地或集群范围的端点。 有两个可用选项：Cluster（默认）和 Local。Cluster 隐藏了客户端源 IP，可能导致第二跳到另一个节点；Local 保留客户端源 IP 并避免 LoadBalancer 和 NodePort 类型服务的第二跳。
                     */
                    std::string m_externalTrafficPolicy;
                    bool m_externalTrafficPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_SERVICE_H_

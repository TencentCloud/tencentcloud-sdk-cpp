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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEINGRESSREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEINGRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * DescribeIngress请求参数结构体
                */
                class DescribeIngressRequest : public AbstractModel
                {
                public:
                    DescribeIngressRequest();
                    ~DescribeIngressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvironmentId 环境ID
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境ID
                     * @param _environmentId 环境ID
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取环境namespace
                     * @return ClusterNamespace 环境namespace
                     * 
                     */
                    std::string GetClusterNamespace() const;

                    /**
                     * 设置环境namespace
                     * @param _clusterNamespace 环境namespace
                     * 
                     */
                    void SetClusterNamespace(const std::string& _clusterNamespace);

                    /**
                     * 判断参数 ClusterNamespace 是否已赋值
                     * @return ClusterNamespace 是否已赋值
                     * 
                     */
                    bool ClusterNamespaceHasBeenSet() const;

                    /**
                     * 获取ingress 规则名
                     * @return IngressName ingress 规则名
                     * 
                     */
                    std::string GetIngressName() const;

                    /**
                     * 设置ingress 规则名
                     * @param _ingressName ingress 规则名
                     * 
                     */
                    void SetIngressName(const std::string& _ingressName);

                    /**
                     * 判断参数 IngressName 是否已赋值
                     * @return IngressName 是否已赋值
                     * 
                     */
                    bool IngressNameHasBeenSet() const;

                    /**
                     * 获取来源渠道
                     * @return SourceChannel 来源渠道
                     * 
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置来源渠道
                     * @param _sourceChannel 来源渠道
                     * 
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     * 
                     */
                    bool SourceChannelHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 环境namespace
                     */
                    std::string m_clusterNamespace;
                    bool m_clusterNamespaceHasBeenSet;

                    /**
                     * ingress 规则名
                     */
                    std::string m_ingressName;
                    bool m_ingressNameHasBeenSet;

                    /**
                     * 来源渠道
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEINGRESSREQUEST_H_

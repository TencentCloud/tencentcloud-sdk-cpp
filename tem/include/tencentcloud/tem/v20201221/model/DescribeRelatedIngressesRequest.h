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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_DESCRIBERELATEDINGRESSESREQUEST_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_DESCRIBERELATEDINGRESSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * DescribeRelatedIngresses请求参数结构体
                */
                class DescribeRelatedIngressesRequest : public AbstractModel
                {
                public:
                    DescribeRelatedIngressesRequest();
                    ~DescribeRelatedIngressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境 id
                     * @return NamespaceId 环境 id
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置环境 id
                     * @param _namespaceId 环境 id
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取EKS namespace
                     * @return EksNamespace EKS namespace
                     * 
                     */
                    std::string GetEksNamespace() const;

                    /**
                     * 设置EKS namespace
                     * @param _eksNamespace EKS namespace
                     * 
                     */
                    void SetEksNamespace(const std::string& _eksNamespace);

                    /**
                     * 判断参数 EksNamespace 是否已赋值
                     * @return EksNamespace 是否已赋值
                     * 
                     */
                    bool EksNamespaceHasBeenSet() const;

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

                    /**
                     * 获取服务 ID
                     * @return ServiceId 服务 ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务 ID
                     * @param _serviceId 服务 ID
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                private:

                    /**
                     * 环境 id
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * EKS namespace
                     */
                    std::string m_eksNamespace;
                    bool m_eksNamespaceHasBeenSet;

                    /**
                     * 来源渠道
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                    /**
                     * 服务 ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_DESCRIBERELATEDINGRESSESREQUEST_H_

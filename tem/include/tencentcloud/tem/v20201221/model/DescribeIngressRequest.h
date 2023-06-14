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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_DESCRIBEINGRESSREQUEST_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_DESCRIBEINGRESSREQUEST_H_

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
                * DescribeIngress请求参数结构体
                */
                class DescribeIngressRequest : public AbstractModel
                {
                public:
                    DescribeIngressRequest();
                    ~DescribeIngressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取tem namespaceId
                     * @return NamespaceId tem namespaceId
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置tem namespaceId
                     * @param _namespaceId tem namespaceId
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
                     * 获取eks namespace 名
                     * @return EksNamespace eks namespace 名
                     * 
                     */
                    std::string GetEksNamespace() const;

                    /**
                     * 设置eks namespace 名
                     * @param _eksNamespace eks namespace 名
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
                     * 获取ingress 规则名
                     * @return Name ingress 规则名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置ingress 规则名
                     * @param _name ingress 规则名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

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
                     * tem namespaceId
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * eks namespace 名
                     */
                    std::string m_eksNamespace;
                    bool m_eksNamespaceHasBeenSet;

                    /**
                     * ingress 规则名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

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

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_DESCRIBEINGRESSREQUEST_H_

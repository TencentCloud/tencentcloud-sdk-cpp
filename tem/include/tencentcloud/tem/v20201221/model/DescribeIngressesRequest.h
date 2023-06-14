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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_DESCRIBEINGRESSESREQUEST_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_DESCRIBEINGRESSESREQUEST_H_

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
                * DescribeIngresses请求参数结构体
                */
                class DescribeIngressesRequest : public AbstractModel
                {
                public:
                    DescribeIngressesRequest();
                    ~DescribeIngressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取namespace id
                     * @return NamespaceId namespace id
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置namespace id
                     * @param _namespaceId namespace id
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
                     * 获取namespace
                     * @return EksNamespace namespace
                     * 
                     */
                    std::string GetEksNamespace() const;

                    /**
                     * 设置namespace
                     * @param _eksNamespace namespace
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
                     * 获取ingress 规则名列表
                     * @return Names ingress 规则名列表
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置ingress 规则名列表
                     * @param _names ingress 规则名列表
                     * 
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     * 
                     */
                    bool NamesHasBeenSet() const;

                private:

                    /**
                     * namespace id
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * namespace
                     */
                    std::string m_eksNamespace;
                    bool m_eksNamespaceHasBeenSet;

                    /**
                     * 来源渠道
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                    /**
                     * ingress 规则名列表
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_DESCRIBEINGRESSESREQUEST_H_

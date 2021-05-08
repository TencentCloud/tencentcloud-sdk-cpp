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
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置namespace id
                     * @param NamespaceId namespace id
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取namespace
                     * @return EksNamespace namespace
                     */
                    std::string GetEksNamespace() const;

                    /**
                     * 设置namespace
                     * @param EksNamespace namespace
                     */
                    void SetEksNamespace(const std::string& _eksNamespace);

                    /**
                     * 判断参数 EksNamespace 是否已赋值
                     * @return EksNamespace 是否已赋值
                     */
                    bool EksNamespaceHasBeenSet() const;

                    /**
                     * 获取来源
                     * @return SourceChannel 来源
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置来源
                     * @param SourceChannel 来源
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     */
                    bool SourceChannelHasBeenSet() const;

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
                     * 来源
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_DESCRIBEINGRESSESREQUEST_H_

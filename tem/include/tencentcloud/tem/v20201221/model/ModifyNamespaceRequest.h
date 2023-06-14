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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_MODIFYNAMESPACEREQUEST_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_MODIFYNAMESPACEREQUEST_H_

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
                * ModifyNamespace请求参数结构体
                */
                class ModifyNamespaceRequest : public AbstractModel
                {
                public:
                    ModifyNamespaceRequest();
                    ~ModifyNamespaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境id
                     * @return NamespaceId 环境id
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置环境id
                     * @param _namespaceId 环境id
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
                     * 获取命名空间名称
                     * @return NamespaceName 命名空间名称
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间名称
                     * @param _namespaceName 命名空间名称
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取命名空间描述
                     * @return Description 命名空间描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置命名空间描述
                     * @param _description 命名空间描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取私有网络名称
                     * @return Vpc 私有网络名称
                     * 
                     */
                    std::string GetVpc() const;

                    /**
                     * 设置私有网络名称
                     * @param _vpc 私有网络名称
                     * 
                     */
                    void SetVpc(const std::string& _vpc);

                    /**
                     * 判断参数 Vpc 是否已赋值
                     * @return Vpc 是否已赋值
                     * 
                     */
                    bool VpcHasBeenSet() const;

                    /**
                     * 获取子网网络
                     * @return SubnetIds 子网网络
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置子网网络
                     * @param _subnetIds 子网网络
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

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
                     * 环境id
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 命名空间名称
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 命名空间描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 私有网络名称
                     */
                    std::string m_vpc;
                    bool m_vpcHasBeenSet;

                    /**
                     * 子网网络
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

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

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_MODIFYNAMESPACEREQUEST_H_

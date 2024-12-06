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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATESERVICETEMPLATEGROUPREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATESERVICETEMPLATEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateServiceTemplateGroup请求参数结构体
                */
                class CreateServiceTemplateGroupRequest : public AbstractModel
                {
                public:
                    CreateServiceTemplateGroupRequest();
                    ~CreateServiceTemplateGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取协议端口模板集合名称。
                     * @return ServiceTemplateGroupName 协议端口模板集合名称。
                     * 
                     */
                    std::string GetServiceTemplateGroupName() const;

                    /**
                     * 设置协议端口模板集合名称。
                     * @param _serviceTemplateGroupName 协议端口模板集合名称。
                     * 
                     */
                    void SetServiceTemplateGroupName(const std::string& _serviceTemplateGroupName);

                    /**
                     * 判断参数 ServiceTemplateGroupName 是否已赋值
                     * @return ServiceTemplateGroupName 是否已赋值
                     * 
                     */
                    bool ServiceTemplateGroupNameHasBeenSet() const;

                    /**
                     * 获取协议端口模板实例ID，例如：ppm-4dw6agho。
                     * @return ServiceTemplateIds 协议端口模板实例ID，例如：ppm-4dw6agho。
                     * 
                     */
                    std::vector<std::string> GetServiceTemplateIds() const;

                    /**
                     * 设置协议端口模板实例ID，例如：ppm-4dw6agho。
                     * @param _serviceTemplateIds 协议端口模板实例ID，例如：ppm-4dw6agho。
                     * 
                     */
                    void SetServiceTemplateIds(const std::vector<std::string>& _serviceTemplateIds);

                    /**
                     * 判断参数 ServiceTemplateIds 是否已赋值
                     * @return ServiceTemplateIds 是否已赋值
                     * 
                     */
                    bool ServiceTemplateIdsHasBeenSet() const;

                    /**
                     * 获取指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @return Tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @param _tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 协议端口模板集合名称。
                     */
                    std::string m_serviceTemplateGroupName;
                    bool m_serviceTemplateGroupNameHasBeenSet;

                    /**
                     * 协议端口模板实例ID，例如：ppm-4dw6agho。
                     */
                    std::vector<std::string> m_serviceTemplateIds;
                    bool m_serviceTemplateIdsHasBeenSet;

                    /**
                     * 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATESERVICETEMPLATEGROUPREQUEST_H_

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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYSERVICETEMPLATEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYSERVICETEMPLATEATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/ServicesInfo.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyServiceTemplateAttribute请求参数结构体
                */
                class ModifyServiceTemplateAttributeRequest : public AbstractModel
                {
                public:
                    ModifyServiceTemplateAttributeRequest();
                    ~ModifyServiceTemplateAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取协议端口模板实例ID，例如：ppm-529nwwj8。
                     * @return ServiceTemplateId 协议端口模板实例ID，例如：ppm-529nwwj8。
                     * 
                     */
                    std::string GetServiceTemplateId() const;

                    /**
                     * 设置协议端口模板实例ID，例如：ppm-529nwwj8。
                     * @param _serviceTemplateId 协议端口模板实例ID，例如：ppm-529nwwj8。
                     * 
                     */
                    void SetServiceTemplateId(const std::string& _serviceTemplateId);

                    /**
                     * 判断参数 ServiceTemplateId 是否已赋值
                     * @return ServiceTemplateId 是否已赋值
                     * 
                     */
                    bool ServiceTemplateIdHasBeenSet() const;

                    /**
                     * 获取协议端口模板名称。
                     * @return ServiceTemplateName 协议端口模板名称。
                     * 
                     */
                    std::string GetServiceTemplateName() const;

                    /**
                     * 设置协议端口模板名称。
                     * @param _serviceTemplateName 协议端口模板名称。
                     * 
                     */
                    void SetServiceTemplateName(const std::string& _serviceTemplateName);

                    /**
                     * 判断参数 ServiceTemplateName 是否已赋值
                     * @return ServiceTemplateName 是否已赋值
                     * 
                     */
                    bool ServiceTemplateNameHasBeenSet() const;

                    /**
                     * 获取支持单个端口、多个端口、连续端口及所有端口，协议支持：TCP、UDP、ICMP、GRE 协议。协议后面的端口部分长度不能超过128个字符。
                     * @return Services 支持单个端口、多个端口、连续端口及所有端口，协议支持：TCP、UDP、ICMP、GRE 协议。协议后面的端口部分长度不能超过128个字符。
                     * 
                     */
                    std::vector<std::string> GetServices() const;

                    /**
                     * 设置支持单个端口、多个端口、连续端口及所有端口，协议支持：TCP、UDP、ICMP、GRE 协议。协议后面的端口部分长度不能超过128个字符。
                     * @param _services 支持单个端口、多个端口、连续端口及所有端口，协议支持：TCP、UDP、ICMP、GRE 协议。协议后面的端口部分长度不能超过128个字符。
                     * 
                     */
                    void SetServices(const std::vector<std::string>& _services);

                    /**
                     * 判断参数 Services 是否已赋值
                     * @return Services 是否已赋值
                     * 
                     */
                    bool ServicesHasBeenSet() const;

                    /**
                     * 获取支持添加备注的协议端口信息，支持单个端口、多个端口、连续端口及所有端口，协议支持：TCP、UDP、ICMP、GRE 协议。
                     * @return ServicesExtra 支持添加备注的协议端口信息，支持单个端口、多个端口、连续端口及所有端口，协议支持：TCP、UDP、ICMP、GRE 协议。
                     * 
                     */
                    std::vector<ServicesInfo> GetServicesExtra() const;

                    /**
                     * 设置支持添加备注的协议端口信息，支持单个端口、多个端口、连续端口及所有端口，协议支持：TCP、UDP、ICMP、GRE 协议。
                     * @param _servicesExtra 支持添加备注的协议端口信息，支持单个端口、多个端口、连续端口及所有端口，协议支持：TCP、UDP、ICMP、GRE 协议。
                     * 
                     */
                    void SetServicesExtra(const std::vector<ServicesInfo>& _servicesExtra);

                    /**
                     * 判断参数 ServicesExtra 是否已赋值
                     * @return ServicesExtra 是否已赋值
                     * 
                     */
                    bool ServicesExtraHasBeenSet() const;

                private:

                    /**
                     * 协议端口模板实例ID，例如：ppm-529nwwj8。
                     */
                    std::string m_serviceTemplateId;
                    bool m_serviceTemplateIdHasBeenSet;

                    /**
                     * 协议端口模板名称。
                     */
                    std::string m_serviceTemplateName;
                    bool m_serviceTemplateNameHasBeenSet;

                    /**
                     * 支持单个端口、多个端口、连续端口及所有端口，协议支持：TCP、UDP、ICMP、GRE 协议。协议后面的端口部分长度不能超过128个字符。
                     */
                    std::vector<std::string> m_services;
                    bool m_servicesHasBeenSet;

                    /**
                     * 支持添加备注的协议端口信息，支持单个端口、多个端口、连续端口及所有端口，协议支持：TCP、UDP、ICMP、GRE 协议。
                     */
                    std::vector<ServicesInfo> m_servicesExtra;
                    bool m_servicesExtraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYSERVICETEMPLATEATTRIBUTEREQUEST_H_

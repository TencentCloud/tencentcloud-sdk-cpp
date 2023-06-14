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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETESERVICETEMPLATEGROUPREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETESERVICETEMPLATEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteServiceTemplateGroup请求参数结构体
                */
                class DeleteServiceTemplateGroupRequest : public AbstractModel
                {
                public:
                    DeleteServiceTemplateGroupRequest();
                    ~DeleteServiceTemplateGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取协议端口模板集合实例ID，例如：ppmg-n17uxvve。
                     * @return ServiceTemplateGroupId 协议端口模板集合实例ID，例如：ppmg-n17uxvve。
                     * 
                     */
                    std::string GetServiceTemplateGroupId() const;

                    /**
                     * 设置协议端口模板集合实例ID，例如：ppmg-n17uxvve。
                     * @param _serviceTemplateGroupId 协议端口模板集合实例ID，例如：ppmg-n17uxvve。
                     * 
                     */
                    void SetServiceTemplateGroupId(const std::string& _serviceTemplateGroupId);

                    /**
                     * 判断参数 ServiceTemplateGroupId 是否已赋值
                     * @return ServiceTemplateGroupId 是否已赋值
                     * 
                     */
                    bool ServiceTemplateGroupIdHasBeenSet() const;

                private:

                    /**
                     * 协议端口模板集合实例ID，例如：ppmg-n17uxvve。
                     */
                    std::string m_serviceTemplateGroupId;
                    bool m_serviceTemplateGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETESERVICETEMPLATEGROUPREQUEST_H_

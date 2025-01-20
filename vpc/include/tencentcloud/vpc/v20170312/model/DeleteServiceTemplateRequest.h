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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETESERVICETEMPLATEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETESERVICETEMPLATEREQUEST_H_

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
                * DeleteServiceTemplate请求参数结构体
                */
                class DeleteServiceTemplateRequest : public AbstractModel
                {
                public:
                    DeleteServiceTemplateRequest();
                    ~DeleteServiceTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取协议端口模板实例ID，例如：ppm-e6dy460g。
                     * @return ServiceTemplateId 协议端口模板实例ID，例如：ppm-e6dy460g。
                     * 
                     */
                    std::string GetServiceTemplateId() const;

                    /**
                     * 设置协议端口模板实例ID，例如：ppm-e6dy460g。
                     * @param _serviceTemplateId 协议端口模板实例ID，例如：ppm-e6dy460g。
                     * 
                     */
                    void SetServiceTemplateId(const std::string& _serviceTemplateId);

                    /**
                     * 判断参数 ServiceTemplateId 是否已赋值
                     * @return ServiceTemplateId 是否已赋值
                     * 
                     */
                    bool ServiceTemplateIdHasBeenSet() const;

                private:

                    /**
                     * 协议端口模板实例ID，例如：ppm-e6dy460g。
                     */
                    std::string m_serviceTemplateId;
                    bool m_serviceTemplateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETESERVICETEMPLATEREQUEST_H_

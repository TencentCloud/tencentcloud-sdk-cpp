/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CREATEDYNAMICINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CREATEDYNAMICINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/DynamicInstanceForm.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * CreateDynamicInstance请求参数结构体
                */
                class CreateDynamicInstanceRequest : public AbstractModel
                {
                public:
                    CreateDynamicInstanceRequest();
                    ~CreateDynamicInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>EMR集群id</p>
                     * @return InstanceId <p>EMR集群id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>EMR集群id</p>
                     * @param _instanceId <p>EMR集群id</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>支持DynamicInstance的服务名称</p>
                     * @return ServiceName <p>支持DynamicInstance的服务名称</p>
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>支持DynamicInstance的服务名称</p>
                     * @param _serviceName <p>支持DynamicInstance的服务名称</p>
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取<p>DynamicInstance类型</p><p>枚举值：</p><ul><li>RayCluster： RayCluster类型</li></ul>
                     * @return DynamicInstanceType <p>DynamicInstance类型</p><p>枚举值：</p><ul><li>RayCluster： RayCluster类型</li></ul>
                     * 
                     */
                    std::string GetDynamicInstanceType() const;

                    /**
                     * 设置<p>DynamicInstance类型</p><p>枚举值：</p><ul><li>RayCluster： RayCluster类型</li></ul>
                     * @param _dynamicInstanceType <p>DynamicInstance类型</p><p>枚举值：</p><ul><li>RayCluster： RayCluster类型</li></ul>
                     * 
                     */
                    void SetDynamicInstanceType(const std::string& _dynamicInstanceType);

                    /**
                     * 判断参数 DynamicInstanceType 是否已赋值
                     * @return DynamicInstanceType 是否已赋值
                     * 
                     */
                    bool DynamicInstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>表单创建信息</p>
                     * @return DynamicInstanceForm <p>表单创建信息</p>
                     * 
                     */
                    DynamicInstanceForm GetDynamicInstanceForm() const;

                    /**
                     * 设置<p>表单创建信息</p>
                     * @param _dynamicInstanceForm <p>表单创建信息</p>
                     * 
                     */
                    void SetDynamicInstanceForm(const DynamicInstanceForm& _dynamicInstanceForm);

                    /**
                     * 判断参数 DynamicInstanceForm 是否已赋值
                     * @return DynamicInstanceForm 是否已赋值
                     * 
                     */
                    bool DynamicInstanceFormHasBeenSet() const;

                    /**
                     * 获取<p>yaml创建信息</p>
                     * @return DynamicInstanceYaml <p>yaml创建信息</p>
                     * 
                     */
                    std::string GetDynamicInstanceYaml() const;

                    /**
                     * 设置<p>yaml创建信息</p>
                     * @param _dynamicInstanceYaml <p>yaml创建信息</p>
                     * 
                     */
                    void SetDynamicInstanceYaml(const std::string& _dynamicInstanceYaml);

                    /**
                     * 判断参数 DynamicInstanceYaml 是否已赋值
                     * @return DynamicInstanceYaml 是否已赋值
                     * 
                     */
                    bool DynamicInstanceYamlHasBeenSet() const;

                private:

                    /**
                     * <p>EMR集群id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>支持DynamicInstance的服务名称</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>DynamicInstance类型</p><p>枚举值：</p><ul><li>RayCluster： RayCluster类型</li></ul>
                     */
                    std::string m_dynamicInstanceType;
                    bool m_dynamicInstanceTypeHasBeenSet;

                    /**
                     * <p>表单创建信息</p>
                     */
                    DynamicInstanceForm m_dynamicInstanceForm;
                    bool m_dynamicInstanceFormHasBeenSet;

                    /**
                     * <p>yaml创建信息</p>
                     */
                    std::string m_dynamicInstanceYaml;
                    bool m_dynamicInstanceYamlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CREATEDYNAMICINSTANCEREQUEST_H_

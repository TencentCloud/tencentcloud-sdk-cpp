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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYEXCLUSIVEINSTANCEREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYEXCLUSIVEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/InstanceParameterInput.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * ModifyExclusiveInstance请求参数结构体
                */
                class ModifyExclusiveInstanceRequest : public AbstractModel
                {
                public:
                    ModifyExclusiveInstanceRequest();
                    ~ModifyExclusiveInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取独享实例唯一id
                     * @return InstanceId 独享实例唯一id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置独享实例唯一id
                     * @param _instanceId 独享实例唯一id
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
                     * 获取独享实例name
                     * @return InstanceName 独享实例name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置独享实例name
                     * @param _instanceName 独享实例name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取独享实例描述
                     * @return InstanceDescription 独享实例描述
                     * 
                     */
                    std::string GetInstanceDescription() const;

                    /**
                     * 设置独享实例描述
                     * @param _instanceDescription 独享实例描述
                     * 
                     */
                    void SetInstanceDescription(const std::string& _instanceDescription);

                    /**
                     * 判断参数 InstanceDescription 是否已赋值
                     * @return InstanceDescription 是否已赋值
                     * 
                     */
                    bool InstanceDescriptionHasBeenSet() const;

                    /**
                     * 获取独享实例参数配置
                     * @return Parameters 独享实例参数配置
                     * 
                     */
                    std::vector<InstanceParameterInput> GetParameters() const;

                    /**
                     * 设置独享实例参数配置
                     * @param _parameters 独享实例参数配置
                     * 
                     */
                    void SetParameters(const std::vector<InstanceParameterInput>& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                private:

                    /**
                     * 独享实例唯一id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 独享实例name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 独享实例描述
                     */
                    std::string m_instanceDescription;
                    bool m_instanceDescriptionHasBeenSet;

                    /**
                     * 独享实例参数配置
                     */
                    std::vector<InstanceParameterInput> m_parameters;
                    bool m_parametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYEXCLUSIVEINSTANCEREQUEST_H_

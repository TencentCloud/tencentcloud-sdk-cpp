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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_SETCUSTOMIZEDCONFIGFORLOADBALANCERREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_SETCUSTOMIZEDCONFIGFORLOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * SetCustomizedConfigForLoadBalancer请求参数结构体
                */
                class SetCustomizedConfigForLoadBalancerRequest : public AbstractModel
                {
                public:
                    SetCustomizedConfigForLoadBalancerRequest();
                    ~SetCustomizedConfigForLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取操作类型：'ADD', 'DELETE', 'UPDATE', 'BIND', 'UNBIND'
                     * @return OperationType 操作类型：'ADD', 'DELETE', 'UPDATE', 'BIND', 'UNBIND'
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置操作类型：'ADD', 'DELETE', 'UPDATE', 'BIND', 'UNBIND'
                     * @param OperationType 操作类型：'ADD', 'DELETE', 'UPDATE', 'BIND', 'UNBIND'
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取除了创建个性化配置外，必传此字段，如：pz-1234abcd
                     * @return UconfigId 除了创建个性化配置外，必传此字段，如：pz-1234abcd
                     */
                    std::string GetUconfigId() const;

                    /**
                     * 设置除了创建个性化配置外，必传此字段，如：pz-1234abcd
                     * @param UconfigId 除了创建个性化配置外，必传此字段，如：pz-1234abcd
                     */
                    void SetUconfigId(const std::string& _uconfigId);

                    /**
                     * 判断参数 UconfigId 是否已赋值
                     * @return UconfigId 是否已赋值
                     */
                    bool UconfigIdHasBeenSet() const;

                    /**
                     * 获取创建个性化配置或修改个性化配置的内容时，必传此字段
                     * @return ConfigContent 创建个性化配置或修改个性化配置的内容时，必传此字段
                     */
                    std::string GetConfigContent() const;

                    /**
                     * 设置创建个性化配置或修改个性化配置的内容时，必传此字段
                     * @param ConfigContent 创建个性化配置或修改个性化配置的内容时，必传此字段
                     */
                    void SetConfigContent(const std::string& _configContent);

                    /**
                     * 判断参数 ConfigContent 是否已赋值
                     * @return ConfigContent 是否已赋值
                     */
                    bool ConfigContentHasBeenSet() const;

                    /**
                     * 获取创建个性化配置或修改个性化配置的名字时，必传此字段
                     * @return ConfigName 创建个性化配置或修改个性化配置的名字时，必传此字段
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置创建个性化配置或修改个性化配置的名字时，必传此字段
                     * @param ConfigName 创建个性化配置或修改个性化配置的名字时，必传此字段
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取绑定解绑时，必传此字段
                     * @return LoadBalancerIds 绑定解绑时，必传此字段
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置绑定解绑时，必传此字段
                     * @param LoadBalancerIds 绑定解绑时，必传此字段
                     */
                    void SetLoadBalancerIds(const std::vector<std::string>& _loadBalancerIds);

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                private:

                    /**
                     * 操作类型：'ADD', 'DELETE', 'UPDATE', 'BIND', 'UNBIND'
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * 除了创建个性化配置外，必传此字段，如：pz-1234abcd
                     */
                    std::string m_uconfigId;
                    bool m_uconfigIdHasBeenSet;

                    /**
                     * 创建个性化配置或修改个性化配置的内容时，必传此字段
                     */
                    std::string m_configContent;
                    bool m_configContentHasBeenSet;

                    /**
                     * 创建个性化配置或修改个性化配置的名字时，必传此字段
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * 绑定解绑时，必传此字段
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_SETCUSTOMIZEDCONFIGFORLOADBALANCERREQUEST_H_

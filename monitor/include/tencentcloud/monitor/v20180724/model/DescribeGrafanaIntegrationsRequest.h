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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANAINTEGRATIONSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANAINTEGRATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeGrafanaIntegrations请求参数结构体
                */
                class DescribeGrafanaIntegrationsRequest : public AbstractModel
                {
                public:
                    DescribeGrafanaIntegrationsRequest();
                    ~DescribeGrafanaIntegrationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID
                     * @return InstanceId 实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID
                     * @param _instanceId 实例 ID
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
                     * 获取集成 ID
                     * @return IntegrationId 集成 ID
                     * 
                     */
                    std::string GetIntegrationId() const;

                    /**
                     * 设置集成 ID
                     * @param _integrationId 集成 ID
                     * 
                     */
                    void SetIntegrationId(const std::string& _integrationId);

                    /**
                     * 判断参数 IntegrationId 是否已赋值
                     * @return IntegrationId 是否已赋值
                     * 
                     */
                    bool IntegrationIdHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return Kind 类型
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置类型
                     * @param _kind 类型
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                private:

                    /**
                     * 实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 集成 ID
                     */
                    std::string m_integrationId;
                    bool m_integrationIdHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANAINTEGRATIONSREQUEST_H_

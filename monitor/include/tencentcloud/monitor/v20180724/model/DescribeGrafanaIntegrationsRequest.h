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
                     * 获取<p>实例 ID</p>
                     * @return InstanceId <p>实例 ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID</p>
                     * @param _instanceId <p>实例 ID</p>
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
                     * 获取<p>集成 ID</p>
                     * @return IntegrationId <p>集成 ID</p>
                     * 
                     */
                    std::string GetIntegrationId() const;

                    /**
                     * 设置<p>集成 ID</p>
                     * @param _integrationId <p>集成 ID</p>
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
                     * 获取<p>类型</p>
                     * @return Kind <p>类型</p>
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置<p>类型</p>
                     * @param _kind <p>类型</p>
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
                     * <p>实例 ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>集成 ID</p>
                     */
                    std::string m_integrationId;
                    bool m_integrationIdHasBeenSet;

                    /**
                     * <p>类型</p>
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANAINTEGRATIONSREQUEST_H_

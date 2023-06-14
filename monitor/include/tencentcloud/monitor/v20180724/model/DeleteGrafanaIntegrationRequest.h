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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEGRAFANAINTEGRATIONREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEGRAFANAINTEGRATIONREQUEST_H_

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
                * DeleteGrafanaIntegration请求参数结构体
                */
                class DeleteGrafanaIntegrationRequest : public AbstractModel
                {
                public:
                    DeleteGrafanaIntegrationRequest();
                    ~DeleteGrafanaIntegrationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Grafana 实例 ID，例如：grafana-12345678
                     * @return InstanceId Grafana 实例 ID，例如：grafana-12345678
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Grafana 实例 ID，例如：grafana-12345678
                     * @param _instanceId Grafana 实例 ID，例如：grafana-12345678
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
                     * 获取集成 ID，可在实例详情-云产品集成-集成列表查看。例如：integration-abcd1234
                     * @return IntegrationId 集成 ID，可在实例详情-云产品集成-集成列表查看。例如：integration-abcd1234
                     * 
                     */
                    std::string GetIntegrationId() const;

                    /**
                     * 设置集成 ID，可在实例详情-云产品集成-集成列表查看。例如：integration-abcd1234
                     * @param _integrationId 集成 ID，可在实例详情-云产品集成-集成列表查看。例如：integration-abcd1234
                     * 
                     */
                    void SetIntegrationId(const std::string& _integrationId);

                    /**
                     * 判断参数 IntegrationId 是否已赋值
                     * @return IntegrationId 是否已赋值
                     * 
                     */
                    bool IntegrationIdHasBeenSet() const;

                private:

                    /**
                     * Grafana 实例 ID，例如：grafana-12345678
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 集成 ID，可在实例详情-云产品集成-集成列表查看。例如：integration-abcd1234
                     */
                    std::string m_integrationId;
                    bool m_integrationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEGRAFANAINTEGRATIONREQUEST_H_

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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_REPLACEPROMETHEUSALERTMANAGERCONFIGREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_REPLACEPROMETHEUSALERTMANAGERCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusAlertmanagerConfigV2.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * ReplacePrometheusAlertmanagerConfig请求参数结构体
                */
                class ReplacePrometheusAlertmanagerConfigRequest : public AbstractModel
                {
                public:
                    ReplacePrometheusAlertmanagerConfigRequest();
                    ~ReplacePrometheusAlertmanagerConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Prometheus 实例 ID</p>
                     * @return InstanceId <p>Prometheus 实例 ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Prometheus 实例 ID</p>
                     * @param _instanceId <p>Prometheus 实例 ID</p>
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
                     * 获取<p>Alertmanager 配置</p>
                     * @return AlertmanagerConfig <p>Alertmanager 配置</p>
                     * 
                     */
                    PrometheusAlertmanagerConfigV2 GetAlertmanagerConfig() const;

                    /**
                     * 设置<p>Alertmanager 配置</p>
                     * @param _alertmanagerConfig <p>Alertmanager 配置</p>
                     * 
                     */
                    void SetAlertmanagerConfig(const PrometheusAlertmanagerConfigV2& _alertmanagerConfig);

                    /**
                     * 判断参数 AlertmanagerConfig 是否已赋值
                     * @return AlertmanagerConfig 是否已赋值
                     * 
                     */
                    bool AlertmanagerConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Prometheus 实例 ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Alertmanager 配置</p>
                     */
                    PrometheusAlertmanagerConfigV2 m_alertmanagerConfig;
                    bool m_alertmanagerConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_REPLACEPROMETHEUSALERTMANAGERCONFIGREQUEST_H_

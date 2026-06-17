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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYGRAFANAINSTANCEREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYGRAFANAINSTANCEREQUEST_H_

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
                * ModifyGrafanaInstance请求参数结构体
                */
                class ModifyGrafanaInstanceRequest : public AbstractModel
                {
                public:
                    ModifyGrafanaInstanceRequest();
                    ~ModifyGrafanaInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Grafana 实例 ID，例如：grafana-abcdefgh</p>
                     * @return InstanceId <p>Grafana 实例 ID，例如：grafana-abcdefgh</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Grafana 实例 ID，例如：grafana-abcdefgh</p>
                     * @param _instanceId <p>Grafana 实例 ID，例如：grafana-abcdefgh</p>
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
                     * 获取<p>Grafana 实例名称，例如：test</p>
                     * @return InstanceName <p>Grafana 实例名称，例如：test</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Grafana 实例名称，例如：test</p>
                     * @param _instanceName <p>Grafana 实例名称，例如：test</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                private:

                    /**
                     * <p>Grafana 实例 ID，例如：grafana-abcdefgh</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Grafana 实例名称，例如：test</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYGRAFANAINSTANCEREQUEST_H_

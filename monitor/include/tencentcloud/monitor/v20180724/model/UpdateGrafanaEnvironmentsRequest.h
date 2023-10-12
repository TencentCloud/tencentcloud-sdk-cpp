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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEGRAFANAENVIRONMENTSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEGRAFANAENVIRONMENTSREQUEST_H_

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
                * UpdateGrafanaEnvironments请求参数结构体
                */
                class UpdateGrafanaEnvironmentsRequest : public AbstractModel
                {
                public:
                    UpdateGrafanaEnvironmentsRequest();
                    ~UpdateGrafanaEnvironmentsRequest() = default;
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
                     * 获取JSON 序列化后的环境变量字符串，如 "{\"key1\":\"key2\"}"

                     * @return Envs JSON 序列化后的环境变量字符串，如 "{\"key1\":\"key2\"}"

                     * 
                     */
                    std::string GetEnvs() const;

                    /**
                     * 设置JSON 序列化后的环境变量字符串，如 "{\"key1\":\"key2\"}"

                     * @param _envs JSON 序列化后的环境变量字符串，如 "{\"key1\":\"key2\"}"

                     * 
                     */
                    void SetEnvs(const std::string& _envs);

                    /**
                     * 判断参数 Envs 是否已赋值
                     * @return Envs 是否已赋值
                     * 
                     */
                    bool EnvsHasBeenSet() const;

                private:

                    /**
                     * Grafana 实例 ID，例如：grafana-12345678
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * JSON 序列化后的环境变量字符串，如 "{\"key1\":\"key2\"}"

                     */
                    std::string m_envs;
                    bool m_envsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEGRAFANAENVIRONMENTSREQUEST_H_

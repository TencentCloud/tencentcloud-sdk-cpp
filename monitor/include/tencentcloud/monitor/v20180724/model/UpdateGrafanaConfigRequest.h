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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEGRAFANACONFIGREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEGRAFANACONFIGREQUEST_H_

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
                * UpdateGrafanaConfig请求参数结构体
                */
                class UpdateGrafanaConfigRequest : public AbstractModel
                {
                public:
                    UpdateGrafanaConfigRequest();
                    ~UpdateGrafanaConfigRequest() = default;
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
                     * 获取JSON 编码后的字符串，如 "{"server":{"root_url":"http://custom.domain"}}"
                     * @return Config JSON 编码后的字符串，如 "{"server":{"root_url":"http://custom.domain"}}"
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置JSON 编码后的字符串，如 "{"server":{"root_url":"http://custom.domain"}}"
                     * @param _config JSON 编码后的字符串，如 "{"server":{"root_url":"http://custom.domain"}}"
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * 实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * JSON 编码后的字符串，如 "{"server":{"root_url":"http://custom.domain"}}"
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEGRAFANACONFIGREQUEST_H_

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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TARGETHEALTH_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TARGETHEALTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 描述一个Target的健康信息
                */
                class TargetHealth : public AbstractModel
                {
                public:
                    TargetHealth();
                    ~TargetHealth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Target的内网IP
                     * @return IP Target的内网IP
                     */
                    std::string GetIP() const;

                    /**
                     * 设置Target的内网IP
                     * @param IP Target的内网IP
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取Target绑定的端口
                     * @return Port Target绑定的端口
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Target绑定的端口
                     * @param Port Target绑定的端口
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取当前健康状态，true：健康，false：不健康。
                     * @return HealthStatus 当前健康状态，true：健康，false：不健康。
                     */
                    bool GetHealthStatus() const;

                    /**
                     * 设置当前健康状态，true：健康，false：不健康。
                     * @param HealthStatus 当前健康状态，true：健康，false：不健康。
                     */
                    void SetHealthStatus(const bool& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     */
                    bool HealthStatusHasBeenSet() const;

                    /**
                     * 获取Target的实例ID，如 ins-12345678
                     * @return TargetId Target的实例ID，如 ins-12345678
                     */
                    std::string GetTargetId() const;

                    /**
                     * 设置Target的实例ID，如 ins-12345678
                     * @param TargetId Target的实例ID，如 ins-12345678
                     */
                    void SetTargetId(const std::string& _targetId);

                    /**
                     * 判断参数 TargetId 是否已赋值
                     * @return TargetId 是否已赋值
                     */
                    bool TargetIdHasBeenSet() const;

                private:

                    /**
                     * Target的内网IP
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * Target绑定的端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 当前健康状态，true：健康，false：不健康。
                     */
                    bool m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * Target的实例ID，如 ins-12345678
                     */
                    std::string m_targetId;
                    bool m_targetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TARGETHEALTH_H_

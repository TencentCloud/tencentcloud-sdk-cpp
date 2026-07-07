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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_TARGETTOMODIFY_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_TARGETTOMODIFY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 需要修改的后端服务。
                */
                class TargetToModify : public AbstractModel
                {
                public:
                    TargetToModify();
                    ~TargetToModify() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取后端服务IP。**TargetIp**和**TargetId**需要至少传一个。

- 当服务器组为 **Instance** 类型时，该参数为 **Eni** 的主内网 IP 或辅助内网 IP。

                     * @return TargetIp 后端服务IP。**TargetIp**和**TargetId**需要至少传一个。

- 当服务器组为 **Instance** 类型时，该参数为 **Eni** 的主内网 IP 或辅助内网 IP。

                     * 
                     */
                    std::string GetTargetIp() const;

                    /**
                     * 设置后端服务IP。**TargetIp**和**TargetId**需要至少传一个。

- 当服务器组为 **Instance** 类型时，该参数为 **Eni** 的主内网 IP 或辅助内网 IP。

                     * @param _targetIp 后端服务IP。**TargetIp**和**TargetId**需要至少传一个。

- 当服务器组为 **Instance** 类型时，该参数为 **Eni** 的主内网 IP 或辅助内网 IP。

                     * 
                     */
                    void SetTargetIp(const std::string& _targetIp);

                    /**
                     * 判断参数 TargetIp 是否已赋值
                     * @return TargetIp 是否已赋值
                     * 
                     */
                    bool TargetIpHasBeenSet() const;

                    /**
                     * 获取后端服务器使用的端口。取值范围：**1 - 65535**。

>当目标组的 **targetType** 取值为 **Instance** 时，该参数必传。
                     * @return Port 后端服务器使用的端口。取值范围：**1 - 65535**。

>当目标组的 **targetType** 取值为 **Instance** 时，该参数必传。
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置后端服务器使用的端口。取值范围：**1 - 65535**。

>当目标组的 **targetType** 取值为 **Instance** 时，该参数必传。
                     * @param _port 后端服务器使用的端口。取值范围：**1 - 65535**。

>当目标组的 **targetType** 取值为 **Instance** 时，该参数必传。
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取后端服务的权重，取值范围：**0 - 100**。如果设置权重为**0**，则不会将请求转发给该后端服务。
                     * @return Weight 后端服务的权重，取值范围：**0 - 100**。如果设置权重为**0**，则不会将请求转发给该后端服务。
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置后端服务的权重，取值范围：**0 - 100**。如果设置权重为**0**，则不会将请求转发给该后端服务。
                     * @param _weight 后端服务的权重，取值范围：**0 - 100**。如果设置权重为**0**，则不会将请求转发给该后端服务。
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * 后端服务IP。**TargetIp**和**TargetId**需要至少传一个。

- 当服务器组为 **Instance** 类型时，该参数为 **Eni** 的主内网 IP 或辅助内网 IP。

                     */
                    std::string m_targetIp;
                    bool m_targetIpHasBeenSet;

                    /**
                     * 后端服务器使用的端口。取值范围：**1 - 65535**。

>当目标组的 **targetType** 取值为 **Instance** 时，该参数必传。
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 后端服务的权重，取值范围：**0 - 100**。如果设置权重为**0**，则不会将请求转发给该后端服务。
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_TARGETTOMODIFY_H_

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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_TARGETOUTPUT_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_TARGETOUTPUT_H_

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
                * 后端服务输出参数。
                */
                class TargetOutput : public AbstractModel
                {
                public:
                    TargetOutput();
                    ~TargetOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取弹性网卡 ID。
                     * @return EniId 弹性网卡 ID。
                     * 
                     */
                    std::string GetEniId() const;

                    /**
                     * 设置弹性网卡 ID。
                     * @param _eniId 弹性网卡 ID。
                     * 
                     */
                    void SetEniId(const std::string& _eniId);

                    /**
                     * 判断参数 EniId 是否已赋值
                     * @return EniId 是否已赋值
                     * 
                     */
                    bool EniIdHasBeenSet() const;

                    /**
                     * 获取后端服务器使用的端口。取值范围：**1 - 65535**。
                     * @return Port 后端服务器使用的端口。取值范围：**1 - 65535**。
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置后端服务器使用的端口。取值范围：**1 - 65535**。
                     * @param _port 后端服务器使用的端口。取值范围：**1 - 65535**。
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
                     * 获取后端服务实例 ID，CVM 实例格式为 ins- 后接 8 位字母数字。
                     * @return TargetId 后端服务实例 ID，CVM 实例格式为 ins- 后接 8 位字母数字。
                     * 
                     */
                    std::string GetTargetId() const;

                    /**
                     * 设置后端服务实例 ID，CVM 实例格式为 ins- 后接 8 位字母数字。
                     * @param _targetId 后端服务实例 ID，CVM 实例格式为 ins- 后接 8 位字母数字。
                     * 
                     */
                    void SetTargetId(const std::string& _targetId);

                    /**
                     * 判断参数 TargetId 是否已赋值
                     * @return TargetId 是否已赋值
                     * 
                     */
                    bool TargetIdHasBeenSet() const;

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
                     * 获取后端服务名称。当前只有CVM后端类型后端服务返回有效名称。
                     * @return TargetName 后端服务名称。当前只有CVM后端类型后端服务返回有效名称。
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置后端服务名称。当前只有CVM后端类型后端服务返回有效名称。
                     * @param _targetName 后端服务名称。当前只有CVM后端类型后端服务返回有效名称。
                     * 
                     */
                    void SetTargetName(const std::string& _targetName);

                    /**
                     * 判断参数 TargetName 是否已赋值
                     * @return TargetName 是否已赋值
                     * 
                     */
                    bool TargetNameHasBeenSet() const;

                    /**
                     * 获取后端服务的状态。取值：
- **Adding**：添加中。
- **Active**：正常可用状态。
- **Configuring**：配置中。
- **Removing**：移除中。
                     * @return TargetStatus 后端服务的状态。取值：
- **Adding**：添加中。
- **Active**：正常可用状态。
- **Configuring**：配置中。
- **Removing**：移除中。
                     * 
                     */
                    std::string GetTargetStatus() const;

                    /**
                     * 设置后端服务的状态。取值：
- **Adding**：添加中。
- **Active**：正常可用状态。
- **Configuring**：配置中。
- **Removing**：移除中。
                     * @param _targetStatus 后端服务的状态。取值：
- **Adding**：添加中。
- **Active**：正常可用状态。
- **Configuring**：配置中。
- **Removing**：移除中。
                     * 
                     */
                    void SetTargetStatus(const std::string& _targetStatus);

                    /**
                     * 判断参数 TargetStatus 是否已赋值
                     * @return TargetStatus 是否已赋值
                     * 
                     */
                    bool TargetStatusHasBeenSet() const;

                    /**
                     * 获取后端服务类型。
                     * @return TargetType 后端服务类型。
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置后端服务类型。
                     * @param _targetType 后端服务类型。
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取后端服务的权重，取值范围：**0 - 100**。默认值为**100**。如果设置权重为**0**，则不会将请求转发给该后端服务。
                     * @return Weight 后端服务的权重，取值范围：**0 - 100**。默认值为**100**。如果设置权重为**0**，则不会将请求转发给该后端服务。
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置后端服务的权重，取值范围：**0 - 100**。默认值为**100**。如果设置权重为**0**，则不会将请求转发给该后端服务。
                     * @param _weight 后端服务的权重，取值范围：**0 - 100**。默认值为**100**。如果设置权重为**0**，则不会将请求转发给该后端服务。
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
                     * 弹性网卡 ID。
                     */
                    std::string m_eniId;
                    bool m_eniIdHasBeenSet;

                    /**
                     * 后端服务器使用的端口。取值范围：**1 - 65535**。
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 后端服务实例 ID，CVM 实例格式为 ins- 后接 8 位字母数字。
                     */
                    std::string m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * 后端服务IP。**TargetIp**和**TargetId**需要至少传一个。

- 当服务器组为 **Instance** 类型时，该参数为 **Eni** 的主内网 IP 或辅助内网 IP。

                     */
                    std::string m_targetIp;
                    bool m_targetIpHasBeenSet;

                    /**
                     * 后端服务名称。当前只有CVM后端类型后端服务返回有效名称。
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                    /**
                     * 后端服务的状态。取值：
- **Adding**：添加中。
- **Active**：正常可用状态。
- **Configuring**：配置中。
- **Removing**：移除中。
                     */
                    std::string m_targetStatus;
                    bool m_targetStatusHasBeenSet;

                    /**
                     * 后端服务类型。
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 后端服务的权重，取值范围：**0 - 100**。默认值为**100**。如果设置权重为**0**，则不会将请求转发给该后端服务。
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_TARGETOUTPUT_H_

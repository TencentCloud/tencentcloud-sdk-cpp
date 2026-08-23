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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLDSTRULE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLDSTRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ACL 目标（IP/端口）匹配规则
                */
                class TrafficSandboxACLDstRule : public AbstractModel
                {
                public:
                    TrafficSandboxACLDstRule();
                    ~TrafficSandboxACLDstRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目标 IP 列表
入参限制：每项支持三种格式：单个 IP（如 10.0.0.1）、网段（如 10.0.0.1/24）、IP 范围（如 10.0.0.1-10.0.2.0）
                     * @return DstIP 目标 IP 列表
入参限制：每项支持三种格式：单个 IP（如 10.0.0.1）、网段（如 10.0.0.1/24）、IP 范围（如 10.0.0.1-10.0.2.0）
                     * 
                     */
                    std::vector<std::string> GetDstIP() const;

                    /**
                     * 设置目标 IP 列表
入参限制：每项支持三种格式：单个 IP（如 10.0.0.1）、网段（如 10.0.0.1/24）、IP 范围（如 10.0.0.1-10.0.2.0）
                     * @param _dstIP 目标 IP 列表
入参限制：每项支持三种格式：单个 IP（如 10.0.0.1）、网段（如 10.0.0.1/24）、IP 范围（如 10.0.0.1-10.0.2.0）
                     * 
                     */
                    void SetDstIP(const std::vector<std::string>& _dstIP);

                    /**
                     * 判断参数 DstIP 是否已赋值
                     * @return DstIP 是否已赋值
                     * 
                     */
                    bool DstIPHasBeenSet() const;

                    /**
                     * 获取排除的目标 IP 列表
入参限制：格式同 DstIP
                     * @return DstIPExcept 排除的目标 IP 列表
入参限制：格式同 DstIP
                     * 
                     */
                    std::vector<std::string> GetDstIPExcept() const;

                    /**
                     * 设置排除的目标 IP 列表
入参限制：格式同 DstIP
                     * @param _dstIPExcept 排除的目标 IP 列表
入参限制：格式同 DstIP
                     * 
                     */
                    void SetDstIPExcept(const std::vector<std::string>& _dstIPExcept);

                    /**
                     * 判断参数 DstIPExcept 是否已赋值
                     * @return DstIPExcept 是否已赋值
                     * 
                     */
                    bool DstIPExceptHasBeenSet() const;

                    /**
                     * 获取目标端口或端口范围
入参限制：单端口如 80，端口范围如 8000-9000
                     * @return DstPort 目标端口或端口范围
入参限制：单端口如 80，端口范围如 8000-9000
                     * 
                     */
                    std::vector<std::string> GetDstPort() const;

                    /**
                     * 设置目标端口或端口范围
入参限制：单端口如 80，端口范围如 8000-9000
                     * @param _dstPort 目标端口或端口范围
入参限制：单端口如 80，端口范围如 8000-9000
                     * 
                     */
                    void SetDstPort(const std::vector<std::string>& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     * 
                     */
                    bool DstPortHasBeenSet() const;

                    /**
                     * 获取排除的目标端口列表
入参限制：格式同 DstPort
                     * @return DstPortExcept 排除的目标端口列表
入参限制：格式同 DstPort
                     * 
                     */
                    std::vector<std::string> GetDstPortExcept() const;

                    /**
                     * 设置排除的目标端口列表
入参限制：格式同 DstPort
                     * @param _dstPortExcept 排除的目标端口列表
入参限制：格式同 DstPort
                     * 
                     */
                    void SetDstPortExcept(const std::vector<std::string>& _dstPortExcept);

                    /**
                     * 判断参数 DstPortExcept 是否已赋值
                     * @return DstPortExcept 是否已赋值
                     * 
                     */
                    bool DstPortExceptHasBeenSet() const;

                private:

                    /**
                     * 目标 IP 列表
入参限制：每项支持三种格式：单个 IP（如 10.0.0.1）、网段（如 10.0.0.1/24）、IP 范围（如 10.0.0.1-10.0.2.0）
                     */
                    std::vector<std::string> m_dstIP;
                    bool m_dstIPHasBeenSet;

                    /**
                     * 排除的目标 IP 列表
入参限制：格式同 DstIP
                     */
                    std::vector<std::string> m_dstIPExcept;
                    bool m_dstIPExceptHasBeenSet;

                    /**
                     * 目标端口或端口范围
入参限制：单端口如 80，端口范围如 8000-9000
                     */
                    std::vector<std::string> m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * 排除的目标端口列表
入参限制：格式同 DstPort
                     */
                    std::vector<std::string> m_dstPortExcept;
                    bool m_dstPortExceptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLDSTRULE_H_

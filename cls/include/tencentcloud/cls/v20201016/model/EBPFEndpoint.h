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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_EBPFENDPOINT_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_EBPFENDPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * eBPF 目的端点（IP + 可选端口）
                */
                class EBPFEndpoint : public AbstractModel
                {
                public:
                    EBPFEndpoint();
                    ~EBPFEndpoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目标 IP，支持 IPv4/IPv6
                     * @return IP 目标 IP，支持 IPv4/IPv6
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置目标 IP，支持 IPv4/IPv6
                     * @param _iP 目标 IP，支持 IPv4/IPv6
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取目标端口（1-65535），为空表示仅按 IP 过滤
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 目标端口（1-65535），为空表示仅按 IP 过滤
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置目标端口（1-65535），为空表示仅按 IP 过滤
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port 目标端口（1-65535），为空表示仅按 IP 过滤
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * 目标 IP，支持 IPv4/IPv6
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 目标端口（1-65535），为空表示仅按 IP 过滤
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_EBPFENDPOINT_H_

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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_PROXYNODEINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_PROXYNODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 代理节点信息
                */
                class ProxyNodeInfo : public AbstractModel
                {
                public:
                    ProxyNodeInfo();
                    ~ProxyNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取代理节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyNodeId 代理节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProxyNodeId() const;

                    /**
                     * 设置代理节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxyNodeId 代理节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProxyNodeId(const std::string& _proxyNodeId);

                    /**
                     * 判断参数 ProxyNodeId 是否已赋值
                     * @return ProxyNodeId 是否已赋值
                     * 
                     */
                    bool ProxyNodeIdHasBeenSet() const;

                    /**
                     * 获取节点当前连接数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyNodeConnections 节点当前连接数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetProxyNodeConnections() const;

                    /**
                     * 设置节点当前连接数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxyNodeConnections 节点当前连接数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProxyNodeConnections(const uint64_t& _proxyNodeConnections);

                    /**
                     * 判断参数 ProxyNodeConnections 是否已赋值
                     * @return ProxyNodeConnections 是否已赋值
                     * 
                     */
                    bool ProxyNodeConnectionsHasBeenSet() const;

                    /**
                     * 获取cup
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyNodeCpu cup
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetProxyNodeCpu() const;

                    /**
                     * 设置cup
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxyNodeCpu cup
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProxyNodeCpu(const uint64_t& _proxyNodeCpu);

                    /**
                     * 判断参数 ProxyNodeCpu 是否已赋值
                     * @return ProxyNodeCpu 是否已赋值
                     * 
                     */
                    bool ProxyNodeCpuHasBeenSet() const;

                    /**
                     * 获取内存
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyNodeMem 内存
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetProxyNodeMem() const;

                    /**
                     * 设置内存
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxyNodeMem 内存
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProxyNodeMem(const uint64_t& _proxyNodeMem);

                    /**
                     * 判断参数 ProxyNodeMem 是否已赋值
                     * @return ProxyNodeMem 是否已赋值
                     * 
                     */
                    bool ProxyNodeMemHasBeenSet() const;

                    /**
                     * 获取节点状态：
init（申请中）
online（运行中）
offline（离线中）
destroy（已销毁）
recovering（故障恢复中）
error（节点故障）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyStatus 节点状态：
init（申请中）
online（运行中）
offline（离线中）
destroy（已销毁）
recovering（故障恢复中）
error（节点故障）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProxyStatus() const;

                    /**
                     * 设置节点状态：
init（申请中）
online（运行中）
offline（离线中）
destroy（已销毁）
recovering（故障恢复中）
error（节点故障）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxyStatus 节点状态：
init（申请中）
online（运行中）
offline（离线中）
destroy（已销毁）
recovering（故障恢复中）
error（节点故障）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProxyStatus(const std::string& _proxyStatus);

                    /**
                     * 判断参数 ProxyStatus 是否已赋值
                     * @return ProxyStatus 是否已赋值
                     * 
                     */
                    bool ProxyStatusHasBeenSet() const;

                private:

                    /**
                     * 代理节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_proxyNodeId;
                    bool m_proxyNodeIdHasBeenSet;

                    /**
                     * 节点当前连接数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_proxyNodeConnections;
                    bool m_proxyNodeConnectionsHasBeenSet;

                    /**
                     * cup
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_proxyNodeCpu;
                    bool m_proxyNodeCpuHasBeenSet;

                    /**
                     * 内存
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_proxyNodeMem;
                    bool m_proxyNodeMemHasBeenSet;

                    /**
                     * 节点状态：
init（申请中）
online（运行中）
offline（离线中）
destroy（已销毁）
recovering（故障恢复中）
error（节点故障）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_proxyStatus;
                    bool m_proxyStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_PROXYNODEINFO_H_

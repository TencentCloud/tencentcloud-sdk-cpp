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

#ifndef TENCENTCLOUD_CTSDB_V20230202_MODEL_SPEC_H_
#define TENCENTCLOUD_CTSDB_V20230202_MODEL_SPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctsdb
    {
        namespace V20230202
        {
            namespace Model
            {
                /**
                * 实例规格信息(influxdb)
                */
                class Spec : public AbstractModel
                {
                public:
                    Spec();
                    ~Spec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取1：包年包月、2：按小时计费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayMode 1：包年包月、2：按小时计费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置1：包年包月、2：按小时计费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payMode 1：包年包月、2：按小时计费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取请求单元，为0则表示走资源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestUnit 请求单元，为0则表示走资源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRequestUnit() const;

                    /**
                     * 设置请求单元，为0则表示走资源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestUnit 请求单元，为0则表示走资源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestUnit(const uint64_t& _requestUnit);

                    /**
                     * 判断参数 RequestUnit 是否已赋值
                     * @return RequestUnit 是否已赋值
                     * 
                     */
                    bool RequestUnitHasBeenSet() const;

                    /**
                     * 获取CPU 核数最大限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuLimit CPU 核数最大限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetCpuLimit() const;

                    /**
                     * 设置CPU 核数最大限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuLimit CPU 核数最大限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpuLimit(const double& _cpuLimit);

                    /**
                     * 判断参数 CpuLimit 是否已赋值
                     * @return CpuLimit 是否已赋值
                     * 
                     */
                    bool CpuLimitHasBeenSet() const;

                    /**
                     * 获取内存 最大限制(Gi)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemoryLimit 内存 最大限制(Gi)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetMemoryLimit() const;

                    /**
                     * 设置内存 最大限制(Gi)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memoryLimit 内存 最大限制(Gi)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemoryLimit(const double& _memoryLimit);

                    /**
                     * 判断参数 MemoryLimit 是否已赋值
                     * @return MemoryLimit 是否已赋值
                     * 
                     */
                    bool MemoryLimitHasBeenSet() const;

                    /**
                     * 获取磁盘 最大限制(Gi)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskLimit 磁盘 最大限制(Gi)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDiskLimit() const;

                    /**
                     * 设置磁盘 最大限制(Gi)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskLimit 磁盘 最大限制(Gi)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskLimit(const uint64_t& _diskLimit);

                    /**
                     * 判断参数 DiskLimit 是否已赋值
                     * @return DiskLimit 是否已赋值
                     * 
                     */
                    bool DiskLimitHasBeenSet() const;

                    /**
                     * 获取业务分片数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Shards 业务分片数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetShards() const;

                    /**
                     * 设置业务分片数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shards 业务分片数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShards(const uint64_t& _shards);

                    /**
                     * 判断参数 Shards 是否已赋值
                     * @return Shards 是否已赋值
                     * 
                     */
                    bool ShardsHasBeenSet() const;

                    /**
                     * 获取业务节点数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Replicas 业务节点数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetReplicas() const;

                    /**
                     * 设置业务节点数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replicas 业务节点数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplicas(const uint64_t& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                private:

                    /**
                     * 1：包年包月、2：按小时计费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 请求单元，为0则表示走资源配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_requestUnit;
                    bool m_requestUnitHasBeenSet;

                    /**
                     * CPU 核数最大限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_cpuLimit;
                    bool m_cpuLimitHasBeenSet;

                    /**
                     * 内存 最大限制(Gi)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_memoryLimit;
                    bool m_memoryLimitHasBeenSet;

                    /**
                     * 磁盘 最大限制(Gi)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_diskLimit;
                    bool m_diskLimitHasBeenSet;

                    /**
                     * 业务分片数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_shards;
                    bool m_shardsHasBeenSet;

                    /**
                     * 业务节点数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_replicas;
                    bool m_replicasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTSDB_V20230202_MODEL_SPEC_H_

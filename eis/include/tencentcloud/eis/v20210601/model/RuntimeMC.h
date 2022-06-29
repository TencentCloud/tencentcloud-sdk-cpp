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

#ifndef TENCENTCLOUD_EIS_V20210601_MODEL_RUNTIMEMC_H_
#define TENCENTCLOUD_EIS_V20210601_MODEL_RUNTIMEMC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eis
    {
        namespace V20210601
        {
            namespace Model
            {
                /**
                * 运行时详细信息
                */
                class RuntimeMC : public AbstractModel
                {
                public:
                    RuntimeMC();
                    ~RuntimeMC() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取运行时id
                     * @return RuntimeId 运行时id
                     */
                    int64_t GetRuntimeId() const;

                    /**
                     * 设置运行时id
                     * @param RuntimeId 运行时id
                     */
                    void SetRuntimeId(const int64_t& _runtimeId);

                    /**
                     * 判断参数 RuntimeId 是否已赋值
                     * @return RuntimeId 是否已赋值
                     */
                    bool RuntimeIdHasBeenSet() const;

                    /**
                     * 获取主账号uin
                     * @return Uin 主账号uin
                     */
                    std::string GetUin() const;

                    /**
                     * 设置主账号uin
                     * @param Uin 主账号uin
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取运行时名称，用户输入，同一uin内唯一
                     * @return DisplayName 运行时名称，用户输入，同一uin内唯一
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置运行时名称，用户输入，同一uin内唯一
                     * @param DisplayName 运行时名称，用户输入，同一uin内唯一
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取运行时所在地域，tianjin，beijiing，guangzhou等
                     * @return Zone 运行时所在地域，tianjin，beijiing，guangzhou等
                     */
                    std::string GetZone() const;

                    /**
                     * 设置运行时所在地域，tianjin，beijiing，guangzhou等
                     * @param Zone 运行时所在地域，tianjin，beijiing，guangzhou等
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取运行时类型：0: sandbox, 1:shared, 2:private
                     * @return Type 运行时类型：0: sandbox, 1:shared, 2:private
                     */
                    int64_t GetType() const;

                    /**
                     * 设置运行时类型：0: sandbox, 1:shared, 2:private
                     * @param Type 运行时类型：0: sandbox, 1:shared, 2:private
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取运行时状态：1:running, 2:deleting, 3:creating, 4:scaling, 5:unavailable, 6:deleted, 7:errored
                     * @return Status 运行时状态：1:running, 2:deleting, 3:creating, 4:scaling, 5:unavailable, 6:deleted, 7:errored
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置运行时状态：1:running, 2:deleting, 3:creating, 4:scaling, 5:unavailable, 6:deleted, 7:errored
                     * @param Status 运行时状态：1:running, 2:deleting, 3:creating, 4:scaling, 5:unavailable, 6:deleted, 7:errored
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取运行时创建时间
                     * @return CreatedAt 运行时创建时间
                     */
                    int64_t GetCreatedAt() const;

                    /**
                     * 设置运行时创建时间
                     * @param CreatedAt 运行时创建时间
                     */
                    void SetCreatedAt(const int64_t& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取运行时更新时间
                     * @return UpdatedAt 运行时更新时间
                     */
                    int64_t GetUpdatedAt() const;

                    /**
                     * 设置运行时更新时间
                     * @param UpdatedAt 运行时更新时间
                     */
                    void SetUpdatedAt(const int64_t& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取运行时资源配置，worker总配额，0:0vCore0G, 1:1vCore2G, 2:2vCore4G, 4:4vCore8G, 8:8vCore16G, 12:12vCore24G, 16:16vCore32G, 100:unlimited
                     * @return WorkerSize 运行时资源配置，worker总配额，0:0vCore0G, 1:1vCore2G, 2:2vCore4G, 4:4vCore8G, 8:8vCore16G, 12:12vCore24G, 16:16vCore32G, 100:unlimited
                     */
                    int64_t GetWorkerSize() const;

                    /**
                     * 设置运行时资源配置，worker总配额，0:0vCore0G, 1:1vCore2G, 2:2vCore4G, 4:4vCore8G, 8:8vCore16G, 12:12vCore24G, 16:16vCore32G, 100:unlimited
                     * @param WorkerSize 运行时资源配置，worker总配额，0:0vCore0G, 1:1vCore2G, 2:2vCore4G, 4:4vCore8G, 8:8vCore16G, 12:12vCore24G, 16:16vCore32G, 100:unlimited
                     */
                    void SetWorkerSize(const int64_t& _workerSize);

                    /**
                     * 判断参数 WorkerSize 是否已赋值
                     * @return WorkerSize 是否已赋值
                     */
                    bool WorkerSizeHasBeenSet() const;

                    /**
                     * 获取运行时资源配置，worker副本数
                     * @return WorkerReplica 运行时资源配置，worker副本数
                     */
                    int64_t GetWorkerReplica() const;

                    /**
                     * 设置运行时资源配置，worker副本数
                     * @param WorkerReplica 运行时资源配置，worker副本数
                     */
                    void SetWorkerReplica(const int64_t& _workerReplica);

                    /**
                     * 判断参数 WorkerReplica 是否已赋值
                     * @return WorkerReplica 是否已赋值
                     */
                    bool WorkerReplicaHasBeenSet() const;

                    /**
                     * 获取正在运行的应用实例数量
                     * @return RunningInstanceCount 正在运行的应用实例数量
                     */
                    int64_t GetRunningInstanceCount() const;

                    /**
                     * 设置正在运行的应用实例数量
                     * @param RunningInstanceCount 正在运行的应用实例数量
                     */
                    void SetRunningInstanceCount(const int64_t& _runningInstanceCount);

                    /**
                     * 判断参数 RunningInstanceCount 是否已赋值
                     * @return RunningInstanceCount 是否已赋值
                     */
                    bool RunningInstanceCountHasBeenSet() const;

                    /**
                     * 获取已使用cpu核数
                     * @return CpuUsed 已使用cpu核数
                     */
                    double GetCpuUsed() const;

                    /**
                     * 设置已使用cpu核数
                     * @param CpuUsed 已使用cpu核数
                     */
                    void SetCpuUsed(const double& _cpuUsed);

                    /**
                     * 判断参数 CpuUsed 是否已赋值
                     * @return CpuUsed 是否已赋值
                     */
                    bool CpuUsedHasBeenSet() const;

                    /**
                     * 获取cpu核数上限
                     * @return CpuLimit cpu核数上限
                     */
                    double GetCpuLimit() const;

                    /**
                     * 设置cpu核数上限
                     * @param CpuLimit cpu核数上限
                     */
                    void SetCpuLimit(const double& _cpuLimit);

                    /**
                     * 判断参数 CpuLimit 是否已赋值
                     * @return CpuLimit 是否已赋值
                     */
                    bool CpuLimitHasBeenSet() const;

                    /**
                     * 获取已使用内存 MB
                     * @return MemoryUsed 已使用内存 MB
                     */
                    double GetMemoryUsed() const;

                    /**
                     * 设置已使用内存 MB
                     * @param MemoryUsed 已使用内存 MB
                     */
                    void SetMemoryUsed(const double& _memoryUsed);

                    /**
                     * 判断参数 MemoryUsed 是否已赋值
                     * @return MemoryUsed 是否已赋值
                     */
                    bool MemoryUsedHasBeenSet() const;

                    /**
                     * 获取内存上限 MB
                     * @return MemoryLimit 内存上限 MB
                     */
                    double GetMemoryLimit() const;

                    /**
                     * 设置内存上限 MB
                     * @param MemoryLimit 内存上限 MB
                     */
                    void SetMemoryLimit(const double& _memoryLimit);

                    /**
                     * 判断参数 MemoryLimit 是否已赋值
                     * @return MemoryLimit 是否已赋值
                     */
                    bool MemoryLimitHasBeenSet() const;

                    /**
                     * 获取运行时过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpiredAt 运行时过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetExpiredAt() const;

                    /**
                     * 设置运行时过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExpiredAt 运行时过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExpiredAt(const int64_t& _expiredAt);

                    /**
                     * 判断参数 ExpiredAt 是否已赋值
                     * @return ExpiredAt 是否已赋值
                     */
                    bool ExpiredAtHasBeenSet() const;

                    /**
                     * 获取收费类型：0:缺省，1:通过订单页自助下单(支持续费/升配等操作)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeType 收费类型：0:缺省，1:通过订单页自助下单(支持续费/升配等操作)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置收费类型：0:缺省，1:通过订单页自助下单(支持续费/升配等操作)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ChargeType 收费类型：0:缺省，1:通过订单页自助下单(支持续费/升配等操作)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetChargeType(const int64_t& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取资源限制类型：0:无限制，1:有限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceLimitType 资源限制类型：0:无限制，1:有限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetResourceLimitType() const;

                    /**
                     * 设置资源限制类型：0:无限制，1:有限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResourceLimitType 资源限制类型：0:无限制，1:有限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResourceLimitType(const int64_t& _resourceLimitType);

                    /**
                     * 判断参数 ResourceLimitType 是否已赋值
                     * @return ResourceLimitType 是否已赋值
                     */
                    bool ResourceLimitTypeHasBeenSet() const;

                    /**
                     * 获取是否开启自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRenewal 是否开启自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetAutoRenewal() const;

                    /**
                     * 设置是否开启自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AutoRenewal 是否开启自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAutoRenewal(const bool& _autoRenewal);

                    /**
                     * 判断参数 AutoRenewal 是否已赋值
                     * @return AutoRenewal 是否已赋值
                     */
                    bool AutoRenewalHasBeenSet() const;

                private:

                    /**
                     * 运行时id
                     */
                    int64_t m_runtimeId;
                    bool m_runtimeIdHasBeenSet;

                    /**
                     * 主账号uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 运行时名称，用户输入，同一uin内唯一
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 运行时所在地域，tianjin，beijiing，guangzhou等
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 运行时类型：0: sandbox, 1:shared, 2:private
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 运行时状态：1:running, 2:deleting, 3:creating, 4:scaling, 5:unavailable, 6:deleted, 7:errored
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 运行时创建时间
                     */
                    int64_t m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 运行时更新时间
                     */
                    int64_t m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 运行时资源配置，worker总配额，0:0vCore0G, 1:1vCore2G, 2:2vCore4G, 4:4vCore8G, 8:8vCore16G, 12:12vCore24G, 16:16vCore32G, 100:unlimited
                     */
                    int64_t m_workerSize;
                    bool m_workerSizeHasBeenSet;

                    /**
                     * 运行时资源配置，worker副本数
                     */
                    int64_t m_workerReplica;
                    bool m_workerReplicaHasBeenSet;

                    /**
                     * 正在运行的应用实例数量
                     */
                    int64_t m_runningInstanceCount;
                    bool m_runningInstanceCountHasBeenSet;

                    /**
                     * 已使用cpu核数
                     */
                    double m_cpuUsed;
                    bool m_cpuUsedHasBeenSet;

                    /**
                     * cpu核数上限
                     */
                    double m_cpuLimit;
                    bool m_cpuLimitHasBeenSet;

                    /**
                     * 已使用内存 MB
                     */
                    double m_memoryUsed;
                    bool m_memoryUsedHasBeenSet;

                    /**
                     * 内存上限 MB
                     */
                    double m_memoryLimit;
                    bool m_memoryLimitHasBeenSet;

                    /**
                     * 运行时过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_expiredAt;
                    bool m_expiredAtHasBeenSet;

                    /**
                     * 收费类型：0:缺省，1:通过订单页自助下单(支持续费/升配等操作)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 资源限制类型：0:无限制，1:有限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_resourceLimitType;
                    bool m_resourceLimitTypeHasBeenSet;

                    /**
                     * 是否开启自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoRenewal;
                    bool m_autoRenewalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIS_V20210601_MODEL_RUNTIMEMC_H_

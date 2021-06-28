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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIS_V20210601_MODEL_RUNTIMEMC_H_

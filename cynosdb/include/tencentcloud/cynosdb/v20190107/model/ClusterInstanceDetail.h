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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERINSTANCEDETAIL_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERINSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 集群实例信息
                */
                class ClusterInstanceDetail : public AbstractModel
                {
                public:
                    ClusterInstanceDetail();
                    ~ClusterInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param InstanceName 实例名称
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取引擎类型
                     * @return InstanceType 引擎类型
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置引擎类型
                     * @param InstanceType 引擎类型
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取实例状态
                     * @return InstanceStatus 实例状态
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置实例状态
                     * @param InstanceStatus 实例状态
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取实例状态描述
                     * @return InstanceStatusDesc 实例状态描述
                     */
                    std::string GetInstanceStatusDesc() const;

                    /**
                     * 设置实例状态描述
                     * @param InstanceStatusDesc 实例状态描述
                     */
                    void SetInstanceStatusDesc(const std::string& _instanceStatusDesc);

                    /**
                     * 判断参数 InstanceStatusDesc 是否已赋值
                     * @return InstanceStatusDesc 是否已赋值
                     */
                    bool InstanceStatusDescHasBeenSet() const;

                    /**
                     * 获取cpu核数
                     * @return InstanceCpu cpu核数
                     */
                    int64_t GetInstanceCpu() const;

                    /**
                     * 设置cpu核数
                     * @param InstanceCpu cpu核数
                     */
                    void SetInstanceCpu(const int64_t& _instanceCpu);

                    /**
                     * 判断参数 InstanceCpu 是否已赋值
                     * @return InstanceCpu 是否已赋值
                     */
                    bool InstanceCpuHasBeenSet() const;

                    /**
                     * 获取内存
                     * @return InstanceMemory 内存
                     */
                    int64_t GetInstanceMemory() const;

                    /**
                     * 设置内存
                     * @param InstanceMemory 内存
                     */
                    void SetInstanceMemory(const int64_t& _instanceMemory);

                    /**
                     * 判断参数 InstanceMemory 是否已赋值
                     * @return InstanceMemory 是否已赋值
                     */
                    bool InstanceMemoryHasBeenSet() const;

                    /**
                     * 获取硬盘
                     * @return InstanceStorage 硬盘
                     */
                    int64_t GetInstanceStorage() const;

                    /**
                     * 设置硬盘
                     * @param InstanceStorage 硬盘
                     */
                    void SetInstanceStorage(const int64_t& _instanceStorage);

                    /**
                     * 判断参数 InstanceStorage 是否已赋值
                     * @return InstanceStorage 是否已赋值
                     */
                    bool InstanceStorageHasBeenSet() const;

                    /**
                     * 获取实例角色
                     * @return InstanceRole 实例角色
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置实例角色
                     * @param InstanceRole 实例角色
                     */
                    void SetInstanceRole(const std::string& _instanceRole);

                    /**
                     * 判断参数 InstanceRole 是否已赋值
                     * @return InstanceRole 是否已赋值
                     */
                    bool InstanceRoleHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 引擎类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例状态
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 实例状态描述
                     */
                    std::string m_instanceStatusDesc;
                    bool m_instanceStatusDescHasBeenSet;

                    /**
                     * cpu核数
                     */
                    int64_t m_instanceCpu;
                    bool m_instanceCpuHasBeenSet;

                    /**
                     * 内存
                     */
                    int64_t m_instanceMemory;
                    bool m_instanceMemoryHasBeenSet;

                    /**
                     * 硬盘
                     */
                    int64_t m_instanceStorage;
                    bool m_instanceStorageHasBeenSet;

                    /**
                     * 实例角色
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERINSTANCEDETAIL_H_

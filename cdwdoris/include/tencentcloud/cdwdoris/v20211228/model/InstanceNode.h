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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCENODE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCENODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 实例节点描述信息
                */
                class InstanceNode : public AbstractModel
                {
                public:
                    InstanceNode();
                    ~InstanceNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP地址
                     * @return Ip IP地址
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP地址
                     * @param _ip IP地址
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取机型，如 S1
                     * @return Spec 机型，如 S1
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置机型，如 S1
                     * @param _spec 机型，如 S1
                     * 
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取cpu核数
                     * @return Core cpu核数
                     * 
                     */
                    int64_t GetCore() const;

                    /**
                     * 设置cpu核数
                     * @param _core cpu核数
                     * 
                     */
                    void SetCore(const int64_t& _core);

                    /**
                     * 判断参数 Core 是否已赋值
                     * @return Core 是否已赋值
                     * 
                     */
                    bool CoreHasBeenSet() const;

                    /**
                     * 获取内存大小
                     * @return Memory 内存大小
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存大小
                     * @param _memory 内存大小
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取磁盘类型
                     * @return DiskType 磁盘类型
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置磁盘类型
                     * @param _diskType 磁盘类型
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取磁盘大小
                     * @return DiskSize 磁盘大小
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置磁盘大小
                     * @param _diskSize 磁盘大小
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取所属clickhouse cluster名称
                     * @return Role 所属clickhouse cluster名称
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置所属clickhouse cluster名称
                     * @param _role 所属clickhouse cluster名称
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取rip
                     * @return Rip rip
                     * 
                     */
                    std::string GetRip() const;

                    /**
                     * 设置rip
                     * @param _rip rip
                     * 
                     */
                    void SetRip(const std::string& _rip);

                    /**
                     * 判断参数 Rip 是否已赋值
                     * @return Rip 是否已赋值
                     * 
                     */
                    bool RipHasBeenSet() const;

                    /**
                     * 获取FE节点角色
                     * @return FeRole FE节点角色
                     * 
                     */
                    std::string GetFeRole() const;

                    /**
                     * 设置FE节点角色
                     * @param _feRole FE节点角色
                     * 
                     */
                    void SetFeRole(const std::string& _feRole);

                    /**
                     * 判断参数 FeRole 是否已赋值
                     * @return FeRole 是否已赋值
                     * 
                     */
                    bool FeRoleHasBeenSet() const;

                    /**
                     * 获取UUID
                     * @return UUID UUID
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 设置UUID
                     * @param _uUID UUID
                     * 
                     */
                    void SetUUID(const std::string& _uUID);

                    /**
                     * 判断参数 UUID 是否已赋值
                     * @return UUID 是否已赋值
                     * 
                     */
                    bool UUIDHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取计算组ID
                     * @return ComputeGroupId 计算组ID
                     * 
                     */
                    std::string GetComputeGroupId() const;

                    /**
                     * 设置计算组ID
                     * @param _computeGroupId 计算组ID
                     * 
                     */
                    void SetComputeGroupId(const std::string& _computeGroupId);

                    /**
                     * 判断参数 ComputeGroupId 是否已赋值
                     * @return ComputeGroupId 是否已赋值
                     * 
                     */
                    bool ComputeGroupIdHasBeenSet() const;

                private:

                    /**
                     * IP地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 机型，如 S1
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * cpu核数
                     */
                    int64_t m_core;
                    bool m_coreHasBeenSet;

                    /**
                     * 内存大小
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 磁盘类型
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 磁盘大小
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 所属clickhouse cluster名称
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * rip
                     */
                    std::string m_rip;
                    bool m_ripHasBeenSet;

                    /**
                     * FE节点角色
                     */
                    std::string m_feRole;
                    bool m_feRoleHasBeenSet;

                    /**
                     * UUID
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 计算组ID
                     */
                    std::string m_computeGroupId;
                    bool m_computeGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCENODE_H_

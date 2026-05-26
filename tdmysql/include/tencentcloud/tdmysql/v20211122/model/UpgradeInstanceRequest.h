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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_UPGRADEINSTANCEREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_UPGRADEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * UpgradeInstance请求参数结构体
                */
                class UpgradeInstanceRequest : public AbstractModel
                {
                public:
                    UpgradeInstanceRequest();
                    ~UpgradeInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>实例规格码</p>
                     * @return SpecCode <p>实例规格码</p>
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置<p>实例规格码</p>
                     * @param _specCode <p>实例规格码</p>
                     * 
                     */
                    void SetSpecCode(const std::string& _specCode);

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     * 
                     */
                    bool SpecCodeHasBeenSet() const;

                    /**
                     * 获取<p>存储节点磁盘容量，单位GB</p>
                     * @return Disk <p>存储节点磁盘容量，单位GB</p>
                     * 
                     */
                    int64_t GetDisk() const;

                    /**
                     * 设置<p>存储节点磁盘容量，单位GB</p>
                     * @param _disk <p>存储节点磁盘容量，单位GB</p>
                     * 
                     */
                    void SetDisk(const int64_t& _disk);

                    /**
                     * 判断参数 Disk 是否已赋值
                     * @return Disk 是否已赋值
                     * 
                     */
                    bool DiskHasBeenSet() const;

                    /**
                     * 获取<p>存储节点CPU核数</p>
                     * @return StorageNodeCpu <p>存储节点CPU核数</p>
                     * 
                     */
                    int64_t GetStorageNodeCpu() const;

                    /**
                     * 设置<p>存储节点CPU核数</p>
                     * @param _storageNodeCpu <p>存储节点CPU核数</p>
                     * 
                     */
                    void SetStorageNodeCpu(const int64_t& _storageNodeCpu);

                    /**
                     * 判断参数 StorageNodeCpu 是否已赋值
                     * @return StorageNodeCpu 是否已赋值
                     * 
                     */
                    bool StorageNodeCpuHasBeenSet() const;

                    /**
                     * 获取<p>存储节点内存大小</p>
                     * @return StorageNodeMem <p>存储节点内存大小</p>
                     * 
                     */
                    int64_t GetStorageNodeMem() const;

                    /**
                     * 设置<p>存储节点内存大小</p>
                     * @param _storageNodeMem <p>存储节点内存大小</p>
                     * 
                     */
                    void SetStorageNodeMem(const int64_t& _storageNodeMem);

                    /**
                     * 判断参数 StorageNodeMem 是否已赋值
                     * @return StorageNodeMem 是否已赋值
                     * 
                     */
                    bool StorageNodeMemHasBeenSet() const;

                    /**
                     * 获取<p>磁盘类型，需要修改磁盘类型时传</p>
                     * @return StorageType <p>磁盘类型，需要修改磁盘类型时传</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>磁盘类型，需要修改磁盘类型时传</p>
                     * @param _storageType <p>磁盘类型，需要修改磁盘类型时传</p>
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例规格码</p>
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * <p>存储节点磁盘容量，单位GB</p>
                     */
                    int64_t m_disk;
                    bool m_diskHasBeenSet;

                    /**
                     * <p>存储节点CPU核数</p>
                     */
                    int64_t m_storageNodeCpu;
                    bool m_storageNodeCpuHasBeenSet;

                    /**
                     * <p>存储节点内存大小</p>
                     */
                    int64_t m_storageNodeMem;
                    bool m_storageNodeMemHasBeenSet;

                    /**
                     * <p>磁盘类型，需要修改磁盘类型时传</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_UPGRADEINSTANCEREQUEST_H_

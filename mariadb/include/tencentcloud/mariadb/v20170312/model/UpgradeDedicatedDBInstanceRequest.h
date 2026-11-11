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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_UPGRADEDEDICATEDDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_UPGRADEDEDICATEDDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * UpgradeDedicatedDBInstance请求参数结构体
                */
                class UpgradeDedicatedDBInstanceRequest : public AbstractModel
                {
                public:
                    UpgradeDedicatedDBInstanceRequest();
                    ~UpgradeDedicatedDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待升级的实例ID。形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例获得。</p>
                     * @return InstanceId <p>待升级的实例ID。形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例获得。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>待升级的实例ID。形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例获得。</p>
                     * @param _instanceId <p>待升级的实例ID。形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例获得。</p>
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
                     * 获取<p>内存大小，单位：GB，可以通过 DescribeFenceDBInstanceSpecs<br> 查询实例规格获得。</p>
                     * @return Memory <p>内存大小，单位：GB，可以通过 DescribeFenceDBInstanceSpecs<br> 查询实例规格获得。</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>内存大小，单位：GB，可以通过 DescribeFenceDBInstanceSpecs<br> 查询实例规格获得。</p>
                     * @param _memory <p>内存大小，单位：GB，可以通过 DescribeFenceDBInstanceSpecs<br> 查询实例规格获得。</p>
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
                     * 获取<p>存储空间大小，单位：GB，可以通过 DescribeFenceDBInstanceSpecs<br> 查询实例规格获得不同内存大小对应的磁盘规格下限和上限。</p>
                     * @return Storage <p>存储空间大小，单位：GB，可以通过 DescribeFenceDBInstanceSpecs<br> 查询实例规格获得不同内存大小对应的磁盘规格下限和上限。</p>
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置<p>存储空间大小，单位：GB，可以通过 DescribeFenceDBInstanceSpecs<br> 查询实例规格获得不同内存大小对应的磁盘规格下限和上限。</p>
                     * @param _storage <p>存储空间大小，单位：GB，可以通过 DescribeFenceDBInstanceSpecs<br> 查询实例规格获得不同内存大小对应的磁盘规格下限和上限。</p>
                     * 
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取<p>错过切换时间窗口时，是否自动重试一次，0-否，1-是</p>
                     * @return SwitchAutoRetry <p>错过切换时间窗口时，是否自动重试一次，0-否，1-是</p>
                     * 
                     */
                    int64_t GetSwitchAutoRetry() const;

                    /**
                     * 设置<p>错过切换时间窗口时，是否自动重试一次，0-否，1-是</p>
                     * @param _switchAutoRetry <p>错过切换时间窗口时，是否自动重试一次，0-否，1-是</p>
                     * 
                     */
                    void SetSwitchAutoRetry(const int64_t& _switchAutoRetry);

                    /**
                     * 判断参数 SwitchAutoRetry 是否已赋值
                     * @return SwitchAutoRetry 是否已赋值
                     * 
                     */
                    bool SwitchAutoRetryHasBeenSet() const;

                    /**
                     * 获取<p>切换时间窗口开始时间</p>
                     * @return SwitchStartTime <p>切换时间窗口开始时间</p>
                     * 
                     */
                    std::string GetSwitchStartTime() const;

                    /**
                     * 设置<p>切换时间窗口开始时间</p>
                     * @param _switchStartTime <p>切换时间窗口开始时间</p>
                     * 
                     */
                    void SetSwitchStartTime(const std::string& _switchStartTime);

                    /**
                     * 判断参数 SwitchStartTime 是否已赋值
                     * @return SwitchStartTime 是否已赋值
                     * 
                     */
                    bool SwitchStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>切换时间窗口结束时间</p>
                     * @return SwitchEndTime <p>切换时间窗口结束时间</p>
                     * 
                     */
                    std::string GetSwitchEndTime() const;

                    /**
                     * 设置<p>切换时间窗口结束时间</p>
                     * @param _switchEndTime <p>切换时间窗口结束时间</p>
                     * 
                     */
                    void SetSwitchEndTime(const std::string& _switchEndTime);

                    /**
                     * 判断参数 SwitchEndTime 是否已赋值
                     * @return SwitchEndTime 是否已赋值
                     * 
                     */
                    bool SwitchEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>主节点的机器id，类似svr-xxx</p>
                     * @return MasterHostId <p>主节点的机器id，类似svr-xxx</p>
                     * 
                     */
                    std::string GetMasterHostId() const;

                    /**
                     * 设置<p>主节点的机器id，类似svr-xxx</p>
                     * @param _masterHostId <p>主节点的机器id，类似svr-xxx</p>
                     * 
                     */
                    void SetMasterHostId(const std::string& _masterHostId);

                    /**
                     * 判断参数 MasterHostId 是否已赋值
                     * @return MasterHostId 是否已赋值
                     * 
                     */
                    bool MasterHostIdHasBeenSet() const;

                    /**
                     * 获取<p>备节点的机器id组，类似[svr-xxx1, svr-xxx2]</p>
                     * @return SlaveHostIds <p>备节点的机器id组，类似[svr-xxx1, svr-xxx2]</p>
                     * 
                     */
                    std::vector<std::string> GetSlaveHostIds() const;

                    /**
                     * 设置<p>备节点的机器id组，类似[svr-xxx1, svr-xxx2]</p>
                     * @param _slaveHostIds <p>备节点的机器id组，类似[svr-xxx1, svr-xxx2]</p>
                     * 
                     */
                    void SetSlaveHostIds(const std::vector<std::string>& _slaveHostIds);

                    /**
                     * 判断参数 SlaveHostIds 是否已赋值
                     * @return SlaveHostIds 是否已赋值
                     * 
                     */
                    bool SlaveHostIdsHasBeenSet() const;

                private:

                    /**
                     * <p>待升级的实例ID。形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例获得。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>内存大小，单位：GB，可以通过 DescribeFenceDBInstanceSpecs<br> 查询实例规格获得。</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>存储空间大小，单位：GB，可以通过 DescribeFenceDBInstanceSpecs<br> 查询实例规格获得不同内存大小对应的磁盘规格下限和上限。</p>
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>错过切换时间窗口时，是否自动重试一次，0-否，1-是</p>
                     */
                    int64_t m_switchAutoRetry;
                    bool m_switchAutoRetryHasBeenSet;

                    /**
                     * <p>切换时间窗口开始时间</p>
                     */
                    std::string m_switchStartTime;
                    bool m_switchStartTimeHasBeenSet;

                    /**
                     * <p>切换时间窗口结束时间</p>
                     */
                    std::string m_switchEndTime;
                    bool m_switchEndTimeHasBeenSet;

                    /**
                     * <p>主节点的机器id，类似svr-xxx</p>
                     */
                    std::string m_masterHostId;
                    bool m_masterHostIdHasBeenSet;

                    /**
                     * <p>备节点的机器id组，类似[svr-xxx1, svr-xxx2]</p>
                     */
                    std::vector<std::string> m_slaveHostIds;
                    bool m_slaveHostIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_UPGRADEDEDICATEDDBINSTANCEREQUEST_H_

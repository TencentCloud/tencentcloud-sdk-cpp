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
                     * 获取待升级的实例ID。形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例获得。
                     * @return InstanceId 待升级的实例ID。形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置待升级的实例ID。形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例获得。
                     * @param _instanceId 待升级的实例ID。形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例获得。
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
                     * 获取内存大小，单位：GB，可以通过 DescribeFenceDBInstanceSpecs
 查询实例规格获得。
                     * @return Memory 内存大小，单位：GB，可以通过 DescribeFenceDBInstanceSpecs
 查询实例规格获得。
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位：GB，可以通过 DescribeFenceDBInstanceSpecs
 查询实例规格获得。
                     * @param _memory 内存大小，单位：GB，可以通过 DescribeFenceDBInstanceSpecs
 查询实例规格获得。
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
                     * 获取存储空间大小，单位：GB，可以通过 DescribeFenceDBInstanceSpecs
 查询实例规格获得不同内存大小对应的磁盘规格下限和上限。
                     * @return Storage 存储空间大小，单位：GB，可以通过 DescribeFenceDBInstanceSpecs
 查询实例规格获得不同内存大小对应的磁盘规格下限和上限。
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置存储空间大小，单位：GB，可以通过 DescribeFenceDBInstanceSpecs
 查询实例规格获得不同内存大小对应的磁盘规格下限和上限。
                     * @param _storage 存储空间大小，单位：GB，可以通过 DescribeFenceDBInstanceSpecs
 查询实例规格获得不同内存大小对应的磁盘规格下限和上限。
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
                     * 获取错过切换时间窗口时，是否自动重试一次，0-否，1-是
                     * @return SwitchAutoRetry 错过切换时间窗口时，是否自动重试一次，0-否，1-是
                     * 
                     */
                    int64_t GetSwitchAutoRetry() const;

                    /**
                     * 设置错过切换时间窗口时，是否自动重试一次，0-否，1-是
                     * @param _switchAutoRetry 错过切换时间窗口时，是否自动重试一次，0-否，1-是
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
                     * 获取切换时间窗口开始时间
                     * @return SwitchStartTime 切换时间窗口开始时间
                     * 
                     */
                    std::string GetSwitchStartTime() const;

                    /**
                     * 设置切换时间窗口开始时间
                     * @param _switchStartTime 切换时间窗口开始时间
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
                     * 获取切换时间窗口结束时间
                     * @return SwitchEndTime 切换时间窗口结束时间
                     * 
                     */
                    std::string GetSwitchEndTime() const;

                    /**
                     * 设置切换时间窗口结束时间
                     * @param _switchEndTime 切换时间窗口结束时间
                     * 
                     */
                    void SetSwitchEndTime(const std::string& _switchEndTime);

                    /**
                     * 判断参数 SwitchEndTime 是否已赋值
                     * @return SwitchEndTime 是否已赋值
                     * 
                     */
                    bool SwitchEndTimeHasBeenSet() const;

                private:

                    /**
                     * 待升级的实例ID。形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 内存大小，单位：GB，可以通过 DescribeFenceDBInstanceSpecs
 查询实例规格获得。
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 存储空间大小，单位：GB，可以通过 DescribeFenceDBInstanceSpecs
 查询实例规格获得不同内存大小对应的磁盘规格下限和上限。
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 错过切换时间窗口时，是否自动重试一次，0-否，1-是
                     */
                    int64_t m_switchAutoRetry;
                    bool m_switchAutoRetryHasBeenSet;

                    /**
                     * 切换时间窗口开始时间
                     */
                    std::string m_switchStartTime;
                    bool m_switchStartTimeHasBeenSet;

                    /**
                     * 切换时间窗口结束时间
                     */
                    std::string m_switchEndTime;
                    bool m_switchEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_UPGRADEDEDICATEDDBINSTANCEREQUEST_H_

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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_UPGRADEDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_UPGRADEDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * UpgradeDBInstance请求参数结构体
                */
                class UpgradeDBInstanceRequest : public AbstractModel
                {
                public:
                    UpgradeDBInstanceRequest();
                    ~UpgradeDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，形如mssql-j8kv137v
                     * @return InstanceId 实例ID，形如mssql-j8kv137v
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，形如mssql-j8kv137v
                     * @param InstanceId 实例ID，形如mssql-j8kv137v
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例升级后内存大小，单位GB，其值不能小于当前实例内存大小
                     * @return Memory 实例升级后内存大小，单位GB，其值不能小于当前实例内存大小
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置实例升级后内存大小，单位GB，其值不能小于当前实例内存大小
                     * @param Memory 实例升级后内存大小，单位GB，其值不能小于当前实例内存大小
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取实例升级后磁盘大小，单位GB，其值不能小于当前实例磁盘大小
                     * @return Storage 实例升级后磁盘大小，单位GB，其值不能小于当前实例磁盘大小
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置实例升级后磁盘大小，单位GB，其值不能小于当前实例磁盘大小
                     * @param Storage 实例升级后磁盘大小，单位GB，其值不能小于当前实例磁盘大小
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取是否自动使用代金券，0 - 不使用；1 - 默认使用。取值默认为0
                     * @return AutoVoucher 是否自动使用代金券，0 - 不使用；1 - 默认使用。取值默认为0
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动使用代金券，0 - 不使用；1 - 默认使用。取值默认为0
                     * @param AutoVoucher 是否自动使用代金券，0 - 不使用；1 - 默认使用。取值默认为0
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取代金券ID，目前单个订单只能使用一张代金券
                     * @return VoucherIds 代金券ID，目前单个订单只能使用一张代金券
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置代金券ID，目前单个订单只能使用一张代金券
                     * @param VoucherIds 代金券ID，目前单个订单只能使用一张代金券
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     */
                    bool VoucherIdsHasBeenSet() const;

                private:

                    /**
                     * 实例ID，形如mssql-j8kv137v
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例升级后内存大小，单位GB，其值不能小于当前实例内存大小
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例升级后磁盘大小，单位GB，其值不能小于当前实例磁盘大小
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 是否自动使用代金券，0 - 不使用；1 - 默认使用。取值默认为0
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 代金券ID，目前单个订单只能使用一张代金券
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_UPGRADEDBINSTANCEREQUEST_H_

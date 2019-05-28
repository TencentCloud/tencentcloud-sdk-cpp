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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_UPGRADEDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_UPGRADEDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
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
                     * 获取升级后的实例内存大小，单位GB
                     * @return Memory 升级后的实例内存大小，单位GB
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置升级后的实例内存大小，单位GB
                     * @param Memory 升级后的实例内存大小，单位GB
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取升级后的实例磁盘大小，单位GB
                     * @return Storage 升级后的实例磁盘大小，单位GB
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置升级后的实例磁盘大小，单位GB
                     * @param Storage 升级后的实例磁盘大小，单位GB
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取实例ID，形如postgres-lnp6j617
                     * @return DBInstanceId 实例ID，形如postgres-lnp6j617
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID，形如postgres-lnp6j617
                     * @param DBInstanceId 实例ID，形如postgres-lnp6j617
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取是否自动使用代金券,1是,0否，默认不使用
                     * @return AutoVoucher 是否自动使用代金券,1是,0否，默认不使用
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动使用代金券,1是,0否，默认不使用
                     * @param AutoVoucher 是否自动使用代金券,1是,0否，默认不使用
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取代金券ID列表，目前仅支持指定一张代金券
                     * @return VoucherIds 代金券ID列表，目前仅支持指定一张代金券
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置代金券ID列表，目前仅支持指定一张代金券
                     * @param VoucherIds 代金券ID列表，目前仅支持指定一张代金券
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     */
                    bool VoucherIdsHasBeenSet() const;

                private:

                    /**
                     * 升级后的实例内存大小，单位GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 升级后的实例磁盘大小，单位GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 实例ID，形如postgres-lnp6j617
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 是否自动使用代金券,1是,0否，默认不使用
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 代金券ID列表，目前仅支持指定一张代金券
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_UPGRADEDBINSTANCEREQUEST_H_

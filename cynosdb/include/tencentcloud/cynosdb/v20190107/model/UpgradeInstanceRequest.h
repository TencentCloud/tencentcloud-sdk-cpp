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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEINSTANCEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/UpgradeProxy.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
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
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取数据库CPU
                     * @return Cpu 数据库CPU
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置数据库CPU
                     * @param _cpu 数据库CPU
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取数据库内存，单位GB
                     * @return Memory 数据库内存，单位GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置数据库内存，单位GB
                     * @param _memory 数据库内存，单位GB
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
                     * 获取升级类型：upgradeImmediate，upgradeInMaintain
                     * @return UpgradeType 升级类型：upgradeImmediate，upgradeInMaintain
                     * 
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 设置升级类型：upgradeImmediate，upgradeInMaintain
                     * @param _upgradeType 升级类型：upgradeImmediate，upgradeInMaintain
                     * 
                     */
                    void SetUpgradeType(const std::string& _upgradeType);

                    /**
                     * 判断参数 UpgradeType 是否已赋值
                     * @return UpgradeType 是否已赋值
                     * 
                     */
                    bool UpgradeTypeHasBeenSet() const;

                    /**
                     * 获取实例机器类型
                     * @return DeviceType 实例机器类型
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置实例机器类型
                     * @param _deviceType 实例机器类型
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取该参数已废弃
                     * @return StorageLimit 该参数已废弃
                     * 
                     */
                    uint64_t GetStorageLimit() const;

                    /**
                     * 设置该参数已废弃
                     * @param _storageLimit 该参数已废弃
                     * 
                     */
                    void SetStorageLimit(const uint64_t& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     * 
                     */
                    bool StorageLimitHasBeenSet() const;

                    /**
                     * 获取是否自动选择代金券 1是 0否 默认为0
                     * @return AutoVoucher 是否自动选择代金券 1是 0否 默认为0
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动选择代金券 1是 0否 默认为0
                     * @param _autoVoucher 是否自动选择代金券 1是 0否 默认为0
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取该参数已废弃
                     * @return DbType 该参数已废弃
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置该参数已废弃
                     * @param _dbType 该参数已废弃
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取交易模式 0-下单并支付 1-下单
                     * @return DealMode 交易模式 0-下单并支付 1-下单
                     * 
                     */
                    int64_t GetDealMode() const;

                    /**
                     * 设置交易模式 0-下单并支付 1-下单
                     * @param _dealMode 交易模式 0-下单并支付 1-下单
                     * 
                     */
                    void SetDealMode(const int64_t& _dealMode);

                    /**
                     * 判断参数 DealMode 是否已赋值
                     * @return DealMode 是否已赋值
                     * 
                     */
                    bool DealModeHasBeenSet() const;

                    /**
                     * 获取NormalUpgrade：普通变配，FastUpgrade：极速变配，若变配过程判断会造成闪断，变配流程会终止。
                     * @return UpgradeMode NormalUpgrade：普通变配，FastUpgrade：极速变配，若变配过程判断会造成闪断，变配流程会终止。
                     * 
                     */
                    std::string GetUpgradeMode() const;

                    /**
                     * 设置NormalUpgrade：普通变配，FastUpgrade：极速变配，若变配过程判断会造成闪断，变配流程会终止。
                     * @param _upgradeMode NormalUpgrade：普通变配，FastUpgrade：极速变配，若变配过程判断会造成闪断，变配流程会终止。
                     * 
                     */
                    void SetUpgradeMode(const std::string& _upgradeMode);

                    /**
                     * 判断参数 UpgradeMode 是否已赋值
                     * @return UpgradeMode 是否已赋值
                     * 
                     */
                    bool UpgradeModeHasBeenSet() const;

                    /**
                     * 获取proxy同步升级
                     * @return UpgradeProxy proxy同步升级
                     * 
                     */
                    UpgradeProxy GetUpgradeProxy() const;

                    /**
                     * 设置proxy同步升级
                     * @param _upgradeProxy proxy同步升级
                     * 
                     */
                    void SetUpgradeProxy(const UpgradeProxy& _upgradeProxy);

                    /**
                     * 判断参数 UpgradeProxy 是否已赋值
                     * @return UpgradeProxy 是否已赋值
                     * 
                     */
                    bool UpgradeProxyHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据库CPU
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 数据库内存，单位GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 升级类型：upgradeImmediate，upgradeInMaintain
                     */
                    std::string m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                    /**
                     * 实例机器类型
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 该参数已废弃
                     */
                    uint64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * 是否自动选择代金券 1是 0否 默认为0
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 该参数已废弃
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * 交易模式 0-下单并支付 1-下单
                     */
                    int64_t m_dealMode;
                    bool m_dealModeHasBeenSet;

                    /**
                     * NormalUpgrade：普通变配，FastUpgrade：极速变配，若变配过程判断会造成闪断，变配流程会终止。
                     */
                    std::string m_upgradeMode;
                    bool m_upgradeModeHasBeenSet;

                    /**
                     * proxy同步升级
                     */
                    UpgradeProxy m_upgradeProxy;
                    bool m_upgradeProxyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEINSTANCEREQUEST_H_

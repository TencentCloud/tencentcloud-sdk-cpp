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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICEUPGRADEDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICEUPGRADEDBINSTANCEREQUEST_H_

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
                * InquiryPriceUpgradeDBInstance请求参数结构体
                */
                class InquiryPriceUpgradeDBInstanceRequest : public AbstractModel
                {
                public:
                    InquiryPriceUpgradeDBInstanceRequest();
                    ~InquiryPriceUpgradeDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例的磁盘大小，单位GB
                     * @return Storage 实例的磁盘大小，单位GB
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置实例的磁盘大小，单位GB
                     * @param Storage 实例的磁盘大小，单位GB
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取实例的内存大小，单位GB
                     * @return Memory 实例的内存大小，单位GB
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置实例的内存大小，单位GB
                     * @param Memory 实例的内存大小，单位GB
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取实例ID，形如postgres-hez4fh0v
                     * @return DBInstanceId 实例ID，形如postgres-hez4fh0v
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID，形如postgres-hez4fh0v
                     * @param DBInstanceId 实例ID，形如postgres-hez4fh0v
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取实例计费类型，预付费或者后付费。PREPAID-预付费。目前只支持预付费。
                     * @return InstanceChargeType 实例计费类型，预付费或者后付费。PREPAID-预付费。目前只支持预付费。
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置实例计费类型，预付费或者后付费。PREPAID-预付费。目前只支持预付费。
                     * @param InstanceChargeType 实例计费类型，预付费或者后付费。PREPAID-预付费。目前只支持预付费。
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                private:

                    /**
                     * 实例的磁盘大小，单位GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 实例的内存大小，单位GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例ID，形如postgres-hez4fh0v
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 实例计费类型，预付费或者后付费。PREPAID-预付费。目前只支持预付费。
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICEUPGRADEDBINSTANCEREQUEST_H_

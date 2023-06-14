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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_UPGRADEDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_UPGRADEDBINSTANCEREQUEST_H_

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
                * UpgradeDBInstance请求参数结构体
                */
                class UpgradeDBInstanceRequest : public AbstractModel
                {
                public:
                    UpgradeDBInstanceRequest();
                    ~UpgradeDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待升级的实例ID。形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
                     * @return InstanceId 待升级的实例ID。形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置待升级的实例ID。形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
                     * @param _instanceId 待升级的实例ID。形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
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
                     * 获取内存大小，单位：GB，可以通过 DescribeDBInstanceSpecs
 查询实例规格获得。
                     * @return Memory 内存大小，单位：GB，可以通过 DescribeDBInstanceSpecs
 查询实例规格获得。
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位：GB，可以通过 DescribeDBInstanceSpecs
 查询实例规格获得。
                     * @param _memory 内存大小，单位：GB，可以通过 DescribeDBInstanceSpecs
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
                     * 获取存储空间大小，单位：GB，可以通过 DescribeDBInstanceSpecs
 查询实例规格获得不同内存大小对应的磁盘规格下限和上限。
                     * @return Storage 存储空间大小，单位：GB，可以通过 DescribeDBInstanceSpecs
 查询实例规格获得不同内存大小对应的磁盘规格下限和上限。
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置存储空间大小，单位：GB，可以通过 DescribeDBInstanceSpecs
 查询实例规格获得不同内存大小对应的磁盘规格下限和上限。
                     * @param _storage 存储空间大小，单位：GB，可以通过 DescribeDBInstanceSpecs
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
                     * 获取是否自动使用代金券进行支付，默认不使用。
                     * @return AutoVoucher 是否自动使用代金券进行支付，默认不使用。
                     * 
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置是否自动使用代金券进行支付，默认不使用。
                     * @param _autoVoucher 是否自动使用代金券进行支付，默认不使用。
                     * 
                     */
                    void SetAutoVoucher(const bool& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取代金券ID列表，目前仅支持指定一张代金券。
                     * @return VoucherIds 代金券ID列表，目前仅支持指定一张代金券。
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置代金券ID列表，目前仅支持指定一张代金券。
                     * @param _voucherIds 代金券ID列表，目前仅支持指定一张代金券。
                     * 
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     * 
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取变更部署时指定的新可用区列表，第1个为主可用区，其余为从可用区
                     * @return Zones 变更部署时指定的新可用区列表，第1个为主可用区，其余为从可用区
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置变更部署时指定的新可用区列表，第1个为主可用区，其余为从可用区
                     * @param _zones 变更部署时指定的新可用区列表，第1个为主可用区，其余为从可用区
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                private:

                    /**
                     * 待升级的实例ID。形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 内存大小，单位：GB，可以通过 DescribeDBInstanceSpecs
 查询实例规格获得。
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 存储空间大小，单位：GB，可以通过 DescribeDBInstanceSpecs
 查询实例规格获得不同内存大小对应的磁盘规格下限和上限。
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 是否自动使用代金券进行支付，默认不使用。
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 代金券ID列表，目前仅支持指定一张代金券。
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * 变更部署时指定的新可用区列表，第1个为主可用区，其余为从可用区
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_UPGRADEDBINSTANCEREQUEST_H_

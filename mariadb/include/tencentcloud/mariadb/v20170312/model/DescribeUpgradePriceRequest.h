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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEUPGRADEPRICEREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEUPGRADEPRICEREQUEST_H_

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
                * DescribeUpgradePrice请求参数结构体
                */
                class DescribeUpgradePriceRequest : public AbstractModel
                {
                public:
                    DescribeUpgradePriceRequest();
                    ~DescribeUpgradePriceRequest() = default;
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
                     * 获取新节点数，传0表示节点数不变
                     * @return NodeCount 新节点数，传0表示节点数不变
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置新节点数，传0表示节点数不变
                     * @param _nodeCount 新节点数，传0表示节点数不变
                     * 
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取价格金额单位，不传默认单位为分，取值：  
* pent：分
* microPent：微分
                     * @return AmountUnit 价格金额单位，不传默认单位为分，取值：  
* pent：分
* microPent：微分
                     * 
                     */
                    std::string GetAmountUnit() const;

                    /**
                     * 设置价格金额单位，不传默认单位为分，取值：  
* pent：分
* microPent：微分
                     * @param _amountUnit 价格金额单位，不传默认单位为分，取值：  
* pent：分
* microPent：微分
                     * 
                     */
                    void SetAmountUnit(const std::string& _amountUnit);

                    /**
                     * 判断参数 AmountUnit 是否已赋值
                     * @return AmountUnit 是否已赋值
                     * 
                     */
                    bool AmountUnitHasBeenSet() const;

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
                     * 新节点数，传0表示节点数不变
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 价格金额单位，不传默认单位为分，取值：  
* pent：分
* microPent：微分
                     */
                    std::string m_amountUnit;
                    bool m_amountUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEUPGRADEPRICEREQUEST_H_

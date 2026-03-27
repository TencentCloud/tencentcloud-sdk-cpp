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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQINSTANCESPECREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQINSTANCESPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * ModifyRocketMQInstanceSpec请求参数结构体
                */
                class ModifyRocketMQInstanceSpecRequest : public AbstractModel
                {
                public:
                    ModifyRocketMQInstanceSpecRequest();
                    ~ModifyRocketMQInstanceSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>专享实例ID</p>
                     * @return InstanceId <p>专享实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>专享实例ID</p>
                     * @param _instanceId <p>专享实例ID</p>
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
                     * 获取<p>实例规格，<br>rocket-vip-basic-1 基础型<br>rocket-vip-basic-2 标准型<br>rocket-vip-basic-3 高阶Ⅰ型<br>rocket-vip-basic-4 高阶Ⅱ型</p>
                     * @return Specification <p>实例规格，<br>rocket-vip-basic-1 基础型<br>rocket-vip-basic-2 标准型<br>rocket-vip-basic-3 高阶Ⅰ型<br>rocket-vip-basic-4 高阶Ⅱ型</p>
                     * 
                     */
                    std::string GetSpecification() const;

                    /**
                     * 设置<p>实例规格，<br>rocket-vip-basic-1 基础型<br>rocket-vip-basic-2 标准型<br>rocket-vip-basic-3 高阶Ⅰ型<br>rocket-vip-basic-4 高阶Ⅱ型</p>
                     * @param _specification <p>实例规格，<br>rocket-vip-basic-1 基础型<br>rocket-vip-basic-2 标准型<br>rocket-vip-basic-3 高阶Ⅰ型<br>rocket-vip-basic-4 高阶Ⅱ型</p>
                     * 
                     */
                    void SetSpecification(const std::string& _specification);

                    /**
                     * 判断参数 Specification 是否已赋值
                     * @return Specification 是否已赋值
                     * 
                     */
                    bool SpecificationHasBeenSet() const;

                    /**
                     * 获取<p>节点数量</p>
                     * @return NodeCount <p>节点数量</p>
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置<p>节点数量</p>
                     * @param _nodeCount <p>节点数量</p>
                     * 
                     */
                    void SetNodeCount(const uint64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取<p>存储空间，GB为单位</p>
                     * @return StorageSize <p>存储空间，GB为单位</p>
                     * 
                     */
                    uint64_t GetStorageSize() const;

                    /**
                     * 设置<p>存储空间，GB为单位</p>
                     * @param _storageSize <p>存储空间，GB为单位</p>
                     * 
                     */
                    void SetStorageSize(const uint64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取<p>部署可用区列表</p>
                     * @return ZoneIds <p>部署可用区列表</p>
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置<p>部署可用区列表</p>
                     * @param _zoneIds <p>部署可用区列表</p>
                     * 
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                private:

                    /**
                     * <p>专享实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例规格，<br>rocket-vip-basic-1 基础型<br>rocket-vip-basic-2 标准型<br>rocket-vip-basic-3 高阶Ⅰ型<br>rocket-vip-basic-4 高阶Ⅱ型</p>
                     */
                    std::string m_specification;
                    bool m_specificationHasBeenSet;

                    /**
                     * <p>节点数量</p>
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * <p>存储空间，GB为单位</p>
                     */
                    uint64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * <p>部署可用区列表</p>
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQINSTANCESPECREQUEST_H_

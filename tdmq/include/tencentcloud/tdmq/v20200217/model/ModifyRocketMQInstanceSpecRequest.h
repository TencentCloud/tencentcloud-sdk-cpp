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
                     * 获取专享实例ID
                     * @return InstanceId 专享实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置专享实例ID
                     * @param _instanceId 专享实例ID
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
                     * 获取实例规格，
rocket-vip-basic-1 基础型
rocket-vip-basic-2 标准型
rocket-vip-basic-3 高阶Ⅰ型
rocket-vip-basic-4 高阶Ⅱ型
                     * @return Specification 实例规格，
rocket-vip-basic-1 基础型
rocket-vip-basic-2 标准型
rocket-vip-basic-3 高阶Ⅰ型
rocket-vip-basic-4 高阶Ⅱ型
                     * 
                     */
                    std::string GetSpecification() const;

                    /**
                     * 设置实例规格，
rocket-vip-basic-1 基础型
rocket-vip-basic-2 标准型
rocket-vip-basic-3 高阶Ⅰ型
rocket-vip-basic-4 高阶Ⅱ型
                     * @param _specification 实例规格，
rocket-vip-basic-1 基础型
rocket-vip-basic-2 标准型
rocket-vip-basic-3 高阶Ⅰ型
rocket-vip-basic-4 高阶Ⅱ型
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
                     * 获取节点数量
                     * @return NodeCount 节点数量
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置节点数量
                     * @param _nodeCount 节点数量
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
                     * 获取存储空间，GB为单位
                     * @return StorageSize 存储空间，GB为单位
                     * 
                     */
                    uint64_t GetStorageSize() const;

                    /**
                     * 设置存储空间，GB为单位
                     * @param _storageSize 存储空间，GB为单位
                     * 
                     */
                    void SetStorageSize(const uint64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                private:

                    /**
                     * 专享实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例规格，
rocket-vip-basic-1 基础型
rocket-vip-basic-2 标准型
rocket-vip-basic-3 高阶Ⅰ型
rocket-vip-basic-4 高阶Ⅱ型
                     */
                    std::string m_specification;
                    bool m_specificationHasBeenSet;

                    /**
                     * 节点数量
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 存储空间，GB为单位
                     */
                    uint64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQINSTANCESPECREQUEST_H_

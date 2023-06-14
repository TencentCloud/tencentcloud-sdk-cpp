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

#ifndef TENCENTCLOUD_CDS_V20180420_MODEL_DBAUDITTYPESINFO_H_
#define TENCENTCLOUD_CDS_V20180420_MODEL_DBAUDITTYPESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cds
    {
        namespace V20180420
        {
            namespace Model
            {
                /**
                * 数据安全审计产品规格信息
                */
                class DbauditTypesInfo : public AbstractModel
                {
                public:
                    DbauditTypesInfo();
                    ~DbauditTypesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规格描述
                     * @return InstanceVersionName 规格描述
                     * 
                     */
                    std::string GetInstanceVersionName() const;

                    /**
                     * 设置规格描述
                     * @param _instanceVersionName 规格描述
                     * 
                     */
                    void SetInstanceVersionName(const std::string& _instanceVersionName);

                    /**
                     * 判断参数 InstanceVersionName 是否已赋值
                     * @return InstanceVersionName 是否已赋值
                     * 
                     */
                    bool InstanceVersionNameHasBeenSet() const;

                    /**
                     * 获取规格名称
                     * @return InstanceVersionKey 规格名称
                     * 
                     */
                    std::string GetInstanceVersionKey() const;

                    /**
                     * 设置规格名称
                     * @param _instanceVersionKey 规格名称
                     * 
                     */
                    void SetInstanceVersionKey(const std::string& _instanceVersionKey);

                    /**
                     * 判断参数 InstanceVersionKey 是否已赋值
                     * @return InstanceVersionKey 是否已赋值
                     * 
                     */
                    bool InstanceVersionKeyHasBeenSet() const;

                    /**
                     * 获取最大吞吐量
                     * @return Qps 最大吞吐量
                     * 
                     */
                    uint64_t GetQps() const;

                    /**
                     * 设置最大吞吐量
                     * @param _qps 最大吞吐量
                     * 
                     */
                    void SetQps(const uint64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     * 
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取最大实例数
                     * @return MaxInstances 最大实例数
                     * 
                     */
                    uint64_t GetMaxInstances() const;

                    /**
                     * 设置最大实例数
                     * @param _maxInstances 最大实例数
                     * 
                     */
                    void SetMaxInstances(const uint64_t& _maxInstances);

                    /**
                     * 判断参数 MaxInstances 是否已赋值
                     * @return MaxInstances 是否已赋值
                     * 
                     */
                    bool MaxInstancesHasBeenSet() const;

                    /**
                     * 获取入库速率（每小时）
                     * @return InsertSpeed 入库速率（每小时）
                     * 
                     */
                    uint64_t GetInsertSpeed() const;

                    /**
                     * 设置入库速率（每小时）
                     * @param _insertSpeed 入库速率（每小时）
                     * 
                     */
                    void SetInsertSpeed(const uint64_t& _insertSpeed);

                    /**
                     * 判断参数 InsertSpeed 是否已赋值
                     * @return InsertSpeed 是否已赋值
                     * 
                     */
                    bool InsertSpeedHasBeenSet() const;

                    /**
                     * 获取最大在线存储量，单位：条
                     * @return OnlineStorageCapacity 最大在线存储量，单位：条
                     * 
                     */
                    uint64_t GetOnlineStorageCapacity() const;

                    /**
                     * 设置最大在线存储量，单位：条
                     * @param _onlineStorageCapacity 最大在线存储量，单位：条
                     * 
                     */
                    void SetOnlineStorageCapacity(const uint64_t& _onlineStorageCapacity);

                    /**
                     * 判断参数 OnlineStorageCapacity 是否已赋值
                     * @return OnlineStorageCapacity 是否已赋值
                     * 
                     */
                    bool OnlineStorageCapacityHasBeenSet() const;

                    /**
                     * 获取最大归档存储量，单位：条
                     * @return ArchivingStorageCapacity 最大归档存储量，单位：条
                     * 
                     */
                    uint64_t GetArchivingStorageCapacity() const;

                    /**
                     * 设置最大归档存储量，单位：条
                     * @param _archivingStorageCapacity 最大归档存储量，单位：条
                     * 
                     */
                    void SetArchivingStorageCapacity(const uint64_t& _archivingStorageCapacity);

                    /**
                     * 判断参数 ArchivingStorageCapacity 是否已赋值
                     * @return ArchivingStorageCapacity 是否已赋值
                     * 
                     */
                    bool ArchivingStorageCapacityHasBeenSet() const;

                private:

                    /**
                     * 规格描述
                     */
                    std::string m_instanceVersionName;
                    bool m_instanceVersionNameHasBeenSet;

                    /**
                     * 规格名称
                     */
                    std::string m_instanceVersionKey;
                    bool m_instanceVersionKeyHasBeenSet;

                    /**
                     * 最大吞吐量
                     */
                    uint64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * 最大实例数
                     */
                    uint64_t m_maxInstances;
                    bool m_maxInstancesHasBeenSet;

                    /**
                     * 入库速率（每小时）
                     */
                    uint64_t m_insertSpeed;
                    bool m_insertSpeedHasBeenSet;

                    /**
                     * 最大在线存储量，单位：条
                     */
                    uint64_t m_onlineStorageCapacity;
                    bool m_onlineStorageCapacityHasBeenSet;

                    /**
                     * 最大归档存储量，单位：条
                     */
                    uint64_t m_archivingStorageCapacity;
                    bool m_archivingStorageCapacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDS_V20180420_MODEL_DBAUDITTYPESINFO_H_
